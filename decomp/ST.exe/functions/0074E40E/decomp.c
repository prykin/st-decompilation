
uint FUN_0074e40e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,undefined4 param_6)

{
  uint uVar1;

  uVar1 = FUN_0074e337(param_1,param_2,(int *)0x0,param_5,(int *)&param_5);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*param_5 + 0x28))(param_5,param_3,param_4,param_6);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_5 + 8))(param_5);
  }
  return uVar1;
}

