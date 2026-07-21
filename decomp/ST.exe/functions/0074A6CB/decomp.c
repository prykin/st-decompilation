
undefined4 __fastcall FUN_0074a6cb(AnonShape_0074A6CB_17890C91 *param_1)

{
  undefined1 *lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = &param_1->field_0x94;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->field_0064 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = 0;
  }
  else {
    param_1->field_00C0 = 0;
    if (param_1->field_0050 != (int *)0x0) {
      FUN_0074f107(param_1->field_0050);
    }
    param_1->field_0074 = 1;
    uVar1 = FUN_00747406(param_1,1,(int *)0x0,
                         -(uint)(param_1 != (AnonShape_0074A6CB_17890C91 *)0x0) &
                         (uint)&param_1->field_0xc);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return uVar1;
}

