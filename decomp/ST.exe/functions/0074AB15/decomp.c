
void __thiscall FUN_0074ab15(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x94))(param_1);
  if (-1 < iVar1) {
    FUN_00747f52();
  }
  return;
}

