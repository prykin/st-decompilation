
int __thiscall FUN_00607a60(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char in_stack_00000020;
  int local_d0 [20];
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_60 [5];
  int local_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  byte local_1f;
  int local_1e;
  int local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = thunk_FUN_004406c0(in_stack_00000020);
  local_14 = local_14 & 0xff;
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar4 = (uVar3 >> 0x10) % 0xb + 9;
  local_c = iVar4;
  iVar2 = thunk_FUN_006041a0(iVar4);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar4) {
    return -1;
  }
  iVar2 = 0;
  piVar5 = local_d0;
  do {
    if (iVar2 == iVar4) break;
    uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar3;
    iVar2 = iVar2 + 1;
    *piVar5 = (uVar3 >> 0x10) % 5 + 5;
    iVar4 = local_c;
    piVar5 = piVar5 + 1;
  } while (iVar2 < 5);
  local_8 = 0;
  piVar5 = local_d0 + iVar2;
  do {
    iVar1 = local_c;
    if (iVar2 == iVar4) break;
    uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar3;
    iVar2 = iVar2 + 1;
    *piVar5 = (uVar3 >> 0x10) % 7 + 9;
    local_8 = local_8 + 1;
    iVar4 = iVar1;
    piVar5 = piVar5 + 1;
  } while (local_8 < 0x14);
  if (((int)local_14 < 2) || (2 < (int)local_14)) {
    local_14 = 1;
  }
  local_8 = 0;
  puVar6 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_70 = 2;
  if (0 < iVar4) {
    local_10 = local_d0;
    local_18 = (int)this + 0x219;
    do {
      iVar4 = local_8;
      puVar6 = local_60;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      iVar2 = local_18;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 100;
      local_1e = iVar4;
      local_4c = *local_10;
      if ((byte)local_4c < 0xb) {
        if ((byte)local_4c < 5) {
          local_1f = 1;
        }
        else {
          iVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar4;
          local_1f = (byte)((uint)iVar4 >> 0x10) & 1;
        }
      }
      else {
        local_1f = 0;
      }
      iVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      local_44 = local_14;
      *(int *)((int)this + 0x1c) = iVar4;
      uVar3 = iVar4 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_38 = (param_3 - (uVar3 >> 0x10) % 0xb5) + 0x5a;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_40 = (param_1 - (uVar3 >> 0x10) % 0x29) + 0x14;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_3c = (param_2 - (uVar3 >> 0x10) % 0x29) + 0x14;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_30 = (uVar3 >> 0x10) % 0x169;
      uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar3;
      local_34 = 0xf - (uVar3 >> 0x10) % 0x1f;
      switch(local_4c) {
      case 0:
      case 1:
      case 2:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_28 = 0x7d;
        local_2c = (uVar3 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_28 = 0x87;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_2c = (uVar3 >> 0x10 & 3) + 2;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_28 = 0x91;
        local_2c = (uVar3 >> 0x10) % 5 + 3;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_28 = 0x96;
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        local_2c = (uVar3 >> 0x10 & 3) + 5;
      }
      local_6c = local_60;
      thunk_FUN_00627eb0((int)local_80);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = iVar2 + 4;
      iVar4 = local_c;
    } while (local_8 < local_c);
  }
  return iVar4;
}

