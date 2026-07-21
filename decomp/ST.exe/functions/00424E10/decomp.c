
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Td3dshad.cpp
   Diagnostic line evidence: 1376 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=36; incoming_edx_uses=0; calls=7;
   ecx_pointer_setup=7; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=21; adopt_untyped_existing_thiscall */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10
          (AnonReceiver_004248D0 *this,int param_1,float param_2,float param_3,float param_4,
          int param_5,int param_6,int *param_7)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint *puVar24;
  byte *pbVar25;
  uint uVar26;
  longlong lVar27;
  Global_sub_004248D0_param_5Enum GVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  Global_sub_004248D0_param_6Enum GVar31;
  int local_140;
  byte *local_138;
  int local_12c;
  int local_f0;
  uint *local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  int local_c4;
  float local_c0;
  uint local_b4;
  uint *local_a8;
  uint *local_a4;
  short *local_a0;
  int local_9c;
  byte *local_94;
  int local_90;
  undefined4 local_8c;
  float local_84;
  float local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  float local_68;
  uint *local_64;
  int local_60;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_40;
  char *local_3c;
  byte *local_38;
  uint local_34;
  int local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  iVar17 = param_6;
  iVar22 = param_5;
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790540;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffea0;
  local_4c = 0;
  local_48 = 0;
  local_54 = 0;
  local_c4 = 0;
  local_d4 = 0;
  local_68 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0;
  local_9c = 0;
  local_a8 = (uint *)0x0;
  local_2c = 0;
  ExceptionList = &local_14;
  puVar9 = &stack0xfffffea0;
  if ((*(int *)&this->field_0x358 != 0) &&
     (ExceptionList = &local_14, puVar9 = &stack0xfffffea0, param_1 != 0)) {
    local_84 = param_2;
    local_80 = param_3;
    local_7c = 0;
    ExceptionList = &local_14;
    iVar10 = FUN_006e25d0(this,&local_78);
    if (iVar10 != 1) {
      if ((((*(int *)&this->field_0x30 <= *(int *)&this->field_0x3d8 + (local_78 >> 0x10)) &&
           ((local_78 >> 0x10) - *(int *)&this->field_0x3d8 < *(int *)&this->field_0x38)) &&
          (*(int *)&this->field_0x34 <= *(int *)&this->field_0x3d4 + (local_74 >> 0x10))) &&
         ((local_74 >> 0x10) - *(int *)&this->field_0x3d0 < *(int *)&this->field_0x3c)) {
        local_84 = (float)param_5 * (float)*(double *)&this->field_0x368 + local_84;
        iVar11 = FUN_006e25d0(this,&local_78);
        iVar10 = 1;
        if (iVar11 != 1) {
          local_80 = (float)param_6 * (float)*(double *)&this->field_0x368 + local_80;
          iVar11 = FUN_006e25d0(this,&local_78);
          iVar10 = 1;
          if (iVar11 != 1) {
            local_84 = param_2;
            iVar11 = FUN_006e25d0(this,&local_78);
            iVar10 = 1;
            if (iVar11 != 1) {
              local_84 = param_2;
              local_80 = param_3;
              local_7c = 0x424751eb;
              iVar11 = FUN_006e25d0(this,&local_78);
              iVar10 = 1;
              if (iVar11 != 1) {
                local_84 = (float)param_5 * (float)*(double *)&this->field_0x368 + local_84;
                iVar11 = FUN_006e25d0(this,&local_78);
                iVar10 = 1;
                if (iVar11 != 1) {
                  local_80 = (float)param_6 * (float)*(double *)&this->field_0x368 + local_80;
                  iVar11 = FUN_006e25d0(this,&local_78);
                  iVar10 = 1;
                  if (iVar11 != 1) {
                    local_84 = param_2;
                    iVar10 = FUN_006e25d0(this,&local_78);
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = local_1c;
    if (iVar10 != 0) {
      local_28 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
      dVar2 = (double)(param_2 / (float)*(double *)&this->field_0x368);
      Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar27 = Library::MSVCRT::__ftol();
      local_68 = param_2 - (float)(int)lVar27 * (float)*(double *)&this->field_0x368;
      iVar10 = (int)lVar27 - *(int *)&this->field_0x374;
      local_c4 = 0;
      if (*(int *)&this->field_0x370 < iVar10 + param_5) {
        param_5 = *(int *)&this->field_0x370 - iVar10;
        local_2c = 1;
      }
      if (iVar10 < 0) {
        local_c4 = -iVar10;
        param_5 = param_5 + iVar10;
        local_2c = 1;
      }
      dVar2 = (double)(param_3 / (float)*(double *)&this->field_0x368);
      local_48 = iVar10;
      Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar27 = Library::MSVCRT::__ftol();
      local_c0 = param_3 - (float)(int)lVar27 * (float)*(double *)&this->field_0x368;
      local_54 = (int)lVar27 - *(int *)&this->field_0x378;
      local_d4 = 0;
      if (*(int *)&this->field_0x370 < param_6 + local_54) {
        param_6 = *(int *)&this->field_0x370 - local_54;
        local_2c = 1;
      }
      if (local_54 < 0) {
        local_d4 = -local_54;
        param_6 = param_6 + local_54;
        local_2c = 1;
      }
      puVar9 = local_1c;
      if ((0 < param_5) && (0 < param_6)) {
        Library::MSVCRT::FUN_0072e150
                  (SUB84((double)(param_4 * _DAT_00790538),0),
                   (uint)((ulonglong)(double)(param_4 * _DAT_00790538) >> 0x20));
        lVar27 = Library::MSVCRT::__ftol();
        local_60 = (int)lVar27;
        if ((((param_7[7] != 0) &&
             ((pbVar25 = (byte *)param_7[8], pbVar25 != (byte *)0x0 && (param_7[6] == param_1)))) &&
            (local_c4 == param_7[2])) && (local_d4 == param_7[3])) {
          iVar11 = *(int *)&this->field_0x374;
          iVar18 = *param_7;
          if ((iVar11 + iVar10 == iVar18) && (local_54 + *(int *)&this->field_0x378 == param_7[1]))
          {
            if (((float)param_7[4] == local_68) && ((float)param_7[5] == local_c0)) {
              ExceptionList = local_14;
              return 2;
            }
            param_7[4] = (int)local_68;
            param_7[5] = (int)local_c0;
            ExceptionList = local_14;
            return 1;
          }
          if (((param_7[7] == 1) && ((*pbVar25 & 4) == 0)) && (local_2c == 0)) {
            iVar4 = *(int *)(pbVar25 + 4);
            psVar5 = *(short **)(pbVar25 + 8);
            iVar6 = *(int *)&this->field_0x378;
            iVar7 = param_7[1];
            psVar19 = psVar5 + 1;
            cVar3 = *(char *)(*(int *)&this->field_0x37c * (*psVar19 - iVar6) +
                              *(int *)&this->field_0x38c + (*psVar5 - iVar11));
            local_f0 = 0;
            if (0 < iVar4) {
              do {
                psVar19[-1] = psVar19[-1] +
                              ((((short)iVar11 - (short)iVar18) + (short)iVar10) -
                              *(short *)&this->field_0x374);
                *psVar19 = *psVar19 +
                           ((((short)iVar6 - (short)iVar7) + (short)local_54) -
                           *(short *)&this->field_0x378);
                if ((*(byte *)(psVar19 + 2) & 2) != 0) {
                  psVar19[-1] = psVar19[-1] + -1;
                }
                if ((*(byte *)(psVar19 + 2) & 1) != 0) {
                  *psVar19 = *psVar19 + -1;
                }
                if (*(char *)((int)*psVar19 * *(int *)&this->field_0x37c + (int)psVar19[-1] +
                             *(int *)&this->field_0x38c) != cVar3) break;
                local_f0 = local_f0 + 1;
                psVar19 = psVar19 + 4;
              } while (local_f0 < iVar4);
            }
            if (iVar4 <= local_f0) {
              local_a0 = (short *)Library::DKW::LIB::FUN_006aac70(iVar4 * 8);
              iVar22 = 0;
              if (0 < iVar4) {
                psVar19 = psVar5 + 1;
                do {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  uVar29 = CONCAT44(0xffffffff,(uint)*(byte *)(psVar19 + 2)) & 0xffffffff00000003;
                  thunk_FUN_004248d0(this,(int)local_a0,iVar22,(int)psVar19[-1],(int)*psVar19,
                                     (Global_sub_004248D0_param_5Enum)uVar29,
                                     (Global_sub_004248D0_param_6Enum)(uVar29 >> 0x20));
                  iVar22 = iVar22 + 1;
                  psVar19 = psVar19 + 4;
                } while (iVar22 < iVar4);
              }
              FUN_006a5e90(psVar5);
              *(short **)(param_7[8] + 8) = local_a0;
              *param_7 = local_48 + *(int *)&this->field_0x374;
              param_7[1] = local_54 + *(int *)&this->field_0x378;
              param_7[4] = (int)local_68;
              param_7[5] = (int)local_c0;
              ExceptionList = local_14;
              return 0;
            }
          }
        }
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_1c = &stack0xfffffea0;
        local_64 = (uint *)&stack0xfffffea0;
        puVar23 = (undefined4 *)&stack0xfffffea0;
        for (uVar15 = (uint)(iVar22 * 4 * iVar17) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined1 *)puVar23 = 0;
          puVar23 = (undefined4 *)((int)puVar23 + 1);
        }
        local_8 = 0xffffffff;
        local_3c = (char *)((local_54 + local_d4) * *(int *)&this->field_0x37c +
                            *(int *)&this->field_0x38c + local_c4 + local_48);
        local_dc = (uint *)(&stack0xfffffea0 + (iVar22 * local_d4 + local_c4) * 4);
        local_140 = param_6 + -1;
        iVar10 = local_c4 >> 3;
        if (0 < local_140) {
          bVar14 = (byte)local_c4 & 7;
          uVar15 = 0x40 >> bVar14;
          pbVar25 = (byte *)(local_28 * local_d4 + iVar10 + 1 + param_1);
          local_138 = (byte *)((local_d4 + 1) * local_28 + iVar10 + 1 + param_1);
          puVar13 = local_dc;
          do {
            puVar13 = puVar13 + iVar22;
            local_12c = param_5 + -1;
            pcVar12 = local_3c + *(int *)&this->field_0x37c;
            local_d8 = (uint)pbVar25[-1];
            local_b4 = (uint)local_138[-1];
            local_94 = local_138;
            local_50 = 0x80 >> bVar14;
            local_34 = uVar15;
            pbVar20 = pbVar25;
            if (uVar15 == 0) {
              local_50 = 0x100;
              local_34 = 0x80;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_d8 = (uint)CONCAT11(pbVar25[-1],*pbVar25);
              pbVar20 = pbVar25 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_b4 = (uint)CONCAT11(local_138[-1],*local_138);
              local_94 = local_138 + 1;
            }
            if ((local_50 & local_d8) != 0) {
              local_40 = *local_3c;
              if (((1 < param_5) && ((local_34 & local_d8) != 0)) && (*local_3c == local_3c[1])) {
                *local_dc = *local_dc | 1;
                puVar13[1 - iVar22] = puVar13[1 - iVar22] | 0x10;
              }
              if (((local_50 & local_b4) != 0) && (local_40 == *pcVar12)) {
                *local_dc = *local_dc | 0x40;
                *puVar13 = *puVar13 | 4;
              }
              if (((1 < param_5) && ((local_34 & local_b4) != 0)) && (local_40 == pcVar12[1])) {
                *local_dc = *local_dc | 0x80;
                puVar13[1] = puVar13[1] | 8;
              }
            }
            pcVar8 = local_3c;
            iVar11 = 1;
            if (1 < local_12c) {
              puVar16 = puVar13 + (1 - iVar22);
              puVar24 = puVar13 + 2;
              do {
                local_c8 = local_50;
                local_50 = local_34;
                local_34 = (int)local_34 >> 1;
                if (local_34 == 0) {
                  local_c8 = 0x200;
                  local_50 = 0x100;
                  local_34 = 0x80;
                  local_d8 = local_d8 << 8 | (uint)*pbVar20;
                  pbVar20 = pbVar20 + 1;
                  local_38 = pbVar20;
                  local_b4 = local_b4 << 8 | (uint)*local_94;
                  local_94 = local_94 + 1;
                }
                if ((local_50 & local_d8) != 0) {
                  local_40 = pcVar8[iVar11];
                  if (((local_34 & local_d8) != 0) && (pcVar8[iVar11] == local_3c[iVar11 + 1])) {
                    *puVar16 = *puVar16 | 1;
                    puVar1 = (uint *)(((int)local_dc - (int)puVar13) + (int)puVar24);
                    *puVar1 = *puVar1 | 0x10;
                  }
                  if (((local_c8 & local_b4) != 0) && (local_40 == pcVar12[iVar11 + -1])) {
                    *puVar16 = *puVar16 | 0x20;
                    puVar24[-2] = puVar24[-2] | 2;
                  }
                  if (((local_50 & local_b4) != 0) && (local_40 == pcVar12[iVar11])) {
                    *puVar16 = *puVar16 | 0x40;
                    puVar24[-1] = puVar24[-1] | 4;
                  }
                  if (((local_34 & local_b4) != 0) && (local_40 == pcVar12[iVar11 + 1])) {
                    *puVar16 = *puVar16 | 0x80;
                    *puVar24 = *puVar24 | 8;
                  }
                }
                iVar11 = iVar11 + 1;
                puVar16 = puVar16 + 1;
                puVar24 = puVar24 + 1;
              } while (iVar11 < param_5 + -1);
            }
            if ((1 < param_5) && ((local_34 & local_d8) != 0)) {
              cVar3 = local_3c[iVar11];
              if (((local_50 & local_b4) != 0) && (cVar3 == pcVar12[iVar11 + -1])) {
                local_dc[iVar11] = local_dc[iVar11] | 0x20;
                puVar13[iVar11 + -1] = puVar13[iVar11 + -1] | 2;
              }
              if (((local_34 & local_b4) != 0) && (cVar3 == pcVar12[iVar11])) {
                local_dc[iVar11] = local_dc[iVar11] | 0x40;
                puVar13[iVar11] = puVar13[iVar11] | 4;
              }
            }
            local_3c = local_3c + *(int *)&this->field_0x37c;
            local_dc = local_dc + iVar22;
            local_138 = local_138 + local_28;
            pbVar25 = pbVar25 + local_28;
            local_140 = local_140 + -1;
          } while (local_140 != 0);
        }
        pbVar25 = (byte *)(iVar10 + param_1 + (local_d4 + -1 + param_6) * local_28);
        uVar21 = (uint)*pbVar25;
        pbVar20 = pbVar25 + 1;
        bVar14 = (byte)local_c4 & 7;
        uVar26 = 0x80 >> bVar14;
        uVar15 = 0x40 >> bVar14;
        if (uVar15 == 0) {
          uVar26 = 0x100;
          uVar15 = 0x80;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar21 = (uint)CONCAT11(*pbVar25,*pbVar20);
          pbVar20 = pbVar25 + 2;
        }
        if (((((uVar21 & uVar26) != 0) && (1 < param_5)) && ((uVar21 & uVar15) != 0)) &&
           (*local_3c == local_3c[1])) {
          *local_dc = *local_dc | 1;
          local_dc[1] = local_dc[1] | 0x10;
        }
        iVar10 = 1;
        if (1 < param_5 + -1) {
          do {
            puVar13 = local_dc + 1;
            uVar26 = (int)uVar15 >> 1;
            if (uVar26 == 0) {
              uVar15 = 0x100;
              uVar26 = 0x80;
              uVar21 = uVar21 << 8 | (uint)*pbVar20;
              pbVar20 = pbVar20 + 1;
            }
            if ((((uVar21 & uVar15) != 0) && ((uVar21 & uVar26) != 0)) &&
               (local_3c[iVar10] == local_3c[iVar10 + 1])) {
              *puVar13 = *puVar13 | 1;
              local_dc[2] = local_dc[2] | 0x10;
            }
            iVar10 = iVar10 + 1;
            uVar15 = uVar26;
            local_dc = puVar13;
          } while (iVar10 < param_5 + -1);
        }
        iVar17 = iVar17 + -1;
LAB_0042596f:
        iVar11 = local_9c;
        iVar18 = 0;
        local_dc = local_64;
        if (0 < iVar17) {
          do {
            iVar10 = 0;
            puVar13 = local_dc;
            if (0 < iVar22) {
              do {
                uVar15 = *puVar13;
                if (((uVar15 != 0) && ((uVar15 & 0x200) == 0)) && (((byte)uVar15 & 0x55) != 0x55))
                break;
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar10 < iVar22);
            }
            if (iVar10 < iVar22) goto LAB_004259c4;
            local_dc = local_dc + iVar22;
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar17);
        }
        if (iVar22 <= iVar10) {
          puVar9 = local_1c;
          if (local_d0 == 0) {
            FreeAndNull(&local_a8);
            puVar9 = local_1c;
          }
          goto LAB_004267d5;
        }
LAB_004259c4:
        local_dc = local_dc + iVar10;
        bVar14 = *(byte *)((iVar18 + local_54) * *(int *)&this->field_0x37c +
                           *(int *)&this->field_0x38c + iVar10 + local_48);
        local_24 = bVar14 & 0xf;
        if (local_9c <= local_d0) {
          puVar13 = (uint *)Library::DKW::LIB::FUN_006acf50((int)local_a8,(local_9c * 3 + 0x1e) * 4)
          ;
          if (puVar13 == (uint *)0x0) {
LAB_0042678e:
            local_4c = -2;
            puVar9 = local_1c;
            goto LAB_004267d5;
          }
          local_9c = iVar11 + 10;
          local_a8 = puVar13;
        }
        uVar15 = 0;
        local_a8[local_d0 * 3] = 0;
        local_a0 = (short *)0x0;
        local_90 = 0;
        local_44 = 0;
        local_8c = 0x10;
        local_50 = *local_dc;
        *local_dc = local_50 | 0x100;
        do {
          if (200 < local_90) {
            if ((short *)local_a8[local_d0 * 3 + -1] != local_a0) {
              FreeAndNull(&local_a0);
            }
            if (0 < local_d0) {
              iVar22 = 0;
              do {
                FUN_006a5e90(*(short **)(iVar22 + 8 + (int)local_a8));
                iVar22 = iVar22 + 0xc;
                local_d0 = local_d0 + -1;
              } while (local_d0 != 0);
            }
            FreeAndNull(&local_a8);
            local_d0 = 0;
            puVar9 = local_1c;
            break;
          }
          if (local_44 + -1 <= (int)uVar15) {
            local_a0 = (short *)Library::DKW::LIB::FUN_006acf50((int)local_a0,local_44 * 8 + 0x50);
            if (local_a0 == (short *)0x0) goto LAB_0042678e;
            local_a8[local_d0 * 3 + 2] = (uint)local_a0;
            local_44 = local_44 + 10;
          }
          local_90 = local_90 + 1;
          *local_dc = *local_dc | 0x200;
          switch(local_8c) {
          case 1:
            if ((local_50 & 0x80) == 0) {
              if ((local_50 & 1) == 0) {
                if ((local_50 & 2) != 0) goto LAB_00426273;
                if ((local_50 & 4) != 0) {
LAB_00426157:
                  if ((int)local_24 <= local_60) {
                    GVar28 = CASE_3;
                    goto LAB_00426163;
                  }
                  goto LAB_00426186;
                }
                if ((local_50 & 8) != 0) {
LAB_004261a9:
                  if ((int)local_24 <= local_60) {
                    uVar30 = 0x200000003;
                    goto LAB_004261b5;
                  }
                  goto LAB_004261d8;
                }
                if ((local_50 & 0x10) != 0) {
LAB_00426205:
                  if (local_60 < (int)local_24) goto LAB_004263c4;
                  GVar28 = CASE_3;
                  GVar31 = CASE_2;
                  goto LAB_00426215;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar18 < iVar17)) &&
                   ((local_dc[iVar22] != 0 && ((local_dc[iVar22] & 0x10) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_1,~CASE_0);
                }
                local_dc = local_dc + 1;
                iVar10 = iVar10 + 1;
              }
            }
            else {
LAB_00425fac:
              if ((int)local_24 <= local_60) {
                GVar31 = ~CASE_0;
                GVar28 = CASE_1;
LAB_004265cd:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,GVar28,GVar31);
              }
LAB_00426606:
              local_dc = local_dc + iVar22 + 1;
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + 1;
              local_8c = 0x80;
            }
            break;
          case 2:
            if ((local_50 & 0x80) != 0) {
              if ((int)local_24 <= local_60) {
                uVar30 = 0xffffffff00000003;
LAB_0042605b:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,
                                            (Global_sub_004248D0_param_5Enum)uVar30,
                                            (Global_sub_004248D0_param_6Enum)
                                            ((ulonglong)uVar30 >> 0x20));
              }
              goto LAB_00426606;
            }
            if ((local_50 & 1) == 0) {
              if ((local_50 & 2) == 0) {
                if ((local_50 & 4) != 0) goto LAB_00426157;
                if ((local_50 & 8) != 0) goto LAB_004261a9;
                if ((local_50 & 0x10) != 0) goto LAB_00426205;
                if ((local_50 & 0x20) != 0) {
                  if ((int)local_24 <= local_60) {
                    GVar28 = CASE_3;
                    goto LAB_00426527;
                  }
                  goto LAB_0042654a;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (iVar10 < iVar22 + -1)) && (local_dc[1] != 0))
                   && ((local_dc[1] & 0x20) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_3,~CASE_0);
                }
                local_dc = local_dc + (1 - iVar22);
                iVar10 = iVar10 + 1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                uVar30 = 0xffffffff00000003;
LAB_004260a9:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,
                                            (Global_sub_004248D0_param_5Enum)uVar30,
                                            (Global_sub_004248D0_param_6Enum)
                                            ((ulonglong)uVar30 >> 0x20));
              }
LAB_004260cc:
              local_dc = local_dc + 1;
              iVar10 = iVar10 + 1;
              local_8c = 1;
            }
            break;
          case 4:
            if ((local_50 & 2) == 0) {
              if ((local_50 & 4) == 0) {
                if ((local_50 & 8) != 0) goto LAB_00426339;
                if ((local_50 & 0x10) != 0) {
                  if ((int)local_24 <= local_60) {
                    uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                iVar18 + local_54,CASE_2,~CASE_0);
                  }
                  goto LAB_004263c4;
                }
                if ((local_50 & 0x20) != 0) {
                  if ((int)local_24 <= local_60) {
                    uVar30 = 2;
                    goto LAB_004263eb;
                  }
                  goto LAB_0042640e;
                }
                if ((local_50 & 0x40) != 0) {
                  if ((int)local_24 <= local_60) {
                    uVar30 = 2;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar10 < iVar22 + -1)) &&
                   ((local_dc[1] != 0 && ((local_dc[1] & 0x40) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_3,~CASE_0);
                }
                local_dc = local_dc + -iVar22;
                iVar18 = iVar18 + -1;
              }
            }
            else {
LAB_00426273:
              if ((int)local_24 <= local_60) {
                GVar28 = CASE_3;
                GVar31 = ~CASE_0;
LAB_0042627f:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,GVar28,GVar31);
              }
LAB_004262a2:
              local_dc = local_dc + (1 - iVar22);
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + -1;
              local_8c = 2;
            }
            break;
          case 8:
            if ((local_50 & 2) != 0) {
              if ((int)local_24 <= local_60) {
                GVar28 = CASE_2;
                GVar31 = ~CASE_0;
                goto LAB_0042627f;
              }
              goto LAB_004262a2;
            }
            if ((local_50 & 4) == 0) {
              if ((local_50 & 8) == 0) {
                if ((local_50 & 0x10) != 0) {
                  if (local_60 < (int)local_24) goto LAB_004263c4;
                  GVar28 = CASE_2;
                  GVar31 = ~CASE_0;
                  goto LAB_00426215;
                }
                if ((local_50 & 0x20) == 0) {
                  if ((local_50 & 0x40) != 0) {
                    if ((int)local_24 <= local_60) {
                      uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                  iVar18 + local_54,CASE_2,CASE_0);
                    }
                    iVar11 = iVar22 * 4;
                    goto LAB_00425e6c;
                  }
                  if ((local_50 & 0x80) != 0) {
                    if (local_60 < (int)local_24) goto LAB_00426606;
                    GVar28 = CASE_2;
                    GVar31 = CASE_1;
                    goto LAB_004265cd;
                  }
                }
                else {
                  if ((int)local_24 <= local_60) {
                    GVar28 = CASE_2;
LAB_00426527:
                    uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                iVar18 + local_54,GVar28,CASE_0);
                  }
LAB_0042654a:
                  local_dc = local_dc + iVar22 + -1;
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + 1;
                  local_8c = 0x20;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar10 < iVar22 + -1)) &&
                   ((local_dc[-iVar22] != 0 && ((local_dc[-iVar22] & 0x80) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_2,~CASE_0);
                }
                local_dc = local_dc + (-1 - iVar22);
                iVar10 = iVar10 + -1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                GVar28 = CASE_2;
LAB_00426163:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,GVar28,~CASE_0);
              }
LAB_00426186:
              iVar11 = iVar22 << 2;
LAB_0042618f:
              local_dc = (uint *)((int)local_dc - iVar11);
              iVar18 = iVar18 + -1;
              local_8c = 4;
            }
            break;
          case 0x10:
            if ((local_50 & 8) == 0) {
              if ((local_50 & 0x10) == 0) {
                if ((local_50 & 0x20) != 0) {
                  if ((int)local_24 <= local_60) {
                    GVar28 = CASE_0;
                    goto LAB_00425b8a;
                  }
                  goto LAB_00425bad;
                }
                if ((local_50 & 0x40) != 0) {
LAB_00425bc3:
                  if ((int)local_24 <= local_60) {
                    uVar30 = 0xffffffff00000000;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
                if ((local_50 & 0x80) != 0) {
LAB_00425bdc:
                  if ((int)local_24 <= local_60) {
                    uVar30 = 0x100000000;
                    goto LAB_0042605b;
                  }
                  goto LAB_00426606;
                }
                if ((local_50 & 1) != 0) {
LAB_00425bf9:
                  if ((int)local_24 <= local_60) {
                    uVar30 = 0x100000000;
                    goto LAB_004260a9;
                  }
                  goto LAB_004260cc;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (0 < iVar18)) && (local_dc[-iVar22] != 0)) &&
                   ((local_dc[-iVar22] & 1) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_2,~CASE_0);
                }
                local_dc = local_dc + -1;
                iVar10 = iVar10 + -1;
              }
            }
            else {
LAB_00426339:
              if ((int)local_24 <= local_60) {
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,CASE_2,~CASE_0);
              }
              local_dc = local_dc + (-1 - iVar22);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + -1;
              local_8c = 8;
            }
            break;
          case 0x20:
            if ((local_50 & 8) == 0) {
              if ((local_50 & 0x10) == 0) {
                if ((local_50 & 0x20) == 0) {
                  if ((local_50 & 0x40) != 0) goto LAB_00425bc3;
                  if ((local_50 & 0x80) != 0) goto LAB_00425bdc;
                  if ((local_50 & 1) != 0) goto LAB_00425bf9;
                  if ((local_50 & 2) != 0) {
                    if ((int)local_24 <= local_60) {
                      GVar28 = CASE_0;
                      GVar31 = CASE_3;
                      goto LAB_0042627f;
                    }
                    goto LAB_004262a2;
                  }
                }
                else {
                  if ((((int)local_24 <= local_60) && (0 < iVar10)) &&
                     ((local_dc[-1] != 0 && ((local_dc[-1] & 2) == 0)))) {
                    uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                iVar18 + local_54,CASE_0,~CASE_0);
                  }
                  local_dc = local_dc + iVar22 + -1;
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + 1;
                }
              }
              else if (local_60 < (int)local_24) {
LAB_004263c4:
                local_dc = local_dc + -1;
                iVar10 = iVar10 + -1;
                local_8c = 0x10;
              }
              else {
                GVar28 = CASE_0;
                GVar31 = ~CASE_0;
LAB_00426215:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,GVar28,GVar31);
                local_dc = local_dc + -1;
                iVar10 = iVar10 + -1;
                local_8c = 0x10;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                uVar30 = 0xffffffff00000000;
LAB_004261b5:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,
                                            (Global_sub_004248D0_param_5Enum)uVar30,
                                            (Global_sub_004248D0_param_6Enum)
                                            ((ulonglong)uVar30 >> 0x20));
              }
LAB_004261d8:
              local_dc = local_dc + (-1 - iVar22);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + -1;
              local_8c = 8;
            }
            break;
          case 0x40:
            if ((local_50 & 0x20) == 0) {
              if ((local_50 & 0x40) == 0) {
                if ((local_50 & 0x80) != 0) goto LAB_00425fac;
                if ((local_50 & 1) == 0) {
                  if ((local_50 & 2) == 0) {
                    if ((local_50 & 4) != 0) {
LAB_00425dd3:
                      if ((int)local_24 <= local_60) {
                        uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                    iVar18 + local_54,CASE_1,CASE_3);
                      }
                      iVar11 = iVar22 * 4;
                      goto LAB_0042618f;
                    }
                  }
                  else {
LAB_00425d75:
                    if ((int)local_24 <= local_60) {
                      uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                  iVar18 + local_54,CASE_1,CASE_3);
                    }
                    local_dc = local_dc + (1 - iVar22);
                    iVar10 = iVar10 + 1;
                    iVar18 = iVar18 + -1;
                    local_8c = 2;
                  }
                }
                else {
LAB_00425eeb:
                  if (local_60 < (int)local_24) goto LAB_004260cc;
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_1,~CASE_0);
                  local_dc = local_dc + 1;
                  iVar10 = iVar10 + 1;
                  local_8c = 1;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (0 < iVar10)) &&
                   ((local_dc[-1] != 0 && ((local_dc[-1] & 4) == 0)))) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_0,~CASE_0);
                }
                local_dc = local_dc + iVar22;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                uVar30 = 0xffffffff00000000;
LAB_004263eb:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,
                                            (Global_sub_004248D0_param_5Enum)uVar30,
                                            (Global_sub_004248D0_param_6Enum)
                                            ((ulonglong)uVar30 >> 0x20));
              }
LAB_0042640e:
              iVar11 = iVar22 << 2;
LAB_00426417:
              local_dc = (uint *)((int)local_dc + iVar11 + -4);
              iVar10 = iVar10 + -1;
              iVar18 = iVar18 + 1;
              local_8c = 0x20;
            }
            break;
          case 0x80:
            if ((local_50 & 0x20) != 0) {
              if ((int)local_24 <= local_60) {
                GVar28 = CASE_1;
LAB_00425b8a:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,GVar28,~CASE_0);
              }
LAB_00425bad:
              iVar11 = iVar22 * 4;
              goto LAB_00426417;
            }
            if ((local_50 & 0x40) == 0) {
              if ((local_50 & 0x80) == 0) {
                if ((local_50 & 1) != 0) goto LAB_00425eeb;
                if ((local_50 & 2) != 0) goto LAB_00425d75;
                if ((local_50 & 4) != 0) goto LAB_00425dd3;
                if ((local_50 & 8) != 0) {
                  if ((int)local_24 <= local_60) {
                    uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                                iVar18 + local_54,CASE_1,CASE_2);
                  }
                  local_dc = local_dc + (-1 - iVar22);
                  iVar10 = iVar10 + -1;
                  iVar18 = iVar18 + -1;
                  local_8c = 8;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (0 < iVar10)) && (local_dc[-1] != 0)) &&
                   ((local_dc[-1] & 8) == 0)) {
                  uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                              iVar18 + local_54,CASE_1,~CASE_0);
                }
                local_dc = local_dc + iVar22 + 1;
                iVar10 = iVar10 + 1;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                uVar30 = 0xffffffff00000001;
LAB_00425e40:
                uVar15 = thunk_FUN_004248d0(this,(int)local_a0,uVar15,iVar10 + local_48,
                                            iVar18 + local_54,
                                            (Global_sub_004248D0_param_5Enum)uVar30,
                                            (Global_sub_004248D0_param_6Enum)
                                            ((ulonglong)uVar30 >> 0x20));
              }
LAB_00425e63:
              iVar11 = iVar22 << 2;
LAB_00425e6c:
              local_dc = (uint *)((int)local_dc + iVar11);
              iVar18 = iVar18 + 1;
              local_8c = 0x40;
            }
          }
          if (((local_50 & 0x100) != 0) && ((*local_dc & 0x200) != 0)) goto LAB_00426637;
          local_50 = *local_dc;
        } while( true );
      }
    }
  }
LAB_004267d5:
  local_1c = puVar9;
  if (local_4c == 0) {
    local_a4 = local_a8;
    if ((param_7[7] != 0) && (puVar13 = (uint *)param_7[8], puVar13 != (uint *)0x0)) {
      iVar22 = 0;
      local_a8 = puVar13;
      if (0 < param_7[7]) {
        do {
          FUN_006a5e90((short *)local_a8[2]);
          local_a8 = local_a8 + 3;
          iVar22 = iVar22 + 1;
        } while (iVar22 < param_7[7]);
      }
      FreeAndNull((void **)(param_7 + 8));
      local_a8 = local_a4;
    }
    *param_7 = *(int *)&this->field_0x374 + local_48;
    param_7[1] = *(int *)&this->field_0x378 + local_54;
    param_7[2] = local_c4;
    param_7[3] = local_d4;
    param_7[4] = (int)local_68;
    param_7[5] = (int)local_c0;
    param_7[6] = param_1;
    param_7[7] = local_d0;
    param_7[8] = (int)local_a8;
    if ((0 < local_d0) && ((local_2c != 0 || (1 < local_d0)))) {
      *local_a8 = *local_a8 | 4;
    }
    ExceptionList = local_14;
    return 0;
  }
  if (0 < local_d0) {
    iVar22 = 0;
    do {
      FUN_006a5e90(*(short **)(iVar22 + 8 + (int)local_a8));
      iVar22 = iVar22 + 0xc;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
  }
  FUN_006a5e90((short *)local_a8);
  iVar22 = local_4c;
  RaiseInternalException
            (local_4c,g_overwriteContext_007ED77C,s_E____titans_wlad_Td3dshad_cpp_007a5208,0x560);
  ExceptionList = local_14;
  return iVar22;
LAB_00426637:
  if ((((local_a0[uVar15 * 4 + -4] == local_a0[4]) &&
       ((local_a0[uVar15 * 4 + -3] == local_a0[5] &&
        (uVar21 = (int)local_a0[uVar15 * 4 + -2] - (int)local_a0[6] >> 0x1f,
        (int)(((int)local_a0[uVar15 * 4 + -2] - (int)local_a0[6] ^ uVar21) - uVar21) < 3)))) ||
      ((local_a0[uVar15 * 4 + -8] == *local_a0 &&
       ((local_a0[uVar15 * 4 + -7] == local_a0[1] &&
        (uVar21 = (int)local_a0[uVar15 * 4 + -6] - (int)local_a0[2] >> 0x1f,
        (int)(((int)local_a0[uVar15 * 4 + -6] - (int)local_a0[2] ^ uVar21) - uVar21) < 3)))))) ||
     ((local_a0[uVar15 * 4 + -4] == *local_a0 &&
      ((local_a0[uVar15 * 4 + -3] == local_a0[1] &&
       (uVar21 = (int)local_a0[uVar15 * 4 + -2] - (int)local_a0[2] >> 0x1f,
       (int)(((int)local_a0[uVar15 * 4 + -2] - (int)local_a0[2] ^ uVar21) - uVar21) < 3)))))) {
    uVar15 = uVar15 - 1;
  }
  if ((int)uVar15 < 3) {
    FUN_006a5e90(local_a0);
    local_2c = 1;
  }
  else {
    local_a8[local_d0 * 3 + 1] = uVar15;
    if ((bVar14 & 0x80) != 0) {
      local_a8[local_d0 * 3] = local_a8[local_d0 * 3] | 1;
    }
    local_d0 = local_d0 + 1;
  }
  goto LAB_0042596f;
}

