
undefined4 __cdecl thunk_FUN_00681f70(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    do {
      if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x02') &&
         ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14 + iVar1] != '\x04')) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  return 1;
}

