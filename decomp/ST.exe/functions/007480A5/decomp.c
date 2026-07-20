
undefined4 FUN_007480a5(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = param_1->field_005C;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1->field_0064 + 0x14) == 0) {
    if (param_1->field_000C == 0) {
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 1;
    }
    else {
      (*(code *)param_1[-1].field_005C[1].SpinCount)();
      (**(code **)(*(int *)param_1->field_000C + 8))((int *)param_1->field_000C);
      param_1->field_000C = 0;
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80040224;
  }
  return uVar1;
}

