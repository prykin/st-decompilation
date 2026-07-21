
undefined4 __cdecl
FUN_006a21f0(int *param_1,uint param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar1;
  int local_8;

  local_8 = 0xff;
  if (((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    if (param_4 == 0) {
      if (*param_5 != 0) {
        local_8 = 0;
      }
      if (param_5[1] != 0) {
        local_8 = 1;
      }
    }
    if ((((*(byte *)((int)param_5 + 5) & 0x20) == 0) &&
        (((param_5[1] & 0x1000) == 0 || ((param_5[1] & 0x2000) == 0)))) &&
       (((*param_5 & 0x1000) == 0 || ((*param_5 & 0x2000) == 0)))) {
      iVar1 = thunk_FUN_006a23a0(param_1,param_2,param_3,param_4,(short *)param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
      thunk_FUN_006a1620(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
    }
    else {
      iVar1 = thunk_FUN_006a1eb0(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
      thunk_FUN_006a1620(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      iVar1 = thunk_FUN_006a1bb0(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

