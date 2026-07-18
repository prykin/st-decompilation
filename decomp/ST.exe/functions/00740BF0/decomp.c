
/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  uint local_8;
  
  DAT_0085714c = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          DAT_00857148 = 0x16;
        }
        else {
          DAT_00857148 = 8;
        }
      }
      else {
        DAT_00857148 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_007f24d8 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  DAT_00857148 = *(undefined4 *)(&DAT_007f24dc + local_8 * 8);
  return;
}

