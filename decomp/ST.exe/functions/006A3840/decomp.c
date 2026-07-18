
undefined4 __cdecl
FUN_006a3840(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort local_10 [4];
  int *local_8;
  
  local_8 = &DAT_007dfb74;
  do {
    iVar2 = local_8[-1] + param_2;
    iVar3 = *local_8 + param_3;
    if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar3)) &&
       (((iVar3 < param_1[1] && (-1 < param_4)) &&
        ((param_4 < 6 && (iVar1 = thunk_FUN_006a20e0(param_1,iVar2,iVar3,param_4,0xff), iVar1 != 0))
        )))) {
      iVar1 = thunk_FUN_006a1370(param_1,iVar2,iVar3,param_4,(undefined4 *)local_10);
      iVar1 = thunk_FUN_006a24e0(local_10,(int)(short)iVar1,param_5,param_4,0xff);
      if (iVar1 != 0) {
        thunk_FUN_006a3930(param_1,iVar2,iVar3,param_4,param_5,param_6,param_7);
      }
    }
    local_8 = local_8 + 2;
  } while ((int)local_8 < 0x7dfb94);
  return 1;
}

