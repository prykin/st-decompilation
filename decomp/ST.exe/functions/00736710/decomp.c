
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_0085a480)[local_8] = 0;
  }
  DAT_0085a2e0 = 0;
  DAT_0085a36c = 0;
  DAT_0085a584 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_0085a360 + local_8 * 2) = 0;
  }
  return;
}

