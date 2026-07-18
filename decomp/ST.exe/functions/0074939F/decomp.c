
undefined4 FUN_0074939f(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = param_1 + -3;
  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(piVar1 != (int *)0x0) & (uint)(param_1 + 1));
  EnterCriticalSection(lpCriticalSection);
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    param_1[0x11] = 0;
    iVar3 = param_1[8];
    iVar2 = param_1[0xc];
    if (iVar2 <= iVar3) {
      param_1[0x12] = 0;
      (**(code **)(*piVar1 + 0x10))();
    }
    else {
      param_1[0x12] = 1;
    }
    FUN_0074931d((int)piVar1);
    LeaveCriticalSection(lpCriticalSection);
    if (iVar2 <= iVar3) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return 0;
}

