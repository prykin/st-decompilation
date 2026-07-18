
int __thiscall thunk_FUN_00607a60(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char in_stack_00000020;
  int aiStack_d0 [20];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 auStack_60 [5];
  int iStack_4c;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  byte bStack_1f;
  int iStack_1e;
  int iStack_18;
  uint uStack_14;
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_14 = thunk_FUN_004406c0(in_stack_00000020);
  uStack_14 = uStack_14 & 0xff;
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar4 = (uVar3 >> 0x10) % 0xb + 9;
  iStack_c = iVar4;
  iVar2 = thunk_FUN_006041a0(iVar4);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar4) {
    return -1;
  }
  iVar2 = 0;
  piVar5 = aiStack_d0;
  do {
    if (iVar2 == iVar4) break;
    uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar3;
    iVar2 = iVar2 + 1;
    *piVar5 = (uVar3 >> 0x10) % 5 + 5;
    iVar4 = iStack_c;
    piVar5 = piVar5 + 1;
  } while (iVar2 < 5);
  iStack_8 = 0;
  piVar5 = aiStack_d0 + iVar2;
  do {
    iVar1 = iStack_c;
    if (iVar2 == iVar4) break;
    uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar3;
    iVar2 = iVar2 + 1;
    *piVar5 = (uVar3 >> 0x10) % 7 + 9;
    iStack_8 = iStack_8 + 1;
    iVar4 = iVar1;
    piVar5 = piVar5 + 1;
  } while (iStack_8 < 0x14);
  if (((int)uStack_14 < 2) || (2 < (int)uStack_14)) {
    uStack_14 = 1;
  }
  iStack_8 = 0;
  puVar6 = auStack_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_70 = 2;
  if (0 < iVar4) {
    piStack_10 = aiStack_d0;
    iStack_18 = (int)this + 0x219;
    do {
      iVar4 = iStack_8;
      puVar6 = auStack_60;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      iVar2 = iStack_18;
      auStack_60[2] = 0;
      auStack_60[3] = 0;
      auStack_60[0] = 100;
      iStack_1e = iVar4;
      iStack_4c = *piStack_10;
      if ((byte)iStack_4c < 0xb) {
        if ((byte)iStack_4c < 5) {
          bStack_1f = 1;
        }
        else {
          iVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar4;
          bStack_1f = (byte)((uint)iVar4 >> 0x10) & 1;
        }
      }
      else {
        bStack_1f = 0;
      }
      iVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uStack_44 = uStack_14;
      *(int *)((int)this + 0x1c) = iVar4;
      uVar3 = iVar4 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      iStack_38 = (param_3 - (uVar3 >> 0x10) % 0xb5) + 0x5a;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      iStack_40 = (param_1 - (uVar3 >> 0x10) % 0x29) + 0x14;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      iStack_3c = (param_2 - (uVar3 >> 0x10) % 0x29) + 0x14;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      uStack_30 = (uVar3 >> 0x10) % 0x169;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      iStack_34 = 0xf - (uVar3 >> 0x10) % 0x1f;
      switch(iStack_4c) {
      case 0:
      case 1:
      case 2:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_28 = 0x7d;
        uStack_2c = (uVar3 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        uStack_28 = 0x87;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_2c = (uVar3 >> 0x10 & 3) + 2;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_28 = 0x91;
        uStack_2c = (uVar3 >> 0x10) % 5 + 3;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        uStack_28 = 0x96;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_2c = (uVar3 >> 0x10 & 3) + 5;
      }
      puStack_6c = auStack_60;
      thunk_FUN_00627eb0((int)auStack_80);
      piStack_10 = piStack_10 + 1;
      iStack_8 = iStack_8 + 1;
      iStack_18 = iVar2 + 4;
      iVar4 = iStack_c;
    } while (iStack_8 < iStack_c);
  }
  return iVar4;
}

