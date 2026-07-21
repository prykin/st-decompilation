
int __thiscall
FUN_00607200(void *this,int param_1,int param_2,int param_3,Global_sub_00606CD0_param_1Enum param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  STMessage *pSVar8;
  undefined4 *puVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  uint local_10c [20];
  STMessage local_bc;
  int local_9c [8];
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68 [5];
  uint local_54;
  Global_sub_00606CD0_param_1Enum local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  byte local_27;
  int local_26;
  undefined4 *local_20;
  int local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_10 = GetPlayerRaceId(in_stack_00000020);
  local_10 = local_10 & 0xff;
  local_14 = thunk_FUN_00606cd0(param_4,&local_6c,&local_78,&local_1c,&local_7c);
  uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar1;
  iVar6 = (uVar1 >> 0x10) % (local_6c + 1U) + 9;
  local_c = iVar6;
  iVar2 = STExplosionC::CreateGroupPart(this,iVar6);
  *(int *)((int)this + 0x269) = iVar2;
  if (iVar2 != iVar6) {
    return -1;
  }
  piVar7 = local_9c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_8 = 0;
  if (0 < local_78) {
    puVar3 = local_10c;
    local_8 = local_78;
    iVar2 = local_78;
    do {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      uVar1 = (uVar1 >> 0x10) % 7;
      if (0 < local_9c[uVar1]) {
        iVar6 = 0;
        do {
          if (6 < iVar6) break;
          uVar1 = uVar1 + 1;
          if (6 < (int)uVar1) {
            uVar1 = 0;
          }
          iVar6 = iVar6 + 1;
        } while (local_9c[uVar1] != 0);
      }
      iVar6 = local_9c[uVar1];
      *puVar3 = uVar1;
      local_9c[uVar1] = iVar6 + 1;
      if (local_10 == 1) {
        uVar1 = uVar1 | 0x800;
LAB_0060731e:
        *puVar3 = uVar1;
      }
      else {
        if (local_10 == 2) {
          uVar1 = uVar1 | 0x200;
          goto LAB_0060731e;
        }
        if (local_10 == 3) {
          uVar1 = uVar1 | 0x4000;
          goto LAB_0060731e;
        }
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (0 < local_1c) {
    puVar3 = local_10c + local_8;
    do {
      uVar1 = local_10;
      if (local_8 == local_c) break;
      *puVar3 = 0;
      if (uVar1 == 1) {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = (uint)CONCAT11(8,(char)((uVar1 >> 0x10) % 9) + '\a');
LAB_0060740b:
        *puVar3 = uVar1;
      }
      else {
        if (uVar1 == 2) {
          uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar1 = (uint)CONCAT11(2,(char)((uVar1 >> 0x10) % 9) + '\a');
          goto LAB_0060740b;
        }
        if (uVar1 == 3) {
          uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar1;
          if ((uVar1 & 0x30000) != 0) {
            uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar1 = (uint)CONCAT11(0x20,(char)((uVar1 >> 0x10) % 5) + '\x05');
            goto LAB_0060740b;
          }
          iVar6 = uVar1 * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar6;
          *puVar3 = (uint)CONCAT11(0x40,((byte)((uint)iVar6 >> 0x10) & 1) + 7);
        }
      }
      puVar3 = puVar3 + 1;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  iVar2 = 0;
  puVar3 = local_10c + local_8;
  do {
    if (local_8 == local_c) break;
    if (local_10 == 3) {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      if ((uVar1 >> 0x10) % 3 != 0) {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
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
    local_8 = local_8 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  pSVar8 = &local_bc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar8->unknown_00 = 0;
    pSVar8 = (STMessage *)&pSVar8->unknown_04;
  }
  local_bc.id = MESS_ID_CREATE;
  local_8 = 0;
  if (0 < local_c) {
    local_18 = local_10c;
    local_20 = (undefined4 *)((int)this + 0x219);
    do {
      iVar2 = local_8;
      puVar9 = local_68;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_54 = *local_18;
      local_68[0] = 100;
      local_50 = param_4;
      if ((byte)local_54 < 0xb) {
        if ((byte)local_54 < 5) {
          local_27 = 1;
        }
        else {
          iVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar6;
          local_27 = (byte)((uint)iVar6 >> 0x10) & 1;
        }
      }
      else {
        local_27 = 0;
      }
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      local_38 = (uVar1 >> 0x10) % 0x169;
      if (local_10 == 0) {
        local_4c = local_7c;
      }
      else {
        local_4c = local_10;
      }
      local_26 = iVar2;
      if ((iVar2 < 6) || (iVar2 % 3 != 0)) {
        local_74 = FUN_006aff5b(local_38);
        local_70 = FUN_006aff50(local_38);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar5 = (int)(((uVar4 >> 0x10) % uVar1 + local_14 / 2) * local_70) / 10000;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = (int)(((uVar4 >> 0x10) % uVar1 + local_14 / 2) * local_74) / 10000;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_3c = (uVar4 >> 0x10) % 0x29;
        iVar2 = 0x14;
      }
      else {
        FUN_006aff5b(local_38);
        FUN_006aff50(local_38);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar5 = (uVar4 >> 0x10) % uVar1;
        uVar4 = uVar4 * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        uVar1 = (uVar4 >> 0x10) % uVar1;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_3c = (uVar4 >> 0x10) % 0x1f;
        iVar2 = 0x82;
      }
      puVar9 = local_20;
      local_44 = uVar1 + param_2;
      local_48 = uVar5 + param_1;
      local_3c = iVar2 - local_3c;
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      local_40 = param_3;
      *(uint *)((int)this + 0x1c) = uVar1;
      local_2c = uVar1 >> 0x10 & 7;
      switch(local_54) {
      case 0:
      case 1:
      case 2:
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_30 = 0x7d;
        local_34 = (uVar1 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_30 = 0x87;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_34 = (uVar1 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_30 = 0x91;
        local_34 = (uVar1 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_30 = 0x96;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_34 = (uVar1 >> 0x10) % 3 + 4;
      }
      iVar2 = (local_3c ^ (int)local_3c >> 0x1f) - ((int)local_3c >> 0x1f);
      if (iVar2 < 0x14) {
        if (iVar2 < 10) {
          local_34 = local_34 + 5;
          local_40 = param_3 + 0x5a;
        }
        else {
          local_34 = local_34 + 3;
          local_40 = param_3 + 0x50;
        }
      }
      local_bc.arg0.ptr = local_68;
      STParticleC::GetMessage((STParticleC *)*local_20,&local_bc);
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      local_20 = puVar9 + 1;
    } while (local_8 < local_c);
  }
  return local_c;
}

