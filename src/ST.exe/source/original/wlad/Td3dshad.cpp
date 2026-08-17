#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/Td3dshad.cpp

// 00424E10 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10
#line 4 "decomp/ST.exe/functions/00424E10/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
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
st::fn_00424E10
          (AnonReceiver_004248D0 *this,int param_1,float param_2,float param_3,float param_4,
          int param_5,int param_6,int *param_7)

{
  alignas(4) byte st_stack_frame[396];

  uint *puVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar11;
  int local_EAX_282;
  int iVar12;
  int local_EAX_373;
  int local_EAX_424;
  int local_EAX_470;
  int local_EAX_516;
  char *pcVar10;
  int iVar13;
  uint *puVar14;
  int uVar15;
  char local_CL_1686;
  char bVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  uint *puVar26;
  byte *pbVar27;
  uint uVar28;
  longlong lVar29;
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
  iVar24 = param_5;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_00790540;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 40);
  local_4c = 0;
  local_48 = 0;
  local_54 = 0;
  local_c4 = 0;
  local_d4 = 0;
  local_68 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0;
  local_9c = 0;
  local_a8 = nullptr;
  local_2c = 0;
  ExceptionList = &local_14;
  puVar9 = (st_stack_frame + 40);
  if ((*(int *)&this->field_0x358 != 0) &&
     (ExceptionList = &local_14, puVar9 = (st_stack_frame + 40), param_1 != 0)) {
    local_84 = param_2;
    local_80 = param_3;
    local_7c = 0;
    ExceptionList = &local_14;
    iVar11 = st::fn_006E25D0
                       ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
    if (iVar11 != 1) {
      if ((((*(int *)&this->field_0x30 <= *(int *)&this->field_0x3d8 + (local_78 >> 0x10)) &&
           ((local_78 >> 0x10) - *(int *)&this->field_0x3d8 < *(int *)&this->field_0x38)) &&
          (*(int *)&this->field_0x34 <= *(int *)&this->field_0x3d4 + (local_74 >> 0x10))) &&
         ((local_74 >> 0x10) - *(int *)&this->field_0x3d0 < *(int *)&this->field_0x3c)) {
        local_84 = (float)param_5 * (float)*(double *)&this->field_0x368 + local_84;
        local_EAX_282 =
             st::fn_006E25D0
                       ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
        iVar11 = 1;
        if (local_EAX_282 != 1) {
          local_80 = (float)param_6 * (float)*(double *)&this->field_0x368 + local_80;
          iVar12 = st::fn_006E25D0
                             ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
          iVar11 = 1;
          if (iVar12 != 1) {
            local_84 = param_2;
            local_EAX_373 =
                 st::fn_006E25D0
                           ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
            iVar11 = 1;
            if (local_EAX_373 != 1) {
              local_84 = param_2;
              local_80 = param_3;
              local_7c = 0x424751eb;
              local_EAX_424 =
                   st::fn_006E25D0
                             ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
              iVar11 = 1;
              if (local_EAX_424 != 1) {
                local_84 = (float)param_5 * (float)*(double *)&this->field_0x368 + local_84;
                local_EAX_470 =
                     st::fn_006E25D0
                               ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
                iVar11 = 1;
                if (local_EAX_470 != 1) {
                  local_80 = (float)param_6 * (float)*(double *)&this->field_0x368 + local_80;
                  local_EAX_516 =
                       st::fn_006E25D0
                                 ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
                  iVar11 = 1;
                  if (local_EAX_516 != 1) {
                    local_84 = param_2;
                    iVar11 = st::fn_006E25D0
                                       ((ST3DSMAPContext *)this,&local_78,&local_84,0.0,0.0,0.0,1);
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = local_1c;
    if (iVar11 != 0) {
      local_28 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
      dVar2 = (double)(param_2 / (float)*(double *)&this->field_0x368);
      st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar29 = st::fn_0072E288();
      local_68 = param_2 - (float)(int)lVar29 * (float)*(double *)&this->field_0x368;
      iVar23 = (int)lVar29 - *(int *)&this->field_0x374;
      local_c4 = 0;
      if (*(int *)&this->field_0x370 < iVar23 + param_5) {
        param_5 = *(int *)&this->field_0x370 - iVar23;
        local_2c = 1;
      }
      if (iVar23 < 0) {
        local_c4 = -iVar23;
        param_5 = param_5 + iVar23;
        local_2c = 1;
      }
      dVar2 = (double)(param_3 / (float)*(double *)&this->field_0x368);
      local_48 = iVar23;
      st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
      lVar29 = st::fn_0072E288();
      local_c0 = param_3 - (float)(int)lVar29 * (float)*(double *)&this->field_0x368;
      local_54 = (int)lVar29 - *(int *)&this->field_0x378;
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
        st::fn_0072E150
                  (SUB84((double)(param_4 * _DAT_00790538),0),
                   (uint)((ulonglong)(double)(param_4 * _DAT_00790538) >> 0x20));
        lVar29 = st::fn_0072E288();
        local_60 = (int)lVar29;
        if ((((param_7[7] != 0) &&
             ((pbVar27 = (byte *)param_7[8], pbVar27 != nullptr && (param_7[6] == param_1)))) &&
            (local_c4 == param_7[2])) && (local_d4 == param_7[3])) {
          iVar15 = *(int *)&this->field_0x374;
          iVar13 = *param_7;
          if ((iVar15 + iVar23 == iVar13) && (local_54 + *(int *)&this->field_0x378 == param_7[1]))
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
          if (((param_7[7] == 1) && ((*pbVar27 & 4) == 0)) && (local_2c == 0)) {
            iVar18 = *(int *)(pbVar27 + 4);
            psVar5 = *(short **)(pbVar27 + 8);
            iVar6 = *(int *)&this->field_0x378;
            iVar7 = param_7[1];
            psVar19 = psVar5 + 1;
            cVar3 = *(char *)(*(int *)&this->field_0x37c * (*psVar19 - iVar6) +
                              *(int *)&this->field_0x38c + (*psVar5 - iVar15));
            local_f0 = 0;
            if (0 < iVar18) {
              do {
                psVar19[-1] = psVar19[-1] +
                              ((((short)iVar15 - (short)iVar13) + (short)iVar23) -
                              *(short *)&this->field_0x374);
                *psVar19 = *psVar19 +
                           ((((short)iVar6 - (short)iVar7) + (short)local_54) -
                           *(short *)&this->field_0x378);
                if ((((byte *)psVar19)[2] & 2) != 0) {
                  psVar19[-1] = psVar19[-1] + -1;
                }
                if ((((byte *)psVar19)[2] & 1) != 0) {
                  *psVar19 = *psVar19 + -1;
                }
                if (*(char *)((int)*psVar19 * *(int *)&this->field_0x37c + (int)psVar19[-1] +
                             *(int *)&this->field_0x38c) != cVar3) break;
                local_f0 = local_f0 + 1;
                psVar19 = psVar19 + 4;
              } while (local_f0 < iVar18);
            }
            if (iVar18 <= local_f0) {
              local_a0 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(iVar18 * 8));
              iVar24 = 0;
              if (0 < iVar18) {
                psVar19 = psVar5 + 1;
                do {
                  /* ST_CALLSITE[004253AB]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  st::fn_00405010(this,(int)local_a0,iVar24,(int)psVar19[-1],(int)*psVar19,
                               ((byte *)psVar19)[2] & CASE_3,~CASE_0);
                  iVar24 = iVar24 + 1;
                  psVar19 = psVar19 + 4;
                } while (iVar24 < iVar18);
              }
              st::fn_006A5E90(psVar5);
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
        uVar20 = iVar24 * 4 * iVar17;
        iVar23 = -uVar20;
        local_1c = (st_stack_frame + 40);
        local_64 = (uint *)(st_stack_frame + 40);
        puVar25 = (undefined4 *)(st_stack_frame + 40);
        for (uVar20 = uVar20 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar25 = 0;
          puVar25 = puVar25 + 1;
        }
        for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined1 *)puVar25 = 0;
          puVar25 = (undefined4 *)((int)puVar25 + 1);
        }
        local_8 = 0xffffffff;
        local_3c = (char *)((local_54 + local_d4) * *(int *)&this->field_0x37c +
                            *(int *)&this->field_0x38c + local_c4 + local_48);
        local_dc = (uint *)((st_stack_frame + 40) + (iVar24 * local_d4 + local_c4) * 4);
        local_140 = param_6 + -1;
        iVar15 = local_c4 >> 3;
        if (0 < local_140) {
          local_CL_1686 = (byte)local_c4 & 7;
          pbVar27 = (byte *)(local_28 * local_d4 + iVar15 + 1 + param_1);
          local_138 = (byte *)((local_d4 + 1) * local_28 + iVar15 + 1 + param_1);
          puVar14 = local_dc;
          do {
            puVar14 = puVar14 + iVar24;
            local_12c = param_5 + -1;
            pcVar10 = st::pointer_boundary_cast<char *>(local_3c + *(int *)&this->field_0x37c);
            local_d8 = (uint)pbVar27[-1];
            local_b4 = (uint)local_138[-1];
            local_94 = local_138;
            local_50 = 0x80 >> local_CL_1686;
            local_34 = 0x40 >> local_CL_1686;
            pbVar21 = pbVar27;
            if (0x40 >> local_CL_1686 == 0) {
              local_50 = 0x100;
              local_34 = 0x80;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_d8 = (uint)CONCAT11(pbVar27[-1],*pbVar27);
              pbVar21 = pbVar27 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_b4 = (uint)CONCAT11(local_138[-1],*local_138);
              local_94 = local_138 + 1;
            }
            if ((local_50 & local_d8) != 0) {
              local_40 = *local_3c;
              if (((1 < param_5) && ((local_34 & local_d8) != 0)) && (*local_3c == local_3c[1])) {
                *local_dc = *local_dc | 1;
                puVar14[1 - iVar24] = st::machine_word_boundary_cast<uint>(puVar14[1 - iVar24] | 0x10);
              }
              if (((local_50 & local_b4) != 0) && (local_40 == *pcVar10)) {
                *local_dc = *local_dc | 0x40;
                *puVar14 = *puVar14 | 4;
              }
              if (((1 < param_5) && ((local_34 & local_b4) != 0)) && (local_40 == pcVar10[1])) {
                *local_dc = *local_dc | 0x80;
                puVar14[1] = st::machine_word_boundary_cast<uint>(puVar14[1] | 8);
              }
            }
            pcVar8 = local_3c;
            iVar13 = 1;
            if (1 < local_12c) {
              puVar16 = puVar14 + (1 - iVar24);
              puVar26 = puVar14 + 2;
              do {
                local_c8 = local_50;
                local_50 = local_34;
                local_34 = (int)local_34 >> 1;
                if (local_34 == 0) {
                  local_c8 = 0x200;
                  local_50 = 0x100;
                  local_34 = 0x80;
                  local_d8 = local_d8 << 8 | (uint)*pbVar21;
                  pbVar21 = pbVar21 + 1;
                  local_38 = pbVar21;
                  local_b4 = local_b4 << 8 | (uint)*local_94;
                  local_94 = local_94 + 1;
                }
                if ((local_50 & local_d8) != 0) {
                  local_40 = pcVar8[iVar13];
                  if (((local_34 & local_d8) != 0) && (pcVar8[iVar13] == local_3c[iVar13 + 1])) {
                    *puVar16 = *puVar16 | 1;
                    puVar1 = (uint *)(((int)local_dc - (int)puVar14) + (int)puVar26);
                    *puVar1 = *puVar1 | 0x10;
                  }
                  if (((local_c8 & local_b4) != 0) && (local_40 == pcVar10[iVar13 + -1])) {
                    *puVar16 = *puVar16 | 0x20;
                    puVar26[-2] = st::machine_word_boundary_cast<uint>(puVar26[-2] | 2);
                  }
                  if (((local_50 & local_b4) != 0) && (local_40 == pcVar10[iVar13])) {
                    *puVar16 = *puVar16 | 0x40;
                    puVar26[-1] = st::machine_word_boundary_cast<uint>(puVar26[-1] | 4);
                  }
                  if (((local_34 & local_b4) != 0) && (local_40 == pcVar10[iVar13 + 1])) {
                    *puVar16 = *puVar16 | 0x80;
                    *puVar26 = *puVar26 | 8;
                  }
                }
                iVar13 = iVar13 + 1;
                puVar16 = puVar16 + 1;
                puVar26 = puVar26 + 1;
              } while (iVar13 < param_5 + -1);
            }
            if ((1 < param_5) && ((local_34 & local_d8) != 0)) {
              cVar3 = local_3c[iVar13];
              if (((local_50 & local_b4) != 0) && (cVar3 == pcVar10[iVar13 + -1])) {
                local_dc[iVar13] = st::machine_word_boundary_cast<uint>(local_dc[iVar13] | 0x20);
                puVar14[iVar13 + -1] = st::machine_word_boundary_cast<uint>(puVar14[iVar13 + -1] | 2);
              }
              if (((local_34 & local_b4) != 0) && (cVar3 == pcVar10[iVar13])) {
                local_dc[iVar13] = st::machine_word_boundary_cast<uint>(local_dc[iVar13] | 0x40);
                puVar14[iVar13] = st::machine_word_boundary_cast<uint>(puVar14[iVar13] | 4);
              }
            }
            local_3c = st::pointer_boundary_cast<char *>(local_3c + *(int *)&this->field_0x37c);
            local_dc = local_dc + iVar24;
            local_138 = local_138 + local_28;
            pbVar27 = pbVar27 + local_28;
            local_140 = local_140 + -1;
          } while (local_140 != 0);
        }
        pbVar27 = (byte *)(iVar15 + param_1 + (local_d4 + -1 + param_6) * local_28);
        uVar22 = (uint)*pbVar27;
        pbVar21 = pbVar27 + 1;
        bVar14 = (byte)local_c4 & 7;
        uVar28 = 0x80 >> bVar14;
        uVar20 = 0x40 >> bVar14;
        if (uVar20 == 0) {
          uVar28 = 0x100;
          uVar20 = 0x80;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar22 = (uint)CONCAT11(*pbVar27,*pbVar21);
          pbVar21 = pbVar27 + 2;
        }
        if (((((uVar22 & uVar28) != 0) && (1 < param_5)) && ((uVar22 & uVar20) != 0)) &&
           (*local_3c == local_3c[1])) {
          *local_dc = *local_dc | 1;
          local_dc[1] = st::machine_word_boundary_cast<uint>(local_dc[1] | 0x10);
        }
        iVar15 = 1;
        if (1 < param_5 + -1) {
          do {
            puVar14 = local_dc + 1;
            uVar28 = (int)uVar20 >> 1;
            if (uVar28 == 0) {
              uVar20 = 0x100;
              uVar28 = 0x80;
              uVar22 = uVar22 << 8 | (uint)*pbVar21;
              pbVar21 = pbVar21 + 1;
            }
            if ((((uVar22 & uVar20) != 0) && ((uVar22 & uVar28) != 0)) &&
               (local_3c[iVar15] == local_3c[iVar15 + 1])) {
              *puVar14 = *puVar14 | 1;
              local_dc[2] = st::machine_word_boundary_cast<uint>(local_dc[2] | 0x10);
            }
            iVar15 = iVar15 + 1;
            uVar20 = uVar28;
            local_dc = puVar14;
          } while (iVar15 < param_5 + -1);
        }
        iVar17 = iVar17 + -1;
LAB_0042596f:
        iVar13 = local_9c;
        iVar18 = 0;
        local_dc = local_64;
        if (0 < iVar17) {
          do {
            iVar15 = 0;
            puVar14 = local_dc;
            if (0 < iVar24) {
              do {
                uVar20 = *puVar14;
                if (((uVar20 != 0) && ((uVar20 & 0x200) == 0)) && (((byte)uVar20 & 0x55) != 0x55))
                break;
                iVar15 = iVar15 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar15 < iVar24);
            }
            if (iVar15 < iVar24) goto LAB_004259c4;
            local_dc = local_dc + iVar24;
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar17);
        }
        if (iVar24 <= iVar15) {
          puVar9 = local_1c;
          if (local_d0 == 0) {
            *(uint ***)((st_stack_frame + 36) + iVar23) = &local_a8;
            *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0x426716;
            st::fn_006AB060(*(void **)((st_stack_frame + 36) + iVar23));
            puVar9 = local_1c;
          }
          goto LAB_004267d5;
        }
LAB_004259c4:
        local_dc = local_dc + iVar15;
        bVar4 = *(byte *)((iVar18 + local_54) * *(int *)&this->field_0x37c +
                          *(int *)&this->field_0x38c + iVar15 + local_48);
        local_24 = bVar4 & 0xf;
        if (local_9c <= local_d0) {
          *(int *)((st_stack_frame + 36) + iVar23) = (local_9c * 3 + 0x1e) * 4;
          *(uint **)((st_stack_frame + 32) + iVar23) = local_a8;
          *(undefined4 *)((st_stack_frame + 28) + iVar23) = 0x425a25;
          puVar14 = st::pointer_boundary_cast<uint *>(st::fn_006ACF50
                              (*(void **)((st_stack_frame + 32) + iVar23),
                               *(uint *)((st_stack_frame + 36) + iVar23)));
          if (puVar14 == nullptr) {
LAB_0042678e:
            local_4c = -2;
            puVar9 = local_1c;
            goto LAB_004267d5;
          }
          local_a8 = puVar14;
          local_9c = iVar13 + 10;
        }
        uVar15 = 0;
        local_a8[local_d0 * 3] = 0;
        local_a0 = nullptr;
        local_90 = 0;
        local_44 = 0;
        local_8c = 0x10;
        local_50 = *local_dc;
        *local_dc = *local_dc | 0x100;
        do {
          if (200 < local_90) {
            if ((short *)local_a8[local_d0 * 3 + -1] != local_a0) {
              *(short ***)((st_stack_frame + 36) + iVar23) = &local_a0;
              *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0x42674b;
              st::fn_006AB060(*(void **)((st_stack_frame + 36) + iVar23));
            }
            if (0 < local_d0) {
              iVar24 = 0;
              do {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) =
                     *(undefined4 *)(iVar24 + 8 + (int)local_a8);
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0x426767;
                st::fn_006A5E90(*(short **)((st_stack_frame + 36) + iVar23));
                iVar24 = iVar24 + 0xc;
                local_d0 = local_d0 + -1;
              } while (local_d0 != 0);
            }
            *(uint ***)((st_stack_frame + 36) + iVar23) = &local_a8;
            *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0x426779;
            st::fn_006AB060(*(void **)((st_stack_frame + 36) + iVar23));
            local_d0 = 0;
            puVar9 = local_1c;
            break;
          }
          if (local_44 + -1 <= uVar15) {
            *(int *)((st_stack_frame + 36) + iVar23) = local_44 * 8 + 0x50;
            *(short **)((st_stack_frame + 32) + iVar23) = local_a0;
            *(undefined4 *)((st_stack_frame + 28) + iVar23) = 0x425ab1;
            local_a0 = st::pointer_boundary_cast<short *>(st::fn_006ACF50
                                 (*(void **)((st_stack_frame + 32) + iVar23),
                                  *(uint *)((st_stack_frame + 36) + iVar23)));
            if (local_a0 == nullptr) goto LAB_0042678e;
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
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                    goto LAB_00426163;
                  }
                  goto LAB_00426186;
                }
                if ((local_50 & 8) != 0) {
LAB_004261a9:
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 2;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                    goto LAB_004261b5;
                  }
                  goto LAB_004261d8;
                }
                if ((local_50 & 0x10) != 0) {
LAB_00426205:
                  if (local_60 < (int)local_24) goto LAB_004263c4;
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 2;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                  goto LAB_00426215;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar18 < iVar17)) &&
                   ((local_dc[iVar24] != 0 && ((local_dc[iVar24] & 0x10) == 0)))) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426014;
                  /* ST_CALLSITE[0042600F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + 1;
                iVar15 = iVar15 + 1;
              }
            }
            else {
LAB_00425fac:
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
LAB_004265cd:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4265ee;
                /* ST_CALLSITE[004265E9]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_00426606:
              local_dc = local_dc + iVar24 + 1;
              iVar15 = iVar15 + 1;
              iVar18 = iVar18 + 1;
              local_8c = 0x80;
            }
            break;
          case 2:
            if ((local_50 & 0x80) != 0) {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
LAB_0042605b:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x42607c;
                /* ST_CALLSITE[00426077]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
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
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                    goto LAB_00426527;
                  }
                  goto LAB_0042654a;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (iVar15 < iVar24 + -1)) && (local_dc[1] != 0))
                   && ((local_dc[1] & 0x20) == 0)) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426130;
                  /* ST_CALLSITE[0042612B]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + (1 - iVar24);
                iVar15 = iVar15 + 1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
LAB_004260a9:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4260ca;
                /* ST_CALLSITE[004260C5]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_004260cc:
              local_dc = local_dc + 1;
              iVar15 = iVar15 + 1;
              local_8c = 1;
            }
            break;
          case 4:
            if ((local_50 & 2) == 0) {
              if ((local_50 & 4) == 0) {
                if ((local_50 & 8) != 0) goto LAB_00426339;
                if ((local_50 & 0x10) != 0) {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                    *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                    *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                    *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                    *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                    *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4263c2;
                    /* ST_CALLSITE[004263BD]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                    uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                          *(int *)((st_stack_frame + 20) + iVar23),
                                          *(int *)((st_stack_frame + 24) + iVar23),
                                          *(int *)((st_stack_frame + 28) + iVar23),
                                          *(Global_sub_004248D0_param_5Enum *)
                                           ((st_stack_frame + 32) + iVar23),
                                          *(Global_sub_004248D0_param_6Enum *)
                                           ((st_stack_frame + 36) + iVar23));
                  }
                  goto LAB_004263c4;
                }
                if ((local_50 & 0x20) != 0) {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                    goto LAB_004263eb;
                  }
                  goto LAB_0042640e;
                }
                if ((local_50 & 0x40) != 0) {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar15 < iVar24 + -1)) &&
                   ((local_dc[1] != 0 && ((local_dc[1] & 0x40) == 0)))) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x42631a;
                  /* ST_CALLSITE[00426315]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + -iVar24;
                iVar18 = iVar18 + -1;
              }
            }
            else {
LAB_00426273:
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 3;
LAB_0042627f:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4262a0;
                /* ST_CALLSITE[0042629B]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_004262a2:
              local_dc = local_dc + (1 - iVar24);
              iVar15 = iVar15 + 1;
              iVar18 = iVar18 + -1;
              local_8c = 2;
            }
            break;
          case 8:
            if ((local_50 & 2) != 0) {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                goto LAB_0042627f;
              }
              goto LAB_004262a2;
            }
            if ((local_50 & 4) == 0) {
              if ((local_50 & 8) == 0) {
                if ((local_50 & 0x10) != 0) {
                  if (local_60 < (int)local_24) goto LAB_004263c4;
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                  goto LAB_00426215;
                }
                if ((local_50 & 0x20) == 0) {
                  if ((local_50 & 0x40) != 0) {
                    if ((int)local_24 <= local_60) {
                      *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0;
                      *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                      *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                      *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                      *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                      *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                      *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4265a9;
                      /* ST_CALLSITE[004265A4]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                      uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                            *(int *)((st_stack_frame + 20) + iVar23),
                                            *(int *)((st_stack_frame + 24) + iVar23),
                                            *(int *)((st_stack_frame + 28) + iVar23),
                                            *(Global_sub_004248D0_param_5Enum *)
                                             ((st_stack_frame + 32) + iVar23),
                                            *(Global_sub_004248D0_param_6Enum *)
                                             ((st_stack_frame + 36) + iVar23));
                    }
                    iVar13 = iVar24 * 4;
                    goto LAB_00425e6c;
                  }
                  if ((local_50 & 0x80) != 0) {
                    if (local_60 < (int)local_24) goto LAB_00426606;
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 1;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                    goto LAB_004265cd;
                  }
                }
                else {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
LAB_00426527:
                    *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                    *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                    *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                    *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                    *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426548;
                    /* ST_CALLSITE[00426543]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                    uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                          *(int *)((st_stack_frame + 20) + iVar23),
                                          *(int *)((st_stack_frame + 24) + iVar23),
                                          *(int *)((st_stack_frame + 28) + iVar23),
                                          *(Global_sub_004248D0_param_5Enum *)
                                           ((st_stack_frame + 32) + iVar23),
                                          *(Global_sub_004248D0_param_6Enum *)
                                           ((st_stack_frame + 36) + iVar23));
                  }
LAB_0042654a:
                  local_dc = local_dc + iVar24 + -1;
                  iVar15 = iVar15 + -1;
                  iVar18 = iVar18 + 1;
                  local_8c = 0x20;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (iVar15 < iVar24 + -1)) &&
                   ((local_dc[-iVar24] != 0 && ((local_dc[-iVar24] & 0x80) == 0)))) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4264dd;
                  /* ST_CALLSITE[004264D8]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + (-1 - iVar24);
                iVar15 = iVar15 + -1;
                iVar18 = iVar18 + -1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
LAB_00426163:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426184;
                /* ST_CALLSITE[0042617F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_00426186:
              iVar13 = iVar24 << 2;
LAB_0042618f:
              local_dc = (uint *)((int)local_dc - iVar13);
              iVar18 = iVar18 + -1;
              local_8c = 4;
            }
            break;
          case 0x10:
            if ((local_50 & 8) == 0) {
              if ((local_50 & 0x10) == 0) {
                if ((local_50 & 0x20) != 0) {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                    goto LAB_00425b8a;
                  }
                  goto LAB_00425bad;
                }
                if ((local_50 & 0x40) != 0) {
LAB_00425bc3:
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                    goto LAB_00425e40;
                  }
                  goto LAB_00425e63;
                }
                if ((local_50 & 0x80) != 0) {
LAB_00425bdc:
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 1;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                    goto LAB_0042605b;
                  }
                  goto LAB_00426606;
                }
                if ((local_50 & 1) != 0) {
LAB_00425bf9:
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 1;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                    goto LAB_004260a9;
                  }
                  goto LAB_004260cc;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (0 < iVar18)) && (local_dc[-iVar24] != 0)) &&
                   ((local_dc[-iVar24] & 1) == 0)) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425b6b;
                  /* ST_CALLSITE[00425B66]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + -1;
                iVar15 = iVar15 + -1;
              }
            }
            else {
LAB_00426339:
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 2;
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426366;
                /* ST_CALLSITE[00426361]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
              local_dc = local_dc + (-1 - iVar24);
              iVar15 = iVar15 + -1;
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
                      *(undefined4 *)((st_stack_frame + 36) + iVar23) = 3;
                      *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                      goto LAB_0042627f;
                    }
                    goto LAB_004262a2;
                  }
                }
                else {
                  if ((((int)local_24 <= local_60) && (0 < iVar15)) &&
                     ((local_dc[-1] != 0 && ((local_dc[-1] & 2) == 0)))) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                    *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                    *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                    *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                    *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                    *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425c89;
                    /* ST_CALLSITE[00425C84]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                    uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                          *(int *)((st_stack_frame + 20) + iVar23),
                                          *(int *)((st_stack_frame + 24) + iVar23),
                                          *(int *)((st_stack_frame + 28) + iVar23),
                                          *(Global_sub_004248D0_param_5Enum *)
                                           ((st_stack_frame + 32) + iVar23),
                                          *(Global_sub_004248D0_param_6Enum *)
                                           ((st_stack_frame + 36) + iVar23));
                  }
                  local_dc = local_dc + iVar24 + -1;
                  iVar15 = iVar15 + -1;
                  iVar18 = iVar18 + 1;
                }
              }
              else if (local_60 < (int)local_24) {
LAB_004263c4:
                local_dc = local_dc + -1;
                iVar15 = iVar15 + -1;
                local_8c = 0x10;
              }
              else {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
LAB_00426215:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x426236;
                /* ST_CALLSITE[00426231]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
                local_dc = local_dc + -1;
                iVar15 = iVar15 + -1;
                local_8c = 0x10;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
LAB_004261b5:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x4261d6;
                /* ST_CALLSITE[004261D1]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_004261d8:
              local_dc = local_dc + (-1 - iVar24);
              iVar15 = iVar15 + -1;
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
                        *(undefined4 *)((st_stack_frame + 36) + iVar23) = 3;
                        *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                        *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                        *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                        *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                        *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                        *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425e00;
                        /* ST_CALLSITE[00425DFB]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                        uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                              *(int *)((st_stack_frame + 20) + iVar23),
                                              *(int *)((st_stack_frame + 24) + iVar23),
                                              *(int *)((st_stack_frame + 28) + iVar23),
                                              *(Global_sub_004248D0_param_5Enum *)
                                               ((st_stack_frame + 32) + iVar23),
                                              *(Global_sub_004248D0_param_6Enum *)
                                               ((st_stack_frame + 36) + iVar23));
                      }
                      iVar13 = iVar24 * 4;
                      goto LAB_0042618f;
                    }
                  }
                  else {
LAB_00425d75:
                    if ((int)local_24 <= local_60) {
                      *(undefined4 *)((st_stack_frame + 36) + iVar23) = 3;
                      *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                      *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                      *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                      *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                      *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                      *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425da2;
                      /* ST_CALLSITE[00425D9D]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                      uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                            *(int *)((st_stack_frame + 20) + iVar23),
                                            *(int *)((st_stack_frame + 24) + iVar23),
                                            *(int *)((st_stack_frame + 28) + iVar23),
                                            *(Global_sub_004248D0_param_5Enum *)
                                             ((st_stack_frame + 32) + iVar23),
                                            *(Global_sub_004248D0_param_6Enum *)
                                             ((st_stack_frame + 36) + iVar23));
                    }
                    local_dc = local_dc + (1 - iVar24);
                    iVar15 = iVar15 + 1;
                    iVar18 = iVar18 + -1;
                    local_8c = 2;
                  }
                }
                else {
LAB_00425eeb:
                  if (local_60 < (int)local_24) goto LAB_004260cc;
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425f1c;
                  /* ST_CALLSITE[00425F17]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                  local_dc = local_dc + 1;
                  iVar15 = iVar15 + 1;
                  local_8c = 1;
                }
              }
              else {
                if ((((int)local_24 <= local_60) && (0 < iVar15)) &&
                   ((local_dc[-1] != 0 && ((local_dc[-1] & 4) == 0)))) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425d46;
                  /* ST_CALLSITE[00425D41]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + iVar24;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0;
LAB_004263eb:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x42640c;
                /* ST_CALLSITE[00426407]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_0042640e:
              iVar13 = iVar24 << 2;
LAB_00426417:
              local_dc = (uint *)((int)local_dc + iVar13 + -4);
              iVar15 = iVar15 + -1;
              iVar18 = iVar18 + 1;
              local_8c = 0x20;
            }
            break;
          case 0x80:
            if ((local_50 & 0x20) != 0) {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
LAB_00425b8a:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425bab;
                /* ST_CALLSITE[00425BA6]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_00425bad:
              iVar13 = iVar24 * 4;
              goto LAB_00426417;
            }
            if ((local_50 & 0x40) == 0) {
              if ((local_50 & 0x80) == 0) {
                if ((local_50 & 1) != 0) goto LAB_00425eeb;
                if ((local_50 & 2) != 0) goto LAB_00425d75;
                if ((local_50 & 4) != 0) goto LAB_00425dd3;
                if ((local_50 & 8) != 0) {
                  if ((int)local_24 <= local_60) {
                    *(undefined4 *)((st_stack_frame + 36) + iVar23) = 2;
                    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                    *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                    *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                    *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                    *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                    *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425f7a;
                    /* ST_CALLSITE[00425F75]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                    uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                          *(int *)((st_stack_frame + 20) + iVar23),
                                          *(int *)((st_stack_frame + 24) + iVar23),
                                          *(int *)((st_stack_frame + 28) + iVar23),
                                          *(Global_sub_004248D0_param_5Enum *)
                                           ((st_stack_frame + 32) + iVar23),
                                          *(Global_sub_004248D0_param_6Enum *)
                                           ((st_stack_frame + 36) + iVar23));
                  }
                  local_dc = local_dc + (-1 - iVar24);
                  iVar15 = iVar15 + -1;
                  iVar18 = iVar18 + -1;
                  local_8c = 8;
                }
              }
              else {
                if (((((int)local_24 <= local_60) && (0 < iVar15)) && (local_dc[-1] != 0)) &&
                   ((local_dc[-1] & 8) == 0)) {
                  *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                  *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
                  *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                  *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                  *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                  *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                  *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425ec8;
                  /* ST_CALLSITE[00425EC3]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                  uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                        *(int *)((st_stack_frame + 20) + iVar23),
                                        *(int *)((st_stack_frame + 24) + iVar23),
                                        *(int *)((st_stack_frame + 28) + iVar23),
                                        *(Global_sub_004248D0_param_5Enum *)
                                         ((st_stack_frame + 32) + iVar23),
                                        *(Global_sub_004248D0_param_6Enum *)
                                         ((st_stack_frame + 36) + iVar23));
                }
                local_dc = local_dc + iVar24 + 1;
                iVar15 = iVar15 + 1;
                iVar18 = iVar18 + 1;
              }
            }
            else {
              if ((int)local_24 <= local_60) {
                *(undefined4 *)((st_stack_frame + 36) + iVar23) = 0xffffffff;
                *(undefined4 *)((st_stack_frame + 32) + iVar23) = 1;
LAB_00425e40:
                *(int *)((st_stack_frame + 28) + iVar23) = iVar18 + local_54;
                *(int *)((st_stack_frame + 24) + iVar23) = iVar15 + local_48;
                *(int *)((st_stack_frame + 20) + iVar23) = uVar15;
                *(short **)((st_stack_frame + 16) + iVar23) = local_a0;
                *(undefined4 *)((st_stack_frame + 12) + iVar23) = 0x425e61;
                /* ST_CALLSITE[00425E5C]: CALL 0x00405010; direct=00405010 sub_004248D0 */
                uVar15 = st::fn_00405010(this,*(int *)((st_stack_frame + 16) + iVar23),
                                      *(int *)((st_stack_frame + 20) + iVar23),
                                      *(int *)((st_stack_frame + 24) + iVar23),
                                      *(int *)((st_stack_frame + 28) + iVar23),
                                      *(Global_sub_004248D0_param_5Enum *)
                                       ((st_stack_frame + 32) + iVar23),
                                      *(Global_sub_004248D0_param_6Enum *)
                                       ((st_stack_frame + 36) + iVar23));
              }
LAB_00425e63:
              iVar13 = iVar24 << 2;
LAB_00425e6c:
              local_dc = (uint *)((int)local_dc + iVar13);
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
    if ((param_7[7] != 0) && (puVar14 = (uint *)param_7[8], puVar14 != nullptr)) {
      iVar24 = 0;
      local_a8 = puVar14;
      if (0 < param_7[7]) {
        do {
          st::fn_006A5E90((short *)local_a8[2]);
          local_a8 = local_a8 + 3;
          iVar24 = iVar24 + 1;
        } while (iVar24 < param_7[7]);
      }
      st::fn_006AB060(param_7 + 8);
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
    iVar24 = 0;
    do {
      st::fn_006A5E90(*(short **)(iVar24 + 8 + (int)local_a8));
      iVar24 = iVar24 + 0xc;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
  }
  st::fn_006A5E90((short *)local_a8);
  iVar24 = local_4c;
  st::fn_006A5E40
            (local_4c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Td3dshad.cpp"),0x560);
  ExceptionList = local_14;
  return iVar24;
LAB_00426637:
  if ((((local_a0[uVar15 * 4 + -4] == local_a0[4]) &&
       ((local_a0[uVar15 * 4 + -3] == local_a0[5] &&
        (uVar20 = (int)local_a0[uVar15 * 4 + -2] - (int)local_a0[6] >> 0x1f,
        (int)(((int)local_a0[uVar15 * 4 + -2] - (int)local_a0[6] ^ uVar20) - uVar20) < 3)))) ||
      ((local_a0[uVar15 * 4 + -8] == *local_a0 &&
       ((local_a0[uVar15 * 4 + -7] == local_a0[1] &&
        (uVar20 = (int)local_a0[uVar15 * 4 + -6] - (int)local_a0[2] >> 0x1f,
        (int)(((int)local_a0[uVar15 * 4 + -6] - (int)local_a0[2] ^ uVar20) - uVar20) < 3)))))) ||
     ((local_a0[uVar15 * 4 + -4] == *local_a0 &&
      ((local_a0[uVar15 * 4 + -3] == local_a0[1] &&
       (uVar20 = (int)local_a0[uVar15 * 4 + -2] - (int)local_a0[2] >> 0x1f,
       (int)(((int)local_a0[uVar15 * 4 + -2] - (int)local_a0[2] ^ uVar20) - uVar20) < 3)))))) {
    uVar15 = uVar15 - 1;
  }
  if (uVar15 < 3) {
    *(short **)((st_stack_frame + 36) + iVar23) = local_a0;
    *(undefined4 *)((st_stack_frame + 32) + iVar23) = 0x4266f4;
    st::fn_006A5E90(*(short **)((st_stack_frame + 36) + iVar23));
    local_2c = 1;
  }
  else {
    local_a8[local_d0 * 3 + 1] = uVar15;
    if ((bVar4 & 0x80) != 0) {
      local_a8[local_d0 * 3] = st::machine_word_boundary_cast<uint>(local_a8[local_d0 * 3] | 1);
    }
    local_d0 = local_d0 + 1;
  }
  goto LAB_0042596f;
}

// 00427F20 FUN_00427f20
#line 4 "decomp/ST.exe/functions/00427F20/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Td3dshad.cpp
   Diagnostic line evidence: 1935 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
st::fn_00427F20(void *this,float param_1,float param_2,float param_3,int param_4,int param_5,
            int *param_6)

{
  alignas(4) byte st_stack_frame[236];

  double dVar1;
  undefined1 *puVar2;
  int local_EAX_196;
  int iVar3;
  int local_EAX_311;
  int local_EAX_369;
  int local_EAX_444;
  int local_EAX_500;
  int iVar4;
  int iVar5;
  int *piVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_8c;
  int local_6c;
  float local_60;
  float local_5c;
  undefined4 local_58;
  int local_54 [4];
  int local_44;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_00790550;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 36);
  local_30 = 0;
  DAT_007f4d84 = 0;
  DAT_007f4d78 = 0;
  PTR_007f4d6c = nullptr;
  ExceptionList = &local_14;
  puVar2 = (st_stack_frame + 36);
  if (param_4 < 1) goto cf_common_join_004286D0;
  if (param_5 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = 0;
  }
  ExceptionList = &local_14;
  puVar2 = (st_stack_frame + 36);
  if (param_4 < param_5) goto cf_common_join_004286D0;
  iVar7 = param_4 * 2 + 1;
  _DAT_007f4d70 = param_4;
  ExceptionList = &local_14;
  puVar2 = (st_stack_frame + 36);
  if (param_4 - param_5 < 100) goto cf_common_join_004286D0;
  local_5c = (float)param_4 * (float)STField<double>(this,0x368);
  local_60 = param_1 - local_5c;
  local_5c = param_2 - local_5c;
  local_58 = 0;
  ExceptionList = &local_14;
  local_EAX_196 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
  iVar5 = 1;
  if (local_EAX_196 != 1) {
    local_60 = (float)iVar7 * (float)STField<double>(this,0x368) + local_60;
    iVar3 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
    iVar5 = 1;
    if (iVar3 != 1) {
      local_5c = (float)iVar7 * (float)STField<double>(this,0x368) + local_5c;
      local_EAX_311 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
      iVar5 = 1;
      if (local_EAX_311 != 1) {
        local_60 = param_1 - (float)param_4 * (float)STField<double>(this,0x368);
        local_EAX_369 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
        iVar5 = 1;
        if (local_EAX_369 != 1) {
          local_5c = (float)param_4 * (float)STField<double>(this,0x368);
          local_60 = param_1 - local_5c;
          local_5c = param_2 - local_5c;
          local_58 = 0x424751eb;
          local_EAX_444 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
          iVar5 = 1;
          if (local_EAX_444 != 1) {
            local_60 = (float)iVar7 * (float)STField<double>(this,0x368) + local_60;
            local_EAX_500 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
            iVar5 = 1;
            if (local_EAX_500 != 1) {
              local_5c = (float)iVar7 * (float)STField<double>(this,0x368) + local_5c;
              iVar4 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
              iVar5 = 1;
              if (iVar4 != 1) {
                local_60 = param_1 - (float)param_4 * (float)STField<double>(this,0x368);
                iVar5 = st::fn_006E25D0(st::pointer_boundary_cast<ST3DSMAPContext *>(this),local_54,&local_60,0.0,0.0,0.0,1);
              }
            }
          }
        }
      }
    }
  }
  puVar2 = local_1c;
  if (iVar5 == 0) goto cf_common_join_004286D0;
  dVar1 = (double)(param_1 / (float)STField<double>(this,0x368));
  st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar15 = st::fn_0072E288();
  DAT_007f4d7c = (int)lVar15;
  iVar7 = -param_4;
  local_34 = param_4;
  if (STField<int>(this,0x370) <= DAT_007f4d7c + param_4) {
    local_34 = (STField<int>(this,0x370) - DAT_007f4d7c) + -1;
  }
  local_2c = iVar7;
  if (DAT_007f4d7c + iVar7 < 0) {
    local_2c = -DAT_007f4d7c;
  }
  dVar1 = (double)(param_2 / (float)STField<double>(this,0x368));
  st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar15 = st::fn_0072E288();
  DAT_007f4d80 = (int)lVar15;
  iVar10 = param_4;
  if (STField<int>(this,0x370) <= DAT_007f4d80 + param_4) {
    iVar10 = (STField<int>(this,0x370) - DAT_007f4d80) + -1;
  }
  if (DAT_007f4d80 + iVar7 < 0) {
    iVar7 = -DAT_007f4d80;
  }
  puVar2 = local_1c;
  if ((local_34 == local_2c || local_34 - local_2c < 0) || (iVar10 == iVar7 || iVar10 - iVar7 < 0))
  goto cf_common_join_004286D0;
  st::fn_0072E150
            (SUB84((double)(param_3 * _DAT_00790538),0),
             (uint)((ulonglong)(double)(param_3 * _DAT_00790538) >> 0x20));
  iVar6 = (param_4 + 1U) * -0x10;
  local_38 = (int *)((st_stack_frame + 36) + iVar6);
  *(undefined4 *)((st_stack_frame + 32) + iVar6) = 0x428296;
  piVar3 = local_38;
  local_8 = 0xffffffff;
  iVar8 = param_4 * 0x10;
  g_runtimeRecords_007F4D74 = (RuntimeRecord_007F4D74_0010 *)((st_stack_frame + 36) + iVar8);
  piVar12 = local_38;
  for (iVar6 = (param_4 + 1U & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar12 = 0;
    piVar12 = (int *)((int)piVar12 + 1);
  }
  local_1c = (st_stack_frame + 36);
  *local_38 = param_4;
  piVar3[1] = param_5;
  iVar13 = param_4 * param_4;
  local_44 = 0;
  local_6c = param_4;
  iVar6 = (1 - param_4) * iVar13 + (STSignedDiv4(iVar13));
  local_8c = 0;
  iVar11 = iVar13 * 2 * param_4;
  if (0 < iVar11) {
    piVar3 = local_38 + param_4 * 4;
    do {
      if (0 < iVar6) {
        *piVar3 = local_44;
        local_6c = local_6c + -1;
        piVar3 = piVar3 + -4;
        iVar11 = iVar11 + iVar13 * -2;
        iVar6 = iVar6 - iVar11;
      }
      local_44 = local_44 + 1;
      local_8c = local_8c + iVar13 * 2;
      iVar6 = iVar6 + local_8c + iVar13;
    } while (local_8c < iVar11);
  }
  iVar6 = iVar6 - (local_8c + iVar11) / 2;
  if (-1 < local_6c) {
    piVar3 = local_38 + local_6c * 4;
    local_b0 = local_6c + 1;
    iVar9 = local_44;
    do {
      *piVar3 = iVar9;
      piVar3 = piVar3 + -4;
      if (iVar6 < 0) {
        iVar9 = iVar9 + 1;
        local_8c = local_8c + iVar13 * 2;
        iVar6 = iVar6 + local_8c;
      }
      iVar11 = iVar11 + iVar13 * -2;
      iVar6 = iVar6 + (iVar13 - iVar11);
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  if (0 < param_5) {
    iVar9 = param_5 * param_5;
    iVar6 = iVar9 * 2;
    local_44 = 0;
    local_6c = param_5;
    iVar11 = (1 - param_5) * iVar9 + (STSignedDiv4(iVar9));
    local_8c = 0;
    iVar13 = iVar6 * param_5;
    if (0 < iVar13) {
      local_b4 = local_38 + param_5 * 4 + 1;
      do {
        if (0 < iVar11) {
          *local_b4 = local_44;
          local_6c = local_6c + -1;
          local_b4 = local_b4 + -4;
          iVar13 = iVar13 + iVar9 * -2;
          iVar11 = iVar11 - iVar13;
        }
        local_44 = local_44 + 1;
        local_8c = local_8c + iVar6;
        iVar11 = iVar11 + local_8c + iVar9;
      } while (local_8c < iVar13);
    }
    iVar11 = iVar11 - (local_8c + iVar13) / 2;
    if (-1 < local_6c) {
      piVar3 = local_38 + local_6c * 4 + 1;
      local_b8 = local_6c + 1;
      do {
        *piVar3 = local_44;
        piVar3 = piVar3 + -4;
        if (iVar11 < 0) {
          local_44 = local_44 + 1;
          local_8c = local_8c + iVar6;
          iVar11 = iVar11 + local_8c;
        }
        iVar13 = iVar13 + iVar9 * -2;
        iVar11 = iVar11 + (iVar9 - iVar13);
        local_b8 = local_b8 + -1;
      } while (local_b8 != 0);
    }
  }
  iVar6 = *local_38;
  iVar11 = -iVar6;
  if (-iVar6 < local_2c) {
    iVar11 = local_2c;
  }
  if (local_34 < iVar6) {
    iVar6 = local_34;
  }
  g_runtimeRecords_007F4D74->field_0000 = iVar11;
  (&local_b8)[param_4 * 4] = iVar6;
  if (param_5 < 1) {
    *(int *)((st_stack_frame + 40) + iVar8) = (&local_b8)[param_4 * 4];
    *(int *)((st_stack_frame + 44) + iVar8) = g_runtimeRecords_007F4D74->field_0000;
  }
  else {
    iVar6 = local_38[1];
    iVar11 = -iVar6;
    if (-local_34 != iVar6 && local_34 <= -iVar6) {
      iVar11 = local_34;
    }
    if (iVar6 < local_2c) {
      iVar6 = local_2c;
    }
    *(int *)((st_stack_frame + 40) + iVar8) = iVar11;
    *(int *)((st_stack_frame + 44) + iVar8) = iVar6;
  }
  iVar6 = 1;
  if (0 < param_4) {
    iVar8 = 0x10;
    piVar3 = local_38;
    do {
      iVar11 = piVar3[4];
      iVar13 = -iVar11;
      if (-iVar11 < local_2c) {
        iVar13 = local_2c;
      }
      if (local_34 < iVar11) {
        iVar11 = local_34;
      }
      *(int *)((int)g_runtimeRecords_007F4D74 - iVar8) = iVar13;
      STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_0000 = iVar13;
      *(int *)((int)g_runtimeRecords_007F4D74 + (0xc - iVar8)) = iVar11;
      STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_000C = iVar11;
      if (param_5 < iVar6) {
        *(undefined4 *)((int)g_runtimeRecords_007F4D74 + (4 - iVar8)) =
             *(undefined4 *)((int)g_runtimeRecords_007F4D74 + (0xc - iVar8));
        STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_0004 =
             STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_000C;
        ((undefined4 *)((int)g_runtimeRecords_007F4D74 - iVar8))[2] =
             *(undefined4 *)((int)g_runtimeRecords_007F4D74 - iVar8);
        iVar11 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_0000;
      }
      else {
        iVar11 = piVar3[5];
        iVar13 = -iVar11;
        if (-local_34 != iVar11 && local_34 <= -iVar11) {
          iVar13 = local_34;
        }
        if (iVar11 < local_2c) {
          iVar11 = local_2c;
        }
        *(int *)((int)g_runtimeRecords_007F4D74 + (4 - iVar8)) = iVar13;
        STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_0004 = iVar13;
        *(int *)((int)g_runtimeRecords_007F4D74 + (8 - iVar8)) = iVar11;
      }
      STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar8).field_0008 = iVar11;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
      piVar3 = piVar3 + 4;
    } while (iVar6 <= param_4);
  }
  if (param_5 < 1) {
    local_30 = st::fn_00403288
                         (st::pointer_boundary_cast<AnonReceiver_004248D0 *>(this),iVar7,iVar10,0);
joined_r0x004286bb:
    puVar2 = local_1c;
    if (local_30 != 0) goto cf_common_join_004286D0;
  }
  else {
    iVar6 = -1 - param_5;
    if (iVar10 < -1 - param_5) {
      iVar6 = iVar10;
    }
    if ((iVar7 <= iVar6) &&
       (local_30 = st::fn_00403288
                             (st::pointer_boundary_cast<AnonReceiver_004248D0 *>(this),iVar7,iVar6,0), puVar2 = local_1c, local_30 != 0))
    goto cf_common_join_004286D0;
    iVar6 = -param_5;
    if (-param_5 < iVar7) {
      iVar6 = iVar7;
    }
    iVar8 = param_5;
    if (iVar10 < param_5) {
      iVar8 = iVar10;
    }
    if ((iVar6 <= iVar8) &&
       ((local_30 = st::fn_00403288(st::pointer_boundary_cast<AnonReceiver_004248D0 *>(this),iVar6,iVar8,-1), puVar2 = local_1c, local_30 != 0 ||
        (local_30 = st::fn_00403288(st::pointer_boundary_cast<AnonReceiver_004248D0 *>(this),iVar6,iVar8,1), puVar2 = local_1c, local_30 != 0))))
    goto cf_common_join_004286D0;
    iVar6 = param_5 + 1;
    if (param_5 + 1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar6 <= iVar10) {
      local_30 = st::fn_00403288
                           (st::pointer_boundary_cast<AnonReceiver_004248D0 *>(this),iVar6,iVar10,0);
      goto joined_r0x004286bb;
    }
  }
  puVar2 = local_1c;
  if (DAT_007f4d78 == 0) {
    st::fn_006AB060(&PTR_007f4d6c);
    puVar2 = local_1c;
  }
cf_common_join_004286D0:
  local_1c = puVar2;
  iVar7 = 0;
  if (local_30 == 0) {
    if ((param_6[7] != 0) && (param_6[8] != 0)) {
      if (0 < param_6[7]) {
        puVar14 = (undefined4 *)(param_6[8] + 8);
        do {
          st::fn_006A5E90((short *)*puVar14);
          puVar14 = puVar14 + 3;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_6[7]);
      }
      st::fn_006AB060(param_6 + 8);
    }
    *param_6 = DAT_007f4d7c;
    param_6[1] = DAT_007f4d80;
    param_6[2] = 0;
    param_6[3] = 0;
    param_6[4] = 0;
    param_6[5] = 0;
    param_6[6] = 0;
    param_6[7] = DAT_007f4d78;
    param_6[8] = (int)PTR_007f4d6c;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    if (0 < DAT_007f4d78) {
      iVar10 = 0;
      do {
        st::fn_006A5E90(*(short **)(iVar10 + 8 + (int)PTR_007f4d6c));
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar7 < DAT_007f4d78);
    }
    st::fn_006A5E90((short *)PTR_007f4d6c);
    iVar7 = local_30;
    st::fn_006A5E40
              (local_30,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Td3dshad.cpp"),0x78f);
  }
  ExceptionList = local_14;
  return iVar7;
}

