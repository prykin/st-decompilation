
int FUN_006b3dd0(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,uint param_12,uint param_13)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = FUN_006b1d50(param_1,(uint *)(param_1 + 0x1e0),param_13,0,(int *)0x0,0,0xffffffff,
                       0xffffffff,0,1);
  if (iVar2 == 0) {
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + *(uint *)(param_1 + 0x1e0) * 4);
    puVar1[0xf] = param_5;
    puVar1[0xd] = param_5;
    puVar1[9] = param_5;
    puVar1[4] = param_5;
    puVar1[0xe] = param_4;
    puVar1[0xc] = param_4;
    puVar1[8] = param_4;
    puVar1[3] = param_4;
    *puVar1 = *puVar1 | 8;
    FUN_006b1b10(param_1,*(uint *)(param_1 + 0x1e0),param_12);
    *(undefined4 *)(param_1 + 0x21c) = param_3;
    *(undefined4 *)(param_1 + 0x204) = param_2;
    *(undefined4 *)(param_1 + 0x1fc) = param_6;
    *(undefined4 *)(param_1 + 0x214) = param_8;
    *(undefined4 *)(param_1 + 0x200) = param_7;
    *(undefined4 *)(param_1 + 0x218) = param_9;
    *(undefined4 *)(param_1 + 0x1f0) = param_11;
    *(undefined4 *)(param_1 + 0x1ec) = param_10;
    *(uint *)(param_1 + 500) = param_4;
    *(uint *)(param_1 + 0x1f8) = param_5;
    uVar4 = puVar1[0x14];
    *(uint *)(param_1 + 0x1e8) = param_13;
    *(uint *)(param_1 + 0x1e4) = uVar4;
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    FUN_006ab060((undefined4 *)(param_1 + 0x210));
    FUN_006ab060((undefined4 *)(param_1 + 0x220));
    uVar4 = ((int)(param_4 + 7 + ((int)(param_4 + 7) >> 0x1f & 7U)) >> 3) * param_5;
    puVar3 = FUN_006b04d0(uVar4);
    *(undefined4 *)(param_1 + 0x210) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = FUN_006b04d0(uVar4);
      *(undefined4 *)(param_1 + 0x220) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        return 0;
      }
    }
    iVar2 = -2;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7edac0,0x87d);
  return iVar2;
}

