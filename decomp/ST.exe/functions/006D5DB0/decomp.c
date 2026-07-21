
void __fastcall FUN_006d5db0(undefined4 *param_1)

{
  int *piVar1;

  *param_1 = &VTable_0079DD1C;
  param_1[3] = &VTable_0079DCF8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1[0x17] + 0x310) == 0) &&
     (piVar1 = (int *)param_1[0x19], piVar1 != (int *)0x0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x19] = 0;
  }
  FUN_00749091((int)param_1);
  return;
}

