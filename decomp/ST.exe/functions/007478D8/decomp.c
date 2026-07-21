
void __fastcall FUN_007478d8(undefined4 *param_1)

{
  *param_1 = &VTable_007A1128;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)(param_1[2] + 0xc) + 8))((int *)(param_1[2] + 0xc));
  return;
}

