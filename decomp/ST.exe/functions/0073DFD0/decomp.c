
/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_008571e0 == 1) || ((DAT_008571e0 == 0 && (DAT_007f14d0 == 1)))) {
    FUN_0073e020(0xfc);
    if (DAT_00857400 != (code *)0x0) {
      (*DAT_00857400)();
    }
    FUN_0073e020(0xff);
  }
  return;
}

