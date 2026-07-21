
int __thiscall
FUN_005faf70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  short sVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  sVar1 = (**(code **)(*(int *)this + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6);
  return (int)sVar1;
}

