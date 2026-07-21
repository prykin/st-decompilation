
void FUN_00759e50(undefined4 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)*param_1)(param_1,0,0x115);
  *(undefined4 *)(iVar1 + 0x111) = 0;
  return;
}

