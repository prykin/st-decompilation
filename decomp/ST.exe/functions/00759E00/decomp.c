
void FUN_00759e00(int *param_1)

{
  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  *param_1 = 0;
  param_1[3] = 0;
  return;
}

