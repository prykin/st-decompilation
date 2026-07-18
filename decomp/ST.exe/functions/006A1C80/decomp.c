
undefined4 __cdecl
FUN_006a1c80(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort local_c;
  ushort uStack_a;
  ushort local_8;
  
  uVar2 = param_2;
  if (((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < 6 &&
      (iVar3 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5), iVar3 != 0)))) {
    iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)&local_c);
    iVar3 = (int)(short)iVar3;
    if ((((local_8 & 0x2000) != 0) || ((uStack_a & 0x1000) != 0)) ||
       (bVar1 = true, (local_c & 0x1000) != 0)) {
      bVar1 = false;
    }
    if (param_5 == 1) {
      param_2 = ~CONCAT22(local_8,uStack_a) >> 0xd & 1;
    }
    else {
      param_2 = 0;
    }
    if ((bVar1) || (param_2 != 0)) {
      thunk_FUN_006a1410(param_1,uVar2,param_3,iVar3,param_5,param_6,param_7);
      return 1;
    }
    if ((param_5 == 0xff) && (iVar3 == 0)) {
      iVar3 = thunk_FUN_006a17b0(param_1,uVar2,param_3,0,0,&local_c,param_6,param_7);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = thunk_FUN_006a1bb0(param_1,uVar2,param_3,0,0,&local_c,param_6,param_7);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = thunk_FUN_006a17b0(param_1,uVar2,param_3,0,1,&local_c,param_6,param_7);
      if (iVar3 == 0) {
        return 0;
      }
      param_5 = 1;
      iVar3 = 0;
    }
    else {
      iVar4 = thunk_FUN_006a17b0(param_1,uVar2,param_3,iVar3,param_5,&local_c,param_6,param_7);
      if (iVar4 == 0) {
        return 0;
      }
    }
    iVar3 = thunk_FUN_006a1bb0(param_1,uVar2,param_3,iVar3,param_5,&local_c,param_6,param_7);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

