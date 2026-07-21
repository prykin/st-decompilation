
undefined4 __cdecl
FUN_006a1eb0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  ushort local_18 [4];
  int *local_10;
  int local_c;
  int local_8;
  
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar2 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)local_18);
      iVar2 = param_5;
      if ((short)iVar3 != 0) {
        iVar2 = 0xff;
      }
      thunk_FUN_006a1410(param_1,param_2,param_3,(int)(short)iVar3,iVar2,param_7,param_8);
    }
    local_10 = &DAT_007df82c;
    do {
      uVar5 = local_10[-1] + param_2;
      iVar2 = *local_10 + param_3;
      local_8 = param_4;
      if ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < param_4) {
        do {
          if (((-1 < (int)uVar5) && ((int)uVar5 < *param_1)) &&
             ((-1 < iVar2 && (((iVar2 < param_1[1] && (-1 < local_8)) && (local_8 < 6)))))) {
            iVar3 = thunk_FUN_006a1370(param_1,uVar5,iVar2,local_8,(undefined4 *)local_18);
            local_c = (int)(short)iVar3;
            iVar3 = param_5;
            if (local_c != 0) {
              iVar3 = 0xff;
            }
            iVar4 = thunk_FUN_006a20e0(param_1,uVar5,iVar2,local_8,iVar3);
            if (((iVar4 != 0) &&
                (bVar1 = thunk_FUN_006a24e0(param_6,param_4,local_18,local_c,iVar3),
                CONCAT31(extraout_var,bVar1) == 0)) &&
               (iVar3 = thunk_FUN_006a2920(param_1,uVar5,iVar2,local_c,iVar3,param_7,param_8),
               iVar3 == 0)) {
              return 0;
            }
          }
          local_8 = local_8 + -1;
        } while ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < local_8);
      }
      local_10 = local_10 + 2;
    } while ((int)local_10 < 0x7df86c);
  }
  return 1;
}

