
int FUN_006c4110(int param_1)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  iVar2 = 0;
  if ((*(uint *)(param_1 + 4) & 0x20000000) != 0) {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,(undefined4 *)(param_1 + 0xcc));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xcc) = 1000000000;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x1c))
                        (*(int **)(param_1 + 0x50),(undefined4 *)(param_1 + 0xd0));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xd0) = 1000000000;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x20))
                        (*(int **)(param_1 + 0x50),(undefined4 *)(param_1 + 0xd4));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xd4) = 1000000000;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x10))
                        (*(int **)(param_1 + 0x50),(undefined4 *)(param_1 + 0xd8));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xd8) = 1000000000;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0xc))
                        (*(int **)(param_1 + 0x50),(undefined4 *)(param_1 + 0xdc));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 1000000000;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x18))
                        (*(int **)(param_1 + 0x50),(undefined4 *)(param_1 + 0xe0));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xe0) = 1000000000;
      }
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))(*(int **)(param_1 + 0x5c));
    if (0 < iVar2) {
      iVar2 = 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  if (iVar2 != 0) {
    RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_DV_C_dvideo_cpp_007ede80,0x337);
    return iVar2;
  }
  return 0;
}

