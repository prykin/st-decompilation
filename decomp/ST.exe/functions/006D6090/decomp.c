
void __fastcall FUN_006d6090(int param_1)

{
  int iVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  }
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 != 0) {
    if ((*(int *)(*(int *)(param_1 + 0x5c) + 0x310) == 0) &&
       (piVar2 = *(int **)(param_1 + 100), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 100) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != (int *)0x0) {
      *(int *)(param_1 + 0x28) = piVar2[7];
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      (**(code **)(*piVar2 + 0x54))(1);
    }
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return;
}

