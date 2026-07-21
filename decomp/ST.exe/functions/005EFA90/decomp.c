
void __thiscall FUN_005efa90(void *this,undefined4 param_1)

{
  *(int *)((int)this + 0x2e5) = *(int *)((int)this + 0x2e5) + -1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0xac))(param_1);
  return;
}

