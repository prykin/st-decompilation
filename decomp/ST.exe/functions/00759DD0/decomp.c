
void FUN_00759dd0(int *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x24))(param_1,1);
  param_1[3] = (-(uint)(param_1[2] != 0) & 100) + 100;
  return;
}

