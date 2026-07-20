
int FUN_006bb8b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  *(undefined4 *)(param_1 + 0x474) = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
    return -0x7789fe52;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return -0x7789fe52;
  }
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  param_1 = 0;
  while( true ) {
    iVar2 = FUN_006bbe40(*(int **)(iVar1 + 0x40),(uint *)(iVar1 + 0x474),(int *)(iVar1 + 0x478),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != -0x7789fe3e) break;
    FUN_006cec40(iVar1);
    param_1 = param_1 + 1;
    if (1 < param_1) {
LAB_006bb943:
      *(undefined4 *)(iVar1 + 0x474) = 0;
      *(int *)(iVar1 + 0x478) = 0;
      if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
      }
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  goto LAB_006bb943;
}

