
undefined4
thunk_FUN_00497850(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7,int *param_8,int *param_9,int *param_10)

{
  undefined4 uVar1;
  int iVar2;
  
  if (-1 < (int)param_7) {
    if ((((int)param_7 < (int)*(uint *)(DAT_007fb270 + 0xc)) &&
        (param_7 < *(uint *)(DAT_007fb270 + 0xc))) &&
       (iVar2 = *(int *)(DAT_007fb270 + 8) * param_7 + *(int *)(DAT_007fb270 + 0x1c), iVar2 != 0)) {
      iVar2 = *(int *)(iVar2 + 0x14);
      uVar1 = thunk_FUN_0060e470(param_1,param_2,param_3,param_4,param_5,param_6,
                                 *(int *)(iVar2 + 0x1e9) + 100,*(int *)(iVar2 + 0x1ed) + 100,
                                 *(undefined4 *)(iVar2 + 0x1f1),param_8,param_9,param_10);
      return uVar1;
    }
  }
  *param_8 = param_4;
  *param_9 = param_5;
  *param_10 = param_6;
  return 0;
}

