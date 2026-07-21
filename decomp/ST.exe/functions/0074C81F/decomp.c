
undefined4 __thiscall FUN_0074c81f(void *this,undefined4 *param_1)

{
  FUN_00747f57(this,param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)((int)this + 0xa0) + 0x44))(1,param_1);
  return 0;
}

