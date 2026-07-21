
void FUN_006b3ca0(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}

