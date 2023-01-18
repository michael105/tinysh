#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

/* Display prompt */
static void prompt() { 
	char buf[PATH_MAX];
#ifdef BLOAT
	char *p = getenv("USER");
	if ( p ){
		ewrites(AC_LGREEN);
		write(2,p,strlen(p));
		ewrites(" ");
	}
#endif
	int l = ml_getcwd(buf,PATH_MAX);
	ewrites(AC_LBLUE);
	write(2, buf,l );
	ewrites( AC_YELLOW " $ " AC_NORM ); 
}

/* Display error message, optionally - exit */
static void _err(int retval, int fatal) {
  if (retval < 0) {
    write(2, "?\n", 2);
    if (fatal) {
      exit(1);
    }
  }
}
// going variadic
#define err(x,...) _err(x,0##__VA_ARGS__)

/* Helper functions to detect token class */
static int is_delim(int c) { return c == 0 || c == '|'; }
static int is_redir(int c) { return c == '>' || c == '<'; }
static int is_blank(int c) { return c == ' ' || c == '\t' || c == '\n'; }
static int is_special(int c) {
  return is_delim(c) || is_redir(c) || is_blank(c);
}

/* Recursively run right-most part of the command line printing output to the
 * `t` file descriptor */
static void run(char *c, int t) {
  char *redir_stdin = NULL;
  char *redir_stdout = NULL;
  int pipefds[2] = {0, 0};
  int outfd = 0;
  char *v[99] = {0};
  char **u;
  u = &v[98]; /* end of words */
  for (;;) {
    c--;
    if (is_delim(*c)) { /* if NIL (start of string) or pipe: break */
      break;
    }
    if (!is_special(*c)) {
      /* Copy word of regular chars into previous u */
      c++;
      *c = 0; /* null-terminate */
      for (; !is_special(*--c);) {
      }
      *--u = ++c;
    }
    /* If < or > */
    if (is_redir(*c)) {
      if (*c == '<') {
        redir_stdin = *u;
      } else {
        redir_stdout = *u;
      }
      if (u - v != 98) {
        u++;
      }
    }
  }

  if (u - v == 98) { /* empty input */
    return;
  }

typedef struct _cmd{
	char *command;
	void *label;
} cmd;

#define CMD(cmd) { #cmd, &&cmd_##cmd }
	cmd table[] = { {"q", &&cmd_exit },  CMD(cd), CMD(exit), CMD(help),
#ifdef BLOAT
						CMD(export),
#endif
						 { 0,0 } };

	for ( cmd *c = table; c->label; c++ )
		if ( !strcmp( c->command, *u ) )
				goto *c->label;
   goto CONT;

cmd_cd:
	if ( !u[1] )
		err(chdir(getenv("HOME")));
	else
		err(chdir(u[1]));
	return; /* actually, should run() again */

cmd_help:
	ewrites("tinysh - a shell with pipes, and redirection. <|> \n"
	        "q, exit to exit\n");
	return;

cmd_exit:
	ewrites("Bye\n");
	 exit(0);

cmd_export:
#if noork
	if ( u[1] ){
			//eprintsl(u[1]);
			int r = putenv(u[1]);
			//printf("r: %d\n",r);
			// doesn't work out. ?
			return;
		}
#endif
	*u = "env";

CONT:

  if (*c) {
    pipe(pipefds);
    outfd = pipefds[1]; /* write end of the pipe */
  }
  int pid = fork();
  if (pid) {
    /* Parent or error */
    err(pid, 1);
    if (outfd) {
      run(c, outfd);     /* parse the rest of the cmdline */
      close(outfd);      /* close output fd */
      close(pipefds[0]); /* close read end of the pipe */
    }
    wait(0);
    return;
  }
  if (outfd) {
    dup2(pipefds[0], 0); /* dup read fd to stdin */
    close(pipefds[0]);   /* close read fd */
    close(outfd);        /* close output */
  }

  if (redir_stdin) {
    close(0); /* replace stdin with redir_stdin */
    err(open(redir_stdin, 0), 1);
  }
  if (t) {
    dup2(t, 1); /* replace stdout with t */
    close(t);
  }
  if (redir_stdout) {
    close(1);
    err(creat(redir_stdout, 438), 1); /* replace stdout with redir_stdout */
  }
  err(execvp(*u, u), 1);
}

int main() {
  for (;;) {
    prompt();
    char q[512] = {0}; /* input buffer */
    char *c = q;
    if (fgets(c + 1, sizeof(q) - 1, stdin) == NULL) {
      exit(0);
    }
    /* skip to end of line */
    while (*++c);
    run(c, 0);
  }
}

