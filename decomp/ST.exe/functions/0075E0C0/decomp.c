
void FUN_0075e0c0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)(param_1 + 0x1b2) + 0xc))(param_1,param_2,*param_3,param_5 + *param_6 * 4);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}

