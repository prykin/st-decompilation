
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00664960(AiFltClassTy *param_1)

{
  undefined1 *puVar1;
  short *psVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  AiPlrClassTy *this;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
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
  uint uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  int iVar14;
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
  undefined4 uVar15;
  undefined2 *puVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  int iVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 *puVar21;
  bool bVar22;
  bool bVar23;
  undefined4 local_9c;
  undefined4 local_98;
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
     ((uint)param_1->field_0280 < (uint)(*(int *)&param_1->field_0x8f + param_1->field_008B))) {
    return;
  }
  *(undefined4 *)&param_1->field_0x8f = param_1->field_0280;
  local_8 = thunk_FUN_004357f0(param_1->field_0x24);
  iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                     ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar15 = extraout_EDX;
  while (-1 < iVar10) {
    switch(local_44[0]) {
    case 0:
      goto switchD_006649d9_caseD_0;
    case 1:
      param_1->field_0x139 = (undefined1)local_3c;
      *(uint *)&param_1->field_0x13a =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)&param_1->field_0x13e = CONCAT11(uStack_36,uStack_37);
      *(ushort *)&param_1->field_0x140 = CONCAT11(uStack_34,uStack_35);
      *(uint *)&param_1->field_0x142 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      *(uint *)&param_1->field_0x146 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(undefined4 *)&param_1->field_0x14a = local_2b;
      break;
    case 2:
      param_1->field_0187 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0188 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_018C = CONCAT11(uStack_36,uStack_37);
      *(ushort *)&param_1->field_0x18e = CONCAT11(uStack_34,uStack_35);
      *(uint *)&param_1->field_0x190 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      break;
    case 3:
      param_1->field_0152 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0153 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)&param_1->field_0x157 = CONCAT11(uStack_36,uStack_37);
      *(ushort *)&param_1->field_0x159 = CONCAT11(uStack_34,uStack_35);
      *(uint *)&param_1->field_0x15b =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)&param_1->field_0x15f =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 4:
      Library::DKW::TBL::FUN_006ae1c0(&param_1->field_020B->flags,&local_3c);
      thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)param_1->field_020B,&LAB_004013cf);
      goto cf_common_join_00665024;
    case 5:
      if (param_1->field_020B != (DArrayTy *)0x0) {
        param_1->field_020B->count = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 6:
      param_1->field_00FF = (undefined1)local_3c;
      break;
    case 7:
      param_1->field_0163 = (undefined1)local_3c;
      *(uint *)&param_1->field_0x164 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)&param_1->field_0x168 = CONCAT11(uStack_36,uStack_37);
      *(ushort *)&param_1->field_0x16a = CONCAT11(uStack_34,uStack_35);
      *(uint *)&param_1->field_0x16c =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)&param_1->field_0x172 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 8:
      local_c = 0;
      local_4c = *(uint *)&param_1->field_022F->field_0xc;
      if (0 < (int)local_4c) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar10 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
        do {
          if (local_c < local_4c) {
            psVar11 = (short *)(param_1->field_022F->field_0008 * local_c +
                               param_1->field_022F->field_001C);
          }
          else {
            psVar11 = (short *)0x0;
          }
          iVar17 = (int)psVar11[1];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = iVar10 + -1 + (int)CONCAT11(uStack_35,uStack_36);
          iVar14 = (int)*psVar11;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)
                     (CONCAT11(local_3c._3_1_,local_3c._2_1_) + -1 +
                     (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar10 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
          local_10 = (DArrayTy *)(int)psVar11[3];
          local_58 = (int)psVar11[4];
          local_54 = iVar17 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((iVar14 <= iVar10) && (iVar10 <= iVar14 + -1 + (int)local_10)) &&
             (((iVar17 <= CONCAT11(local_3c._3_1_,local_3c._2_1_) &&
               (((CONCAT11(local_3c._3_1_,local_3c._2_1_) <= local_54 && (iVar14 <= local_50)) &&
                (local_50 <= iVar14 + -1 + (int)local_10)))) &&
              ((iVar17 <= (int)local_48 && ((int)local_48 <= iVar17 + -1 + local_58))))))
          goto LAB_00665047;
          local_50 = iVar14 + -1 + (int)local_10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar18 = (int)CONCAT11(local_3c._3_1_,local_3c._2_1_);
          local_54 = iVar17 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)(iVar18 + -1 + (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((iVar10 <= iVar14) &&
             (((iVar3 = iVar10 + -1 + (int)CONCAT11(uStack_35,uStack_36), iVar14 <= iVar3 &&
               (iVar18 <= iVar17)) &&
              ((iVar17 <= (int)local_48 &&
               ((((iVar10 <= local_50 && (local_50 <= iVar3)) && (iVar18 <= local_54)) &&
                (local_54 <= (int)local_48)))))))) {
            Library::DKW::TBL::FUN_006ae140((uint *)param_1->field_022F,local_c,&local_3c);
            goto cf_common_join_00665024;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)local_4c);
      }
      if (param_1->field_022F != (AnonPointee_AiFltClassTy_022F *)0x0) {
        Library::DKW::TBL::FUN_006b11d0((uint *)param_1->field_022F,0,&local_3c);
      }
      param_1->field_0170 = param_1->field_0170 + 1;
      goto cf_common_join_00665024;
    case 9:
      if (param_1->field_022F != (AnonPointee_AiFltClassTy_022F *)0x0) {
        *(undefined4 *)&param_1->field_022F->field_0xc = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 10:
      param_1->field_0x176 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0177 = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0179 = CONCAT11(uStack_38,local_3c._3_1_);
      *(uint *)&param_1->field_0x17b =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_017F = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)&param_1->field_0x183 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 0xb:
      param_1->field_0x100 = (undefined1)local_3c;
      *(ushort *)&param_1->field_0x101 = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      *(ushort *)&param_1->field_0x103 = CONCAT11(uStack_38,local_3c._3_1_);
      *(ushort *)&param_1->field_0x105 = CONCAT11(uStack_36,uStack_37);
      *(undefined4 *)&param_1->field_0x111 = local_2b;
      *(uint *)&param_1->field_0x107 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_32,CONCAT12(uStack_33,CONCAT11(uStack_34,uStack_35)));
      *(ushort *)&param_1->field_0x10b = CONCAT11(uStack_30,uStack_31);
      *(ushort *)&param_1->field_0x10d = CONCAT11(uStack_2e,uStack_2f);
      *(ushort *)&param_1->field_0x10f = CONCAT11(uStack_2c,uStack_2d);
      break;
    case 0xc:
      param_1->field_0x115 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0116 =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(uint *)&param_1->field_0x11a =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xd:
      param_1->field_0122 = (undefined1)local_3c;
      *(uint *)&param_1->field_0x129 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(uint *)&param_1->field_0x123 =
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
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
      puVar19 = (uint *)param_1->field_0223;
      uVar12 = 0;
      local_4c = puVar19[3];
      if (0 < (int)local_4c) {
        bVar22 = local_4c != 0;
        do {
          if (bVar22) {
            psVar11 = (short *)(puVar19[2] * uVar12 + puVar19[7]);
          }
          else {
            psVar11 = (short *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((((CONCAT11(local_3c._1_1_,(undefined1)local_3c) == *psVar11) &&
               (CONCAT11(local_3c._3_1_,local_3c._2_1_) == psVar11[1])) &&
              (CONCAT11(uStack_37,uStack_38) == psVar11[2])) &&
             (((CONCAT11(uStack_31,uStack_32) == psVar11[5] &&
               (CONCAT11(uStack_2f,uStack_30) == psVar11[6])) &&
              (CONCAT11(uStack_2d,uStack_2e) == psVar11[7])))) goto cf_common_join_00665024;
          uVar12 = uVar12 + 1;
          bVar22 = uVar12 < local_4c;
        } while ((int)uVar12 < (int)local_4c);
      }
      if (puVar19 != (uint *)0x0) {
        Library::DKW::TBL::FUN_006b11d0(puVar19,0,&local_3c);
      }
      param_1->field_0127 = param_1->field_0127 + 1;
      goto cf_common_join_00665024;
    case 0xf:
      if (param_1->field_0223 != 0) {
        *(undefined4 *)(param_1->field_0223 + 0xc) = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 0x10:
      param_1->field_0194 = (undefined1)local_3c;
      break;
    default:
      iVar10 = thunk_FUN_00664650(param_1,local_44[0]);
      if (iVar10 < 1) goto cf_common_join_00665024;
      break;
    case 0x32:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 500;
      goto cf_common_join_00664FF6;
    case 0x33:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x1fe;
      goto cf_common_join_00664FF6;
    case 0x34:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x208;
      goto cf_common_join_00664FF6;
    case 0x35:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x212;
      goto cf_common_join_00664FF6;
    case 0x36:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x21c;
      goto cf_common_join_00664FF6;
    case 0x37:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x226;
      goto cf_common_join_00664FF6;
    case 0x38:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x230;
      goto cf_common_join_00664FF6;
    case 0x39:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x23a;
      goto cf_common_join_00664FF6;
    case 0x3a:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x244;
      goto cf_common_join_00664FF6;
    case 0x3b:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      if (param_1->field_00B3 != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar15 = 0x24e;
cf_common_join_00664FF6:
      param_1->field_009B = uVar15;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00B3 = uVar15;
cf_common_join_00665024:
      if ((local_44[0] < 0x32) || (99 < local_44[0])) {
        if ((local_44[0] == 0) || (0x31 < local_44[0])) {
switchD_006649d9_caseD_0:
          thunk_FUN_00664650(param_1,local_44[0]);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar15 = extraout_EDX_01;
          goto LAB_00665067;
        }
      }
      else {
        thunk_FUN_006646e0((int)param_1);
      }
    }
LAB_00665047:
    iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::thunk_FUN_00664540
                       ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar15 = extraout_EDX_00;
  }
LAB_00665067:
  this = local_8;
  *(undefined4 *)&param_1->field_0xeb = 0;
  uVar12 = param_1->field_009B;
  if (0x82 < uVar12) {
    if (uVar12 < 0x201) {
      if (uVar12 == 0x200) {
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x201;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_00666934:
          uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_12,uVar7))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        iVar10 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
          puVar1 = &param_1->field_0x1a1;
          iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0195,
                              (short *)puVar1,iVar10);
          if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
            if (*(int *)&param_1->field_0xf3 != 2) {
              sVar9 = *(short *)&param_1->field_0x1ab / 2 + *(short *)&param_1->field_0x1a5;
              iVar10 = (int)*(short *)&param_1->field_0x1a9 / 2 +
                       (int)*(short *)&param_1->field_0x1a3;
              sVar8 = *(short *)&param_1->field_0x1a7;
              sVar6 = *(short *)puVar1;
              goto LAB_006668ef;
            }
            iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,(short *)puVar1,'\x02');
            goto LAB_006668f9;
          }
        }
LAB_00666901:
        param_1->field_009B = 0x201;
        goto cf_common_join_00667054;
      }
      if (uVar12 < 0x1f6) {
        if (uVar12 != 0x1f5) {
          if (uVar12 < 0x86) {
            if (uVar12 == 0x85) {
              *(undefined4 *)&param_1->field_0xeb = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                            (short *)&param_1->field_0195,(char)param_1->field_00FB)
                ;
                if (iVar10 == 0) goto cf_common_exit_00667066;
                if (local_8 != (AiPlrClassTy *)0x0) {
                  thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
                }
              }
              else {
                if (param_1->field_00A7 != 0) {
                  if (local_8 != (AiPlrClassTy *)0x0) {
                    thunk_FUN_0067bf60(local_8,'\x01',param_1->field_00F7);
                  }
                  param_1->field_009B = 0;
                  param_1->field_009F = 0;
                  param_1->field_00A3 = 0;
                  param_1->field_00A7 = 0;
                }
                uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if (((int)*(short *)&param_1->field_0x18e < CONCAT22(extraout_var_06,uVar7)) &&
                   ((*(int *)&param_1->field_0xab == 0 ||
                    ((uint)param_1->field_0280 <=
                     (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
                goto cf_common_exit_00667066;
                if (this != (AiPlrClassTy *)0x0) {
                  thunk_FUN_0067bf60(this,-1,param_1->field_00F7);
                }
              }
            }
            else if (uVar12 == 0x83) {
              *(undefined4 *)&param_1->field_0xeb = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                            (short *)&param_1->field_0x1a1,'\x02');
                if (iVar10 == 0) goto cf_common_exit_00667066;
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
              uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)*(short *)&param_1->field_0x18e < CONCAT22(extraout_var_05,uVar7)) &&
                 ((*(int *)&param_1->field_0xab == 0 ||
                  ((uint)param_1->field_0280 <=
                   (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
              goto cf_common_exit_00667066;
              if (local_8 != (AiPlrClassTy *)0x0) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
            else {
              if (uVar12 != 0x84) goto cf_common_exit_00667066;
              *(undefined4 *)&param_1->field_0xeb = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                if (((param_1->field_00EF == 0x200) || (param_1->field_00EF == 0x400)) &&
                   (uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar12
                   , (uVar12 & 0x10000) != 0)) {
                  iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                           thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,
                                              (short *)&param_1->field_0195,
                                              (short *)&param_1->field_0x1a1,param_1->field_00EF);
                  if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
                    iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                             thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                                (short *)&param_1->field_0x1a1,'\x02');
                    if (iVar10 == 0) goto cf_common_exit_00667066;
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
              uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)*(short *)&param_1->field_0x18e < CONCAT22(extraout_var_04,uVar7)) &&
                 ((*(int *)&param_1->field_0xab == 0 ||
                  ((uint)param_1->field_0280 <=
                   (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
              goto cf_common_exit_00667066;
              if (local_8 != (AiPlrClassTy *)0x0) {
                thunk_FUN_0067bf60(local_8,-1,param_1->field_00F7);
              }
            }
          }
          else {
            if (uVar12 != 0x8c) {
              if (uVar12 != 500) goto cf_common_exit_00667066;
              *(undefined4 *)&param_1->field_0xeb = 0x40;
              *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xe6;
              *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              uVar12 = *(uint *)&param_1->field_0xbf & 1;
              *(uint *)&param_1->field_0xf3 = uVar12;
              if (uVar12 == 0) {
                *(uint *)&param_1->field_0xf3 = *(uint *)&param_1->field_0xbf & 2;
              }
              if (*(int *)&param_1->field_0xf3 == 0) {
                uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar13;
                *(uint *)&param_1->field_0xf3 = (uVar13 >> 0x10 & 1) + 1;
              }
              uVar13 = *(uint *)&param_1->field_0xc3;
              if ((uVar13 & 0x100) == 0) {
                uVar12 = uVar13 & 0x200;
                param_1->field_00EF = uVar12;
                if (uVar12 == 0) {
                  uVar12 = uVar13 & 0x400;
                  param_1->field_00EF = uVar12;
                }
                if ((param_1->field_00EF == 0) && ((uVar13 & 0x800) != 0)) {
                  uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar13;
                  param_1->field_00EF = (-(uint)((uVar13 & 0x10000) != 0) & 0xfffffe00) + 0x400;
                }
              }
              else {
                param_1->field_00EF = 0x100;
              }
              if ((param_1->field_00EF == 0x100) && (*(int *)&param_1->field_0xf3 == 1)) {
                param_1->field_009B = 0x1f8;
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = thunk_FUN_0065e9a0(param_1,*(uint *)&param_1->field_0xc7,
                                            (short *)&param_1->field_0195,
                                            *(uint *)&param_1->field_0xcb,
                                            *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                            CONCAT31((int3)(uVar12 >> 8),param_1->field_0xd3),1);
                if (iVar10 != 0) goto cf_common_join_00667047;
                iVar10 = param_1->field_00EF;
                if (((iVar10 == 0x200) || (iVar10 == 0x400)) &&
                   (iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                             thunk_FUN_0065ed90((AnonReceiver_0065ED90 *)param_1,
                                                (short *)&param_1->field_0195,
                                                (short *)&param_1->field_0x1a1,iVar10),
                   iVar10 == param_1->field_00EF)) {
                  param_1->field_009B = 0x1f5;
                }
                else {
                  param_1->field_00EF = 0x100;
                  if (*(int *)&param_1->field_0xf3 != 1) goto LAB_00666423;
                  param_1->field_009B = 0x1f8;
                }
              }
              goto cf_common_join_00667054;
            }
            *(undefined4 *)&param_1->field_0xeb = 0x200;
            if (param_1->field_00A3 == 0) {
              param_1->field_00A3 = 1;
              *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x15b;
              *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
              thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                       thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                          (short *)&param_1->field_0195,
                                          (char)*(undefined4 *)&param_1->field_0x15f);
              if (iVar10 == 0) goto cf_common_exit_00667066;
              if (param_1->field_0284 != (AnonPointee_AiFltClassTy_0284 *)0x0) {
                thunk_FUN_00690610(param_1->field_0284,param_1->field_007D);
              }
            }
            else {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((param_1->field_00A7 == 0) &&
                  (uVar7 = AiFltClassTy::sub_0065D9C0(param_1),
                  (int)*(short *)&param_1->field_0x159 < CONCAT22(extraout_var_07,uVar7))) &&
                 ((*(int *)&param_1->field_0xab == 0 ||
                  ((uint)param_1->field_0280 <=
                   (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
              goto cf_common_exit_00667066;
              if (param_1->field_0284 != (AnonPointee_AiFltClassTy_0284 *)0x0) {
                thunk_FUN_00690610(param_1->field_0284,param_1->field_007D);
              }
            }
          }
          goto cf_common_join_0066704E;
        }
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (*(int *)&param_1->field_0xf3 == 2) {
            iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                        (short *)&param_1->field_0x1a1,'\x02');
          }
          else {
            sVar8 = *(short *)&param_1->field_0x1ab / 2 + *(short *)&param_1->field_0x1a5;
            iVar10 = (int)*(short *)&param_1->field_0x1a9 / 2 + (int)*(short *)&param_1->field_0x1a3
            ;
            iVar14 = (int)*(short *)&param_1->field_0x1a7 / 2 + (int)*(short *)&param_1->field_0x1a1
            ;
LAB_00666413:
            iVar10 = thunk_FUN_0065fd50(param_1,iVar14,iVar10,sVar8,0);
          }
LAB_0066641b:
          if (iVar10 == 0) goto cf_common_exit_00667066;
          goto LAB_00666423;
        }
        if (param_1->field_00A7 == 0) goto LAB_006664d8;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666423;
        param_1->field_009B = 0x1f6;
        goto cf_common_join_00667054;
      }
      switch(uVar12) {
      case 0x1f6:
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x1f7;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT22(extraout_var_08,uVar7) <= (int)*(short *)&param_1->field_0xe4)
          goto cf_common_join_00667047;
          goto cf_common_join_00666DC1;
        }
        iVar10 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
          puVar1 = &param_1->field_0x1a1;
          iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0195,
                              (short *)puVar1,iVar10);
          if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
            if (*(int *)&param_1->field_0xf3 != 2) {
              sVar8 = *(short *)&param_1->field_0x1ab / 2 + *(short *)&param_1->field_0x1a5;
              iVar10 = (int)*(short *)&param_1->field_0x1a9 / 2 +
                       (int)*(short *)&param_1->field_0x1a3;
              iVar14 = (int)*(short *)&param_1->field_0x1a7 / 2 + (int)*(short *)puVar1;
              goto LAB_00666413;
            }
            iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,(short *)puVar1,'\x02');
            goto LAB_0066641b;
          }
        }
LAB_00666423:
        param_1->field_009B = 0x1f7;
        break;
      case 0x1f7:
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            thunk_FUN_0065f980((int)param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_006664d8:
          uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar10 = CONCAT22(extraout_var_09,uVar7);
          sVar8 = *(short *)&param_1->field_0xe4;
          goto LAB_006664e6;
        }
        param_1->field_00A3 = 1;
        iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0195,
                            (char)*(undefined4 *)&param_1->field_0xf3);
        goto joined_r0x00666ceb;
      case 0x1f8:
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            thunk_FUN_0065f980((int)param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)*(short *)&param_1->field_0xe4 < CONCAT22(extraout_var_11,uVar7))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        param_1->field_00A3 = 1;
        *(undefined4 *)(param_1->field_023B + 0xc) = 0;
        uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar12;
        uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar12 = CONCAT22(extraout_var_10,uVar7) / ((uVar12 >> 0x10) % 3 + 5);
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        iVar10 = thunk_FUN_0065eb70(param_1,*(uint *)&param_1->field_0xc7,uVar12,
                                    (uint *)param_1->field_023B,*(uint *)&param_1->field_0xcb,
                                    *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                    (uint)(byte)param_1->field_0xd3);
        if (iVar10 < 1) {
          thunk_FUN_0065f980((int)param_1);
          param_1->field_009B = 0;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        iVar10 = thunk_FUN_00660420(param_1,param_1->field_023B);
        goto joined_r0x00666ceb;
      default:
        goto cf_common_exit_00667066;
      case 0x1fe:
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xd5;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,
                           *(undefined4 *)&param_1->field_0xd5,0,0,0);
        *(undefined2 *)&param_1->field_0195 = *(undefined2 *)&param_1->field_0xc7;
        psVar11 = (short *)((int)&param_1->field_0195 + 2);
        *psVar11 = *(short *)&param_1->field_0xc9;
        *(undefined2 *)&param_1->field_0199 = *(undefined2 *)&param_1->field_0xcb;
        *(undefined2 *)((int)&param_1->field_0199 + 2) = *(undefined2 *)&param_1->field_0xcd;
        *(undefined2 *)&param_1->field_019D = *(undefined2 *)&param_1->field_0xcf;
        psVar2 = (short *)((int)&param_1->field_019D + 2);
        *psVar2 = *(short *)&param_1->field_0xd1;
        thunk_FUN_006757c0((short *)&param_1->field_0195,psVar11,(short *)&param_1->field_0199,
                           (short *)((int)&param_1->field_0199 + 2),(short *)&param_1->field_019D,
                           psVar2);
        uVar12 = *(uint *)&param_1->field_0xbf & 1;
        *(uint *)&param_1->field_0xf3 = uVar12;
        if (uVar12 == 0) {
          *(uint *)&param_1->field_0xf3 = *(uint *)&param_1->field_0xbf & 2;
        }
        if (*(int *)&param_1->field_0xf3 == 0) {
          uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar12;
          *(uint *)&param_1->field_0xf3 = (uVar12 >> 0x10 & 1) + 1;
        }
        uVar12 = *(uint *)&param_1->field_0xc3;
        if ((uVar12 & 0x100) == 0) {
          param_1->field_00EF = uVar12 & 0x200;
          if ((uVar12 & 0x200) == 0) {
            param_1->field_00EF = uVar12 & 0x400;
          }
          if ((param_1->field_00EF == 0) && ((uVar12 & 0x800) != 0)) {
            uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar12;
            param_1->field_00EF = (-(uint)((uVar12 & 0x10000) != 0) & 0xfffffe00) + 0x400;
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
        *(undefined4 *)&param_1->field_0xeb = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (*(int *)&param_1->field_0xf3 == 2) {
            iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     thunk_FUN_00660180((AnonReceiver_00660180 *)param_1,
                                        (short *)&param_1->field_0x1a1,'\x02');
          }
          else {
            sVar9 = *(short *)&param_1->field_0x1ab / 2 + *(short *)&param_1->field_0x1a5;
            iVar10 = (int)*(short *)&param_1->field_0x1a9 / 2 + (int)*(short *)&param_1->field_0x1a3
            ;
            sVar8 = *(short *)&param_1->field_0x1a7;
            sVar6 = *(short *)&param_1->field_0x1a1;
LAB_006668ef:
            iVar10 = thunk_FUN_0065fd50(param_1,(int)sVar8 / 2 + (int)sVar6,iVar10,sVar9,0);
          }
LAB_006668f9:
          if (iVar10 == 0) goto cf_common_exit_00667066;
          goto LAB_00666901;
        }
        if (param_1->field_00A7 == 0) goto LAB_00666934;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666901;
        param_1->field_009B = 0x200;
      }
      goto cf_common_join_00667054;
    }
    if (0x4d < uVar12 - 0x201) goto cf_common_exit_00667066;
    bVar4 = *(byte *)(uVar12 + 0x667073);
    switch(uVar12) {
    case 0x201:
      *(undefined4 *)&param_1->field_0xeb = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0195,
                            (char)*(undefined4 *)&param_1->field_0xf3);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_13,uVar7))
      goto cf_common_join_00666DC1;
      break;
    default:
      goto cf_common_exit_00667066;
    case 0x208:
      *(undefined4 *)&param_1->field_0xeb = 0x10;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xc5;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xc9,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xcd);
        iVar10 = thunk_FUN_0065fd50(param_1,(int)*(short *)&param_1->field_0xbf,
                                    (int)*(short *)&param_1->field_0xc1,
                                    *(short *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xcf);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) break;
      if (*(int *)&param_1->field_0xab == 0) goto cf_common_exit_00667066;
      uVar12 = *(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab;
      bVar22 = (uint)param_1->field_0280 < uVar12;
      bVar23 = param_1->field_0280 == uVar12;
LAB_00666ddf:
      if (bVar22 || bVar23) goto cf_common_exit_00667066;
      break;
    case 0x212:
      *(undefined4 *)&param_1->field_0xeb = 0x20;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xc7;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(uint)bVar4,0,0,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = CONCAT22(extraout_var_16,*(undefined2 *)&param_1->field_0xc3);
        iVar10 = thunk_FUN_00660620((AnonShape_00660620_6BCED4D7 *)param_1,uVar15,uVar15);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 == 0) {
        uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar10 = CONCAT22(extraout_var_14,uVar7);
        sVar8 = *(short *)&param_1->field_0xc5;
LAB_006664e6:
        if (sVar8 < iVar10) {
          if (*(int *)&param_1->field_0xab == 0) goto cf_common_exit_00667066;
          uVar12 = *(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab;
          bVar22 = (uint)param_1->field_0280 < uVar12;
          bVar23 = param_1->field_0280 == uVar12;
          goto LAB_00666ddf;
        }
      }
      break;
    case 0x21c:
      *(undefined4 *)&param_1->field_0xeb = 2;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xd3;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        iVar10 = thunk_FUN_0065fe10(param_1,&param_1->field_0xc7,*(int *)&param_1->field_0xc3,
                                    (short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
LAB_00666db5:
      if (param_1->field_00A7 == 0) {
cf_common_join_00666DC1:
        if (*(int *)&param_1->field_0xab == 0) goto cf_common_exit_00667066;
        uVar12 = *(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab;
        bVar22 = (uint)param_1->field_0280 < uVar12;
        bVar23 = param_1->field_0280 == uVar12;
        goto LAB_00666ddf;
      }
      break;
    case 0x226:
      *(undefined4 *)&param_1->field_0xeb = 0x2000;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xcf;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      iVar10 = thunk_FUN_00660700(param_1,*(short *)&param_1->field_0xc3,
                                  *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7,
                                  (int)*(short *)&param_1->field_0xc9,
                                  (int)*(short *)&param_1->field_0xcb,
                                  (int)*(short *)&param_1->field_0xcd);
      goto joined_r0x00666ceb;
    case 0x230:
      *(undefined4 *)&param_1->field_0xeb = 0x1000;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xcb;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        iVar10 = thunk_FUN_00660910(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((param_1->field_00A7 == 0) &&
          (uVar7 = AiFltClassTy::sub_0065D9C0(param_1),
          (int)*(short *)&param_1->field_0xc9 < CONCAT22(extraout_var_15,uVar7))) &&
         ((*(int *)&param_1->field_0xab == 0 ||
          ((uint)param_1->field_0280 <=
           (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
      goto cf_common_exit_00667066;
      break;
    case 0x23a:
      *(undefined4 *)&param_1->field_0xeb = 0x800;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xc9;
        *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
        iVar10 = thunk_FUN_00660a40(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      if ((param_1->field_00A7 == 0) &&
         ((*(int *)&param_1->field_0xab == 0 ||
          ((uint)param_1->field_0280 <=
           (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
      goto cf_common_exit_00667066;
      break;
    case 0x244:
      *(undefined4 *)&param_1->field_0xeb = 0x800;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0xc9;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      param_1->field_009B = 0x246;
      goto cf_common_join_00667054;
    case 0x246:
      *(undefined4 *)&param_1->field_0xeb = 0x800;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      iVar10 = thunk_FUN_00660b50((AnonShape_00660620_6BCED4D7 *)param_1,
                                  (int)*(short *)&param_1->field_0xc3,*(short *)&param_1->field_0xc3
                                  ,*(short *)&param_1->field_0xc5,
                                  (int)*(short *)&param_1->field_0xc7,*(int *)&param_1->field_0xbf);
joined_r0x00666ceb:
      if (iVar10 == 0) goto cf_common_exit_00667066;
      break;
    case 0x24e:
      *(undefined4 *)&param_1->field_0xeb = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar10 = thunk_FUN_0065e450((AnonShape_0065E360_B94C37CB *)param_1,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    (int)*(short *)&param_1->field_0xc7,
                                    (int)*(short *)&param_1->field_0xc9);
        param_1->field_00B3 = iVar10;
        if (0 < iVar10) {
          iVar10 = (*(int *)&param_1->field_0xcd * iVar10) / 100;
          param_1->field_00B3 = iVar10;
          if (iVar10 == 0) {
            param_1->field_00B3 = 1;
          }
          goto cf_common_exit_00667066;
        }
      }
      else {
        local_8 = (AiPlrClassTy *)0x0;
        switch(*(undefined4 *)&param_1->field_0xc3) {
        case 0xa3:
          iVar10 = 0x4e;
          break;
        default:
          iVar10 = 0;
          break;
        case 0xa8:
          iVar10 = 0x45;
          break;
        case 0xb2:
          iVar10 = 0x70;
          break;
        case 0xbe:
          iVar10 = 0x72;
        }
        local_10 = (DArrayTy *)
                   thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)param_1,(uint)bVar4,iVar10);
        if (local_10 != (DArrayTy *)0x0) {
          uVar12 = local_10->count;
          local_c = 0;
          if (0 < (int)uVar12) {
            do {
              if (local_c < uVar12) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_10, local_c) (runtime stride) */
                puVar16 = (undefined2 *)(local_10->elementSize * local_c + (int)local_10->data);
              }
              else {
                puVar16 = (undefined2 *)0x0;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              this_00 = STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,param_1->field_0x24,
                                   CONCAT22((short)(local_c >> 0x10),*puVar16),CASE_1);
              local_48 = this_00;
              switch(*(undefined4 *)&param_1->field_0xc3) {
              case 0xa3:
              case 0xa8:
              case 0xbe:
                uVar12 = thunk_FUN_004c5350(this_00,0,(int *)0x0,(int)*(short *)&param_1->field_0xc7
                                            ,(int)*(short *)&param_1->field_0xc9,0,0,0);
                if (uVar12 != 0) {
                  sVar8 = *(short *)&param_1->field_0xc7;
                  sVar6 = *(short *)&param_1->field_0xc9;
                  *(uint *)&this_00[1].field_0x94 = *(uint *)&this_00[1].field_0x94 | 2;
                  *(int *)&this_00[1].field_0xd4 = (int)sVar8;
                  *(int *)&this_00[1].field_0xd8 = (int)sVar6;
                  *(undefined4 *)&this_00[1].field_0xdc = 0;
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
                break;
              case 0xb2:
                if (this_00->field_0024 != *(int *)&this_00[1].field_0x6c) {
                  uVar12 = GetPlayerRaceId((char)*(int *)&this_00[1].field_0x6c);
                  local_4c = ((uVar12 & 0xff) + *(int *)&this_00[1].field_0x64 * 3) * 3;
                  uVar12 = GetPlayerRaceId(*(char *)&this_00->field_0024);
                  if ((&DAT_007e1984)[(uVar12 & 0xff) + local_4c] == '\0') break;
                }
                if ((*(int *)&local_48[1].field_0x74 == 0) &&
                   (99 < *(int *)((int)&local_48[2].field_0149 + 1))) {
                  thunk_FUN_004d8e70(local_48,(int)*(short *)&param_1->field_0xc7,
                                     (int)*(short *)&param_1->field_0xc9,0);
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
              }
              local_c = local_c + 1;
              uVar12 = local_10->count;
            } while ((int)local_c < (int)uVar12);
          }
cf_break_loop_0066703E:
          DArrayDestroy(local_10);
        }
      }
    }
cf_common_join_00667047:
    thunk_FUN_0065f980((int)param_1);
    goto cf_common_join_0066704E;
  }
  if (uVar12 == 0x82) {
    *(undefined4 *)&param_1->field_0xeb = 0x40;
    *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x190;
    *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,*(undefined4 *)&param_1->field_0x190,0
                       ,0,0);
    iVar10 = param_1->field_00EF;
    if (((iVar10 == 0x200) || (iVar10 == 0x400)) &&
       (iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                           ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0195,
                            (short *)&param_1->field_0x1a1,iVar10), iVar10 == param_1->field_00EF))
    {
      param_1->field_009B = 0x83;
    }
    else {
      param_1->field_00EF = 0x100;
      param_1->field_009B = 0x85;
    }
    goto cf_common_join_00667054;
  }
  switch(uVar12) {
  case 0:
    uVar5 = param_1->field_007B;
    if (0x10 < uVar5) {
      if (uVar5 == 0x20) goto LAB_006650bc;
      if (uVar5 != 0x8000) goto cf_common_exit_00667066;
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,uVar15);
      param_1->field_009B = 0x32;
      break;
    }
    if (uVar5 == 0x10) {
LAB_006650bc:
      thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)param_1,uVar15);
      param_1->field_009B = 0x3c;
      break;
    }
    if (uVar5 != 1) {
      if ((uVar5 != 2) && (uVar5 != 4)) goto cf_common_exit_00667066;
      goto LAB_006650bc;
    }
    goto LAB_00665237;
  default:
    goto cf_common_exit_00667066;
  case 10:
    *(undefined4 *)&param_1->field_0xeb = 1;
    goto cf_common_exit_00667066;
  case 0xc:
    *(undefined4 *)&param_1->field_0xeb = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = 2000;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0xe:
    *(undefined4 *)&param_1->field_0xeb = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = 10;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x10:
    *(undefined4 *)&param_1->field_0xeb = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = 0x32;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x12:
    *(undefined4 *)&param_1->field_0xeb = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = 0x7d;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
LAB_006651f3:
    if ((*(int *)&param_1->field_0xab == 0) ||
       ((uint)param_1->field_0280 <=
        (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))
    goto cf_common_exit_00667066;
    puVar21 = &param_1->field_01AD;
    for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
    }
    *(undefined2 *)puVar21 = 0;
    if (param_1->field_00B3 != 0) {
      thunk_FUN_0065f980((int)param_1);
    }
LAB_00665237:
    param_1->field_009B = 10;
    break;
  case 0x14:
    if (param_1->field_0x115 == '\0') {
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
      *(undefined4 *)&param_1->field_0x11e = param_1->field_0116;
      *(undefined4 *)&param_1->field_0xeb = 2;
    }
    goto LAB_00665327;
  case 0x19:
    *(undefined4 *)&param_1->field_0xeb = 2;
    if (param_1->field_00A3 != 0) {
      if ((param_1->field_00A7 != 0) ||
         ((*(int *)&param_1->field_0xab != 0 &&
          ((uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab) <
           (uint)param_1->field_0280)))) goto LAB_0066530b;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x11a;
    *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
    iVar10 = thunk_FUN_0065fe10(param_1,*(undefined4 *)&param_1->field_0x11a,
                                *(int *)&param_1->field_0x11e,(short *)0x0);
    if (-1 < iVar10) goto cf_common_exit_00667066;
    param_1->field_009B = 0x28;
    break;
  case 0x1e:
    *(undefined4 *)&param_1->field_0xeb = 4;
    param_1->field_009B = 0x23;
    break;
  case 0x23:
    *(undefined4 *)&param_1->field_0xeb = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x1bb;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      iVar10 = thunk_FUN_00660540(param_1,param_1->field_01AD,param_1->field_01C3,
                                  param_1->field_01C5,param_1->field_01C7,
                                  *(undefined2 *)&param_1->field_0x1b9,param_1->field_0x1c9,
                                  &param_1->field_0x1ca);
      if (-1 < iVar10) goto cf_common_exit_00667066;
      if (param_1->field_00B3 != 0) goto cf_common_join_00667047;
      goto cf_common_join_0066704E;
    }
    if ((param_1->field_00A7 == 0) &&
       ((*(int *)&param_1->field_0xab == 0 ||
        ((uint)param_1->field_0280 <=
         (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
    goto cf_common_exit_00667066;
    puVar21 = &param_1->field_01AD;
    for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
    }
    *(undefined2 *)puVar21 = 0;
    if (param_1->field_00B3 != 0) {
      thunk_FUN_0065f980((int)param_1);
    }
    *(undefined4 *)&param_1->field_0x1f7 = 0x19;
    param_1->field_009B = 0x78;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x28:
    if ((param_1->field_0122 == '\0') || (*(int *)(param_1->field_0223 + 0xc) == 0)) {
LAB_00665607:
      param_1->field_009B = 0x3c;
      goto LAB_00665315;
    }
    *(undefined4 *)&param_1->field_0x12d = 0;
    *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x123;
    *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
    param_1->field_009B = 0x2a;
    param_1->field_009F = 0;
    param_1->field_00A3 = 0;
    param_1->field_00A7 = 0;
    *(undefined4 *)&param_1->field_0xeb = 8;
LAB_00665327:
    if (param_1->field_0x139 != '\0') {
      uVar12 = *(int *)&param_1->field_0x14e + *(int *)&param_1->field_0x14a;
      bVar22 = (uint)param_1->field_0280 < uVar12;
      bVar23 = param_1->field_0280 == uVar12;
/* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
LAB_0066534b:
      if ((!bVar22 && !bVar23) &&
         (uVar7 = AiFltClassTy::sub_0065D9C0(param_1),
         (int)*(short *)&param_1->field_0x13e <= CONCAT22(extraout_var,uVar7))) {
LAB_0066586a:
        param_1->field_009B = 0x6e;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
    }
LAB_00665886:
    if ((param_1->field_0163 == '\0') ||
       (iVar10 = thunk_FUN_0065ef70((AnonShape_0065EF70_E78A8204 *)param_1), iVar10 == 0))
    goto cf_common_exit_00667066;
    param_1->field_009B = 100;
    break;
  case 0x2a:
    *(undefined4 *)&param_1->field_0xeb = 8;
    if (param_1->field_00A3 != 0) {
      iVar10 = *(int *)&param_1->field_0x135;
      if (iVar10 == 0) {
LAB_006655b2:
        if (param_1->field_00A7 != 0) {
LAB_006655ba:
          param_1->field_009B = 0x2a;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          *(int *)&param_1->field_0x12d = *(int *)&param_1->field_0x12d + 1;
          param_1->field_00A7 = 0;
        }
      }
      else {
        if ((uint)(*(int *)&param_1->field_0x131 + iVar10) < (uint)param_1->field_0280)
        goto LAB_006655ba;
        if (iVar10 == 0) goto LAB_006655b2;
      }
      if ((*(int *)&param_1->field_0xab != 0) &&
         ((uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab) <
          (uint)param_1->field_0280)) goto LAB_00665607;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    iVar10 = param_1->field_0223;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(uint *)&param_1->field_0x12d < *(uint *)(iVar10 + 0xc)) &&
       (psVar11 = (short *)(*(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x12d +
                           *(int *)(iVar10 + 0x1c)), psVar11 != (short *)0x0)) {
      *(undefined4 *)&param_1->field_0x131 = param_1->field_0280;
      sVar8 = psVar11[4];
      *(short *)&param_1->field_0x135 = psVar11[3];
      *(short *)&param_1->field_0x137 = sVar8;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)psVar11[6],(int)psVar11[5],
                         (int)psVar11[6],(int)psVar11[7]);
      local_64 = *psVar11;
      local_62 = psVar11[1];
      local_60 = psVar11[2];
      local_5e = 1;
      local_5c = 1;
      local_5a = 1;
      iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                         ((AnonReceiver_00660180 *)param_1,&local_64,'\x02');
      if (iVar10 == 0) goto cf_common_exit_00667066;
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
      iVar10 = thunk_FUN_00660010(param_1);
      if (iVar10 == 0) goto cf_common_exit_00667066;
      param_1->field_009B = 0x78;
      *(undefined4 *)&param_1->field_0x1f7 = 3000;
      param_1->field_009F = 0x33;
    }
    else {
      if (param_1->field_00A7 == 0) goto cf_common_exit_00667066;
      uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT22(extraout_var_00,uVar7) != 0 && -1 < extraout_var_00) {
        uVar15 = param_1->field_0280;
        puVar21 = &stack0xffffff64;
        for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
        }
        local_9c = 0x72;
        local_94 = 2;
        local_98 = uVar15;
        local_90 = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)param_1,uVar15);
        if ((AiTactClassTy *)param_1->field_0284 != (AiTactClassTy *)0x0) {
          AiTactClassTy::GetAiMess
                    ((AiTactClassTy *)param_1->field_0284,
                     (AnonShape_0068FD00_A5257008 *)&stack0xffffff64);
        }
        DArrayDestroy(local_90);
      }
      param_1->field_009B = 0x78;
      *(undefined4 *)&param_1->field_0x1f7 = 0xfa;
      param_1->field_009F = 0x33;
    }
    goto LAB_0066705a;
  case 0x3c:
    if (param_1->field_0x100 == '\0') {
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
      *(undefined4 *)&param_1->field_0xeb = 1;
    }
    if (param_1->field_0x139 != '\0') {
      uVar12 = *(int *)&param_1->field_0x14e + *(int *)&param_1->field_0x14a;
      bVar22 = (uint)param_1->field_0280 < uVar12;
      bVar23 = param_1->field_0280 == uVar12;
      goto LAB_0066534b;
    }
    goto LAB_00665886;
  case 0x41:
    *(undefined4 *)&param_1->field_0xeb = 1;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x107;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)*(short *)&param_1->field_0x10d
                         ,(int)*(short *)&param_1->field_0x10b,(int)*(short *)&param_1->field_0x10d,
                         (int)*(short *)&param_1->field_0x10f);
      thunk_FUN_0065fd50(param_1,(int)*(short *)&param_1->field_0x101,
                         (int)*(short *)&param_1->field_0x103,*(short *)&param_1->field_0x105,0);
      goto cf_common_exit_00667066;
    }
    if ((*(int *)&param_1->field_0xab != 0) &&
       ((uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab) <
        (uint)param_1->field_0280)) {
      param_1->field_009B = 0x14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((param_1->field_0x139 == '\0') ||
        ((uint)param_1->field_0280 <=
         (uint)(*(int *)&param_1->field_0x14e + *(int *)&param_1->field_0x14a))) ||
       (uVar7 = AiFltClassTy::sub_0065D9C0(param_1),
       CONCAT22(extraout_var_01,uVar7) < (int)*(short *)&param_1->field_0x13e)) goto LAB_00665886;
    goto LAB_0066586a;
  case 100:
    *(undefined4 *)&param_1->field_0xeb = 0x100;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x16c;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,*(undefined4 *)&param_1->field_0x16c
                         ,0,0,0);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0195,'\x01');
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00A7 == 0) &&
       ((*(int *)&param_1->field_0xab == 0 ||
        ((uint)param_1->field_0280 <=
         (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
    goto cf_common_exit_00667066;
    goto cf_common_join_0066704E;
  case 0x6e:
    *(undefined4 *)&param_1->field_0xeb = 0x80;
    *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x142;
    *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
    thunk_FUN_0065fa10((AnonShape_0065FA10_37C5A4D3 *)param_1,uVar15,0,0,0);
    if (param_1->field_0097 != 0xff) {
      iVar10 = thunk_FUN_0065e9a0(param_1,param_1->field_0097,(short *)&param_1->field_0195,0,
                                  *(uint *)&param_1->field_0x13a,(byte *)0x0,0xffffffff,0);
      if (iVar10 == 0) {
        uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar12;
        if ((uVar12 & 0x10000) == 0) {
          iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0195,
                              (short *)&param_1->field_0x1a1,0);
          if ((iVar10 == 0x200) || (iVar10 == 0x400)) {
            param_1->field_00EF = iVar10;
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
    *(undefined4 *)&param_1->field_0x14e = param_1->field_0280;
    goto cf_common_join_0066704E;
  case 0x6f:
    *(undefined4 *)&param_1->field_0xeb = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x70;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
LAB_00665a76:
      uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((int)*(short *)&param_1->field_0x140 < CONCAT22(extraout_var_02,uVar7)) &&
         ((*(int *)&param_1->field_0xab == 0 ||
          ((uint)param_1->field_0280 <=
           (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))))
      goto cf_common_exit_00667066;
LAB_00665aac:
      *(undefined4 *)&param_1->field_0x14e = param_1->field_0280;
      goto cf_common_join_0066704E;
    }
    param_1->field_00A3 = 1;
LAB_00665b48:
    iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x1a1,'\x02');
    if (iVar10 == 0) goto cf_common_exit_00667066;
LAB_00665b57:
    param_1->field_009B = 0x71;
    break;
  case 0x70:
    *(undefined4 *)&param_1->field_0xeb = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x71;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar7 = AiFltClassTy::sub_0065D9C0(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)*(short *)&param_1->field_0x140 < CONCAT22(extraout_var_03,uVar7)) {
        if ((*(int *)&param_1->field_0xab == 0) ||
           ((uint)param_1->field_0280 <=
            (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab)))
        goto cf_common_exit_00667066;
        *(undefined4 *)&param_1->field_0x14e = param_1->field_0280;
        goto cf_common_join_0066704E;
      }
      goto LAB_00665aac;
    }
    param_1->field_00A3 = 1;
    if (((param_1->field_00EF != 0x200) && (param_1->field_00EF != 0x400)) ||
       (uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar12,
       (uVar12 & 0x10000) == 0)) goto LAB_00665b57;
    iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::thunk_FUN_0065ed90
                       ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0195,
                        (short *)&param_1->field_0x1a1,param_1->field_00EF);
    if ((iVar10 == 0x200) || (iVar10 == 0x400)) goto LAB_00665b48;
    param_1->field_009B = 0x71;
    break;
  case 0x71:
    *(undefined4 *)&param_1->field_0xeb = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) goto LAB_00665aac;
      goto LAB_00665a76;
    }
    param_1->field_00A3 = 1;
    iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::thunk_FUN_00660180
                       ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0195,
                        (char)*(undefined4 *)&param_1->field_0x146);
    if (iVar10 == 0) goto cf_common_exit_00667066;
    *(undefined4 *)&param_1->field_0x14e = param_1->field_0280;
cf_common_join_0066704E:
    param_1->field_009B = 0;
    break;
  case 0x78:
    *(undefined4 *)&param_1->field_0xeb = 0x4000;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      *(undefined4 *)&param_1->field_0xab = *(undefined4 *)&param_1->field_0x1f7;
      *(undefined4 *)&param_1->field_0xaf = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    if ((uint)param_1->field_0280 <=
        (uint)(*(int *)&param_1->field_0xaf + *(int *)&param_1->field_0xab))
    goto cf_common_exit_00667066;
    param_1->field_009B = param_1->field_009F;
  }
cf_common_join_00667054:
  param_1->field_009F = 0;
LAB_0066705a:
  param_1->field_00A3 = 0;
  param_1->field_00A7 = 0;
cf_common_exit_00667066:
  if (((param_1->field_0284 != (AnonPointee_AiFltClassTy_0284 *)0x0) &&
      (param_1->field_0x176 != '\0')) &&
     ((*(uint *)&param_1->field_0xeb & *(uint *)&param_1->field_0x17b) != 0)) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    AiFltClassTy::GoToRepair(param_1,unaff_ESI);
  }
  return;
}

