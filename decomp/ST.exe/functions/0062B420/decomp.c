
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0062b420(void *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_4 + 0xca) + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + *(int *)(param_4 + 0xb2) * 4), iVar1 != 0)) {
    iVar1 = thunk_FUN_00424e10(param_1,iVar1,*(float *)(param_4 + 0x6a) - _DAT_007907a8,
                               *(float *)(param_4 + 0x6e) - _DAT_007907a8,*(float *)(param_4 + 0x72)
                               ,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

