
uint __cdecl FUN_006a3a00(int *param_1,int param_2,int param_3,int param_4,ushort *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  ushort local_10 [2];
  uint local_c;
  uint local_8;
  
  iVar5 = 0;
  local_8 = 0;
  do {
    iVar3 = *(int *)((int)&DAT_007dfb70 + iVar5) + param_2;
    iVar4 = *(int *)((int)&DAT_007dfb74 + iVar5) + param_3;
    if ((((-1 < iVar3) && (iVar3 < *param_1)) && (-1 < iVar4)) &&
       (((iVar4 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
      iVar3 = thunk_FUN_006a1370(param_1,iVar3,iVar4,param_4,(undefined4 *)local_10);
      bVar2 = thunk_FUN_006a24e0(local_10,(int)(short)iVar3,param_5,param_4,0xff);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        bVar1 = (byte)iVar5 & 0x1f;
        local_8 = local_8 | ((&DAT_007dfaf0)[local_c & 0xf] << 0x10 |
                            (uint)(&DAT_007dfaf0)[local_c & 0xf] >> 0x10) &
                            (0x10000 << bVar1 | 0x10000U >> 0x20 - bVar1);
      }
    }
    iVar5 = iVar5 + 8;
  } while (iVar5 < 0x20);
  return local_8;
}

