#### tinysh

This is a port of a deobfuscated version of tinysh to minilib.
Compiles to 2.4 kB, statically linked. 
The shell has pipes, redirection, and no features;
it's barely usable. (Missing signal handler)

I added a inline command table (exit, help, cd).
Some colors, and a prompt with the current path.

Did the source code compilation (linux 64bit), which doesn't rely on any system library.

Serge Zaitsev did the deobfuscation. https://github.com/zserge/tinysh


Here is the original C source code, submission of Sean Dorward to the IOCCCC in 1990:

---
<pre style="color:white; background:blue">

#define D ,close(

char              *c,q              [512              ],m[              256
],*v[           99], **u,        *i[3];int         f[2],p;main       (){for
 (m[m        [60]=   m[62      ]=32   ]=m[*      m=124   [m]=       9]=6;
  e(-8)     ,gets      (1+(    c=q)     )||      exit      (0);     r(0,0)
   )for(    ;*++        c;);  }r(t,      o){    *i=i        [2]=    0;for
     (u=v  +98           ;m[*--c]         ^9;m [*c]          &32  ?i[*c
       &2]=                *u,u-             v^98              &&++u:

	3	)if(!m[*c]){for(*++c=0;!m[*--c];);
	*	--u= ++c;}u-v^98?strcmp(*u,"cd")?*c?pipe(f),o=f[
	1	]:
	4	,(p=fork())?e(p),o?r(o,0)D o)D*f):
	1	,wait(0):(o?dup2(*f,0)D*f)D o):*i?
	5	D 0),e(open(*i,0)):
	9	,t?dup2(t,1)D t):i[
	2	]?
	6	D 1),e(creat(i[2],438)):
	5	,e(execvp(*u,u))):e(chdir(u[1])*2):
	3	;}e(x){x<0?write(2,"?\n$ "-x/4,2),x+1||exit(1):
	5	;}

</pre>
---

I do like the wave. Like water. So calming. =:)


<pre style="color:lightgreen; background:black">

    Guvf cebtenz vf n ehqvzragnel furyy. Vg qbrf v/b erqverpgvba, cvcrf
    naq pq. Vg syntf reebef ba snvyrq puqve'f, bcra'f, perng'f
    rkrpic'f, sbex'f naq n srj flagnk reebef.

    Guvf cebtenz vf boshfpngrq va n srj abgnoyr jnlf: ncneg sebz gur
    ynlbhg (na hasbeznggrq (ohg pehapurq) irefvba vf vapyhqrq sbe
    crbcyr jub jnag gb chg guvf guebhtu po) vg znxrf pyrire hfr bs n
    jevgr fgngrzrag, fb gung gur fnzr fgngrzrag pna or hfrq gb cevag
    reebef naq gur cebzcg. Ol pnyyvat gur reebe shapgvba jvgu gur inyhr
    -8, gur cbvagre bssfrg va gur rkcerffvba "?\a$ "-k/4 tbrf sebz 0 gb
    2.  Cerfgb!  N cebzcg. Sbe reebef jvgu ahzoref fznyyre guna -4
    (v.r., HAVK flfgrz pnyyf) n dhrfgvba znex vf cevagrq.

    Gur reebe inyhr bs puqve vf qbhoyrq fb gung jr qba'g rkvg sebz gur
    cnerag furyy ba n puqve reebe (fvapr r() rkvgf ba -1 reebef bayl).
    Nyy bgure flfgrz pnyy snvyherf rkvg fvapr gurl ner sebz fhofuryyf.

    Erphefvba vf farnxvyl rzcyblrq gb nibvq n frpbaq pnyy gb sbex(),
    naq gur yvar vf cnefrq va n snveyl ovmneer snfuvba:  onpxjneqf. Gur
    urneg bs gur cebtenz, gung vf, gur cneg juvpu cresbezf nyy sbexf,
    rkrpf, bcraf, rgp. vf BAR P FGNGRZRAG.

    Gur zrgn-inyhrf neenl vf vavgvnyvmrq va n ovmneer snfuvba, naq gur
    fhofrdhrag purpxf sbe gur '<' naq '>' ner cresbezrq va n fvatyr
    fgngrzrag hfvat n znfx, fvapr lbh xabj gung '>'&2 vf 0, jurernf
    '<'&2 vf 2. Bgure fhpu zvpeb-boshfpngvbaf nobhaq.

    Svanyyl, vg vf abgnoyr gung gur pbqr jnf unpxrq sbe zvavznyvgl. Vs
    lbh ybbx ng gur pbzcerffrq irefvba, lbh jvyy or uneq-cerffrq gb
    ryvzvangr zber guna n srj punenpgref (jr pna'g frr ubj gb znxr vg
    nal fznyyre!).  550 punenpgref vf cerggl yrna sbe n furyy gung qbrf
    guvf zhpu.

    OHTF

    Gur flagnk bs gur furyy unf abg orra shyyl rkcyberq, ohg vs lbh gel
    gb erqverpg va gur fnzr qverpgvba zber guna bapr, bayl bar
    erqverpgvba vf cresbezrq. Guvf vf n "srngher" bs gur jnl gur yvar
    vf cnefrq; n cbvagre gb gur fgnpx bs nethzragf vf nffvtarq naq na
    nethzrag vf fgbyra rirel gvzr n ">" be "<" vf rapbhagrerq.  Gur
    furyy syntf na reebe vs ab nethzragf ner ba gur fgnpx. Guhf, sbe
    rknzcyr:
		png > sbb > one
    pngf gb sbb, fvapr vg jnf chfurq ynfg, ohg
		png > > sbb one
    pngf gb one, fvapr one jnf chfurq haqre sbb. (erzrzore jr'er
    cnefvat evtug-yrsg)

    Qrcraqvat ba lbhe synibe bs HA*K, pq jvgubhg na nethzrag jvyy
    rvgure cebqhpr na reebe be whfg qb abguvat.

    Gurer vf whfg bar reebe zrffntr, gur dhrfgvba znex, ohg url, gung'f
    nyy rq qbrf gbb.

</pre>

