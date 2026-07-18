
int __thiscall
FUN_00606050(void *this,int param_1,int param_2,int param_3,int param_4,uint *param_5,
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
  uint local_100 [20];
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined4 *local_9c;
  int local_90 [6];
  int local_78;
  undefined4 local_74;
  undefined4 local_70 [5];
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  byte local_2f;
  uint *local_2e;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  byte *local_10;
  int local_c;
  char local_5;
  
  iVar5 = 0;
  local_5 = '\0';
  local_18 = thunk_FUN_004406c0((char)param_8);
  local_18 = local_18 & 0xff;
  if (param_4 == 0x21) {
    *(int *)((int)this + 0x2b7) = param_7;
  }
  local_74 = thunk_FUN_00606a50((int)param_5);
  local_14 = thunk_FUN_00607ee0(param_4,&local_10,&local_78,&local_28,&local_1c,&local_24);
  if (0 < (int)local_24) {
    local_18 = local_24;
  }
  if ((param_4 == 0x15) || (param_4 == 9)) {
    local_28 = 0;
    local_5 = '\x01';
    if (param_4 == 0x15) {
      local_1c = 0;
    }
  }
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar6 = (uVar3 >> 0x10) % (local_78 + 1U) + 9;
  local_c = iVar6;
  iVar2 = thunk_FUN_006041a0(iVar6);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar6) {
    return -1;
  }
  iVar6 = 0;
  piVar7 = local_90;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  param_7 = 0;
  if (0 < local_28) {
    param_5 = local_100;
    local_20 = local_28;
    do {
      bVar1 = *local_10;
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          uVar3 = 0;
          goto LAB_00606189;
        }
      }
      else {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 3];
LAB_00606189:
        if (local_90[uVar3 & 0x7f] != 0) {
          iVar2 = 0;
          do {
            if (4 < iVar2) break;
            uVar3 = uVar3 + 1;
            if (4 < ((byte)uVar3 & 0x7f)) {
              uVar3 = uVar3 & 0x80;
            }
            iVar2 = iVar2 + 1;
          } while (local_90[uVar3 & 0x7f] != 0);
        }
        *param_5 = uVar3;
        local_90[uVar3 & 0x7f] = local_90[uVar3 & 0x7f] + 1;
        if ((local_18 != 3) &&
           (uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039,
           *(uint *)((int)this + 0x1c) = uVar4, (uVar4 & 0x10000) != 0)) {
          *param_5 = uVar3 | 0x100;
        }
        iVar6 = param_7 + 1;
        param_5 = param_5 + 1;
        param_7 = iVar6;
      }
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  param_5 = (uint *)0x0;
  if (0 < local_1c) {
    puVar8 = local_100 + iVar6;
    do {
      if (iVar6 == local_c) break;
      bVar1 = local_10[1];
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          *puVar8 = 0;
          goto LAB_00606282;
        }
      }
      else {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        *puVar8 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 0xd];
LAB_00606282:
        if (((local_5 == '\0') && (local_18 != 3)) &&
           (uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039,
           *(uint *)((int)this + 0x1c) = uVar3, (uVar3 & 0x10000) != 0)) {
          *puVar8 = *puVar8 | 0x100;
        }
        iVar6 = param_7 + 1;
        puVar8 = puVar8 + 1;
        param_7 = iVar6;
      }
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < local_1c);
  }
  param_5 = (uint *)0x0;
  puVar8 = local_100 + iVar6;
  do {
    if (iVar6 == local_c) break;
    bVar1 = local_10[2];
    if (bVar1 < 2) {
      if (bVar1 == 1) {
        *puVar8 = 0;
        goto LAB_00606321;
      }
    }
    else {
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      *puVar8 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 0x19];
LAB_00606321:
      iVar6 = param_7 + 1;
      puVar8 = puVar8 + 1;
      param_7 = iVar6;
    }
    param_5 = (uint *)((int)param_5 + 1);
  } while ((int)param_5 < 0x14);
  puVar9 = local_b0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_a0 = 2;
  if (iVar6 < local_c) {
    local_c = iVar6;
  }
  param_5 = (uint *)0x0;
  if (0 < local_c) {
    do {
      puVar9 = local_70;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      local_54 = local_18;
      local_70[1] = param_8;
      local_30 = param_9;
      local_70[0] = 100;
      local_70[2] = 0;
      local_70[3] = 0;
      local_2e = param_5;
      local_58 = param_4;
      if (local_18 == 3) {
        if (((param_5 == (uint *)0x0) && (param_4 != 0x2b)) &&
           ((param_4 != 0xfd && (param_4 != 0xfe)))) {
          local_100[0] = 0x8000;
        }
        else {
          uVar3 = local_100[(int)param_5];
          if ((uVar3 & 0x80) == 0) {
            uVar3 = uVar3 & 0xffffff7f | 0x1000;
          }
          else {
            uVar3 = uVar3 & 0xffffff7f | 0x2000;
          }
LAB_006063f9:
          local_100[(int)param_5] = uVar3;
        }
      }
      else if ((local_100[(int)param_5] & 0x80) != 0) {
        uVar3 = local_100[(int)param_5] & 0xffffff7f | 0x100;
        goto LAB_006063f9;
      }
      local_5c = local_100[(int)param_5];
      if ((byte)local_5c < 0xb) {
        if ((byte)local_5c < 5) {
          local_2f = 1;
        }
        else {
          iVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar2;
          local_2f = (byte)((uint)iVar2 >> 0x10) & 1;
        }
      }
      else {
        local_2f = 0;
      }
      if (local_54 == 0) {
        local_54 = local_24;
      }
      else {
      }
      if (param_4 == 9) {
        local_54 = 4;
      }
      else if (param_4 == 0x15) {
        local_54 = 2;
      }
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_40 = (uVar3 >> 0x10) % 0x169;
      switch(local_74) {
      case 0:
      case 4:
        if (((local_40 < 0x2e) || (0x13a < local_40)) || ((0x86 < local_40 && (local_40 < 0xe2)))) {
          uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar3;
          uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
          iVar5 = local_14 / 2;
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
        if ((0x5a < local_40) && ((local_40 < 0xb4 || (0x10e < local_40)))) {
LAB_006065f8:
          iVar5 = *(int *)((int)this + 0x1c);
          goto LAB_00606606;
        }
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
        iVar5 = local_14 / 2;
        break;
      case 2:
      case 6:
        if (((local_40 < 0x2d) || (0x87 < local_40)) && ((local_40 < 0xe1 || (0x13b < local_40))))
        goto LAB_006064b4;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        iVar5 = local_14 / 2 - ((uVar3 >> 0x10) % (local_14 + 1U) >> 3);
        goto switchD_00606490_default;
      case 3:
      case 7:
        if (((local_40 < 0x5a) || (0xb4 < local_40)) && ((local_40 < 0x10e || (0x168 < local_40))))
        goto LAB_006065f8;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
        iVar5 = local_14 / 2;
        break;
      default:
        goto switchD_00606490_default;
      }
      iVar5 = iVar5 - uVar3;
switchD_00606490_default:
      iVar2 = FUN_006aff50(local_40);
      iVar6 = FUN_006aff5b(local_40);
      local_4c = (iVar6 * iVar5) / 10000 + param_2;
      local_50 = (iVar2 * iVar5) / 10000 + param_1;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_48 = param_3;
      local_34 = uVar3 >> 0x10 & 7;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      if ((uVar3 & 0x30000) == 0) {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_44 = (uVar3 >> 0x10) % 0x15;
        iVar2 = 100;
      }
      else {
        uVar3 = uVar3 * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_44 = (uVar3 >> 0x10) % 0x1f;
        iVar2 = 0xf;
      }
      local_44 = iVar2 - local_44;
      switch(local_5c & 0xff) {
      case 0:
      case 1:
      case 2:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_38 = 0x82;
        local_3c = (uVar3 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_38 = 0x8c;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_3c = (uVar3 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_38 = 0x96;
        local_3c = (uVar3 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_38 = 0x9b;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_3c = (uVar3 >> 0x10 & 3) + 4;
      }
      if ((int)((local_44 ^ (int)local_44 >> 0x1f) - ((int)local_44 >> 0x1f)) < 10) {
        local_3c = local_3c + 2;
        local_48 = param_3 + 0x5a;
      }
      local_9c = local_70;
      thunk_FUN_00627eb0((int)local_b0);
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < local_c);
  }
  return local_c;
}

