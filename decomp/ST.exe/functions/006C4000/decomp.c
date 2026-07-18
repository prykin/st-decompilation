
int FUN_006c4000(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  iVar2 = 0;
  if (((*(uint *)(param_1 + 4) & 0x40000000) != 0) && ((*(uint *)(param_1 + 4) & 0x20000000) == 0))
  {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x28) + 0x4e4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4ec),*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24));
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 0x20))(*(int **)(param_1 + 0x60),0,0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0x7fffffff;
      *(undefined4 *)(param_1 + 0x100) = 0x7fffffff;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))(*(int **)(param_1 + 0x5c));
      if (-1 < iVar2) {
        iVar2 = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
        goto LAB_006c40d5;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))(*(int **)(param_1 + 0x5c));
  }
LAB_006c40d5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  if (iVar2 != 0) {
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede80,0x308);
    return iVar2;
  }
  return 0;
}

