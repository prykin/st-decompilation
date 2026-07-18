
undefined4 FUN_0074868b(int param_1,int *param_2,undefined1 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    EnterCriticalSection(lpCriticalSection);
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*param_2 + 4))(param_2);
    *(int **)(param_1 + 4) = param_2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined1 *)(param_1 + 8) = param_3;
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  return uVar2;
}

