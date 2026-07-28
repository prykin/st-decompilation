
int FUN_0074c571(AnonShape_0074C571_537DB7FB *param_1)

{
  int iVar1;
  undefined1 *lpCriticalSection;

  lpCriticalSection = &param_1->field_00CC->field_0x5c;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_000C == 0) || (*(int *)(param_1->field_00CC->field_0090 + 0x18) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(param_1->field_00CC->field_0000 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_0074896b((int)param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar1;
}

