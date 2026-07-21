
void __fastcall FUN_00747603(undefined4 *param_1)

{
  *param_1 = &VTable_007A1108;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))((int *)(param_1[3] + 0xc));
  FUN_0074de7f(param_1 + 6);
  return;
}

