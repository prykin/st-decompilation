
undefined4 FUN_007491c3(AnonShape_007491C3_A434B833 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    lpCriticalSection =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_007491C3_A434B833 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
    EnterCriticalSection(lpCriticalSection);
    param_2[1] = param_1->field_0034;
    *param_2 = param_1->field_002C;
    param_2[2] = param_1->field_0038;
    param_2[3] = param_1->field_003C;
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

