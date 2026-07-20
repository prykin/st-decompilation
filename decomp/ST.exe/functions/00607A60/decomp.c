
int __thiscall FUN_00607a60(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  AnonShape_00627EB0_4C14C976 *pAVar7;
  AnonNested_00627EB0_0014_B8FBF6AA *pAVar8;
  char in_stack_00000020;
  int local_d0 [20];
  AnonShape_00627EB0_4C14C976 local_80;
  AnonNested_00627EB0_0014_B8FBF6AA local_60;
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
  undefined4 *local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = thunk_FUN_004406c0(in_stack_00000020);
  local_14 = local_14 & 0xff;
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  iVar5 = (uVar4 >> 0x10) % 0xb + 9;
  local_c = iVar5;
  iVar3 = STExplosionC::CreateGroupPart(this,iVar5);
  *(int *)((int)this + 0x269) = iVar3;
  if (iVar3 != iVar5) {
    return -1;
  }
  iVar3 = 0;
  piVar6 = local_d0;
  do {
    if (iVar3 == iVar5) break;
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    iVar3 = iVar3 + 1;
    *piVar6 = (uVar4 >> 0x10) % 5 + 5;
    iVar5 = local_c;
    piVar6 = piVar6 + 1;
  } while (iVar3 < 5);
  local_8 = 0;
  piVar6 = local_d0 + iVar3;
  do {
    iVar2 = local_c;
    if (iVar3 == iVar5) break;
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    iVar3 = iVar3 + 1;
    *piVar6 = (uVar4 >> 0x10) % 7 + 9;
    local_8 = local_8 + 1;
    iVar5 = iVar2;
    piVar6 = piVar6 + 1;
  } while (local_8 < 0x14);
  if (((int)local_14 < 2) || (2 < (int)local_14)) {
    local_14 = 1;
  }
  local_8 = 0;
  pAVar7 = &local_80;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar7 = 0;
    pAVar7 = (AnonShape_00627EB0_4C14C976 *)&pAVar7->field_0x4;
  }
  local_80.field_0010 = 2;
  if (0 < iVar5) {
    local_10 = local_d0;
    local_18 = (undefined4 *)((int)this + 0x219);
    do {
      iVar5 = local_8;
      pAVar8 = &local_60;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        pAVar8->field_0000 = 0;
        pAVar8 = (AnonNested_00627EB0_0014_B8FBF6AA *)&pAVar8->field_0x4;
      }
      *(undefined2 *)&pAVar8->field_0000 = 0;
      puVar1 = local_18;
      local_60._8_4_ = 0;
      local_60.field_000C = 0;
      local_60.field_0000 = 100;
      local_1e = iVar5;
      local_4c = *local_10;
      if ((byte)local_4c < 0xb) {
        if ((byte)local_4c < 5) {
          local_1f = 1;
        }
        else {
          iVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar5;
          local_1f = (byte)((uint)iVar5 >> 0x10) & 1;
        }
      }
      else {
        local_1f = 0;
      }
      iVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      local_44 = local_14;
      *(int *)((int)this + 0x1c) = iVar5;
      uVar4 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      local_38 = (param_3 - (uVar4 >> 0x10) % 0xb5) + 0x5a;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      local_40 = (param_1 - (uVar4 >> 0x10) % 0x29) + 0x14;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      local_3c = (param_2 - (uVar4 >> 0x10) % 0x29) + 0x14;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      local_30 = (uVar4 >> 0x10) % 0x169;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      local_34 = 0xf - (uVar4 >> 0x10) % 0x1f;
      switch(local_4c) {
      case 0:
      case 1:
      case 2:
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_28 = 0x7d;
        local_2c = (uVar4 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_28 = 0x87;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_2c = (uVar4 >> 0x10 & 3) + 2;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_28 = 0x91;
        local_2c = (uVar4 >> 0x10) % 5 + 3;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_28 = 0x96;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_2c = (uVar4 >> 0x10 & 3) + 5;
      }
      local_80.field_0014 = &local_60;
      STParticleC::GetMessage((STParticleC *)*local_18,&local_80);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = puVar1 + 1;
      iVar5 = local_c;
    } while (local_8 < local_c);
  }
  return iVar5;
}

