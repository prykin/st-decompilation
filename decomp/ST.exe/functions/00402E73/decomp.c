
int __thiscall thunk_FUN_00607200(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  char in_stack_00000020;
  uint auStack_10c [20];
  undefined4 auStack_bc [4];
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  int aiStack_9c [8];
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 auStack_68 [5];
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  byte bStack_27;
  int iStack_26;
  int iStack_20;
  int iStack_1c;
  uint *puStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_10 = thunk_FUN_004406c0(in_stack_00000020);
  uStack_10 = uStack_10 & 0xff;
  iStack_14 = thunk_FUN_00606cd0(param_4,&iStack_6c,&iStack_78,&iStack_1c,&uStack_7c);
  uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar1;
  iVar6 = (uVar1 >> 0x10) % (iStack_6c + 1U) + 9;
  iStack_c = iVar6;
  iVar2 = thunk_FUN_006041a0(iVar6);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar6) {
    return -1;
  }
  piVar7 = aiStack_9c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  iStack_8 = 0;
  if (0 < iStack_78) {
    puVar3 = auStack_10c;
    iStack_8 = iStack_78;
    iVar2 = iStack_78;
    do {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      uVar1 = (uVar1 >> 0x10) % 7;
      if (0 < aiStack_9c[uVar1]) {
        iVar6 = 0;
        do {
          if (6 < iVar6) break;
          uVar1 = uVar1 + 1;
          if (6 < (int)uVar1) {
            uVar1 = 0;
          }
          iVar6 = iVar6 + 1;
        } while (aiStack_9c[uVar1] != 0);
      }
      iVar6 = aiStack_9c[uVar1];
      *puVar3 = uVar1;
      aiStack_9c[uVar1] = iVar6 + 1;
      if (uStack_10 == 1) {
        uVar1 = uVar1 | 0x800;
LAB_0060731e:
        *puVar3 = uVar1;
      }
      else {
        if (uStack_10 == 2) {
          uVar1 = uVar1 | 0x200;
          goto LAB_0060731e;
        }
        if (uStack_10 == 3) {
          uVar1 = uVar1 | 0x4000;
          goto LAB_0060731e;
        }
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (0 < iStack_1c) {
    puVar3 = auStack_10c + iStack_8;
    do {
      uVar1 = uStack_10;
      if (iStack_8 == iStack_c) break;
      *puVar3 = 0;
      if (uVar1 == 1) {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uVar1 = (uint)CONCAT11(8,(char)((uVar1 >> 0x10) % 9) + '\a');
LAB_0060740b:
        *puVar3 = uVar1;
      }
      else {
        if (uVar1 == 2) {
          uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar1;
          uVar1 = (uint)CONCAT11(2,(char)((uVar1 >> 0x10) % 9) + '\a');
          goto LAB_0060740b;
        }
        if (uVar1 == 3) {
          uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar1;
          if ((uVar1 & 0x30000) != 0) {
            uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar1;
            uVar1 = (uint)CONCAT11(0x20,(char)((uVar1 >> 0x10) % 5) + '\x05');
            goto LAB_0060740b;
          }
          iVar6 = uVar1 * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar6;
          *puVar3 = (uint)CONCAT11(0x40,((byte)((uint)iVar6 >> 0x10) & 1) + 7);
        }
      }
      puVar3 = puVar3 + 1;
      iStack_8 = iStack_8 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_1c);
  }
  iVar2 = 0;
  puVar3 = auStack_10c + iStack_8;
  do {
    if (iStack_8 == iStack_c) break;
    if (uStack_10 == 3) {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      if ((uVar1 >> 0x10) % 3 != 0) {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uVar1 = (uint)CONCAT11(0x10,(char)((ulonglong)(uVar1 >> 0x10) % 3));
        goto LAB_006074c8;
      }
      iVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar6;
      *puVar3 = (uint)CONCAT11(0x20,((byte)((uint)iVar6 >> 0x10) & 3) + 6);
    }
    else {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      uVar1 = (uVar1 >> 0x10) % 7 + 9;
LAB_006074c8:
      *puVar3 = uVar1;
    }
    puVar3 = puVar3 + 1;
    iStack_8 = iStack_8 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  puVar8 = auStack_bc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uStack_ac = 2;
  iStack_8 = 0;
  if (0 < iStack_c) {
    puStack_18 = auStack_10c;
    iStack_20 = (int)this + 0x219;
    do {
      iVar2 = iStack_8;
      puVar8 = auStack_68;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      auStack_68[2] = 0;
      auStack_68[3] = 0;
      uStack_54 = *puStack_18;
      auStack_68[0] = 100;
      uStack_50 = param_4;
      if ((byte)uStack_54 < 0xb) {
        if ((byte)uStack_54 < 5) {
          bStack_27 = 1;
        }
        else {
          iVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar6;
          bStack_27 = (byte)((uint)iVar6 >> 0x10) & 1;
        }
      }
      else {
        bStack_27 = 0;
      }
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      uStack_38 = (uVar1 >> 0x10) % 0x169;
      if (uStack_10 == 0) {
        uStack_4c = uStack_7c;
      }
      else {
        uStack_4c = uStack_10;
      }
      iStack_26 = iVar2;
      if ((iVar2 < 6) || (iVar2 % 3 != 0)) {
        iStack_74 = FUN_006aff5b(uStack_38);
        iStack_70 = FUN_006aff50(uStack_38);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = ((int)(iStack_14 + (iStack_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar5 = (int)(((uVar4 >> 0x10) % uVar1 + iStack_14 / 2) * iStack_70) / 10000;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = (int)(((uVar4 >> 0x10) % uVar1 + iStack_14 / 2) * iStack_74) / 10000;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uStack_3c = (uVar4 >> 0x10) % 0x29;
        iVar2 = 0x14;
      }
      else {
        FUN_006aff5b(uStack_38);
        FUN_006aff50(uStack_38);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = ((int)(iStack_14 + (iStack_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar5 = (uVar4 >> 0x10) % uVar1;
        uVar4 = uVar4 * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = (uVar4 >> 0x10) % uVar1;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uStack_3c = (uVar4 >> 0x10) % 0x1f;
        iVar2 = 0x82;
      }
      iVar6 = iStack_20;
      iStack_44 = uVar1 + param_2;
      iStack_48 = uVar5 + param_1;
      uStack_3c = iVar2 - uStack_3c;
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      iStack_40 = param_3;
      *(uint *)((int)this + 0x1c) = uVar1;
      uStack_2c = uVar1 >> 0x10 & 7;
      switch(uStack_54) {
      case 0:
      case 1:
      case 2:
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_30 = 0x7d;
        uStack_34 = (uVar1 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        uStack_30 = 0x87;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_34 = (uVar1 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_30 = 0x91;
        uStack_34 = (uVar1 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        uStack_30 = 0x96;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_34 = (uVar1 >> 0x10) % 3 + 4;
      }
      iVar2 = (uStack_3c ^ (int)uStack_3c >> 0x1f) - ((int)uStack_3c >> 0x1f);
      if (iVar2 < 0x14) {
        if (iVar2 < 10) {
          uStack_34 = uStack_34 + 5;
          iStack_40 = param_3 + 0x5a;
        }
        else {
          uStack_34 = uStack_34 + 3;
          iStack_40 = param_3 + 0x50;
        }
      }
      puStack_a8 = auStack_68;
      thunk_FUN_00627eb0((int)auStack_bc);
      iStack_8 = iStack_8 + 1;
      puStack_18 = puStack_18 + 1;
      iStack_20 = iVar6 + 4;
    } while (iStack_8 < iStack_c);
  }
  return iStack_c;
}

