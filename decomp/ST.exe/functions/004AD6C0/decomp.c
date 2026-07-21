
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ad6c0(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_4 + 0x20) + *(char *)(param_4 + 0x13) * 0x24) + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + *(int *)(param_4 + 0x30) * 4), iVar1 != 0)) {
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,iVar1,*(float *)(param_4 + 0x24) - _DAT_007907a8,
                       *(float *)(param_4 + 0x28) - _DAT_007907a8,*(float *)(param_4 + 0x2c),0x20,
                       0x20,param_3);
    return iVar1;
  }
  return -4;
}

