
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00728640.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=3; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00728640::FUN_00728a80
          (AnonReceiver_00728640 *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  AnonShape_00728A80_F2811CDB *local_10;
  int local_c;
  int local_8;
  
  iVar15 = (int)*(short *)(DAT_00857110 + 2 + DAT_00857114 * 8);
  iVar14 = *(int *)&this->field_0x28;
  param_1 = param_1 + iVar15 * param_2;
  local_8 = *(int *)&this->field_0xc + iVar15 * iVar14;
  local_c = *(int *)&this->field_0x14 + iVar15 * iVar14 * 2;
  local_38 = 1;
  local_1c = iVar14;
  local_14 = iVar15;
  local_10 = (AnonShape_00728A80_F2811CDB *)this;
  iVar6 = FUN_007287e0(&local_38,DAT_00857114);
  if (iVar6 != 0) {
    local_54 = -1;
    iVar6 = FUN_007287e0(&local_54,DAT_00857114);
    if ((iVar6 != 0) && (iVar15 < *(int *)&this->field_0x3c)) {
      do {
        if (*(int *)&this->field_0x34 <= iVar15) {
          iVar6 = local_48 >> 0x10;
          iVar7 = local_2c >> 0x10;
          iVar14 = local_1c;
          iVar15 = local_14;
          this = (AnonReceiver_00728640 *)local_10;
          if (iVar6 - iVar7 != 0 && iVar7 <= iVar6) {
            local_18 = local_24;
            DAT_00857108 = (int)(local_40 - local_24) / (iVar6 - iVar7);
            if (local_10->field_0038 <= iVar6) {
              iVar6 = local_10->field_0038;
            }
            if (iVar7 < local_10->field_0030) {
              local_18 = local_24 + (local_10->field_0030 - iVar7) * DAT_00857108;
              iVar7 = local_10->field_0030;
            }
            iVar8 = iVar6 - iVar7;
            if (iVar8 != 0 && iVar7 <= iVar6) {
              iVar6 = local_c + iVar7 * 2;
              if (DAT_00857108 * iVar8 + local_18 < *(uint *)(iVar6 + -4 + iVar8 * 2)) {
                if (*(uint *)(iVar6 + -2) < local_18) goto LAB_00728cb0;
                if (iVar8 + -8 != 0 && 7 < iVar8) {
                  iVar10 = iVar8 + -8;
                  uVar11 = local_18;
                  do {
                    uVar11 = uVar11 + DAT_00857108 * 8;
                    if (*(uint *)(iVar6 + 0xe) < uVar11) goto LAB_00728cb0;
                    iVar9 = iVar10 + -8;
                    bVar5 = 7 < iVar10;
                    iVar10 = iVar9;
                    iVar6 = iVar6 + 0x10;
                  } while (iVar9 != 0 && bVar5);
                }
                puVar13 = (uint *)(iVar7 + param_1);
                pbVar16 = (byte *)(local_8 + iVar7);
                uVar11 = 0;
                if (2 < iVar8) {
                  uVar11 = (uint)*pbVar16;
                  if (((uint)puVar13 & 1) != 0) {
                    pbVar16 = pbVar16 + 1;
                    *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar11);
                    puVar13 = (uint *)((int)puVar13 + 1);
                    iVar8 = iVar8 + -1;
                    uVar11 = (uint)*pbVar16;
                  }
                  if (((uint)puVar13 & 2) != 0) {
                    pbVar1 = pbVar16 + 1;
                    pbVar16 = pbVar16 + 2;
                    iVar8 = iVar8 + -2;
                    *(ushort *)puVar13 =
                         CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar1),
                                  *(undefined1 *)(param_3 + uVar11));
                    uVar11 = (uint)*pbVar16;
                    puVar13 = (uint *)((int)puVar13 + 2);
                  }
                  while (3 < iVar8) {
                    pbVar1 = pbVar16 + 2;
                    uVar12 = CONCAT11(*(undefined1 *)(param_3 + (uint)pbVar16[1]),
                                      *(undefined1 *)(param_3 + uVar11));
                    pbVar2 = pbVar16 + 3;
                    pbVar16 = pbVar16 + 4;
                    *puVar13 = (uint)uVar12 |
                               CONCAT22(uVar12,CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar2),
                                                        *(undefined1 *)(param_3 + (uint)*pbVar1)))
                               << 0x10;
                    uVar11 = (uint)*pbVar16;
                    puVar13 = puVar13 + 1;
                    iVar8 = iVar8 + -4;
                  }
                  if (iVar8 == 0) goto LAB_00728cf9;
                }
                bVar4 = pbVar16[1];
                *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar11);
                if (iVar8 != 1) {
                  bVar3 = pbVar16[2];
                  *(undefined1 *)((int)puVar13 + 1) = *(undefined1 *)(param_3 + (uint)bVar4);
                  if (iVar8 != 2) {
                    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)(param_3 + (uint)bVar3);
                  }
                }
              }
              else if (*(uint *)(iVar6 + -2) < local_18) {
                if (iVar8 + -8 != 0 && 7 < iVar8) {
                  iVar10 = iVar8 + -8;
                  uVar11 = local_18;
                  do {
                    uVar11 = uVar11 + DAT_00857108 * 8;
                    if (uVar11 <= *(uint *)(iVar6 + 0xe)) goto LAB_00728cb0;
                    iVar9 = iVar10 + -8;
                    bVar5 = 7 < iVar10;
                    iVar10 = iVar9;
                    iVar6 = iVar6 + 0x10;
                  } while (iVar9 != 0 && bVar5);
                }
              }
              else {
LAB_00728cb0:
                puVar17 = (undefined1 *)(iVar7 + param_1);
                pbVar16 = (byte *)(local_8 + iVar7);
                puVar13 = (uint *)(local_c + iVar7 * 2);
                do {
                  uVar11 = *(uint *)((int)puVar13 + -2);
                  iVar6 = iVar8;
                  puVar18 = puVar17;
                  while (uVar11 < local_18) {
                    pbVar16 = pbVar16 + 1;
                    puVar18 = puVar18 + 1;
                    if (iVar6 + -1 == 0 || iVar6 < 1) goto LAB_00728cf9;
                    uVar11 = *puVar13;
                    iVar6 = iVar6 + -1;
                    puVar13 = (uint *)((int)puVar13 + 2);
                  }
                  bVar4 = *pbVar16;
                  puVar17 = puVar18 + 1;
                  pbVar16 = pbVar16 + 1;
                  puVar13 = (uint *)((int)puVar13 + 2);
                  iVar8 = iVar6 + -1;
                  *puVar18 = *(undefined1 *)(param_3 + (uint)bVar4);
                } while (iVar8 != 0 && 0 < iVar6);
              }
            }
          }
        }
LAB_00728cf9:
        local_34 = local_34 + -1;
        if (local_34 == 0) {
          iVar6 = FUN_007287e0(&local_38,local_30);
          if (iVar6 == 0) {
            return;
          }
        }
        else {
          local_2c = local_2c + local_28;
          local_24 = local_24 + local_20;
        }
        local_50 = local_50 + -1;
        if (local_50 == 0) {
          iVar6 = FUN_007287e0(&local_54,local_4c);
          if (iVar6 == 0) {
            return;
          }
        }
        else {
          local_48 = local_48 + local_44;
          local_40 = local_40 + local_3c;
        }
        local_8 = local_8 + iVar14;
        param_1 = param_1 + param_2;
        iVar15 = iVar15 + 1;
        local_c = local_c + iVar14 * 2;
        local_14 = iVar15;
      } while (iVar15 < *(int *)&this->field_0x3c);
    }
  }
  return;
}

