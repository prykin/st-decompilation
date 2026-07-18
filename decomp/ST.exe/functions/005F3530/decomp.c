
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f3530(void *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_4 + 0x171) + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + *(int *)(param_4 + 0xab) * 4), iVar1 != 0)) {
    iVar1 = thunk_FUN_00424e10(param_1,iVar1,
                               (float)*(int *)(param_4 + 0x93) * _DAT_007904f8 * _DAT_007904f0 -
                               _DAT_007907a8,
                               (float)*(int *)(param_4 + 0x97) * _DAT_007904f8 * _DAT_007904f0 -
                               _DAT_007907a8,
                               (float)*(int *)(param_4 + 0x9b) * _DAT_007904f8 * _DAT_007904f0,0x20,
                               0x20,param_3);
    return iVar1;
  }
  return -4;
}

