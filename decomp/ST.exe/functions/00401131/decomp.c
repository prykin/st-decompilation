
uint __cdecl thunk_FUN_006938c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_00853d84 != 0) {
    piVar2 = (int *)(DAT_00853d80 + 0x208);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x86;
    } while (uVar1 < DAT_00853d84);
  }
  return 0xffffffff;
}

