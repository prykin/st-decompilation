
undefined4 __cdecl
thunk_FUN_006a23a0(int *param_1,uint param_2,int param_3,int param_4,short *param_5,
                  undefined *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_10 [2];
  int iStack_8;
  
  iStack_8 = 0xff;
  if (param_4 == 0) {
    if (param_5[1] == 0) {
      iStack_8 = 0xff;
      if ((*param_5 != 0) && (*param_5 != 1)) {
        iStack_8 = 0;
      }
    }
    else {
      iStack_8 = 1;
    }
  }
  iVar2 = param_4;
  if ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < param_4) {
    do {
      iVar1 = thunk_FUN_006a20e0(param_1,param_2,param_3,iVar2,0xff);
      if ((((iVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *param_1)) &&
         (((-1 < param_3 && (param_3 < param_1[1])) && ((-1 < iVar2 && (iVar2 < 6)))))) {
        iVar1 = thunk_FUN_006a1370(param_1,param_2,param_3,iVar2,auStack_10);
        if ((short)iVar1 != 0) {
          iStack_8 = 0xff;
        }
        iVar1 = thunk_FUN_006a2920(param_1,param_2,param_3,iVar2,iStack_8,param_6,param_7);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < iVar2);
  }
  return 1;
}

