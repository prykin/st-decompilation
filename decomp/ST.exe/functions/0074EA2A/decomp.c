
int FUN_0074ea2a(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0074e8df(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

