
uint __cdecl thunk_FUN_006a3a00(int *param_1,int param_2,int param_3,int param_4,ushort *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort auStack_10 [2];
  uint uStack_c;
  uint uStack_8;
  
  iVar4 = 0;
  uStack_8 = 0;
  do {
    iVar2 = *(int *)((int)&DAT_007dfb70 + iVar4) + param_2;
    iVar3 = *(int *)((int)&DAT_007dfb74 + iVar4) + param_3;
    if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar3)) &&
       (((iVar3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
      iVar2 = thunk_FUN_006a1370(param_1,iVar2,iVar3,param_4,(undefined4 *)auStack_10);
      iVar2 = thunk_FUN_006a24e0(auStack_10,(int)(short)iVar2,param_5,param_4,0xff);
      if (iVar2 != 0) {
        bVar1 = (byte)iVar4 & 0x1f;
        uStack_8 = uStack_8 |
                   ((&DAT_007dfaf0)[uStack_c & 0xf] << 0x10 |
                   (uint)(&DAT_007dfaf0)[uStack_c & 0xf] >> 0x10) &
                   (0x10000 << bVar1 | 0x10000U >> 0x20 - bVar1);
      }
    }
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x20);
  return uStack_8;
}

