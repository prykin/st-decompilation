
undefined4 __cdecl FUN_006820f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x02') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x04')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  iVar2 = param_2 + param_1;
  while( true ) {
    if (iVar2 <= param_1) {
      iVar1 = iVar2 + param_3;
      while( true ) {
        if (iVar1 <= iVar2) {
          return 1;
        }
        if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x02') &&
           ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar2] != '\x04')) break;
        iVar2 = iVar2 + 1;
      }
      return 0;
    }
    if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x01') &&
       ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + param_1] != '\x04')) break;
    param_1 = param_1 + 1;
  }
  return 0;
}

