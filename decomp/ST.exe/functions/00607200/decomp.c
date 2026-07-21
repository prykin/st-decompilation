
int __thiscall
FUN_00607200(void *this,int param_1,int param_2,int param_3,Global_sub_00606CD0_param_1Enum param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  AnonShape_00627EB0_4C14C976 *pAVar9;
  AnonNested_00627EB0_0014_B8FBF6AA *pAVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  uint local_10c [20];
  AnonShape_00627EB0_4C14C976 local_bc;
  int local_9c [8];
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  AnonNested_00627EB0_0014_B8FBF6AA local_68;
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
  uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar2;
  iVar7 = (uVar2 >> 0x10) % (local_6c + 1U) + 9;
  local_c = iVar7;
  iVar3 = STExplosionC::CreateGroupPart(this,iVar7);
  *(int *)((int)this + 0x269) = iVar3;
  if (iVar3 != iVar7) {
    return -1;
  }
  piVar8 = local_9c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_8 = 0;
  if (0 < local_78) {
    puVar4 = local_10c;
    local_8 = local_78;
    iVar3 = local_78;
    do {
      uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar2;
      uVar2 = (uVar2 >> 0x10) % 7;
      if (0 < local_9c[uVar2]) {
        iVar7 = 0;
        do {
          if (6 < iVar7) break;
          uVar2 = uVar2 + 1;
          if (6 < (int)uVar2) {
            uVar2 = 0;
          }
          iVar7 = iVar7 + 1;
        } while (local_9c[uVar2] != 0);
      }
      iVar7 = local_9c[uVar2];
      *puVar4 = uVar2;
      local_9c[uVar2] = iVar7 + 1;
      if (local_10 == 1) {
        uVar2 = uVar2 | 0x800;
LAB_0060731e:
        *puVar4 = uVar2;
      }
      else {
        if (local_10 == 2) {
          uVar2 = uVar2 | 0x200;
          goto LAB_0060731e;
        }
        if (local_10 == 3) {
          uVar2 = uVar2 | 0x4000;
          goto LAB_0060731e;
        }
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (0 < local_1c) {
    puVar4 = local_10c + local_8;
    do {
      uVar2 = local_10;
      if (local_8 == local_c) break;
      *puVar4 = 0;
      if (uVar2 == 1) {
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar2 = (uint)CONCAT11(8,(char)((uVar2 >> 0x10) % 9) + '\a');
LAB_0060740b:
        *puVar4 = uVar2;
      }
      else {
        if (uVar2 == 2) {
          uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar2 = (uint)CONCAT11(2,(char)((uVar2 >> 0x10) % 9) + '\a');
          goto LAB_0060740b;
        }
        if (uVar2 == 3) {
          uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar2;
          if ((uVar2 & 0x30000) != 0) {
            uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar2;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar2 = (uint)CONCAT11(0x20,(char)((uVar2 >> 0x10) % 5) + '\x05');
            goto LAB_0060740b;
          }
          iVar7 = uVar2 * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar7;
          *puVar4 = (uint)CONCAT11(0x40,((byte)((uint)iVar7 >> 0x10) & 1) + 7);
        }
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c);
  }
  iVar3 = 0;
  puVar4 = local_10c + local_8;
  do {
    if (local_8 == local_c) break;
    if (local_10 == 3) {
      uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar2;
      if ((uVar2 >> 0x10) % 3 != 0) {
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar2 = (uint)CONCAT11(0x10,(char)((ulonglong)(uVar2 >> 0x10) % 3));
        goto LAB_006074c8;
      }
      iVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      *puVar4 = (uint)CONCAT11(0x20,((byte)((uint)iVar7 >> 0x10) & 3) + 6);
    }
    else {
      uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar2;
      uVar2 = (uVar2 >> 0x10) % 7 + 9;
LAB_006074c8:
      *puVar4 = uVar2;
    }
    puVar4 = puVar4 + 1;
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  pAVar9 = &local_bc;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar9 = 0;
    pAVar9 = (AnonShape_00627EB0_4C14C976 *)&pAVar9->field_0x4;
  }
  local_bc.field_0010 = 2;
  local_8 = 0;
  if (0 < local_c) {
    local_18 = local_10c;
    local_20 = (undefined4 *)((int)this + 0x219);
    do {
      iVar3 = local_8;
      pAVar10 = &local_68;
      for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
        pAVar10->field_0000 = 0;
        pAVar10 = (AnonNested_00627EB0_0014_B8FBF6AA *)&pAVar10->field_0x4;
      }
      *(undefined2 *)&pAVar10->field_0000 = 0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_68._8_4_ = 0;
      local_68.field_000C = 0;
      local_54 = *local_18;
      local_68.field_0000 = 100;
      local_50 = param_4;
      if ((byte)local_54 < 0xb) {
        if ((byte)local_54 < 5) {
          local_27 = 1;
        }
        else {
          iVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)((int)this + 0x1c) = iVar7;
          local_27 = (byte)((uint)iVar7 >> 0x10) & 1;
        }
      }
      else {
        local_27 = 0;
      }
      uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar2;
      local_38 = (uVar2 >> 0x10) % 0x169;
      if (local_10 == 0) {
        local_4c = local_7c;
      }
      else {
        local_4c = local_10;
      }
      local_26 = iVar3;
      if ((iVar3 < 6) || (iVar3 % 3 != 0)) {
        local_74 = FUN_006aff5b(local_38);
        local_70 = FUN_006aff50(local_38);
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        uVar2 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar6 = (int)(((uVar5 >> 0x10) % uVar2 + local_14 / 2) * local_70) / 10000;
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        uVar2 = (int)(((uVar5 >> 0x10) % uVar2 + local_14 / 2) * local_74) / 10000;
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        local_3c = (uVar5 >> 0x10) % 0x29;
        iVar3 = 0x14;
      }
      else {
        FUN_006aff5b(local_38);
        FUN_006aff50(local_38);
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        uVar2 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar6 = (uVar5 >> 0x10) % uVar2;
        uVar5 = uVar5 * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        uVar2 = (uVar5 >> 0x10) % uVar2;
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        local_3c = (uVar5 >> 0x10) % 0x1f;
        iVar3 = 0x82;
      }
      puVar1 = local_20;
      local_44 = uVar2 + param_2;
      local_48 = uVar6 + param_1;
      local_3c = iVar3 - local_3c;
      uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      local_40 = param_3;
      *(uint *)((int)this + 0x1c) = uVar2;
      local_2c = uVar2 >> 0x10 & 7;
      switch(local_54) {
      case 0:
      case 1:
      case 2:
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        local_30 = 0x7d;
        local_34 = (uVar2 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_30 = 0x87;
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        local_34 = (uVar2 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        local_30 = 0x91;
        local_34 = (uVar2 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_30 = 0x96;
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        local_34 = (uVar2 >> 0x10) % 3 + 4;
      }
      iVar3 = (local_3c ^ (int)local_3c >> 0x1f) - ((int)local_3c >> 0x1f);
      if (iVar3 < 0x14) {
        if (iVar3 < 10) {
          local_34 = local_34 + 5;
          local_40 = param_3 + 0x5a;
        }
        else {
          local_34 = local_34 + 3;
          local_40 = param_3 + 0x50;
        }
      }
      local_bc.field_0014 = &local_68;
      STParticleC::GetMessage((STParticleC *)*local_20,&local_bc);
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      local_20 = puVar1 + 1;
    } while (local_8 < local_c);
  }
  return local_c;
}

