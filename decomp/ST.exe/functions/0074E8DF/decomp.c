
undefined4 __thiscall FUN_0074e8df(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_8;

  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(**(int **)((int)this + 0x18) + 0x18))(*(int **)((int)this + 0x18),&param_1);
  if (-1 < iVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1200,&local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
    if (-1 < iVar2) {
      *piVar1 = (int)local_8;
      return 0;
    }
  }
  return 0x80004001;
}

