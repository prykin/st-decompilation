
int __thiscall
thunk_FUN_00606050(void *this,int param_1,int param_2,int param_3,int param_4,uint *param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,undefined1 param_9)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint auStack_100 [20];
  undefined4 auStack_b0 [4];
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  int aiStack_90 [6];
  int iStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [5];
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  byte bStack_2f;
  uint *puStack_2e;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  byte *pbStack_10;
  int iStack_c;
  char cStack_5;
  
  iVar5 = 0;
  cStack_5 = '\0';
  uStack_18 = thunk_FUN_004406c0((char)param_8);
  uStack_18 = uStack_18 & 0xff;
  if (param_4 == 0x21) {
    *(int *)((int)this + 0x2b7) = param_7;
  }
  uStack_74 = thunk_FUN_00606a50((int)param_5);
  iStack_14 = thunk_FUN_00607ee0(param_4,&pbStack_10,&iStack_78,&iStack_28,&iStack_1c,&uStack_24);
  if (0 < (int)uStack_24) {
    uStack_18 = uStack_24;
  }
  if ((param_4 == 0x15) || (param_4 == 9)) {
    iStack_28 = 0;
    cStack_5 = '\x01';
    if (param_4 == 0x15) {
      iStack_1c = 0;
    }
  }
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar6 = (uVar3 >> 0x10) % (iStack_78 + 1U) + 9;
  iStack_c = iVar6;
  iVar2 = STExplosionC::CreateGroupPart(this,iVar6);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar6) {
    return -1;
  }
  iVar6 = 0;
  piVar7 = aiStack_90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  param_7 = 0;
  if (0 < iStack_28) {
    param_5 = auStack_100;
    iStack_20 = iStack_28;
    do {
      bVar1 = *pbStack_10;
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          uVar3 = 0;
          goto LAB_00606189;
        }
      }
      else {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uint)pbStack_10[(uVar3 >> 0x10) % (uint)bVar1 + 3];
LAB_00606189:
        if (aiStack_90[uVar3 & 0x7f] != 0) {
          iVar2 = 0;
          do {
            if (4 < iVar2) break;
            uVar3 = uVar3 + 1;
            if (4 < ((byte)uVar3 & 0x7f)) {
              uVar3 = uVar3 & 0x80;
            }
            iVar2 = iVar2 + 1;
          } while (aiStack_90[uVar3 & 0x7f] != 0);
        }
        *param_5 = uVar3;
        aiStack_90[uVar3 & 0x7f] = aiStack_90[uVar3 & 0x7f] + 1;
        if ((uStack_18 != 3) &&
           (uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039,
           *(uint *)((int)this + 0x1c) = uVar4, (uVar4 & 0x10000) != 0)) {
          *param_5 = uVar3 | 0x100;
        }
        iVar6 = param_7 + 1;
        param_5 = param_5 + 1;
        param_7 = iVar6;
      }
      iStack_20 = iStack_20 + -1;
    } while (iStack_20 != 0);
  }
  param_5 = (uint *)0x0;
  if (0 < iStack_1c) {
    puVar8 = auStack_100 + iVar6;
    do {
      if (iVar6 == iStack_c) break;
      bVar1 = pbStack_10[1];
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          *puVar8 = 0;
          goto LAB_00606282;
        }
      }
      else {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        *puVar8 = (uint)pbStack_10[(uVar3 >> 0x10) % (uint)bVar1 + 0xd];
LAB_00606282:
        if (((cStack_5 == '\0') && (uStack_18 != 3)) &&
           (uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039,
           *(uint *)((int)this + 0x1c) = uVar3, (uVar3 & 0x10000) != 0)) {
          *puVar8 = *puVar8 | 0x100;
        }
        iVar6 = param_7 + 1;
        puVar8 = puVar8 + 1;
        param_7 = iVar6;
      }
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < iStack_1c);
  }
  param_5 = (uint *)0x0;
  puVar8 = auStack_100 + iVar6;
  do {
    if (iVar6 == iStack_c) break;
    bVar1 = pbStack_10[2];
    if (bVar1 < 2) {
      if (bVar1 == 1) {
        *puVar8 = 0;
        goto LAB_00606321;
      }
    }
    else {
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      *puVar8 = (uint)pbStack_10[(uVar3 >> 0x10) % (uint)bVar1 + 0x19];
LAB_00606321:
      iVar6 = param_7 + 1;
      puVar8 = puVar8 + 1;
      param_7 = iVar6;
    }
    param_5 = (uint *)((int)param_5 + 1);
  } while ((int)param_5 < 0x14);
  puVar9 = auStack_b0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uStack_a0 = 2;
  if (iVar6 < iStack_c) {
    iStack_c = iVar6;
  }
  param_5 = (uint *)0x0;
  if (0 < iStack_c) {
    do {
      puVar9 = auStack_70;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      uStack_54 = uStack_18;
      auStack_70[1] = param_8;
      uStack_30 = param_9;
      auStack_70[0] = 100;
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      puStack_2e = param_5;
      iStack_58 = param_4;
      if (uStack_18 == 3) {
        if (((param_5 == (uint *)0x0) && (param_4 != 0x2b)) &&
           ((param_4 != 0xfd && (param_4 != 0xfe)))) {
          auStack_100[0] = 0x8000;
        }
        else {
          uVar3 = auStack_100[(int)param_5];
          if ((uVar3 & 0x80) == 0) {
            uVar3 = uVar3 & 0xffffff7f | 0x1000;
          }
          else {
            uVar3 = uVar3 & 0xffffff7f | 0x2000;
          }
LAB_006063f9:
          auStack_100[(int)param_5] = uVar3;
        }
      }
      else if ((auStack_100[(int)param_5] & 0x80) != 0) {
        uVar3 = auStack_100[(int)param_5] & 0xffffff7f | 0x100;
        goto LAB_006063f9;
      }
      uStack_5c = auStack_100[(int)param_5];
      if ((byte)uStack_5c < 0xb) {
        if ((byte)uStack_5c < 5) {
          bStack_2f = 1;
        }
        else {
          iVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar2;
          bStack_2f = (byte)((uint)iVar2 >> 0x10) & 1;
        }
      }
      else {
        bStack_2f = 0;
      }
      if (uStack_54 == 0) {
        uStack_54 = uStack_24;
      }
      else {
      }
      if (param_4 == 9) {
        uStack_54 = 4;
      }
      else if (param_4 == 0x15) {
        uStack_54 = 2;
      }
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      uStack_40 = (uVar3 >> 0x10) % 0x169;
      switch(uStack_74) {
      case 0:
      case 4:
        if (((uStack_40 < 0x2e) || (0x13a < uStack_40)) ||
           ((0x86 < uStack_40 && (uStack_40 < 0xe2)))) {
          uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar3;
          uVar3 = (uVar3 >> 0x10) % (iStack_14 + 1U) >> 3;
          iVar5 = iStack_14 / 2;
        }
        else {
LAB_006064b4:
          iVar5 = *(int *)((int)this + 0x1c);
LAB_00606606:
          uVar3 = iVar5 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar3;
          iVar5 = 0x32;
          uVar3 = (uVar3 >> 0x10) % 0x65;
        }
        break;
      case 1:
      case 5:
        if ((0x5a < uStack_40) && ((uStack_40 < 0xb4 || (0x10e < uStack_40)))) {
LAB_006065f8:
          iVar5 = *(int *)((int)this + 0x1c);
          goto LAB_00606606;
        }
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uVar3 >> 0x10) % (iStack_14 + 1U) >> 3;
        iVar5 = iStack_14 / 2;
        break;
      case 2:
      case 6:
        if (((uStack_40 < 0x2d) || (0x87 < uStack_40)) &&
           ((uStack_40 < 0xe1 || (0x13b < uStack_40)))) goto LAB_006064b4;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        iVar5 = iStack_14 / 2 - ((uVar3 >> 0x10) % (iStack_14 + 1U) >> 3);
        goto switchD_00606490_default;
      case 3:
      case 7:
        if (((uStack_40 < 0x5a) || (0xb4 < uStack_40)) &&
           ((uStack_40 < 0x10e || (0x168 < uStack_40)))) goto LAB_006065f8;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uVar3 >> 0x10) % (iStack_14 + 1U) >> 3;
        iVar5 = iStack_14 / 2;
        break;
      default:
        goto switchD_00606490_default;
      }
      iVar5 = iVar5 - uVar3;
switchD_00606490_default:
      iVar2 = FUN_006aff50(uStack_40);
      iVar6 = FUN_006aff5b(uStack_40);
      iStack_4c = (iVar6 * iVar5) / 10000 + param_2;
      iStack_50 = (iVar2 * iVar5) / 10000 + param_1;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      iStack_48 = param_3;
      uStack_34 = uVar3 >> 0x10 & 7;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      if ((uVar3 & 0x30000) == 0) {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_44 = (uVar3 >> 0x10) % 0x15;
        iVar2 = 100;
      }
      else {
        uVar3 = uVar3 * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_44 = (uVar3 >> 0x10) % 0x1f;
        iVar2 = 0xf;
      }
      uStack_44 = iVar2 - uStack_44;
      switch(uStack_5c & 0xff) {
      case 0:
      case 1:
      case 2:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_38 = 0x82;
        uStack_3c = (uVar3 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        uStack_38 = 0x8c;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_3c = (uVar3 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_38 = 0x96;
        uStack_3c = (uVar3 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        uStack_38 = 0x9b;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uStack_3c = (uVar3 >> 0x10 & 3) + 4;
      }
      if ((int)((uStack_44 ^ (int)uStack_44 >> 0x1f) - ((int)uStack_44 >> 0x1f)) < 10) {
        uStack_3c = uStack_3c + 2;
        iStack_48 = param_3 + 0x5a;
      }
      puStack_9c = auStack_70;
      STParticleC::GetMessage
                (*(STParticleC **)((int)this + (int)param_5 * 4 + 0x219),(int)auStack_b0);
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < iStack_c);
  }
  return iStack_c;
}

