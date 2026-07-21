
void __thiscall FUN_006e6130(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0xc))(param_1,0,0,param_2);
  return;
}

