
undefined4 __thiscall
FUN_0065e9a0(void *this,uint param_1,short *param_2,uint param_3,uint param_4,byte *param_5,
            undefined4 param_6,int param_7)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  short local_14 [2];
  void *local_10;
  undefined4 local_c;
  int *local_8;
  
  psVar1 = param_2;
  local_c = 0;
  local_8 = (int *)0x0;
  if ((DAT_007fa174 == 0) || (param_2 == (short *)0x0)) {
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (uVar4 = param_1, 8 < (int)param_1)) {
    uVar4 = *(uint *)((int)this + 0x97);
  }
  if (uVar4 == 8) {
    uVar4 = (uint)DAT_0080874d;
  }
  if (uVar4 == 0xff) {
    return 0xffffffff;
  }
  local_10 = this;
  uVar2 = thunk_FUN_0043e460((char)uVar4);
  if (uVar2 != 0) {
    local_8 = FUN_006aac10((uint)uVar2 * 0x2c);
    DAT_00811900 = 0;
    if ((char)param_6 == '\b') {
      param_6 = CONCAT31(param_6._1_3_,(char)uVar4);
    }
    else if (((char)param_6 < '\0') || ('\b' < (char)param_6)) {
      param_6 = CONCAT31(param_6._1_3_,0xff);
    }
    thunk_FUN_00676d80(uVar4,param_3,param_4,param_5,(char)param_6,0,0,0,-1,-1,-1,&LAB_0040559c,
                       local_8,(undefined *)(~-(uint)(param_7 != 0) & 0x404935));
    if (DAT_00811900 != 0) {
      iVar3 = thunk_FUN_00423220((void *)((int)local_10 + 0x1c),local_8,DAT_00811900);
      if ((void *)local_8[iVar3 * 0xb + 3] != (void *)0x0) {
        thunk_FUN_004162b0((void *)local_8[iVar3 * 0xb + 3],(undefined2 *)&param_1,local_14,
                           (undefined2 *)((int)&param_2 + 2));
        *psVar1 = (short)param_1 + -1;
        psVar1[2] = 0;
        psVar1[1] = local_14[0] + -1;
        psVar1[3] = 3;
        psVar1[4] = 3;
        psVar1[5] = 5;
        thunk_FUN_006756d0(psVar1,psVar1 + 1,psVar1 + 3,psVar1 + 4);
        goto LAB_0065eaf3;
      }
    }
  }
  local_c = 0xffffffff;
LAB_0065eaf3:
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  return local_c;
}

