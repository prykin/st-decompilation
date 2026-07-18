
/* WARNING: Type propagation algorithm not settling */

uint thunk_FUN_0064e300(int param_1,char *param_2,undefined2 param_3,char param_4,undefined2 param_5
                       ,char param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar4;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  uint auStack_20 [3];
  void *pvStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  uStack_10 = param_7;
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  auStack_20[2] = 0xffffffff;
  auStack_20[1] = 0;
  pvStack_14 = (void *)0x0;
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  uVar1 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  if (uVar1 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_64;
    thunk_FUN_006686c0((int *)&puStack_8);
    thunk_FUN_006686c0((int *)&puStack_c);
    FUN_006a5e40(uVar1,0,0x7d2a34,0x1b8);
    return uVar1;
  }
  if (((int)uStack_10 < 0) || (bVar4 = uStack_10 == 8, 8 < (int)uStack_10)) {
    uStack_10 = 0xff;
    bVar4 = false;
  }
  if (bVar4) {
    uStack_10 = (uint)DAT_0080874d;
  }
  uVar1 = uStack_10;
  if ((param_6 < '\0') || (iVar2 = (int)param_6, '\a' < param_6)) {
    iVar2 = param_1;
  }
  puStack_8 = thunk_FUN_00668180(param_2,param_3,(short)param_4,param_5,(char)iVar2);
  puStack_8[1] = param_1;
  *(uint *)((int)puStack_8 + 0x77) = uVar1;
  puStack_c = thunk_FUN_006684e0(puStack_8,auStack_20);
  thunk_FUN_006686c0((int *)&puStack_8);
  thunk_FUN_0054cc20(900,auStack_20 + 1,&pvStack_14,puStack_c,0);
  thunk_FUN_006686c0((int *)&puStack_c);
  if (pvStack_14 == (void *)0x0) {
    FUN_006a5e40(-0xab,DAT_007ed77c,0x7d2a34,0x1b4);
    uVar1 = auStack_20[2];
  }
  else {
    uVar1 = (uint)*(ushort *)((int)pvStack_14 + 0x7d);
    auStack_20[2] = uVar1;
    puVar3 = thunk_FUN_00676170(param_1);
    if (puVar3 != (uint *)0x0) {
      thunk_FUN_0065d940(pvStack_14,(int)puVar3,0);
      FUN_006ae110((byte *)puVar3);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return uVar1;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  return uVar1;
}

