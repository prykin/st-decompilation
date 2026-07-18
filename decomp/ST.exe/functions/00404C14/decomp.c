
undefined4 __cdecl
thunk_FUN_006a1eb0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
                  undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort auStack_18 [4];
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar1 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar2 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)auStack_18);
      iVar1 = param_5;
      if ((short)iVar2 != 0) {
        iVar1 = 0xff;
      }
      thunk_FUN_006a1410(param_1,param_2,param_3,(int)(short)iVar2,iVar1,param_7,param_8);
    }
    piStack_10 = &DAT_007df82c;
    do {
      uVar4 = piStack_10[-1] + param_2;
      iVar1 = *piStack_10 + param_3;
      iStack_8 = param_4;
      if ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < param_4) {
        do {
          if (((-1 < (int)uVar4) && ((int)uVar4 < *param_1)) &&
             ((-1 < iVar1 && (((iVar1 < param_1[1] && (-1 < iStack_8)) && (iStack_8 < 6)))))) {
            iVar2 = thunk_FUN_006a1370(param_1,uVar4,iVar1,iStack_8,(undefined4 *)auStack_18);
            iStack_c = (int)(short)iVar2;
            iVar2 = param_5;
            if (iStack_c != 0) {
              iVar2 = 0xff;
            }
            iVar3 = thunk_FUN_006a20e0(param_1,uVar4,iVar1,iStack_8,iVar2);
            if (((iVar3 != 0) &&
                (iVar3 = thunk_FUN_006a24e0(param_6,param_4,auStack_18,iStack_c,iVar2), iVar3 == 0))
               && (iVar2 = thunk_FUN_006a2920(param_1,uVar4,iVar1,iStack_c,iVar2,param_7,param_8),
                  iVar2 == 0)) {
              return 0;
            }
          }
          iStack_8 = iStack_8 + -1;
        } while ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < iStack_8);
      }
      piStack_10 = piStack_10 + 2;
    } while ((int)piStack_10 < 0x7df86c);
  }
  return 1;
}

