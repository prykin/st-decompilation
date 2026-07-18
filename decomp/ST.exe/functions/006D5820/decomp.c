
int FUN_006d5820(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x4c);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar2 + 0x30c) == 0) {
    iVar2 = FUN_0074862e(param_1,param_2);
    LeaveCriticalSection(lpCriticalSection);
    return iVar2;
  }
  if (iVar2 == -0x294) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(iVar2 + 0x2a0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (*(int *)(param_1 + 0x48) == -0x294) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(*(int *)(param_1 + 0x48) + 0x2a0);
    }
    *(int **)(param_1 + 4) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  *param_2 = *(undefined4 *)(param_1 + 4);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

