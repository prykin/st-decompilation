
void FUN_006c2140(undefined4 param_1)

{
  if (DAT_008568bc != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_008568bc + 0x2c))(DAT_008568bc,param_1,0);
  }
  return;
}

