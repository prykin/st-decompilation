
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00623040(void *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_4 + 0x60) + 0x29);
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + *(int *)(param_4 + 0x70) * 4), iVar1 != 0)) {
    if (*(char *)(param_4 + 0x4f) != '\0') {
      iVar2 = thunk_FUN_00424e10(param_1,iVar1,
                                 (float)*(int *)(param_4 + 100) * _DAT_007904f8 * _DAT_007904f0 -
                                 _DAT_007907a8,
                                 (float)*(int *)(param_4 + 0x68) * _DAT_007904f8 * _DAT_007904f0 -
                                 _DAT_007907a8,
                                 (float)*(int *)(param_4 + 0x6c) * _DAT_007904f8 * _DAT_007904f0,
                                 0x20,0x20,param_3);
      return iVar2;
    }
    iVar2 = thunk_FUN_00424e10(param_1,*(int *)(iVar2 + (uint)*(byte *)(param_4 + 0x78) * 4),
                               (float)*(int *)(param_4 + 100) * _DAT_007904f8 * _DAT_007904f0 -
                               _DAT_007907a8,
                               (float)*(int *)(param_4 + 0x68) * _DAT_007904f8 * _DAT_007904f0 -
                               _DAT_007907a8,
                               (float)*(int *)(param_4 + 0x6c) * _DAT_007904f8 * _DAT_007904f0,0x20,
                               0x20,param_3);
    return iVar2;
  }
  return -4;
}

