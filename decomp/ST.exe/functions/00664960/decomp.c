#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=718;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_009B uses
   /SubmarineTitans/Recovered/Enums/AiFltClassTy_field_009BState. Cases:
   CASE_A=10;CASE_14=20;CASE_19=25;CASE_23=35;CASE_28=40;CASE_2A=42;CASE_32=50;CASE_33=51;CASE_34=52;CASE_3C=60;CASE_41=65;CASE_64=100;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_78=120;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_8C=140;CASE_1F5=501;CASE_1F6=502;CASE_1F7=503;CASE_1F8=504;CASE_201=513;CASE_246=582

   [STSwitchEnumApplier] Switch target field_009B uses
   /SubmarineTitans/Recovered/Enums/AiFltClassTy_field_009BState. Cases:
   CASE_0=0;CASE_A=10;CASE_14=20;CASE_19=25;CASE_23=35;CASE_28=40;CASE_2A=42;CASE_32=50;CASE_33=51;CASE_34=52;CASE_3C=60;CASE_41=65;CASE_64=100;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_78=120;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_8C=140;CASE_1F5=501;CASE_1F6=502;CASE_1F7=503;CASE_1F8=504;CASE_201=513;CASE_246=582;CASE_24E=590
    */

void __fastcall AiFltClassTy::sub_00664960(AiFltClassTy *param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  AnonPointee_AiFltClassTy_0223 *pAVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  AiPlrClassTy *this;
  undefined2 uVar14;
  int iVar17;
  short *psVar18;
  int iVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  short extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  int local_EAX_4212;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int local_EAX_4547;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  int local_EAX_5022;
  uint uVar20;
  int local_EAX_5229;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  int local_EAX_6228;
  short sVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  int local_EAX_6733;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  int local_EAX_7232;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  int iVar11;
  short sVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_15;
  int local_EAX_9418;
  STGameObjC *this_00;
  uint uVar13;
  int uVar12;
  int local_EAX_9844;
  AiFltClassTy_field_009BState AVar21;
  uint uVar22;
  ushort *puVar23;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX;
  int iVar24;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  undefined4 uVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  bool bVar30;
  bool bVar31;
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
  iVar17 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                     ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  iVar19 = extraout_EDX;
  while (-1 < iVar17) {
    switch(local_44[0]) {
    case 0:
      goto switchD_006649d9_caseD_0;
    case 1:
      param_1->field_0139 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_013A =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
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
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
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
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
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
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
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
        iVar19 = (int)STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c));
        do {
          if (local_c < local_4c) {
            psVar18 = (short *)(param_1->field_022F->field_0008 * local_c +
                               param_1->field_022F->field_001C);
          }
          else {
            psVar18 = nullptr;
          }
          iVar24 = (int)psVar18[1];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = iVar19 + -1 + (int)CONCAT11(uStack_35,uStack_36);
          iVar17 = (int)*psVar18;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)
                     (CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) + -1 +
                     (int)CONCAT11(uStack_33,uStack_34));
          iVar19 = (int)STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c));
          local_10 = (DArrayTy *)(int)psVar18[3];
          local_58 = (int)psVar18[4];
          local_54 = iVar24 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((iVar17 <= iVar19) && (iVar19 <= iVar17 + -1 + (int)local_10)) &&
             (((iVar24 <= CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) &&
               (((CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) <= local_54 && (iVar17 <= local_50)) &&
                (local_50 <= iVar17 + -1 + (int)local_10)))) &&
              ((iVar24 <= (int)local_48 && ((int)local_48 <= iVar24 + -1 + local_58))))))
          goto LAB_00665047;
          local_50 = iVar17 + -1 + (int)local_10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar26 = (int)CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c));
          local_54 = iVar24 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)(iVar26 + -1 + (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((iVar19 <= iVar17) &&
             (((iVar1 = iVar19 + -1 + (int)CONCAT11(uStack_35,uStack_36), iVar17 <= iVar1 &&
               (iVar26 <= iVar24)) &&
              ((iVar24 <= (int)local_48 &&
               ((((iVar19 <= local_50 && (local_50 <= iVar1)) && (iVar26 <= local_54)) &&
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
      param_1->field_0177 = CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0179 = CONCAT11(uStack_38,STPiece<3,1>(local_3c));
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
      param_1->field_0101 = CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0103 = CONCAT11(uStack_38,STPiece<3,1>(local_3c));
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
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_011A = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xd:
      param_1->field_0122 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0129 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0123 = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0xe:
      thunk_FUN_00675950(CONCAT13(STPiece<3,1>(local_3c),
                                  CONCAT12(STPiece<2,1>(local_3c),
                                           STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c)))),
                         CONCAT13(uStack_37,
                                  CONCAT12(uStack_38,CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)))),
                         CONCAT11(uStack_37,uStack_38),(short *)&local_3c,
                         (short *)((int)&local_3c + 2),(short *)&uStack_38,0);
      pAVar5 = param_1->field_0223;
      uVar20 = 0;
      local_4c = *(uint *)&pAVar5->field_0xc;
      if (0 < (int)local_4c) {
        bVar30 = local_4c != 0;
        do {
          if (bVar30) {
            psVar18 = (short *)(pAVar5->field_0008 * uVar20 + pAVar5->field_001C);
          }
          else {
            psVar18 = nullptr;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((((STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c)) == *psVar18) &&
               (CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) == psVar18[1])) &&
              (CONCAT11(uStack_37,uStack_38) == psVar18[2])) &&
             (((CONCAT11(uStack_31,uStack_32) == psVar18[5] &&
               (CONCAT11(uStack_2f,uStack_30) == psVar18[6])) &&
              (CONCAT11(uStack_2d,uStack_2e) == psVar18[7])))) goto cf_common_join_00665024;
          uVar20 = uVar20 + 1;
          bVar30 = uVar20 < local_4c;
        } while ((int)uVar20 < (int)local_4c);
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
      iVar19 = thunk_FUN_00664650(param_1,local_44[0]);
      if (iVar19 < 1) goto cf_common_join_00665024;
      break;
    case 0x32:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 500;
      goto cf_common_join_00664FF6;
    case 0x33:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x1fe;
      goto cf_common_join_00664FF6;
    case 0x34:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x208;
      goto cf_common_join_00664FF6;
    case 0x35:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x212;
      goto cf_common_join_00664FF6;
    case 0x36:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x21c;
      goto cf_common_join_00664FF6;
    case 0x37:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x226;
      goto cf_common_join_00664FF6;
    case 0x38:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x230;
      goto cf_common_join_00664FF6;
    case 0x39:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x23a;
      goto cf_common_join_00664FF6;
    case 0x3a:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      iVar19 = 0;
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = 0x244;
      goto cf_common_join_00664FF6;
    case 0x3b:
      puVar27 = local_44;
      puVar28 = (uint *)&param_1->field_0xb7;
      memmove(puVar28, puVar27, 0x34); /* compiler REP MOVS byte copy */
      if (param_1->field_00B3 != 0) {
        sub_0065F980(param_1);
      }
      AVar21 = CASE_24E;
cf_common_join_00664FF6:
      param_1->field_009B = AVar21;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00B3 = AVar21;
cf_common_join_00665024:
      if ((local_44[0] < 0x32) || (99 < local_44[0])) {
        if ((local_44[0] == 0) || (0x31 < local_44[0])) {
switchD_006649d9_caseD_0:
          thunk_FUN_00664650(param_1,local_44[0]);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          iVar19 = extraout_EDX_01;
          goto LAB_00665067;
        }
      }
      else {
        thunk_FUN_006646e0((int)param_1);
      }
    }
LAB_00665047:
    iVar17 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                       ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    iVar19 = extraout_EDX_00;
  }
LAB_00665067:
  this = local_8;
  param_1->field_00EB = 0;
  AVar21 = param_1->field_009B;
  if (CASE_82 < AVar21) {
    if (AVar21 < CASE_201) {
      if (AVar21 == 0x200) {
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = CASE_201;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_00666934:
          uVar14 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_12,uVar14))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        iVar19 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar19 == 0x200) || (iVar19 == 0x400)) {
          psVar18 = &param_1->field_01A1;
          iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,psVar18,iVar19);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar16 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar19 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              sVar15 = param_1->field_01A7;
              sVar4 = *psVar18;
              goto LAB_006668ef;
            }
            iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,psVar18,'\x02');
            goto LAB_006668f9;
          }
        }
LAB_00666901:
        param_1->field_009B = CASE_201;
        goto cf_common_join_00667054;
      }
      if (AVar21 < CASE_1F6) {
        if (AVar21 != CASE_1F5) {
          if (AVar21 < 0x86) {
            if (AVar21 == CASE_85) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_0195,
                                            (char)param_1->field_00FB);
                if (iVar19 == 0) goto cf_common_exit_00667066;
                if (local_8 != nullptr) {
                  thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
                }
              }
              else {
                if (param_1->field_00A7 != 0) {
                  if (local_8 != nullptr) {
                    thunk_FUN_0067bf60(local_8,'\x01',param_1->field_00F7);
                  }
                  param_1->field_009B = CASE_0;
                  param_1->field_009F = 0;
                  param_1->field_00A3 = 0;
                  param_1->field_00A7 = 0;
                }
                uVar14 = sub_0065D9C0(param_1);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if (((int)param_1->field_018E < CONCAT22(extraout_var_06,uVar14)) &&
                   ((*(int *)&param_1->field_00AB == 0 ||
                    (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
                goto cf_common_exit_00667066;
                if (this != nullptr) {
                  thunk_FUN_0067bf60(this,-1,param_1->field_00F7);
                }
              }
            }
            else if (AVar21 == CASE_83) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,
                                            '\x02');
                if (iVar19 == 0) goto cf_common_exit_00667066;
LAB_00665eba:
                param_1->field_009B = CASE_85;
                goto cf_common_join_00667054;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = CASE_84;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar14 = sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_05,uVar14)) &&
                 ((*(int *)&param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
            else {
              if (AVar21 != CASE_84) goto cf_common_exit_00667066;
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                if (((param_1->field_00EF == 0x200) || (param_1->field_00EF == 0x400)) &&
                   (uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar20
                   , (uVar20 & 0x10000) != 0)) {
                  local_EAX_5229 =
                       SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                       thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,
                                          &param_1->field_01A1,param_1->field_00EF);
                  if ((local_EAX_5229 == 0x200) || (local_EAX_5229 == 0x400)) {
                    iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                             thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                                &param_1->field_01A1,'\x02');
                    if (iVar19 == 0) goto cf_common_exit_00667066;
                    param_1->field_009B = CASE_85;
                  }
                  else {
                    param_1->field_009B = CASE_85;
                  }
                  goto cf_common_join_00667054;
                }
                goto LAB_00665eba;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = CASE_85;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar14 = sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_04,uVar14)) &&
                 ((*(int *)&param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
          }
          else {
            if (AVar21 != CASE_8C) {
              if (AVar21 != 500) goto cf_common_exit_00667066;
              uVar14 = *(undefined2 *)&param_1->field_00E6;
              uVar11 = *(undefined2 *)((int)&param_1->field_00E6 + 2);
              param_1->field_00EB = 0x40;
              param_1->field_00AB = uVar14;
              param_1->field_00AD = uVar11;
              param_1->field_00AF = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              STPiece<0,2>(uVar20) = param_1->field_00BF;
              STPiece<2,2>(uVar20) = param_1->field_00C1;
              uVar22 = uVar20 & 1;
              param_1->field_00F3 = uVar22;
              if (uVar22 == 0) {
                param_1->field_00F3 = uVar20 & 2;
              }
              if (param_1->field_00F3 == 0) {
                uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar20;
                param_1->field_00F3 = (uVar20 >> 0x10 & 1) + 1;
              }
              uVar20 = *(uint *)&param_1->field_0xc3;
              if ((uVar20 & 0x100) == 0) {
                uVar22 = uVar20 & 0x200;
                param_1->field_00EF = uVar22;
                if (uVar22 == 0) {
                  uVar22 = uVar20 & 0x400;
                  param_1->field_00EF = uVar22;
                }
                if ((param_1->field_00EF == 0) && ((uVar20 & 0x800) != 0)) {
                  uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar20;
                  param_1->field_00EF = (-(uint)((uVar20 & 0x10000) != 0) & 0xfffffe00) + 0x400;
                }
              }
              else {
                param_1->field_00EF = 0x100;
              }
              if ((param_1->field_00EF == 0x100) && (param_1->field_00F3 == 1)) {
                param_1->field_009B = CASE_1F8;
              }
              else {
                STPiece<0,2>(uVar6) = param_1->field_00CF;
                STPiece<2,2>(uVar6) = param_1->field_00D1;
                STPiece<0,2>(uVar7) = param_1->field_00CB;
                STPiece<2,2>(uVar7) = param_1->field_00CD;
                iVar19 = thunk_FUN_0065e9a0(param_1,*(short **)&param_1->field_00C7,
                                            &param_1->field_0195,uVar7,uVar6,&param_1->field_0xd5,
                                            STReplaceLowByte((uint32_t)(uVar22), (uint8_t)(param_1->field_0xd3)),1);
                if (iVar19 != 0) goto cf_common_join_00667047;
                iVar19 = param_1->field_00EF;
                if (((iVar19 == 0x200) || (iVar19 == 0x400)) &&
                   (local_EAX_6228 =
                         SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                         thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,
                                            &param_1->field_01A1,iVar19),
                   local_EAX_6228 == param_1->field_00EF)) {
                  param_1->field_009B = CASE_1F5;
                }
                else {
                  param_1->field_00EF = 0x100;
                  if (param_1->field_00F3 != 1) goto LAB_00666423;
                  param_1->field_009B = CASE_1F8;
                }
              }
              goto cf_common_join_00667054;
            }
            param_1->field_00EB = 0x200;
            if (param_1->field_00A3 == 0) {
              param_1->field_00A3 = 1;
              uVar14 = *(undefined2 *)((int)&param_1->field_015B + 2);
              param_1->field_00AB = *(undefined2 *)&param_1->field_015B;
              param_1->field_00AD = uVar14;
              param_1->field_00AF = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                       thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_0195,
                                          (char)param_1->field_015F);
              if (iVar19 == 0) goto cf_common_exit_00667066;
              if (param_1->field_0284 != nullptr) {
                thunk_FUN_00690610(param_1->field_0284,param_1->field_007D);
              }
            }
            else {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((param_1->field_00A7 == 0) &&
                  (uVar14 = sub_0065D9C0(param_1),
                  (int)param_1->field_0159 < CONCAT22(extraout_var_07,uVar14))) &&
                 ((*(int *)&param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
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
            iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar15 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar19 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            iVar17 = (int)param_1->field_01A7 / 2 + (int)param_1->field_01A1;
LAB_00666413:
            iVar19 = thunk_FUN_0065fd50(param_1,iVar17,iVar19,sVar15,0);
          }
LAB_0066641b:
          if (iVar19 == 0) goto cf_common_exit_00667066;
          goto LAB_00666423;
        }
        if (param_1->field_00A7 == 0) goto LAB_006664d8;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666423;
        param_1->field_009B = CASE_1F6;
        goto cf_common_join_00667054;
      }
      switch(AVar21) {
      case CASE_1F6:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = CASE_1F7;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar14 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT22(extraout_var_08,uVar14) <= (int)param_1->field_00E4)
          goto cf_common_join_00667047;
          goto cf_common_join_00666DC1;
        }
        iVar19 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar19 == 0x200) || (iVar19 == 0x400)) {
          psVar18 = &param_1->field_01A1;
          local_EAX_6733 =
               SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                         ((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,psVar18,iVar19);
          if ((local_EAX_6733 == 0x200) || (local_EAX_6733 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar15 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar19 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              iVar17 = (int)param_1->field_01A7 / 2 + (int)*psVar18;
              goto LAB_00666413;
            }
            iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,psVar18,'\x02');
            goto LAB_0066641b;
          }
        }
LAB_00666423:
        param_1->field_009B = CASE_1F7;
        break;
      case CASE_1F7:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            sub_0065F980(param_1);
            param_1->field_009B = CASE_0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_006664d8:
          uVar14 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar19 = CONCAT22(extraout_var_09,uVar14);
          sVar15 = param_1->field_00E4;
          goto LAB_006664e6;
        }
        param_1->field_00A3 = 1;
        iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,&param_1->field_0195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      case CASE_1F8:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            sub_0065F980(param_1);
            param_1->field_009B = CASE_0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar14 = sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)param_1->field_00E4 < CONCAT22(extraout_var_11,uVar14))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        param_1->field_00A3 = 1;
        param_1->field_023B->count = 0;
        uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar20;
        uVar14 = sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar20 = CONCAT22(extraout_var_10,uVar14) / ((uVar20 >> 0x10) % 3 + 5);
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        STPiece<0,2>(uVar8) = param_1->field_00CF;
        STPiece<2,2>(uVar8) = param_1->field_00D1;
        STPiece<0,2>(uVar9) = param_1->field_00CB;
        STPiece<2,2>(uVar9) = param_1->field_00CD;
        STPiece<0,2>(uVar10) = param_1->field_00C7;
        STPiece<2,2>(uVar10) = param_1->field_00C9;
        local_EAX_7232 =
             thunk_FUN_0065eb70(param_1,uVar10,uVar20,&param_1->field_023B->flags,uVar9,uVar8,
                                &param_1->field_0xd5,(uint)(byte)param_1->field_0xd3);
        if (local_EAX_7232 < 1) {
          sub_0065F980(param_1);
          param_1->field_009B = CASE_0;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        iVar19 = thunk_FUN_00660420(param_1,param_1->field_023B);
        goto joined_r0x00666ceb;
      default:
        goto cf_common_exit_00667066;
      case 0x1fe:
        param_1->field_00EB = 0x40;
        iVar19 = *(int *)&param_1->field_0xd5;
        param_1->field_00AB = (short)iVar19;
        param_1->field_00AD = (short)((uint)iVar19 >> 0x10);
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar19,0,0,0);
        param_1->field_0195 = param_1->field_00C7;
        param_1->field_0197 = param_1->field_00C9;
        param_1->field_0199 = param_1->field_00CB;
        param_1->field_019B = param_1->field_00CD;
        param_1->field_019D = param_1->field_00CF;
        param_1->field_019F = param_1->field_00D1;
        thunk_FUN_006757c0(&param_1->field_0195,&param_1->field_0197,&param_1->field_0199,
                           &param_1->field_019B,&param_1->field_019D,&param_1->field_019F);
        STPiece<0,2>(uVar22) = param_1->field_00BF;
        STPiece<2,2>(uVar22) = param_1->field_00C1;
        param_1->field_00F3 = uVar22 & 1;
        if ((uVar22 & 1) == 0) {
          param_1->field_00F3 = uVar22 & 2;
        }
        if (param_1->field_00F3 == 0) {
          uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar20;
          param_1->field_00F3 = (uVar20 >> 0x10 & 1) + 1;
        }
        uVar20 = *(uint *)&param_1->field_0xc3;
        if ((uVar20 & 0x100) == 0) {
          param_1->field_00EF = uVar20 & 0x200;
          if ((uVar20 & 0x200) == 0) {
            param_1->field_00EF = uVar20 & 0x400;
          }
          if ((param_1->field_00EF == 0) && ((uVar20 & 0x800) != 0)) {
            uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar20;
            param_1->field_00EF = (-(uint)((uVar20 & 0x10000) != 0) & 0xfffffe00) + 0x400;
          }
          param_1->field_00EF = 0x100;
          param_1->field_009B = CASE_201;
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = CASE_201;
        }
        break;
      case 0x1ff:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (param_1->field_00F3 == 2) {
            iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar16 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar19 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            sVar15 = param_1->field_01A7;
            sVar4 = param_1->field_01A1;
LAB_006668ef:
            iVar19 = thunk_FUN_0065fd50(param_1,(int)sVar15 / 2 + (int)sVar4,iVar19,sVar16,0);
          }
LAB_006668f9:
          if (iVar19 == 0) goto cf_common_exit_00667066;
          goto LAB_00666901;
        }
        if (param_1->field_00A7 == 0) goto LAB_00666934;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666901;
        param_1->field_009B = 0x200;
      }
      goto cf_common_join_00667054;
    }
    if (0x4d < AVar21 - CASE_201) goto cf_common_exit_00667066;
    bVar2 = *(byte *)(AVar21 + 0x667073);
    switch(AVar21) {
    case CASE_201:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,&param_1->field_0195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = CASE_0;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar14 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_13,uVar14))
      goto cf_common_join_00666DC1;
      break;
    default:
      goto cf_common_exit_00667066;
    case 0x208:
      param_1->field_00EB = 0x10;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined2 *)&param_1->field_0xc5;
        param_1->field_00AD = param_1->field_00C7;
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)param_1->field_00CB,
                           (int)param_1->field_00C9,(int)param_1->field_00CB,
                           (int)param_1->field_00CD);
        STPiece<0,2>(uVar25) = param_1->field_00CF;
        STPiece<2,2>(uVar25) = param_1->field_00D1;
        iVar19 = thunk_FUN_0065fd50(param_1,(int)param_1->field_00BF,(int)param_1->field_00C1,
                                    *(short *)&param_1->field_0xc3,uVar25);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) break;
      if (*(int *)&param_1->field_00AB == 0) goto cf_common_exit_00667066;
      uVar20 = param_1->field_00AF + *(int *)&param_1->field_00AB;
      bVar30 = param_1->field_0280 < uVar20;
      bVar31 = param_1->field_0280 == uVar20;
LAB_00666ddf:
      if (bVar30 || bVar31) goto cf_common_exit_00667066;
      break;
    case 0x212:
      param_1->field_00EB = 0x20;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = param_1->field_00C7;
        param_1->field_00AD = param_1->field_00C9;
        param_1->field_00AF = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(uint)bVar2,0,0,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar25 = CONCAT22(extraout_var_16,*(undefined2 *)&param_1->field_0xc3);
        iVar19 = thunk_FUN_00660620((AnonShape_00660620_6BCED4D7 *)param_1,uVar25,uVar25);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 == 0) {
        uVar14 = sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar19 = CONCAT22(extraout_var_14,uVar14);
        sVar15 = *(short *)&param_1->field_0xc5;
LAB_006664e6:
        if (sVar15 < iVar19) {
          if (*(int *)&param_1->field_00AB == 0) goto cf_common_exit_00667066;
          uVar20 = param_1->field_00AF + *(int *)&param_1->field_00AB;
          bVar30 = param_1->field_0280 < uVar20;
          bVar31 = param_1->field_0280 == uVar20;
          goto LAB_00666ddf;
        }
      }
      break;
    case 0x21c:
      param_1->field_00EB = 2;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined2 *)&param_1->field_0xd3;
        param_1->field_00AD = *(undefined2 *)&param_1->field_0xd5;
        param_1->field_00AF = param_1->field_0280;
        iVar19 = thunk_FUN_0065fe10(param_1,&param_1->field_00C7,*(int *)&param_1->field_0xc3,
                                    &param_1->field_00C7);
        goto joined_r0x00666ceb;
      }
LAB_00666db5:
      if (param_1->field_00A7 == 0) {
cf_common_join_00666DC1:
        if (*(int *)&param_1->field_00AB == 0) goto cf_common_exit_00667066;
        uVar20 = param_1->field_00AF + *(int *)&param_1->field_00AB;
        bVar30 = param_1->field_0280 < uVar20;
        bVar31 = param_1->field_0280 == uVar20;
        goto LAB_00666ddf;
      }
      break;
    case 0x226:
      param_1->field_00EB = 0x2000;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_00CF;
      param_1->field_00AD = param_1->field_00D1;
      param_1->field_00AF = param_1->field_0280;
      iVar19 = thunk_FUN_00660700(param_1,*(short *)&param_1->field_0xc3,
                                  *(short *)&param_1->field_0xc5,param_1->field_00C7,
                                  (int)param_1->field_00C9,(int)param_1->field_00CB,
                                  (int)param_1->field_00CD);
      goto joined_r0x00666ceb;
    case 0x230:
      param_1->field_00EB = 0x1000;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = param_1->field_00CB;
        param_1->field_00AD = param_1->field_00CD;
        param_1->field_00AF = param_1->field_0280;
        iVar19 = thunk_FUN_00660910(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,param_1->field_00C7);
        goto joined_r0x00666ceb;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((param_1->field_00A7 == 0) &&
          (uVar14 = sub_0065D9C0(param_1),
          (int)param_1->field_00C9 < CONCAT22(extraout_var_15,uVar14))) &&
         ((*(int *)&param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x23a:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = param_1->field_00C9;
        param_1->field_00AD = param_1->field_00CB;
        param_1->field_00AF = param_1->field_0280;
        iVar19 = thunk_FUN_00660a40(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,param_1->field_00C7);
        goto joined_r0x00666ceb;
      }
      if ((param_1->field_00A7 == 0) &&
         ((*(int *)&param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x244:
      param_1->field_00EB = 0x800;
      param_1->field_00AB = param_1->field_00C9;
      param_1->field_00AD = param_1->field_00CB;
      param_1->field_00AF = param_1->field_0280;
      param_1->field_009B = CASE_246;
      goto cf_common_join_00667054;
    case CASE_246:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      STPiece<0,2>(iVar19) = param_1->field_00BF;
      STPiece<2,2>(iVar19) = param_1->field_00C1;
      param_1->field_00A3 = 1;
      iVar19 = thunk_FUN_00660b50((AnonShape_00660620_6BCED4D7 *)param_1,
                                  (int)*(short *)&param_1->field_0xc3,*(short *)&param_1->field_0xc3
                                  ,*(short *)&param_1->field_0xc5,(int)param_1->field_00C7,iVar19);
joined_r0x00666ceb:
      if (iVar19 == 0) goto cf_common_exit_00667066;
      break;
    case CASE_24E:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        local_EAX_9418 =
             thunk_FUN_0065e450((AnonShape_0065E360_B94C37CB *)param_1,
                                *(undefined4 *)&param_1->field_0xc3,
                                *(undefined4 *)&param_1->field_0xc3,(int)param_1->field_00C7,
                                (int)param_1->field_00C9);
        param_1->field_00B3 = local_EAX_9418;
        if (0 < local_EAX_9418) {
          iVar19 = (*(int *)&param_1->field_00CD * local_EAX_9418) / 100;
          param_1->field_00B3 = iVar19;
          if (iVar19 == 0) {
            param_1->field_00B3 = 1;
          }
          goto cf_common_exit_00667066;
        }
      }
      else {
        local_8 = nullptr;
        switch(*(undefined4 *)&param_1->field_0xc3) {
        case 0xa3:
          iVar19 = 0x4e;
          break;
        default:
          iVar19 = 0;
          break;
        case 0xa8:
          iVar19 = 0x45;
          break;
        case 0xb2:
          iVar19 = 0x70;
          break;
        case 0xbe:
          iVar19 = 0x72;
        }
        local_10 = (DArrayTy *)sub_0065E360(param_1,(uint)bVar2,iVar19);
        if (local_10 != nullptr) {
          uVar20 = local_10->count;
          local_c = 0;
          if (0 < (int)uVar20) {
            do {
              if (local_c < uVar20) {
                puVar23 = DArrayAt<ushort>(local_10, local_c);
              }
              else {
                puVar23 = nullptr;
              }
              this_00 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar23,
                                   CASE_1);
              local_48 = this_00;
              switch(*(undefined4 *)&param_1->field_0xc3) {
              case 0xa3:
              case 0xa8:
              case 0xbe:
                uVar13 = thunk_FUN_004c5350(this_00,0,nullptr,(int)param_1->field_00C7,
                                            (int)param_1->field_00C9,0,0,0);
                if (uVar13 != 0) {
                  sVar15 = param_1->field_00C7;
                  sVar4 = param_1->field_00C9;
                  this_00->field_0265 = this_00->field_0265 | 2;
                  this_00->field_02A5 = (int)sVar15;
                  this_00->field_02A9 = (int)sVar4;
                  this_00->field_02AD = 0;
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
                break;
              case 0xb2:
                if (this_00->field_0024 != this_00->field_023D) {
                  uVar12 = LookupRecordByte((char)this_00->field_023D);
                  local_4c = ((uint)(byte)uVar12 + this_00->field_0235 * 3) * 3;
                  local_EAX_9844 = LookupRecordByte(*(char *)&this_00->field_0024);
                  local_EAX_9844 = (int)(byte)local_EAX_9844;
                  if ((&DAT_007e1984)[local_EAX_9844 + local_4c] == '\0') break;
                }
                if ((local_48->field_0245 == 0) && (99 < local_48->field_04EC)) {
                  thunk_FUN_004d8e70(local_48,(int)param_1->field_00C7,(int)param_1->field_00C9,0);
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
              }
              local_c = local_c + 1;
              uVar20 = local_10->count;
            } while ((int)local_c < (int)uVar20);
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
  if (AVar21 == CASE_82) {
    param_1->field_00EB = 0x40;
    iVar19 = param_1->field_0190;
    param_1->field_00AB = (short)iVar19;
    param_1->field_00AD = (short)((uint)iVar19 >> 0x10);
    param_1->field_00AF = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar19,0,0,0);
    iVar19 = param_1->field_00EF;
    if (((iVar19 == 0x200) || (iVar19 == 0x400)) &&
       (local_EAX_5022 =
             SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                       ((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,&param_1->field_01A1,
                        iVar19), local_EAX_5022 == param_1->field_00EF)) {
      param_1->field_009B = CASE_83;
    }
    else {
      param_1->field_00EF = 0x100;
      param_1->field_009B = CASE_85;
    }
    goto cf_common_join_00667054;
  }
  switch(AVar21) {
  case CASE_0:
    uVar3 = param_1->field_007B;
    if (0x10 < uVar3) {
      if (uVar3 == 0x20) goto LAB_006650bc;
      if (uVar3 != 0x8000) goto cf_common_exit_00667066;
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,iVar19);
      param_1->field_009B = CASE_32;
      break;
    }
    if (uVar3 == 0x10) {
LAB_006650bc:
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,iVar19);
      param_1->field_009B = CASE_3C;
      break;
    }
    if (uVar3 != 1) {
      if ((uVar3 != 2) && (uVar3 != 4)) goto cf_common_exit_00667066;
      goto LAB_006650bc;
    }
    goto LAB_00665237;
  default:
    goto cf_common_exit_00667066;
  case CASE_A:
    param_1->field_00EB = 1;
    goto cf_common_exit_00667066;
  case 0xc:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 2000;
      param_1->field_00AD = 0;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0xe:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 10;
      param_1->field_00AD = 0;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x10:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x32;
      param_1->field_00AD = 0;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x12:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x7d;
      param_1->field_00AD = 0;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
LAB_006651f3:
    if ((*(int *)&param_1->field_00AB == 0) ||
       (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    if (param_1->field_00B3 != 0) {
      sub_0065F980(param_1);
    }
LAB_00665237:
    param_1->field_009B = CASE_A;
    break;
  case CASE_14:
    if (param_1->field_0115 == '\0') {
LAB_0066530b:
      param_1->field_009B = CASE_28;
LAB_00665315:
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = CASE_19;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_011E = param_1->field_0116;
      param_1->field_00EB = 2;
    }
    goto LAB_00665327;
  case CASE_19:
    param_1->field_00EB = 2;
    if (param_1->field_00A3 != 0) {
      if ((param_1->field_00A7 != 0) ||
         ((*(int *)&param_1->field_00AB != 0 &&
          (param_1->field_00AF + *(int *)&param_1->field_00AB < param_1->field_0280))))
      goto LAB_0066530b;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    uVar25 = param_1->field_011A;
    param_1->field_00AB = (short)uVar25;
    param_1->field_00AD = (short)((uint)uVar25 >> 0x10);
    param_1->field_00AF = param_1->field_0280;
    iVar19 = thunk_FUN_0065fe10(param_1,uVar25,param_1->field_011E,nullptr);
    if (-1 < iVar19) goto cf_common_exit_00667066;
    param_1->field_009B = CASE_28;
    break;
  case 0x1e:
    param_1->field_00EB = 4;
    param_1->field_009B = CASE_23;
    break;
  case CASE_23:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      uVar14 = *(undefined2 *)&param_1->field_01BB;
      uVar11 = *(undefined2 *)((int)&param_1->field_01BB + 2);
      param_1->field_00A3 = 1;
      param_1->field_00AB = uVar14;
      param_1->field_00AD = uVar11;
      param_1->field_00AF = param_1->field_0280;
      iVar19 = thunk_FUN_00660540(param_1,param_1->field_01AD,param_1->field_01C3,
                                  param_1->field_01C5,param_1->field_01C7,param_1->field_01B9,
                                  param_1->field_01C9,&param_1->field_0x1ca);
      if (-1 < iVar19) goto cf_common_exit_00667066;
      if (param_1->field_00B3 != 0) goto cf_common_join_00667047;
      goto cf_common_join_0066704E;
    }
    if ((param_1->field_00A7 == 0) &&
       ((*(int *)&param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    iVar19 = 0;
    if (param_1->field_00B3 != 0) {
      sub_0065F980(param_1);
    }
    param_1->field_01F7 = 0x19;
    param_1->field_009B = CASE_78;
    break;
  case CASE_28:
    if ((param_1->field_0122 == '\0') || (*(int *)&param_1->field_0223->field_0xc == 0)) {
LAB_00665607:
      param_1->field_009B = CASE_3C;
      goto LAB_00665315;
    }
    uVar14 = *(undefined2 *)&param_1->field_0123;
    uVar11 = *(undefined2 *)((int)&param_1->field_0123 + 2);
    param_1->field_012D = 0;
    param_1->field_00AB = uVar14;
    param_1->field_00AD = uVar11;
    param_1->field_00AF = param_1->field_0280;
    param_1->field_009B = CASE_2A;
    param_1->field_009F = 0;
    param_1->field_00A3 = 0;
    param_1->field_00A7 = 0;
    param_1->field_00EB = 8;
LAB_00665327:
    if (param_1->field_0139 != '\0') {
      uVar20 = param_1->field_014E + param_1->field_014A;
      bVar30 = param_1->field_0280 < uVar20;
      bVar31 = param_1->field_0280 == uVar20;
/* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
LAB_0066534b:
      if ((!bVar30 && !bVar31) &&
         (uVar14 = sub_0065D9C0(param_1), (int)param_1->field_013E <= CONCAT22(extraout_var,uVar14))
         ) {
LAB_0066586a:
        param_1->field_009B = CASE_6E;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
    }
LAB_00665886:
    if ((param_1->field_0163 == '\0') ||
       (iVar19 = thunk_FUN_0065ef70((AnonShape_0065EF70_E78A8204 *)param_1), iVar19 == 0))
    goto cf_common_exit_00667066;
    param_1->field_009B = CASE_64;
    break;
  case CASE_2A:
    param_1->field_00EB = 8;
    if (param_1->field_00A3 != 0) {
      iVar19 = param_1->field_0135;
      if (iVar19 == 0) {
LAB_006655b2:
        if (param_1->field_00A7 != 0) {
LAB_006655ba:
          param_1->field_009B = CASE_2A;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_012D = param_1->field_012D + 1;
          param_1->field_00A7 = 0;
        }
      }
      else {
        if (param_1->field_0131 + iVar19 < param_1->field_0280) goto LAB_006655ba;
        if (iVar19 == 0) goto LAB_006655b2;
      }
      if ((*(int *)&param_1->field_00AB != 0) &&
         (param_1->field_00AF + *(int *)&param_1->field_00AB < param_1->field_0280))
      goto LAB_00665607;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    pAVar5 = param_1->field_0223;
    if ((param_1->field_012D < *(uint *)&pAVar5->field_0xc) &&
       (psVar18 = (short *)(pAVar5->field_0008 * param_1->field_012D + pAVar5->field_001C),
       psVar18 != nullptr)) {
      param_1->field_0131 = param_1->field_0280;
      param_1->field_0135 = *(undefined4 *)(psVar18 + 3);
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)psVar18[6],(int)psVar18[5],
                         (int)psVar18[6],(int)psVar18[7]);
      local_64 = *psVar18;
      local_62 = psVar18[1];
      local_60 = psVar18[2];
      local_5e = 1;
      local_5c = 1;
      local_5a = 1;
      iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                         ((AnonReceiver_00660180 *)param_1,&local_64,'\x02');
      if (iVar19 == 0) goto cf_common_exit_00667066;
    }
    param_1->field_009B = CASE_3C;
    break;
  case CASE_32:
    param_1->field_009B = CASE_33;
    break;
  case CASE_33:
    param_1->field_009B = CASE_34;
    break;
  case CASE_34:
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      iVar19 = thunk_FUN_00660010(param_1);
      if (iVar19 == 0) goto cf_common_exit_00667066;
      param_1->field_009B = CASE_78;
      param_1->field_01F7 = 3000;
      param_1->field_009F = 0x33;
    }
    else {
      if (param_1->field_00A7 == 0) goto cf_common_exit_00667066;
      uVar14 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT22(extraout_var_00,uVar14) != 0 && -1 < extraout_var_00) {
        uVar20 = param_1->field_0280;
        memset(&stack0xffffff64, 0, 0x34); /* compiler bulk-zero initialization */
        local_9c = 0x72;
        local_94 = 2;
        local_98 = uVar20;
        local_90 = (DArrayTy *)sub_0065DA10(param_1,uVar20);
        if ((AiTactClassTy *)param_1->field_0284 != nullptr) {
          AiTactClassTy::GetAiMess
                    ((AiTactClassTy *)param_1->field_0284,
                     (AnonShape_0068FD00_A5257008 *)&stack0xffffff64);
        }
        DArrayDestroy(local_90);
      }
      param_1->field_009B = CASE_78;
      param_1->field_01F7 = 0xfa;
      param_1->field_009F = 0x33;
    }
    goto LAB_0066705a;
  case CASE_3C:
    if (param_1->field_0100 == '\0') {
      param_1->field_009B = CASE_14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = CASE_41;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00EB = 1;
    }
    if (param_1->field_0139 != '\0') {
      uVar20 = param_1->field_014E + param_1->field_014A;
      bVar30 = param_1->field_0280 < uVar20;
      bVar31 = param_1->field_0280 == uVar20;
      goto LAB_0066534b;
    }
    goto LAB_00665886;
  case CASE_41:
    param_1->field_00EB = 1;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      uVar14 = *(undefined2 *)((int)&param_1->field_0107 + 2);
      param_1->field_00AB = *(undefined2 *)&param_1->field_0107;
      param_1->field_00AD = uVar14;
      param_1->field_00AF = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)param_1->field_010D,
                         (int)param_1->field_010B,(int)param_1->field_010D,(int)param_1->field_010F);
      thunk_FUN_0065fd50(param_1,(int)param_1->field_0101,(int)param_1->field_0103,
                         param_1->field_0105,0);
      goto cf_common_exit_00667066;
    }
    if ((*(int *)&param_1->field_00AB != 0) &&
       (param_1->field_00AF + *(int *)&param_1->field_00AB < param_1->field_0280)) {
      param_1->field_009B = CASE_14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((param_1->field_0139 == '\0') ||
        (param_1->field_0280 <= param_1->field_014E + param_1->field_014A)) ||
       (uVar14 = sub_0065D9C0(param_1), CONCAT22(extraout_var_01,uVar14) < (int)param_1->field_013E)
       ) goto LAB_00665886;
    goto LAB_0066586a;
  case CASE_64:
    param_1->field_00EB = 0x100;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      iVar19 = param_1->field_016C;
      param_1->field_00AB = (short)iVar19;
      param_1->field_00AD = (short)((uint)iVar19 >> 0x10);
      param_1->field_00AF = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar19,0,0,0);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                ((AnonReceiver_00660180 *)param_1,&param_1->field_0195,'\x01');
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00A7 == 0) &&
       ((*(int *)&param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
    goto cf_common_exit_00667066;
    goto cf_common_join_0066704E;
  case CASE_6E:
    param_1->field_00EB = 0x80;
    uVar14 = *(undefined2 *)((int)&param_1->field_0142 + 2);
    param_1->field_00AB = *(undefined2 *)&param_1->field_0142;
    param_1->field_00AD = uVar14;
    param_1->field_00AF = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar19,0,0,0);
    if ((short *)param_1->field_0097 != (short *)0xff) {
      iVar19 = thunk_FUN_0065e9a0(param_1,(short *)param_1->field_0097,&param_1->field_0195,0,
                                  param_1->field_013A,nullptr,0xffffffff,0);
      if (iVar19 == 0) {
        uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar20;
        if ((uVar20 & 0x10000) == 0) {
          local_EAX_4212 =
               SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                         ((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,&param_1->field_01A1
                          ,0);
          if ((local_EAX_4212 == 0x200) || (local_EAX_4212 == 0x400)) {
            param_1->field_00EF = local_EAX_4212;
            param_1->field_009B = CASE_6F;
          }
          else {
            param_1->field_00EF = 0x100;
            param_1->field_009B = CASE_71;
          }
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = CASE_71;
        }
        break;
      }
    }
    param_1->field_014E = param_1->field_0280;
    goto cf_common_join_0066704E;
  case CASE_6F:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = CASE_70;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
LAB_00665a76:
      uVar14 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((int)param_1->field_0140 < CONCAT22(extraout_var_02,uVar14)) &&
         ((*(int *)&param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))))
      goto cf_common_exit_00667066;
LAB_00665aac:
      param_1->field_014E = param_1->field_0280;
      goto cf_common_join_0066704E;
    }
    param_1->field_00A3 = 1;
LAB_00665b48:
    iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02');
    if (iVar19 == 0) goto cf_common_exit_00667066;
LAB_00665b57:
    param_1->field_009B = CASE_71;
    break;
  case CASE_70:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = CASE_71;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar14 = sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)param_1->field_0140 < CONCAT22(extraout_var_03,uVar14)) {
        if ((*(int *)&param_1->field_00AB == 0) ||
           (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB))
        goto cf_common_exit_00667066;
        param_1->field_014E = param_1->field_0280;
        goto cf_common_join_0066704E;
      }
      goto LAB_00665aac;
    }
    param_1->field_00A3 = 1;
    if (((param_1->field_00EF != 0x200) && (param_1->field_00EF != 0x400)) ||
       (uVar20 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar20,
       (uVar20 & 0x10000) == 0)) goto LAB_00665b57;
    local_EAX_4547 =
         SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                   ((AnonReceiver_0065ED90 *)param_1,&param_1->field_0195,&param_1->field_01A1,
                    param_1->field_00EF);
    if ((local_EAX_4547 == 0x200) || (local_EAX_4547 == 0x400)) goto LAB_00665b48;
    param_1->field_009B = CASE_71;
    break;
  case CASE_71:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) goto LAB_00665aac;
      goto LAB_00665a76;
    }
    param_1->field_00A3 = 1;
    iVar19 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,&param_1->field_0195,
                        (char)param_1->field_0146);
    if (iVar19 == 0) goto cf_common_exit_00667066;
    param_1->field_014E = param_1->field_0280;
cf_common_join_0066704E:
    param_1->field_009B = CASE_0;
    break;
  case CASE_78:
    param_1->field_00EB = 0x4000;
    if (param_1->field_00A3 == 0) {
      uVar14 = *(undefined2 *)&param_1->field_01F7;
      uVar11 = *(undefined2 *)((int)&param_1->field_01F7 + 2);
      param_1->field_00A3 = 1;
      param_1->field_00AB = uVar14;
      param_1->field_00AD = uVar11;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    if (param_1->field_0280 <= param_1->field_00AF + *(int *)&param_1->field_00AB)
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

