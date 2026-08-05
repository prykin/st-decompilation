#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=718;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall AiFltClassTy::sub_00664960(AiFltClassTy *param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  AnonPointee_AiFltClassTy_0223 *pAVar5;
  AiPlrClassTy *this;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  short extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_15;
  STGameObjC *this_00;
  int uVar12;
  int local_EAX_9844;
  ushort *puVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar22;
  bool bVar23;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  DArrayTy *local_90;
  uint local_68;
  short local_64;
  short local_62;
  short local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  STGameObjC *local_48;
  uint local_44 [2];
  undefined4 local_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined4 local_2b;
  DArrayTy *local_10;
  uint local_c;
  AiPlrClassTy *local_8;

  if ((param_1->field_008B != 0) &&
     (param_1->field_0280 < param_1->field_008F + param_1->field_008B)) {
    return;
  }
  param_1->field_008F = param_1->field_0280;
  local_8 = thunk_FUN_004357f0(*(char *)&param_1->field_0024);
  iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                    ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar11 = extraout_EDX;
  while (-1 < iVar9) {
    switch(local_44[0]) {
    case 0:
      goto switchD_006649d9_caseD_0;
    case 1:
      param_1->field_0139 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_013A =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_013E = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0140 = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0142 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0146 = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      param_1->field_014A = local_2b;
      break;
    case 2:
      param_1->field_0187 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0188 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_018C = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_018E = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0190 = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      break;
    case 3:
      param_1->field_0152 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0153 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0157 = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0159 = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_015B = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_015F = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 4:
      Library::DKW::TBL::DArrayAppend(param_1->field_020B,&local_3c);
      thunk_FUN_00676c40(param_1->field_020B,thunk_FUN_00660d10);
      goto cf_common_join_00665024;
    case 5:
      if (param_1->field_020B != nullptr) {
        param_1->field_020B->count = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 6:
      param_1->field_00FF = (undefined1)local_3c;
      break;
    case 7:
      param_1->field_0163 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0164 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0168 = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_016A = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_016C = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0172 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 8:
      local_c = 0;
      local_4c = *(uint *)&param_1->field_022F->field_0xc;
      if (0 < (int)local_4c) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar11 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
        do {
          if (local_c < local_4c) {
            psVar10 = (short *)(param_1->field_022F->field_0008 * local_c +
                               param_1->field_022F->field_001C);
          }
          else {
            psVar10 = nullptr;
          }
          iVar16 = (int)psVar10[1];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = iVar11 + -1 + (int)CONCAT11(uStack_35,uStack_36);
          iVar9 = (int)*psVar10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)
                     (CONCAT11(local_3c._3_1_,local_3c._2_1_) + -1 +
                     (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
          local_10 = (DArrayTy *)(int)psVar10[3];
          local_58 = (int)psVar10[4];
          local_54 = iVar16 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((iVar9 <= iVar11) && (iVar11 <= iVar9 + -1 + (int)local_10)) &&
             (((iVar16 <= CONCAT11(local_3c._3_1_,local_3c._2_1_) &&
               (((CONCAT11(local_3c._3_1_,local_3c._2_1_) <= local_54 && (iVar9 <= local_50)) &&
                (local_50 <= iVar9 + -1 + (int)local_10)))) &&
              ((iVar16 <= (int)local_48 && ((int)local_48 <= iVar16 + -1 + local_58))))))
          goto LAB_00665047;
          local_50 = iVar9 + -1 + (int)local_10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar18 = (int)CONCAT11(local_3c._3_1_,local_3c._2_1_);
          local_54 = iVar16 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)(iVar18 + -1 + (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((iVar11 <= iVar9) &&
             (((iVar1 = iVar11 + -1 + (int)CONCAT11(uStack_35,uStack_36), iVar9 <= iVar1 &&
               (iVar18 <= iVar16)) &&
              ((iVar16 <= (int)local_48 &&
               ((((iVar11 <= local_50 && (local_50 <= iVar1)) && (iVar18 <= local_54)) &&
                (local_54 <= (int)local_48)))))))) {
            Library::DKW::TBL::DArrayPut((DArrayTy *)param_1->field_022F,local_c,&local_3c);
            goto cf_common_join_00665024;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)local_4c);
      }
      if (param_1->field_022F != nullptr) {
        Library::DKW::TBL::FUN_006b11d0((uint *)param_1->field_022F,0,&local_3c);
      }
      param_1->field_0170 = param_1->field_0170 + 1;
      goto cf_common_join_00665024;
    case 9:
      if (param_1->field_022F != nullptr) {
        *(undefined4 *)&param_1->field_022F->field_0xc = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 10:
      param_1->field_0176 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0177 = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0179 = CONCAT11(uStack_38,local_3c._3_1_);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_017B = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_017F = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0183 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 0xb:
      param_1->field_0100 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0101 = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0103 = CONCAT11(uStack_38,local_3c._3_1_);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0105 = CONCAT11(uStack_36,uStack_37);
      param_1->field_0111 = local_2b;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0107 = CONCAT13(uStack_32,CONCAT12(uStack_33,CONCAT11(uStack_34,uStack_35)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010B = CONCAT11(uStack_30,uStack_31);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010D = CONCAT11(uStack_2e,uStack_2f);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010F = CONCAT11(uStack_2c,uStack_2d);
      break;
    case 0xc:
      param_1->field_0115 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0116 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_011A = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xd:
      param_1->field_0122 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0129 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0123 = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0xe:
      thunk_FUN_00675950(CONCAT13(local_3c._3_1_,
                                  CONCAT12(local_3c._2_1_,
                                           CONCAT11(local_3c._1_1_,(undefined1)local_3c))),
                         CONCAT13(uStack_37,
                                  CONCAT12(uStack_38,CONCAT11(local_3c._3_1_,local_3c._2_1_))),
                         CONCAT11(uStack_37,uStack_38),(short *)&local_3c,
                         (short *)((int)&local_3c + 2),(short *)&uStack_38,0);
      pAVar5 = param_1->field_0223;
      uVar13 = 0;
      local_4c = *(uint *)&pAVar5->field_0xc;
      if (0 < (int)local_4c) {
        bVar22 = local_4c != 0;
        do {
          if (bVar22) {
            psVar10 = (short *)(pAVar5->field_0008 * uVar13 + pAVar5->field_001C);
          }
          else {
            psVar10 = nullptr;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((((CONCAT11(local_3c._1_1_,(undefined1)local_3c) == *psVar10) &&
               (CONCAT11(local_3c._3_1_,local_3c._2_1_) == psVar10[1])) &&
              (CONCAT11(uStack_37,uStack_38) == psVar10[2])) &&
             (((CONCAT11(uStack_31,uStack_32) == psVar10[5] &&
               (CONCAT11(uStack_2f,uStack_30) == psVar10[6])) &&
              (CONCAT11(uStack_2d,uStack_2e) == psVar10[7])))) goto cf_common_join_00665024;
          uVar13 = uVar13 + 1;
          bVar22 = uVar13 < local_4c;
        } while ((int)uVar13 < (int)local_4c);
      }
      if (pAVar5 != nullptr) {
        Library::DKW::TBL::FUN_006b11d0((uint *)pAVar5,0,&local_3c);
      }
      param_1->field_0127 = param_1->field_0127 + 1;
      goto cf_common_join_00665024;
    case 0xf:
      if (param_1->field_0223 != nullptr) {
        *(undefined4 *)&param_1->field_0223->field_0xc = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 0x10:
      param_1->field_0194 = (undefined1)local_3c;
      break;
    default:
      iVar11 = thunk_FUN_00664650(param_1,local_44[0]);
      if (iVar11 < 1) goto cf_common_join_00665024;
      break;
    case 0x32:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 500;
      goto cf_common_join_00664FF6;
    case 0x33:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x1fe;
      goto cf_common_join_00664FF6;
    case 0x34:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x208;
      goto cf_common_join_00664FF6;
    case 0x35:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x212;
      goto cf_common_join_00664FF6;
    case 0x36:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x21c;
      goto cf_common_join_00664FF6;
    case 0x37:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x226;
      goto cf_common_join_00664FF6;
    case 0x38:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x230;
      goto cf_common_join_00664FF6;
    case 0x39:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x23a;
      goto cf_common_join_00664FF6;
    case 0x3a:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x244;
      goto cf_common_join_00664FF6;
    case 0x3b:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      uVar13 = 0x24e;
cf_common_join_00664FF6:
      param_1->field_009B = uVar13;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00B3 = uVar13;
cf_common_join_00665024:
      if ((local_44[0] < 0x32) || (99 < local_44[0])) {
        if ((local_44[0] == 0) || (0x31 < local_44[0])) {
switchD_006649d9_caseD_0:
          thunk_FUN_00664650(param_1,local_44[0]);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = extraout_EDX_01;
          goto LAB_00665067;
        }
      }
      else {
        thunk_FUN_006646e0((int)param_1);
      }
    }
LAB_00665047:
    iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                      ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar11 = extraout_EDX_00;
  }
LAB_00665067:
  this = local_8;
  param_1->field_00EB = 0;
  uVar13 = param_1->field_009B;
  if (0x82 < uVar13) {
    if (uVar13 < 0x201) {
      if (uVar13 == 0x200) {
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x201;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_00666934:
          uVar6 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_12,uVar6))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        iVar11 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
          psVar10 = &param_1->field_01A1;
          iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              psVar10,iVar11);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar8 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              sVar7 = param_1->field_01A7;
              sVar4 = *psVar10;
              goto LAB_006668ef;
            }
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,psVar10,'\x02');
            goto LAB_006668f9;
          }
        }
LAB_00666901:
        param_1->field_009B = 0x201;
        goto cf_common_join_00667054;
      }
      if (uVar13 < 0x1f6) {
        if (uVar13 != 0x1f5) {
          if (uVar13 < 0x86) {
            if (uVar13 == 0x85) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                            (short *)&param_1->field_0x195,(char)param_1->field_00FB
                                           );
                if (iVar11 == 0) goto cf_common_exit_00667066;
                if (local_8 != nullptr) {
                  thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
                }
              }
              else {
                if (param_1->field_00A7 != 0) {
                  if (local_8 != nullptr) {
                    thunk_FUN_0067bf60(local_8,'\x01',param_1->field_00F7);
                  }
                  param_1->field_009B = 0;
                  param_1->field_009F = 0;
                  param_1->field_00A3 = 0;
                  param_1->field_00A7 = 0;
                }
                uVar6 = sub_0065D9C0(param_1);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if (((int)param_1->field_018E < CONCAT22(extraout_var_06,uVar6)) &&
                   ((param_1->field_00AB == 0 ||
                    (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
                goto cf_common_exit_00667066;
                if (this != nullptr) {
                  thunk_FUN_0067bf60(this,-1,param_1->field_00F7);
                }
              }
            }
            else if (uVar13 == 0x83) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,
                                            '\x02');
                if (iVar11 == 0) goto cf_common_exit_00667066;
LAB_00665eba:
                param_1->field_009B = 0x85;
                goto cf_common_join_00667054;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = 0x84;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar6 = sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_05,uVar6)) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
            else {
              if (uVar13 != 0x84) goto cf_common_exit_00667066;
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                if (((param_1->field_00EF == 0x200) || (param_1->field_00EF == 0x400)) &&
                   (uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar13
                   , (uVar13 & 0x10000) != 0)) {
                  iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                           thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,
                                              (short *)&param_1->field_0x195,&param_1->field_01A1,
                                              param_1->field_00EF);
                  if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
                    iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                             thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                                &param_1->field_01A1,'\x02');
                    if (iVar11 == 0) goto cf_common_exit_00667066;
                    param_1->field_009B = 0x85;
                  }
                  else {
                    param_1->field_009B = 0x85;
                  }
                  goto cf_common_join_00667054;
                }
                goto LAB_00665eba;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = 0x85;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar6 = sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_04,uVar6)) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
          }
          else {
            if (uVar13 != 0x8c) {
              if (uVar13 != 500) goto cf_common_exit_00667066;
              param_1->field_00EB = 0x40;
              param_1->field_00AB = param_1->field_00E6;
              param_1->field_00AF = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              uVar13 = *(uint *)&param_1->field_0xbf & 1;
              param_1->field_00F3 = uVar13;
              if (uVar13 == 0) {
                param_1->field_00F3 = *(uint *)&param_1->field_0xbf & 2;
              }
              if (param_1->field_00F3 == 0) {
                uVar14 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar14;
                param_1->field_00F3 = (uVar14 >> 0x10 & 1) + 1;
              }
              uVar14 = *(uint *)&param_1->field_0xc3;
              if ((uVar14 & 0x100) == 0) {
                uVar13 = uVar14 & 0x200;
                param_1->field_00EF = uVar13;
                if (uVar13 == 0) {
                  uVar13 = uVar14 & 0x400;
                  param_1->field_00EF = uVar13;
                }
                if ((param_1->field_00EF == 0) && ((uVar14 & 0x800) != 0)) {
                  uVar14 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar14;
                  param_1->field_00EF = (-(uint)((uVar14 & 0x10000) != 0) & 0xfffffe00) + 0x400;
                }
              }
              else {
                param_1->field_00EF = 0x100;
              }
              if ((param_1->field_00EF == 0x100) && (param_1->field_00F3 == 1)) {
                param_1->field_009B = 0x1f8;
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar11 = thunk_FUN_0065e9a0(param_1,*(short **)&param_1->field_0xc7,
                                            (short *)&param_1->field_0x195,
                                            *(uint *)&param_1->field_0xcb,
                                            *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                            CONCAT31((int3)(uVar13 >> 8),param_1->field_0xd3),1);
                if (iVar11 != 0) goto cf_common_join_00667047;
                iVar11 = param_1->field_00EF;
                if (((iVar11 == 0x200) || (iVar11 == 0x400)) &&
                   (iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                             thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,
                                                (short *)&param_1->field_0x195,&param_1->field_01A1,
                                                iVar11), iVar11 == param_1->field_00EF)) {
                  param_1->field_009B = 0x1f5;
                }
                else {
                  param_1->field_00EF = 0x100;
                  if (param_1->field_00F3 != 1) goto LAB_00666423;
                  param_1->field_009B = 0x1f8;
                }
              }
              goto cf_common_join_00667054;
            }
            param_1->field_00EB = 0x200;
            if (param_1->field_00A3 == 0) {
              param_1->field_00A3 = 1;
              param_1->field_00AB = param_1->field_015B;
              param_1->field_00AF = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                       thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                          (short *)&param_1->field_0x195,(char)param_1->field_015F);
              if (iVar11 == 0) goto cf_common_exit_00667066;
              if (param_1->field_0284 != nullptr) {
                thunk_FUN_00690610(param_1->field_0284,param_1->field_007D);
              }
            }
            else {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((param_1->field_00A7 == 0) &&
                  (uVar6 = sub_0065D9C0(param_1),
                  (int)param_1->field_0159 < CONCAT22(extraout_var_07,uVar6))) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (param_1->field_0284 != nullptr) {
                thunk_FUN_00690610(param_1->field_0284,param_1->field_007D);
              }
            }
          }
          goto cf_common_join_0066704E;
        }
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (param_1->field_00F3 == 2) {
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar7 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            iVar9 = (int)param_1->field_01A7 / 2 + (int)param_1->field_01A1;
LAB_00666413:
            iVar11 = thunk_FUN_0065fd50(param_1,iVar9,iVar11,sVar7,0);
          }
LAB_0066641b:
          if (iVar11 == 0) goto cf_common_exit_00667066;
          goto LAB_00666423;
        }
        if (param_1->field_00A7 == 0) goto LAB_006664d8;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666423;
        param_1->field_009B = 0x1f6;
        goto cf_common_join_00667054;
      }
      switch(uVar13) {
      case 0x1f6:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x1f7;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar6 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT22(extraout_var_08,uVar6) <= (int)param_1->field_00E4)
          goto cf_common_join_00667047;
          goto cf_common_join_00666DC1;
        }
        iVar11 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
          psVar10 = &param_1->field_01A1;
          iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              psVar10,iVar11);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar7 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              iVar9 = (int)param_1->field_01A7 / 2 + (int)*psVar10;
              goto LAB_00666413;
            }
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,psVar10,'\x02');
            goto LAB_0066641b;
          }
        }
LAB_00666423:
        param_1->field_009B = 0x1f7;
        break;
      case 0x1f7:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            sub_0065F980(param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_006664d8:
          uVar6 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = CONCAT22(extraout_var_09,uVar6);
          sVar7 = param_1->field_00E4;
          goto LAB_006664e6;
        }
        param_1->field_00A3 = 1;
        iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      case 0x1f8:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            sub_0065F980(param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar6 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)param_1->field_00E4 < CONCAT22(extraout_var_11,uVar6))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        param_1->field_00A3 = 1;
        param_1->field_023B->count = 0;
        uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar13;
        uVar6 = sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar13 = CONCAT22(extraout_var_10,uVar6) / ((uVar13 >> 0x10) % 3 + 5);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        iVar11 = thunk_FUN_0065eb70(param_1,*(uint *)&param_1->field_0xc7,uVar13,
                                    &param_1->field_023B->flags,*(uint *)&param_1->field_0xcb,
                                    *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                    (uint)(byte)param_1->field_0xd3);
        if (iVar11 < 1) {
          sub_0065F980(param_1);
          param_1->field_009B = 0;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        iVar11 = thunk_FUN_00660420(param_1,param_1->field_023B);
        goto joined_r0x00666ceb;
      default:
        goto cf_common_exit_00667066;
      case 0x1fe:
        param_1->field_00EB = 0x40;
        param_1->field_00AB = *(int *)&param_1->field_0xd5;
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,*(int *)&param_1->field_0xd5,0,0,0
                          );
        *(undefined2 *)&param_1->field_0x195 = *(undefined2 *)&param_1->field_0xc7;
        *(undefined2 *)&param_1->field_0x197 = *(undefined2 *)&param_1->field_0xc9;
        *(undefined2 *)&param_1->field_0x199 = *(undefined2 *)&param_1->field_0xcb;
        *(undefined2 *)&param_1->field_0x19b = *(undefined2 *)&param_1->field_0xcd;
        *(undefined2 *)&param_1->field_0x19d = *(undefined2 *)&param_1->field_0xcf;
        *(undefined2 *)&param_1->field_0x19f = *(undefined2 *)&param_1->field_0xd1;
        thunk_FUN_006757c0((short *)&param_1->field_0x195,(short *)&param_1->field_0x197,
                           (short *)&param_1->field_0x199,(short *)&param_1->field_0x19b,
                           (short *)&param_1->field_0x19d,(short *)&param_1->field_0x19f);
        uVar13 = *(uint *)&param_1->field_0xbf & 1;
        param_1->field_00F3 = uVar13;
        if (uVar13 == 0) {
          param_1->field_00F3 = *(uint *)&param_1->field_0xbf & 2;
        }
        if (param_1->field_00F3 == 0) {
          uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar13;
          param_1->field_00F3 = (uVar13 >> 0x10 & 1) + 1;
        }
        uVar13 = *(uint *)&param_1->field_0xc3;
        if ((uVar13 & 0x100) == 0) {
          param_1->field_00EF = uVar13 & 0x200;
          if ((uVar13 & 0x200) == 0) {
            param_1->field_00EF = uVar13 & 0x400;
          }
          if ((param_1->field_00EF == 0) && ((uVar13 & 0x800) != 0)) {
            uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar13;
            param_1->field_00EF = (-(uint)((uVar13 & 0x10000) != 0) & 0xfffffe00) + 0x400;
          }
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x201;
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x201;
        }
        break;
      case 0x1ff:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (param_1->field_00F3 == 2) {
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar8 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            sVar7 = param_1->field_01A7;
            sVar4 = param_1->field_01A1;
LAB_006668ef:
            iVar11 = thunk_FUN_0065fd50(param_1,(int)sVar7 / 2 + (int)sVar4,iVar11,sVar8,0);
          }
LAB_006668f9:
          if (iVar11 == 0) goto cf_common_exit_00667066;
          goto LAB_00666901;
        }
        if (param_1->field_00A7 == 0) goto LAB_00666934;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666901;
        param_1->field_009B = 0x200;
      }
      goto cf_common_join_00667054;
    }
    if (0x4d < uVar13 - 0x201) goto cf_common_exit_00667066;
    bVar2 = *(byte *)(uVar13 + 0x667073);
    switch(uVar13) {
    case 0x201:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar6 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_13,uVar6))
      goto cf_common_join_00666DC1;
      break;
    default:
      goto cf_common_exit_00667066;
    case 0x208:
      param_1->field_00EB = 0x10;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc5;
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xc9,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xcd);
        iVar11 = thunk_FUN_0065fd50(param_1,(int)*(short *)&param_1->field_0xbf,
                                    (int)*(short *)&param_1->field_0xc1,
                                    *(short *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xcf);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) break;
      if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
      uVar13 = param_1->field_00AF + param_1->field_00AB;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
LAB_00666ddf:
      if (bVar22 || bVar23) goto cf_common_exit_00667066;
      break;
    case 0x212:
      param_1->field_00EB = 0x20;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc7;
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(uint)bVar2,0,0,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = CONCAT22(extraout_var_16,*(undefined2 *)&param_1->field_0xc3);
        iVar11 = thunk_FUN_00660620((AnonShape_00660620_6BCED4D7 *)param_1,uVar17,uVar17);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 == 0) {
        uVar6 = sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar11 = CONCAT22(extraout_var_14,uVar6);
        sVar7 = *(short *)&param_1->field_0xc5;
LAB_006664e6:
        if (sVar7 < iVar11) {
          if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
          uVar13 = param_1->field_00AF + param_1->field_00AB;
          bVar22 = param_1->field_0280 < uVar13;
          bVar23 = param_1->field_0280 == uVar13;
          goto LAB_00666ddf;
        }
      }
      break;
    case 0x21c:
      param_1->field_00EB = 2;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xd3;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = thunk_FUN_0065fe10(param_1,&param_1->field_0xc7,*(int *)&param_1->field_0xc3,
                                    (short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
LAB_00666db5:
      if (param_1->field_00A7 == 0) {
cf_common_join_00666DC1:
        if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
        uVar13 = param_1->field_00AF + param_1->field_00AB;
        bVar22 = param_1->field_0280 < uVar13;
        bVar23 = param_1->field_0280 == uVar13;
        goto LAB_00666ddf;
      }
      break;
    case 0x226:
      param_1->field_00EB = 0x2000;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      param_1->field_00AB = *(undefined4 *)&param_1->field_0xcf;
      param_1->field_00AF = param_1->field_0280;
      iVar11 = thunk_FUN_00660700(param_1,*(short *)&param_1->field_0xc3,
                                  *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7,
                                  (int)*(short *)&param_1->field_0xc9,
                                  (int)*(short *)&param_1->field_0xcb,
                                  (int)*(short *)&param_1->field_0xcd);
      goto joined_r0x00666ceb;
    case 0x230:
      param_1->field_00EB = 0x1000;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xcb;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = thunk_FUN_00660910(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((param_1->field_00A7 == 0) &&
          (uVar6 = sub_0065D9C0(param_1),
          (int)*(short *)&param_1->field_0xc9 < CONCAT22(extraout_var_15,uVar6))) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x23a:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc9;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = thunk_FUN_00660a40(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      if ((param_1->field_00A7 == 0) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x244:
      param_1->field_00EB = 0x800;
      param_1->field_00AB = *(undefined4 *)&param_1->field_0xc9;
      param_1->field_00AF = param_1->field_0280;
      param_1->field_009B = 0x246;
      goto cf_common_join_00667054;
    case 0x246:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      iVar11 = thunk_FUN_00660b50((AnonShape_00660620_6BCED4D7 *)param_1,
                                  (int)*(short *)&param_1->field_0xc3,*(short *)&param_1->field_0xc3
                                  ,*(short *)&param_1->field_0xc5,
                                  (int)*(short *)&param_1->field_0xc7,*(int *)&param_1->field_0xbf);
joined_r0x00666ceb:
      if (iVar11 == 0) goto cf_common_exit_00667066;
      break;
    case 0x24e:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar11 = thunk_FUN_0065e450((AnonShape_0065E360_B94C37CB *)param_1,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    (int)*(short *)&param_1->field_0xc7,
                                    (int)*(short *)&param_1->field_0xc9);
        param_1->field_00B3 = iVar11;
        if (0 < iVar11) {
          iVar11 = (*(int *)&param_1->field_0xcd * iVar11) / 100;
          param_1->field_00B3 = iVar11;
          if (iVar11 == 0) {
            param_1->field_00B3 = 1;
          }
          goto cf_common_exit_00667066;
        }
      }
      else {
        local_8 = nullptr;
        switch(*(undefined4 *)&param_1->field_0xc3) {
        case 0xa3:
          iVar11 = 0x4e;
          break;
        default:
          iVar11 = 0;
          break;
        case 0xa8:
          iVar11 = 0x45;
          break;
        case 0xb2:
          iVar11 = 0x70;
          break;
        case 0xbe:
          iVar11 = 0x72;
        }
        local_10 = (DArrayTy *)sub_0065E360(param_1,(uint)bVar2,iVar11);
        if (local_10 != nullptr) {
          uVar13 = local_10->count;
          local_c = 0;
          if (0 < (int)uVar13) {
            do {
              if (local_c < uVar13) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_10, local_c) (runtime stride) */
                puVar15 = (ushort *)(local_10->elementSize * local_c + (int)local_10->data);
              }
              else {
                puVar15 = nullptr;
              }
              this_00 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar15,
                                   CASE_1);
              local_48 = this_00;
              switch(*(undefined4 *)&param_1->field_0xc3) {
              case 0xa3:
              case 0xa8:
              case 0xbe:
                uVar13 = thunk_FUN_004c5350(this_00,0,nullptr,(int)*(short *)&param_1->field_0xc7
                                            ,(int)*(short *)&param_1->field_0xc9,0,0,0);
                if (uVar13 != 0) {
                  sVar7 = *(short *)&param_1->field_0xc7;
                  sVar4 = *(short *)&param_1->field_0xc9;
                  this_00->field_0265 = this_00->field_0265 | 2;
                  this_00->field_02A5 = (int)sVar7;
                  this_00->field_02A9 = (int)sVar4;
                  this_00->field_02AD = 0;
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
                break;
              case 0xb2:
                if (this_00->field_0024 != this_00->field_023D) {
                  uVar12 = LookupRecordByte((char)this_00->field_023D);
                  local_4c = ((uVar12 & 0xffU) + this_00->field_0235 * 3) * 3;
                  local_EAX_9844 = LookupRecordByte(*(char *)&this_00->field_0024);
                  if ((&DAT_007e1984)[(local_EAX_9844 & 0xffU) + local_4c] == '\0') break;
                }
                if ((local_48->field_0245 == 0) && (99 < local_48->field_04EC)) {
                  thunk_FUN_004d8e70(local_48,(int)*(short *)&param_1->field_0xc7,
                                     (int)*(short *)&param_1->field_0xc9,0);
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
              }
              local_c = local_c + 1;
              uVar13 = local_10->count;
            } while ((int)local_c < (int)uVar13);
          }
cf_break_loop_0066703E:
          DArrayDestroy(local_10);
        }
      }
    }
cf_common_join_00667047:
    sub_0065F980(param_1);
    goto cf_common_join_0066704E;
  }
  if (uVar13 == 0x82) {
    param_1->field_00EB = 0x40;
    param_1->field_00AB = param_1->field_0190;
    param_1->field_00AF = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0190,0,0,0);
    iVar11 = param_1->field_00EF;
    if (((iVar11 == 0x200) || (iVar11 == 0x400)) &&
       (iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                           ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                            &param_1->field_01A1,iVar11), iVar11 == param_1->field_00EF)) {
      param_1->field_009B = 0x83;
    }
    else {
      param_1->field_00EF = 0x100;
      param_1->field_009B = 0x85;
    }
    goto cf_common_join_00667054;
  }
  switch(uVar13) {
  case 0:
    uVar3 = param_1->field_007B;
    if (0x10 < uVar3) {
      if (uVar3 == 0x20) goto LAB_006650bc;
      if (uVar3 != 0x8000) goto cf_common_exit_00667066;
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,iVar11);
      param_1->field_009B = 0x32;
      break;
    }
    if (uVar3 == 0x10) {
LAB_006650bc:
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,iVar11);
      param_1->field_009B = 0x3c;
      break;
    }
    if (uVar3 != 1) {
      if ((uVar3 != 2) && (uVar3 != 4)) goto cf_common_exit_00667066;
      goto LAB_006650bc;
    }
    goto LAB_00665237;
  default:
    goto cf_common_exit_00667066;
  case 10:
    param_1->field_00EB = 1;
    goto cf_common_exit_00667066;
  case 0xc:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 2000;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0xe:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 10;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x10:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x32;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x12:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x7d;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
LAB_006651f3:
    if ((param_1->field_00AB == 0) ||
       (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    if (param_1->field_00B3 != 0) {
      sub_0065F980(param_1);
    }
LAB_00665237:
    param_1->field_009B = 10;
    break;
  case 0x14:
    if (param_1->field_0115 == '\0') {
LAB_0066530b:
      param_1->field_009B = 0x28;
LAB_00665315:
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = 0x19;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_011E = param_1->field_0116;
      param_1->field_00EB = 2;
    }
    goto LAB_00665327;
  case 0x19:
    param_1->field_00EB = 2;
    if (param_1->field_00A3 != 0) {
      if ((param_1->field_00A7 != 0) ||
         ((param_1->field_00AB != 0 &&
          (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)))) goto LAB_0066530b;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    param_1->field_00AB = param_1->field_011A;
    param_1->field_00AF = param_1->field_0280;
    iVar11 = thunk_FUN_0065fe10(param_1,param_1->field_011A,param_1->field_011E,nullptr);
    if (-1 < iVar11) goto cf_common_exit_00667066;
    param_1->field_009B = 0x28;
    break;
  case 0x1e:
    param_1->field_00EB = 4;
    param_1->field_009B = 0x23;
    break;
  case 0x23:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_01BB;
      param_1->field_00AF = param_1->field_0280;
      iVar11 = thunk_FUN_00660540(param_1,param_1->field_01AD,param_1->field_01C3,
                                  param_1->field_01C5,param_1->field_01C7,param_1->field_01B9,
                                  param_1->field_01C9,&param_1->field_0x1ca);
      if (-1 < iVar11) goto cf_common_exit_00667066;
      if (param_1->field_00B3 != 0) goto cf_common_join_00667047;
      goto cf_common_join_0066704E;
    }
    if ((param_1->field_00A7 == 0) &&
       ((param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    iVar11 = 0;
    if (param_1->field_00B3 != 0) {
      sub_0065F980(param_1);
    }
    param_1->field_01F7 = 0x19;
    param_1->field_009B = 0x78;
    break;
  case 0x28:
    if ((param_1->field_0122 == '\0') || (*(int *)&param_1->field_0223->field_0xc == 0)) {
LAB_00665607:
      param_1->field_009B = 0x3c;
      goto LAB_00665315;
    }
    param_1->field_012D = 0;
    param_1->field_00AB = param_1->field_0123;
    param_1->field_00AF = param_1->field_0280;
    param_1->field_009B = 0x2a;
    param_1->field_009F = 0;
    param_1->field_00A3 = 0;
    param_1->field_00A7 = 0;
    param_1->field_00EB = 8;
LAB_00665327:
    if (param_1->field_0139 != '\0') {
      uVar13 = param_1->field_014E + param_1->field_014A;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
/* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
LAB_0066534b:
      if ((!bVar22 && !bVar23) &&
         (uVar6 = sub_0065D9C0(param_1), (int)param_1->field_013E <= CONCAT22(extraout_var,uVar6)))
      {
LAB_0066586a:
        param_1->field_009B = 0x6e;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
    }
LAB_00665886:
    if ((param_1->field_0163 == '\0') ||
       (iVar11 = thunk_FUN_0065ef70((AnonShape_0065EF70_E78A8204 *)param_1), iVar11 == 0))
    goto cf_common_exit_00667066;
    param_1->field_009B = 100;
    break;
  case 0x2a:
    param_1->field_00EB = 8;
    if (param_1->field_00A3 != 0) {
      iVar11 = param_1->field_0135;
      if (iVar11 == 0) {
LAB_006655b2:
        if (param_1->field_00A7 != 0) {
LAB_006655ba:
          param_1->field_009B = 0x2a;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_012D = param_1->field_012D + 1;
          param_1->field_00A7 = 0;
        }
      }
      else {
        if (param_1->field_0131 + iVar11 < param_1->field_0280) goto LAB_006655ba;
        if (iVar11 == 0) goto LAB_006655b2;
      }
      if ((param_1->field_00AB != 0) &&
         (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)) goto LAB_00665607;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    pAVar5 = param_1->field_0223;
    if ((param_1->field_012D < *(uint *)&pAVar5->field_0xc) &&
       (psVar10 = (short *)(pAVar5->field_0008 * param_1->field_012D + pAVar5->field_001C),
       psVar10 != nullptr)) {
      param_1->field_0131 = param_1->field_0280;
      param_1->field_0135 = *(undefined4 *)(psVar10 + 3);
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)psVar10[6],(int)psVar10[5],
                         (int)psVar10[6],(int)psVar10[7]);
      local_64 = *psVar10;
      local_62 = psVar10[1];
      local_60 = psVar10[2];
      local_5e = 1;
      local_5c = 1;
      local_5a = 1;
      iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                         ((AnonReceiver_00660180 *)param_1,&local_64,'\x02');
      if (iVar11 == 0) goto cf_common_exit_00667066;
    }
    param_1->field_009B = 0x3c;
    break;
  case 0x32:
    param_1->field_009B = 0x33;
    break;
  case 0x33:
    param_1->field_009B = 0x34;
    break;
  case 0x34:
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      iVar11 = thunk_FUN_00660010(param_1);
      if (iVar11 == 0) goto cf_common_exit_00667066;
      param_1->field_009B = 0x78;
      param_1->field_01F7 = 3000;
      param_1->field_009F = 0x33;
    }
    else {
      if (param_1->field_00A7 == 0) goto cf_common_exit_00667066;
      uVar6 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT22(extraout_var_00,uVar6) != 0 && -1 < extraout_var_00) {
        uVar13 = param_1->field_0280;
        memset(&stack0xffffff64, 0, 0x34); /* compiler bulk-zero initialization */
        iVar11 = 0;
        local_9c = 0x72;
        local_94 = 2;
        local_98 = uVar13;
        local_90 = (DArrayTy *)sub_0065DA10(param_1,uVar13);
        if ((AiTactClassTy *)param_1->field_0284 != nullptr) {
          AiTactClassTy::GetAiMess
                    ((AiTactClassTy *)param_1->field_0284,
                     (AnonShape_0068FD00_A5257008 *)&stack0xffffff64);
        }
        DArrayDestroy(local_90);
      }
      param_1->field_009B = 0x78;
      param_1->field_01F7 = 0xfa;
      param_1->field_009F = 0x33;
    }
    goto LAB_0066705a;
  case 0x3c:
    if (param_1->field_0100 == '\0') {
      param_1->field_009B = 0x14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = 0x41;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00EB = 1;
    }
    if (param_1->field_0139 != '\0') {
      uVar13 = param_1->field_014E + param_1->field_014A;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
      goto LAB_0066534b;
    }
    goto LAB_00665886;
  case 0x41:
    param_1->field_00EB = 1;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_0107;
      param_1->field_00AF = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)param_1->field_010D,
                         (int)param_1->field_010B,(int)param_1->field_010D,(int)param_1->field_010F);
      thunk_FUN_0065fd50(param_1,(int)param_1->field_0101,(int)param_1->field_0103,
                         param_1->field_0105,0);
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00AB != 0) &&
       (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)) {
      param_1->field_009B = 0x14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((param_1->field_0139 == '\0') ||
        (param_1->field_0280 <= param_1->field_014E + param_1->field_014A)) ||
       (uVar6 = sub_0065D9C0(param_1), CONCAT22(extraout_var_01,uVar6) < (int)param_1->field_013E))
    goto LAB_00665886;
    goto LAB_0066586a;
  case 100:
    param_1->field_00EB = 0x100;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_016C;
      param_1->field_00AF = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_016C,0,0,0);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,'\x01');
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00A7 == 0) &&
       ((param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
    goto cf_common_exit_00667066;
    goto cf_common_join_0066704E;
  case 0x6e:
    param_1->field_00EB = 0x80;
    param_1->field_00AB = param_1->field_0142;
    param_1->field_00AF = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar11,0,0,0);
    if ((short *)param_1->field_0097 != (short *)0xff) {
      iVar11 = thunk_FUN_0065e9a0(param_1,(short *)param_1->field_0097,
                                  (short *)&param_1->field_0x195,0,param_1->field_013A,nullptr,
                                  0xffffffff,0);
      if (iVar11 == 0) {
        uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar13;
        if ((uVar13 & 0x10000) == 0) {
          iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              &param_1->field_01A1,0);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            param_1->field_00EF = iVar11;
            param_1->field_009B = 0x6f;
          }
          else {
            param_1->field_00EF = 0x100;
            param_1->field_009B = 0x71;
          }
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x71;
        }
        break;
      }
    }
    param_1->field_014E = param_1->field_0280;
    goto cf_common_join_0066704E;
  case 0x6f:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x70;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
LAB_00665a76:
      uVar6 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((int)param_1->field_0140 < CONCAT22(extraout_var_02,uVar6)) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
LAB_00665aac:
      param_1->field_014E = param_1->field_0280;
      goto cf_common_join_0066704E;
    }
    param_1->field_00A3 = 1;
LAB_00665b48:
    iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02');
    if (iVar11 == 0) goto cf_common_exit_00667066;
LAB_00665b57:
    param_1->field_009B = 0x71;
    break;
  case 0x70:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x71;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar6 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)param_1->field_0140 < CONCAT22(extraout_var_03,uVar6)) {
        if ((param_1->field_00AB == 0) ||
           (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))
        goto cf_common_exit_00667066;
        param_1->field_014E = param_1->field_0280;
        goto cf_common_join_0066704E;
      }
      goto LAB_00665aac;
    }
    param_1->field_00A3 = 1;
    if (((param_1->field_00EF != 0x200) && (param_1->field_00EF != 0x400)) ||
       (uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar13,
       (uVar13 & 0x10000) == 0)) goto LAB_00665b57;
    iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                       ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                        &param_1->field_01A1,param_1->field_00EF);
    if ((iVar11 == 0x200) || (iVar11 == 0x400)) goto LAB_00665b48;
    param_1->field_009B = 0x71;
    break;
  case 0x71:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) goto LAB_00665aac;
      goto LAB_00665a76;
    }
    param_1->field_00A3 = 1;
    iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                        (char)param_1->field_0146);
    if (iVar11 == 0) goto cf_common_exit_00667066;
    param_1->field_014E = param_1->field_0280;
cf_common_join_0066704E:
    param_1->field_009B = 0;
    break;
  case 0x78:
    param_1->field_00EB = 0x4000;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_01F7;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    if (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB)
    goto cf_common_exit_00667066;
    param_1->field_009B = param_1->field_009F;
  }
cf_common_join_00667054:
  param_1->field_009F = 0;
LAB_0066705a:
  param_1->field_00A3 = 0;
  param_1->field_00A7 = 0;
cf_common_exit_00667066:
  if (((param_1->field_0284 != nullptr) && (param_1->field_0176 != '\0')) &&
     ((param_1->field_00EB & param_1->field_017B) != 0)) {
    GoToRepair(param_1);
  }
  return;
}

