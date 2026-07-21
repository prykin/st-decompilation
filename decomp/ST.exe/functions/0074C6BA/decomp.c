
void __fastcall FUN_0074c6ba(undefined4 *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1[0x29];
  *param_1 = &VTable_007A1868;
  param_1[3] = &VTable_007A1820;
  param_1[4] = &VTable_007A1808;
  if (piVar1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00747bb4((int)param_1);
  return;
}

