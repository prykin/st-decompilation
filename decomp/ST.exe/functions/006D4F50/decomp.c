
void FUN_006d4f50(int *param_1)

{
  if (param_1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}

