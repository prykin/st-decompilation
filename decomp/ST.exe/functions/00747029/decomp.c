
undefined4 FUN_00747029(AnonShape_00747029_F1EF8B79 *param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection = param_1->field_002C;
    EnterCriticalSection(lpCriticalSection);
    piVar1 = (int *)param_1->field_000C;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *param_2 = param_1->field_000C;
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  return uVar2;
}

