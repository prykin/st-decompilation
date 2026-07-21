
undefined4 FUN_007480a5(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = param_1->field_005C;
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1->field_0064 + 0x14) == 0) {
    if (param_1->field_000C == 0) {
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 1;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)param_1[-1].field_005C[1].SpinCount)();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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

