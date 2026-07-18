
/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __ioterm(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
    if ((&DAT_0085a1a0)[local_8] != 0) {
      thunk_FUN_006a49c0((undefined4 *)(&DAT_0085a1a0)[local_8],2);
      (&DAT_0085a1a0)[local_8] = 0;
    }
  }
  return;
}

