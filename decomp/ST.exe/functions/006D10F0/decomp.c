
undefined4 * FUN_006d10f0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (0x100 < (int)param_4) {
    param_4 = 0;
  }
  uVar3 = param_4 * 4 + 0x28;
  iVar5 = (param_1 * param_3 + 0x1fU >> 3 & 0x1ffffffc) * param_2;
  uVar1 = uVar3;
  if (param_5 != 0) {
    uVar1 = uVar3 + iVar5;
  }
  puVar2 = (undefined4 *)FUN_006aac70(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = puVar2;
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar2[2] = param_2;
    puVar2[1] = param_1;
    puVar2[5] = iVar5;
    *puVar2 = 0x28;
    *(undefined2 *)(puVar2 + 3) = 1;
    *(short *)((int)puVar2 + 0xe) = (short)param_3;
    puVar2[4] = 0;
    puVar2[8] = (0xf < param_3) - 1 & param_4;
    if (param_4 == 3) {
      if (param_3 == 0x10) {
        puVar2[10] = 0xf800;
        puVar2[0xb] = 0x7e0;
        puVar2[0xc] = 0x1f;
        puVar2[4] = 3;
        return puVar2;
      }
      if (param_3 == 0x20) {
        puVar2[10] = 0xff0000;
        puVar2[0xb] = 0xff00;
        puVar2[0xc] = 0xff;
        puVar2[4] = 3;
      }
    }
  }
  return puVar2;
}

