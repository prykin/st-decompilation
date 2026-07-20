
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00664960(void *param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  undefined2 extraout_var;
  short extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint uVar10;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  uint uVar11;
  undefined2 extraout_var_07;
  int iVar12;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  void *pvVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined4 extraout_EDX;
  int iVar16;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_16;
  int unaff_ESI;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  bool bVar21;
  bool bVar22;
  uint local_9c [3];
  uint *local_90;
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
  void *local_48;
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
  uint *local_10;
  uint local_c;
  void *local_8;
  
  if ((*(int *)((int)param_1 + 0x8b) != 0) &&
     (*(uint *)((int)param_1 + 0x280) <
      (uint)(*(int *)((int)param_1 + 0x8f) + *(int *)((int)param_1 + 0x8b)))) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x8f) = *(undefined4 *)((int)param_1 + 0x280);
  local_8 = (void *)thunk_FUN_004357f0(*(char *)((int)param_1 + 0x24));
  iVar8 = thunk_FUN_00664540(param_1,local_44,&local_68);
  uVar14 = extraout_EDX;
  while (-1 < iVar8) {
    switch(local_44[0]) {
    case 0:
      goto switchD_006649d9_caseD_0;
    case 1:
      *(undefined1 *)((int)param_1 + 0x139) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x13a) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)((int)param_1 + 0x13e) = CONCAT11(uStack_36,uStack_37);
      *(ushort *)((int)param_1 + 0x140) = CONCAT11(uStack_34,uStack_35);
      *(uint *)((int)param_1 + 0x142) =
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      *(uint *)((int)param_1 + 0x146) =
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(undefined4 *)((int)param_1 + 0x14a) = local_2b;
      break;
    case 2:
      *(undefined1 *)((int)param_1 + 0x187) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x188) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)((int)param_1 + 0x18c) = CONCAT11(uStack_36,uStack_37);
      *(ushort *)((int)param_1 + 0x18e) = CONCAT11(uStack_34,uStack_35);
      *(uint *)((int)param_1 + 400) =
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      break;
    case 3:
      *(undefined1 *)((int)param_1 + 0x152) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x153) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)((int)param_1 + 0x157) = CONCAT11(uStack_36,uStack_37);
      *(ushort *)((int)param_1 + 0x159) = CONCAT11(uStack_34,uStack_35);
      *(uint *)((int)param_1 + 0x15b) =
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)((int)param_1 + 0x15f) =
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 4:
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x20b),&local_3c);
      thunk_FUN_00676c40(*(int *)((int)param_1 + 0x20b),&LAB_004013cf);
      goto cf_common_join_00665024;
    case 5:
      if (*(int *)((int)param_1 + 0x20b) != 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x20b) + 0xc) = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 6:
      *(undefined1 *)((int)param_1 + 0xff) = (undefined1)local_3c;
      break;
    case 7:
      *(undefined1 *)((int)param_1 + 0x163) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x164) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(ushort *)((int)param_1 + 0x168) = CONCAT11(uStack_36,uStack_37);
      *(ushort *)((int)param_1 + 0x16a) = CONCAT11(uStack_34,uStack_35);
      *(uint *)((int)param_1 + 0x16c) =
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)((int)param_1 + 0x172) =
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 8:
      local_c = 0;
      local_4c = *(uint *)(*(int *)((int)param_1 + 0x22f) + 0xc);
      if (0 < (int)local_4c) {
        iVar8 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
        do {
          if (local_c < local_4c) {
            psVar9 = (short *)(*(int *)(*(int *)((int)param_1 + 0x22f) + 8) * local_c +
                              *(int *)(*(int *)((int)param_1 + 0x22f) + 0x1c));
          }
          else {
            psVar9 = (short *)0x0;
          }
          iVar16 = (int)psVar9[1];
          local_50 = iVar8 + -1 + (int)CONCAT11(uStack_35,uStack_36);
          iVar12 = (int)*psVar9;
          local_48 = (void *)(CONCAT11(local_3c._3_1_,local_3c._2_1_) + -1 +
                             (int)CONCAT11(uStack_33,uStack_34));
          iVar8 = (int)CONCAT11(local_3c._1_1_,(undefined1)local_3c);
          local_10 = (uint *)(int)psVar9[3];
          local_58 = (int)psVar9[4];
          local_54 = iVar16 + -1 + local_58;
          if (((iVar12 <= iVar8) && (iVar8 <= iVar12 + -1 + (int)local_10)) &&
             (((iVar16 <= CONCAT11(local_3c._3_1_,local_3c._2_1_) &&
               (((CONCAT11(local_3c._3_1_,local_3c._2_1_) <= local_54 && (iVar12 <= local_50)) &&
                (local_50 <= iVar12 + -1 + (int)local_10)))) &&
              ((iVar16 <= (int)local_48 && ((int)local_48 <= iVar16 + -1 + local_58))))))
          goto LAB_00665047;
          local_50 = iVar12 + -1 + (int)local_10;
          iVar17 = (int)CONCAT11(local_3c._3_1_,local_3c._2_1_);
          local_54 = iVar16 + -1 + local_58;
          local_48 = (void *)(iVar17 + -1 + (int)CONCAT11(uStack_33,uStack_34));
          if ((iVar8 <= iVar12) &&
             (((iVar1 = iVar8 + -1 + (int)CONCAT11(uStack_35,uStack_36), iVar12 <= iVar1 &&
               (iVar17 <= iVar16)) &&
              ((iVar16 <= (int)local_48 &&
               ((((iVar8 <= local_50 && (local_50 <= iVar1)) && (iVar17 <= local_54)) &&
                (local_54 <= (int)local_48)))))))) {
            Library::DKW::TBL::FUN_006ae140(*(uint **)((int)param_1 + 0x22f),local_c,&local_3c);
            goto cf_common_join_00665024;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)local_4c);
      }
      if (*(uint **)((int)param_1 + 0x22f) != (uint *)0x0) {
        Library::DKW::TBL::FUN_006b11d0(*(uint **)((int)param_1 + 0x22f),0,&local_3c);
      }
      *(short *)((int)param_1 + 0x170) = *(short *)((int)param_1 + 0x170) + 1;
      goto cf_common_join_00665024;
    case 9:
      if (*(int *)((int)param_1 + 0x22f) != 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x22f) + 0xc) = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 10:
      *(undefined1 *)((int)param_1 + 0x176) = (undefined1)local_3c;
      *(ushort *)((int)param_1 + 0x177) = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      *(ushort *)((int)param_1 + 0x179) = CONCAT11(uStack_38,local_3c._3_1_);
      *(uint *)((int)param_1 + 0x17b) =
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      *(uint *)((int)param_1 + 0x17f) =
           CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      *(uint *)((int)param_1 + 0x183) =
           CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 0xb:
      *(undefined1 *)((int)param_1 + 0x100) = (undefined1)local_3c;
      *(ushort *)((int)param_1 + 0x101) = CONCAT11(local_3c._2_1_,local_3c._1_1_);
      *(ushort *)((int)param_1 + 0x103) = CONCAT11(uStack_38,local_3c._3_1_);
      *(ushort *)((int)param_1 + 0x105) = CONCAT11(uStack_36,uStack_37);
      *(undefined4 *)((int)param_1 + 0x111) = local_2b;
      *(uint *)((int)param_1 + 0x107) =
           CONCAT13(uStack_32,CONCAT12(uStack_33,CONCAT11(uStack_34,uStack_35)));
      *(ushort *)((int)param_1 + 0x10b) = CONCAT11(uStack_30,uStack_31);
      *(ushort *)((int)param_1 + 0x10d) = CONCAT11(uStack_2e,uStack_2f);
      *(ushort *)((int)param_1 + 0x10f) = CONCAT11(uStack_2c,uStack_2d);
      break;
    case 0xc:
      *(undefined1 *)((int)param_1 + 0x115) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x116) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(uint *)((int)param_1 + 0x11a) =
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xd:
      *(undefined1 *)((int)param_1 + 0x122) = (undefined1)local_3c;
      *(uint *)((int)param_1 + 0x129) =
           CONCAT13(uStack_38,CONCAT12(local_3c._3_1_,CONCAT11(local_3c._2_1_,local_3c._1_1_)));
      *(uint *)((int)param_1 + 0x123) =
           CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xe:
      thunk_FUN_00675950(CONCAT13(local_3c._3_1_,
                                  CONCAT12(local_3c._2_1_,
                                           CONCAT11(local_3c._1_1_,(undefined1)local_3c))),
                         CONCAT13(uStack_37,
                                  CONCAT12(uStack_38,CONCAT11(local_3c._3_1_,local_3c._2_1_))),
                         CONCAT11(uStack_37,uStack_38),(short *)&local_3c,
                         (short *)((int)&local_3c + 2),(short *)&uStack_38,0);
      puVar18 = *(uint **)((int)param_1 + 0x223);
      uVar10 = 0;
      local_4c = puVar18[3];
      if (0 < (int)local_4c) {
        bVar21 = local_4c != 0;
        do {
          if (bVar21) {
            psVar9 = (short *)(puVar18[2] * uVar10 + puVar18[7]);
          }
          else {
            psVar9 = (short *)0x0;
          }
          if ((((CONCAT11(local_3c._1_1_,(undefined1)local_3c) == *psVar9) &&
               (CONCAT11(local_3c._3_1_,local_3c._2_1_) == psVar9[1])) &&
              (CONCAT11(uStack_37,uStack_38) == psVar9[2])) &&
             (((CONCAT11(uStack_31,uStack_32) == psVar9[5] &&
               (CONCAT11(uStack_2f,uStack_30) == psVar9[6])) &&
              (CONCAT11(uStack_2d,uStack_2e) == psVar9[7])))) goto cf_common_join_00665024;
          uVar10 = uVar10 + 1;
          bVar21 = uVar10 < local_4c;
        } while ((int)uVar10 < (int)local_4c);
      }
      if (puVar18 != (uint *)0x0) {
        Library::DKW::TBL::FUN_006b11d0(puVar18,0,&local_3c);
      }
      *(short *)((int)param_1 + 0x127) = *(short *)((int)param_1 + 0x127) + 1;
      goto cf_common_join_00665024;
    case 0xf:
      if (*(int *)((int)param_1 + 0x223) != 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x223) + 0xc) = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 0x10:
      *(undefined1 *)((int)param_1 + 0x194) = (undefined1)local_3c;
      break;
    default:
      iVar8 = thunk_FUN_00664650(param_1,local_44[0]);
      if (iVar8 < 1) goto cf_common_join_00665024;
      break;
    case 0x32:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 500;
      goto cf_common_join_00664FF6;
    case 0x33:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x1fe;
      goto cf_common_join_00664FF6;
    case 0x34:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x208;
      goto cf_common_join_00664FF6;
    case 0x35:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x212;
      goto cf_common_join_00664FF6;
    case 0x36:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x21c;
      goto cf_common_join_00664FF6;
    case 0x37:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x226;
      goto cf_common_join_00664FF6;
    case 0x38:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x230;
      goto cf_common_join_00664FF6;
    case 0x39:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x23a;
      goto cf_common_join_00664FF6;
    case 0x3a:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x244;
      goto cf_common_join_00664FF6;
    case 0x3b:
      puVar18 = local_44;
      puVar19 = (uint *)((int)param_1 + 0xb7);
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      if (*(int *)((int)param_1 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)param_1);
      }
      uVar14 = 0x24e;
cf_common_join_00664FF6:
      *(undefined4 *)((int)param_1 + 0x9b) = uVar14;
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
      *(undefined4 *)((int)param_1 + 0xb3) = uVar14;
cf_common_join_00665024:
      if ((local_44[0] < 0x32) || (99 < local_44[0])) {
        if ((local_44[0] == 0) || (0x31 < local_44[0])) {
switchD_006649d9_caseD_0:
          thunk_FUN_00664650(param_1,local_44[0]);
          uVar14 = extraout_EDX_01;
          goto LAB_00665067;
        }
      }
      else {
        thunk_FUN_006646e0((int)param_1);
      }
    }
LAB_00665047:
    iVar8 = thunk_FUN_00664540(param_1,local_44,&local_68);
    uVar14 = extraout_EDX_00;
  }
LAB_00665067:
  pvVar13 = local_8;
  *(undefined4 *)((int)param_1 + 0xeb) = 0;
  uVar10 = *(uint *)((int)param_1 + 0x9b);
  if (0x82 < uVar10) {
    if (uVar10 < 0x201) {
      if (uVar10 == 0x200) {
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) != 0) {
          if (*(int *)((int)param_1 + 0xa7) != 0) {
            *(undefined4 *)((int)param_1 + 0x9b) = 0x201;
            *(undefined4 *)((int)param_1 + 0x9f) = 0;
            *(undefined4 *)((int)param_1 + 0xa3) = 0;
            *(undefined4 *)((int)param_1 + 0xa7) = 0;
          }
LAB_00666934:
          uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
          if ((int)*(short *)((int)param_1 + 0xd3) < CONCAT22(extraout_var_12,uVar5))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        iVar8 = *(int *)((int)param_1 + 0xef);
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
          psVar9 = (short *)((int)param_1 + 0x1a1);
          iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),psVar9,iVar8);
          if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
            if (*(int *)((int)param_1 + 0xf3) != 2) {
              sVar7 = *(short *)((int)param_1 + 0x1ab) / 2 + *(short *)((int)param_1 + 0x1a5);
              iVar8 = (int)*(short *)((int)param_1 + 0x1a9) / 2 +
                      (int)*(short *)((int)param_1 + 0x1a3);
              sVar6 = *(short *)((int)param_1 + 0x1a7);
              sVar4 = *psVar9;
              goto LAB_006668ef;
            }
            iVar8 = thunk_FUN_00660180(param_1,psVar9,'\x02');
            goto LAB_006668f9;
          }
        }
LAB_00666901:
        *(undefined4 *)((int)param_1 + 0x9b) = 0x201;
        goto cf_common_join_00667054;
      }
      if (uVar10 < 0x1f6) {
        if (uVar10 != 0x1f5) {
          if (uVar10 < 0x86) {
            if (uVar10 == 0x85) {
              *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
              if (*(int *)((int)param_1 + 0xa3) == 0) {
                *(undefined4 *)((int)param_1 + 0xa3) = 1;
                iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),
                                           (char)*(undefined4 *)((int)param_1 + 0xfb));
                if (iVar8 == 0) goto cf_common_exit_00667066;
                if (local_8 != (void *)0x0) {
                  thunk_FUN_0067bf60(local_8,-1,*(uint *)((int)param_1 + 0xf7));
                }
              }
              else {
                if (*(int *)((int)param_1 + 0xa7) != 0) {
                  if (local_8 != (void *)0x0) {
                    thunk_FUN_0067bf60(local_8,'\x01',*(uint *)((int)param_1 + 0xf7));
                  }
                  *(undefined4 *)((int)param_1 + 0x9b) = 0;
                  *(undefined4 *)((int)param_1 + 0x9f) = 0;
                  *(undefined4 *)((int)param_1 + 0xa3) = 0;
                  *(undefined4 *)((int)param_1 + 0xa7) = 0;
                }
                uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
                if (((int)*(short *)((int)param_1 + 0x18e) < CONCAT22(extraout_var_06,uVar5)) &&
                   ((*(int *)((int)param_1 + 0xab) == 0 ||
                    (*(uint *)((int)param_1 + 0x280) <=
                     (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
                goto cf_common_exit_00667066;
                if (pvVar13 != (void *)0x0) {
                  thunk_FUN_0067bf60(pvVar13,-1,*(uint *)((int)param_1 + 0xf7));
                }
              }
            }
            else if (uVar10 == 0x83) {
              *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
              if (*(int *)((int)param_1 + 0xa3) == 0) {
                *(undefined4 *)((int)param_1 + 0xa3) = 1;
                iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x1a1),'\x02');
                if (iVar8 == 0) goto cf_common_exit_00667066;
LAB_00665eba:
                *(undefined4 *)((int)param_1 + 0x9b) = 0x85;
                goto cf_common_join_00667054;
              }
              if (*(int *)((int)param_1 + 0xa7) != 0) {
                *(undefined4 *)((int)param_1 + 0x9b) = 0x84;
                *(undefined4 *)((int)param_1 + 0x9f) = 0;
                *(undefined4 *)((int)param_1 + 0xa3) = 0;
                *(undefined4 *)((int)param_1 + 0xa7) = 0;
              }
              uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
              if (((int)*(short *)((int)param_1 + 0x18e) < CONCAT22(extraout_var_05,uVar5)) &&
                 ((*(int *)((int)param_1 + 0xab) == 0 ||
                  (*(uint *)((int)param_1 + 0x280) <=
                   (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
              goto cf_common_exit_00667066;
              if (local_8 != (void *)0x0) {
                thunk_FUN_0067bf60(local_8,-1,*(uint *)((int)param_1 + 0xf7));
              }
            }
            else {
              if (uVar10 != 0x84) goto cf_common_exit_00667066;
              *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
              if (*(int *)((int)param_1 + 0xa3) == 0) {
                *(undefined4 *)((int)param_1 + 0xa3) = 1;
                if (((*(int *)((int)param_1 + 0xef) == 0x200) ||
                    (*(int *)((int)param_1 + 0xef) == 0x400)) &&
                   (uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039,
                   *(uint *)((int)param_1 + 0x1c) = uVar10, (uVar10 & 0x10000) != 0)) {
                  iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),
                                             (short *)((int)param_1 + 0x1a1),
                                             *(int *)((int)param_1 + 0xef));
                  if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
                    iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x1a1),'\x02');
                    if (iVar8 == 0) goto cf_common_exit_00667066;
                    *(undefined4 *)((int)param_1 + 0x9b) = 0x85;
                  }
                  else {
                    *(undefined4 *)((int)param_1 + 0x9b) = 0x85;
                  }
                  goto cf_common_join_00667054;
                }
                goto LAB_00665eba;
              }
              if (*(int *)((int)param_1 + 0xa7) != 0) {
                *(undefined4 *)((int)param_1 + 0x9b) = 0x85;
                *(undefined4 *)((int)param_1 + 0x9f) = 0;
                *(undefined4 *)((int)param_1 + 0xa3) = 0;
                *(undefined4 *)((int)param_1 + 0xa7) = 0;
              }
              uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
              if (((int)*(short *)((int)param_1 + 0x18e) < CONCAT22(extraout_var_04,uVar5)) &&
                 ((*(int *)((int)param_1 + 0xab) == 0 ||
                  (*(uint *)((int)param_1 + 0x280) <=
                   (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
              goto cf_common_exit_00667066;
              if (local_8 != (void *)0x0) {
                thunk_FUN_0067bf60(local_8,-1,*(uint *)((int)param_1 + 0xf7));
              }
            }
          }
          else {
            if (uVar10 != 0x8c) {
              if (uVar10 != 500) goto cf_common_exit_00667066;
              *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
              *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xe6);
              *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
              thunk_FUN_0065fa10((int)param_1,*(undefined4 *)((int)param_1 + 0x280),0,0,0);
              uVar10 = *(uint *)((int)param_1 + 0xbf) & 1;
              *(uint *)((int)param_1 + 0xf3) = uVar10;
              if (uVar10 == 0) {
                *(uint *)((int)param_1 + 0xf3) = *(uint *)((int)param_1 + 0xbf) & 2;
              }
              if (*(int *)((int)param_1 + 0xf3) == 0) {
                uVar11 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                *(uint *)((int)param_1 + 0x1c) = uVar11;
                *(uint *)((int)param_1 + 0xf3) = (uVar11 >> 0x10 & 1) + 1;
              }
              uVar11 = *(uint *)((int)param_1 + 0xc3);
              if ((uVar11 & 0x100) == 0) {
                uVar10 = uVar11 & 0x200;
                *(uint *)((int)param_1 + 0xef) = uVar10;
                if (uVar10 == 0) {
                  uVar10 = uVar11 & 0x400;
                  *(uint *)((int)param_1 + 0xef) = uVar10;
                }
                if ((*(int *)((int)param_1 + 0xef) == 0) && ((uVar11 & 0x800) != 0)) {
                  uVar11 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                  *(uint *)((int)param_1 + 0x1c) = uVar11;
                  *(uint *)((int)param_1 + 0xef) =
                       (-(uint)((uVar11 & 0x10000) != 0) & 0xfffffe00) + 0x400;
                }
              }
              else {
                *(undefined4 *)((int)param_1 + 0xef) = 0x100;
              }
              if ((*(int *)((int)param_1 + 0xef) == 0x100) && (*(int *)((int)param_1 + 0xf3) == 1))
              {
                *(undefined4 *)((int)param_1 + 0x9b) = 0x1f8;
              }
              else {
                iVar8 = thunk_FUN_0065e9a0(param_1,*(uint *)((int)param_1 + 199),
                                           (short *)((int)param_1 + 0x195),
                                           *(uint *)((int)param_1 + 0xcb),
                                           *(uint *)((int)param_1 + 0xcf),
                                           (byte *)((int)param_1 + 0xd5),
                                           CONCAT31((int3)(uVar10 >> 8),
                                                    *(undefined1 *)((int)param_1 + 0xd3)),1);
                if (iVar8 != 0) goto cf_common_join_00667047;
                iVar8 = *(int *)((int)param_1 + 0xef);
                if (((iVar8 == 0x200) || (iVar8 == 0x400)) &&
                   (iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),
                                               (short *)((int)param_1 + 0x1a1),iVar8),
                   iVar8 == *(int *)((int)param_1 + 0xef))) {
                  *(undefined4 *)((int)param_1 + 0x9b) = 0x1f5;
                }
                else {
                  *(undefined4 *)((int)param_1 + 0xef) = 0x100;
                  if (*(int *)((int)param_1 + 0xf3) != 1) goto LAB_00666423;
                  *(undefined4 *)((int)param_1 + 0x9b) = 0x1f8;
                }
              }
              goto cf_common_join_00667054;
            }
            *(undefined4 *)((int)param_1 + 0xeb) = 0x200;
            if (*(int *)((int)param_1 + 0xa3) == 0) {
              *(undefined4 *)((int)param_1 + 0xa3) = 1;
              *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x15b);
              *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
              thunk_FUN_0065fa10((int)param_1,*(undefined4 *)((int)param_1 + 0x280),0,0,0);
              iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),
                                         (char)*(undefined4 *)((int)param_1 + 0x15f));
              if (iVar8 == 0) goto cf_common_exit_00667066;
              if (*(void **)((int)param_1 + 0x284) != (void *)0x0) {
                thunk_FUN_00690610(*(void **)((int)param_1 + 0x284),*(short *)((int)param_1 + 0x7d))
                ;
              }
            }
            else {
              if (((*(int *)((int)param_1 + 0xa7) == 0) &&
                  (uVar5 = AiFltClassTy::sub_0065D9C0(param_1),
                  (int)*(short *)((int)param_1 + 0x159) < CONCAT22(extraout_var_07,uVar5))) &&
                 ((*(int *)((int)param_1 + 0xab) == 0 ||
                  (*(uint *)((int)param_1 + 0x280) <=
                   (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
              goto cf_common_exit_00667066;
              if (*(void **)((int)param_1 + 0x284) != (void *)0x0) {
                thunk_FUN_00690610(*(void **)((int)param_1 + 0x284),*(short *)((int)param_1 + 0x7d))
                ;
              }
            }
          }
          goto cf_common_join_0066704E;
        }
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) == 0) {
          *(undefined4 *)((int)param_1 + 0xa3) = 1;
          if (*(int *)((int)param_1 + 0xf3) == 2) {
            iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x1a1),'\x02');
          }
          else {
            sVar6 = *(short *)((int)param_1 + 0x1ab) / 2 + *(short *)((int)param_1 + 0x1a5);
            iVar8 = (int)*(short *)((int)param_1 + 0x1a9) / 2 +
                    (int)*(short *)((int)param_1 + 0x1a3);
            iVar12 = (int)*(short *)((int)param_1 + 0x1a7) / 2 +
                     (int)*(short *)((int)param_1 + 0x1a1);
LAB_00666413:
            iVar8 = thunk_FUN_0065fd50(param_1,iVar12,iVar8,sVar6,0);
          }
LAB_0066641b:
          if (iVar8 == 0) goto cf_common_exit_00667066;
          goto LAB_00666423;
        }
        if (*(int *)((int)param_1 + 0xa7) == 0) goto LAB_006664d8;
        if ((*(uint *)((int)param_1 + 0xc3) & 0x800) == 0) goto LAB_00666423;
        *(undefined4 *)((int)param_1 + 0x9b) = 0x1f6;
        goto cf_common_join_00667054;
      }
      switch(uVar10) {
      case 0x1f6:
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) != 0) {
          if (*(int *)((int)param_1 + 0xa7) != 0) {
            *(undefined4 *)((int)param_1 + 0x9b) = 0x1f7;
            *(undefined4 *)((int)param_1 + 0x9f) = 0;
            *(undefined4 *)((int)param_1 + 0xa3) = 0;
            *(undefined4 *)((int)param_1 + 0xa7) = 0;
          }
          uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
          if (CONCAT22(extraout_var_08,uVar5) <= (int)*(short *)((int)param_1 + 0xe4))
          goto cf_common_join_00667047;
          goto cf_common_join_00666DC1;
        }
        iVar8 = *(int *)((int)param_1 + 0xef);
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
          psVar9 = (short *)((int)param_1 + 0x1a1);
          iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),psVar9,iVar8);
          if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
            if (*(int *)((int)param_1 + 0xf3) != 2) {
              sVar6 = *(short *)((int)param_1 + 0x1ab) / 2 + *(short *)((int)param_1 + 0x1a5);
              iVar8 = (int)*(short *)((int)param_1 + 0x1a9) / 2 +
                      (int)*(short *)((int)param_1 + 0x1a3);
              iVar12 = (int)*(short *)((int)param_1 + 0x1a7) / 2 + (int)*psVar9;
              goto LAB_00666413;
            }
            iVar8 = thunk_FUN_00660180(param_1,psVar9,'\x02');
            goto LAB_0066641b;
          }
        }
LAB_00666423:
        *(undefined4 *)((int)param_1 + 0x9b) = 0x1f7;
        break;
      case 0x1f7:
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) != 0) {
          if (*(int *)((int)param_1 + 0xa7) != 0) {
            thunk_FUN_0065f980((int)param_1);
            *(undefined4 *)((int)param_1 + 0x9b) = 0;
            *(undefined4 *)((int)param_1 + 0x9f) = 0;
            *(undefined4 *)((int)param_1 + 0xa3) = 0;
            *(undefined4 *)((int)param_1 + 0xa7) = 0;
          }
LAB_006664d8:
          uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
          iVar8 = CONCAT22(extraout_var_09,uVar5);
          sVar6 = *(short *)((int)param_1 + 0xe4);
          goto LAB_006664e6;
        }
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),
                                   (char)*(undefined4 *)((int)param_1 + 0xf3));
        goto joined_r0x00666ceb;
      case 0x1f8:
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) != 0) {
          if (*(int *)((int)param_1 + 0xa7) != 0) {
            thunk_FUN_0065f980((int)param_1);
            *(undefined4 *)((int)param_1 + 0x9b) = 0;
            *(undefined4 *)((int)param_1 + 0x9f) = 0;
            *(undefined4 *)((int)param_1 + 0xa3) = 0;
            *(undefined4 *)((int)param_1 + 0xa7) = 0;
          }
          uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
          if ((int)*(short *)((int)param_1 + 0xe4) < CONCAT22(extraout_var_11,uVar5))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)(*(int *)((int)param_1 + 0x23b) + 0xc) = 0;
        uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)param_1 + 0x1c) = uVar10;
        uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
        uVar10 = CONCAT22(extraout_var_10,uVar5) / ((uVar10 >> 0x10) % 3 + 5);
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        iVar8 = thunk_FUN_0065eb70(param_1,*(uint *)((int)param_1 + 199),uVar10,
                                   *(uint **)((int)param_1 + 0x23b),*(uint *)((int)param_1 + 0xcb),
                                   *(uint *)((int)param_1 + 0xcf),(byte *)((int)param_1 + 0xd5),
                                   (uint)*(byte *)((int)param_1 + 0xd3));
        if (iVar8 < 1) {
          thunk_FUN_0065f980((int)param_1);
          *(undefined4 *)((int)param_1 + 0x9b) = 0;
          *(undefined4 *)((int)param_1 + 0x9f) = 0;
          *(undefined4 *)((int)param_1 + 0xa3) = 0;
          *(undefined4 *)((int)param_1 + 0xa7) = 0;
        }
        iVar8 = thunk_FUN_00660420(param_1,*(undefined4 *)((int)param_1 + 0x23b));
        goto joined_r0x00666ceb;
      default:
        goto cf_common_exit_00667066;
      case 0x1fe:
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xd5);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        thunk_FUN_0065fa10((int)param_1,*(undefined4 *)((int)param_1 + 0xd5),0,0,0);
        *(short *)((int)param_1 + 0x195) = *(short *)((int)param_1 + 199);
        *(short *)((int)param_1 + 0x197) = *(short *)((int)param_1 + 0xc9);
        *(undefined2 *)((int)param_1 + 0x199) = *(undefined2 *)((int)param_1 + 0xcb);
        *(undefined2 *)((int)param_1 + 0x19b) = *(undefined2 *)((int)param_1 + 0xcd);
        *(undefined2 *)((int)param_1 + 0x19d) = *(undefined2 *)((int)param_1 + 0xcf);
        *(short *)((int)param_1 + 0x19f) = *(short *)((int)param_1 + 0xd1);
        thunk_FUN_006757c0((short *)((int)param_1 + 0x195),(short *)((int)param_1 + 0x197),
                           (short *)((int)param_1 + 0x199),(short *)((int)param_1 + 0x19b),
                           (short *)((int)param_1 + 0x19d),(short *)((int)param_1 + 0x19f));
        uVar10 = *(uint *)((int)param_1 + 0xbf) & 1;
        *(uint *)((int)param_1 + 0xf3) = uVar10;
        if (uVar10 == 0) {
          *(uint *)((int)param_1 + 0xf3) = *(uint *)((int)param_1 + 0xbf) & 2;
        }
        if (*(int *)((int)param_1 + 0xf3) == 0) {
          uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)param_1 + 0x1c) = uVar10;
          *(uint *)((int)param_1 + 0xf3) = (uVar10 >> 0x10 & 1) + 1;
        }
        uVar10 = *(uint *)((int)param_1 + 0xc3);
        if ((uVar10 & 0x100) == 0) {
          *(uint *)((int)param_1 + 0xef) = uVar10 & 0x200;
          if ((uVar10 & 0x200) == 0) {
            *(uint *)((int)param_1 + 0xef) = uVar10 & 0x400;
          }
          if ((*(int *)((int)param_1 + 0xef) == 0) && ((uVar10 & 0x800) != 0)) {
            uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)param_1 + 0x1c) = uVar10;
            *(uint *)((int)param_1 + 0xef) = (-(uint)((uVar10 & 0x10000) != 0) & 0xfffffe00) + 0x400
            ;
          }
          *(undefined4 *)((int)param_1 + 0xef) = 0x100;
          *(undefined4 *)((int)param_1 + 0x9b) = 0x201;
        }
        else {
          *(undefined4 *)((int)param_1 + 0xef) = 0x100;
          *(undefined4 *)((int)param_1 + 0x9b) = 0x201;
        }
        break;
      case 0x1ff:
        *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
        if (*(int *)((int)param_1 + 0xa3) == 0) {
          *(undefined4 *)((int)param_1 + 0xa3) = 1;
          if (*(int *)((int)param_1 + 0xf3) == 2) {
            iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x1a1),'\x02');
          }
          else {
            sVar7 = *(short *)((int)param_1 + 0x1ab) / 2 + *(short *)((int)param_1 + 0x1a5);
            iVar8 = (int)*(short *)((int)param_1 + 0x1a9) / 2 +
                    (int)*(short *)((int)param_1 + 0x1a3);
            sVar6 = *(short *)((int)param_1 + 0x1a7);
            sVar4 = *(short *)((int)param_1 + 0x1a1);
LAB_006668ef:
            iVar8 = thunk_FUN_0065fd50(param_1,(int)sVar6 / 2 + (int)sVar4,iVar8,sVar7,0);
          }
LAB_006668f9:
          if (iVar8 == 0) goto cf_common_exit_00667066;
          goto LAB_00666901;
        }
        if (*(int *)((int)param_1 + 0xa7) == 0) goto LAB_00666934;
        if ((*(uint *)((int)param_1 + 0xc3) & 0x800) == 0) goto LAB_00666901;
        *(undefined4 *)((int)param_1 + 0x9b) = 0x200;
      }
      goto cf_common_join_00667054;
    }
    if (0x4d < uVar10 - 0x201) goto cf_common_exit_00667066;
    bVar2 = *(byte *)(uVar10 + 0x667073);
    switch(uVar10) {
    case 0x201:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),
                                   (char)*(undefined4 *)((int)param_1 + 0xf3));
        goto joined_r0x00666ceb;
      }
      if (*(int *)((int)param_1 + 0xa7) != 0) {
        *(undefined4 *)((int)param_1 + 0x9b) = 0;
        *(undefined4 *)((int)param_1 + 0x9f) = 0;
        *(undefined4 *)((int)param_1 + 0xa3) = 0;
        *(undefined4 *)((int)param_1 + 0xa7) = 0;
      }
      uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
      if ((int)*(short *)((int)param_1 + 0xd3) < CONCAT22(extraout_var_13,uVar5))
      goto cf_common_join_00666DC1;
      break;
    default:
      goto cf_common_exit_00667066;
    case 0x208:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x10;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xc5);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        thunk_FUN_0065fa10((int)param_1,(int)*(short *)((int)param_1 + 0xcb),
                           (int)*(short *)((int)param_1 + 0xc9),(int)*(short *)((int)param_1 + 0xcb)
                           ,(int)*(short *)((int)param_1 + 0xcd));
        iVar8 = thunk_FUN_0065fd50(param_1,(int)*(short *)((int)param_1 + 0xbf),
                                   (int)*(short *)((int)param_1 + 0xc1),
                                   *(short *)((int)param_1 + 0xc3),
                                   *(undefined4 *)((int)param_1 + 0xcf));
        goto joined_r0x00666ceb;
      }
      if (*(int *)((int)param_1 + 0xa7) != 0) break;
      if (*(int *)((int)param_1 + 0xab) == 0) goto cf_common_exit_00667066;
      uVar10 = *(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab);
      bVar21 = *(uint *)((int)param_1 + 0x280) < uVar10;
      bVar22 = *(uint *)((int)param_1 + 0x280) == uVar10;
LAB_00666ddf:
      if (bVar21 || bVar22) goto cf_common_exit_00667066;
      break;
    case 0x212:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x20;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 199);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        thunk_FUN_0065fa10((int)param_1,(uint)bVar2,0,0,0);
        uVar14 = CONCAT22(extraout_var_16,*(undefined2 *)((int)param_1 + 0xc3));
        iVar8 = thunk_FUN_00660620((int)param_1,uVar14,uVar14);
        goto joined_r0x00666ceb;
      }
      if (*(int *)((int)param_1 + 0xa7) == 0) {
        uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
        iVar8 = CONCAT22(extraout_var_14,uVar5);
        sVar6 = *(short *)((int)param_1 + 0xc5);
LAB_006664e6:
        if (sVar6 < iVar8) {
          if (*(int *)((int)param_1 + 0xab) == 0) goto cf_common_exit_00667066;
          uVar10 = *(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab);
          bVar21 = *(uint *)((int)param_1 + 0x280) < uVar10;
          bVar22 = *(uint *)((int)param_1 + 0x280) == uVar10;
          goto LAB_00666ddf;
        }
      }
      break;
    case 0x21c:
      *(undefined4 *)((int)param_1 + 0xeb) = 2;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xd3);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        iVar8 = thunk_FUN_0065fe10((int)param_1,(int)param_1 + 199,*(int *)((int)param_1 + 0xc3),
                                   (short *)((int)param_1 + 199));
        goto joined_r0x00666ceb;
      }
LAB_00666db5:
      if (*(int *)((int)param_1 + 0xa7) == 0) {
cf_common_join_00666DC1:
        if (*(int *)((int)param_1 + 0xab) == 0) goto cf_common_exit_00667066;
        uVar10 = *(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab);
        bVar21 = *(uint *)((int)param_1 + 0x280) < uVar10;
        bVar22 = *(uint *)((int)param_1 + 0x280) == uVar10;
        goto LAB_00666ddf;
      }
      break;
    case 0x226:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x2000;
      if (*(int *)((int)param_1 + 0xa3) != 0) goto LAB_00666db5;
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xcf);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      iVar8 = thunk_FUN_00660700(param_1,*(short *)((int)param_1 + 0xc3),
                                 *(short *)((int)param_1 + 0xc5),*(short *)((int)param_1 + 199),
                                 (int)*(short *)((int)param_1 + 0xc9),
                                 (int)*(short *)((int)param_1 + 0xcb),
                                 (int)*(short *)((int)param_1 + 0xcd));
      goto joined_r0x00666ceb;
    case 0x230:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x1000;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xcb);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        iVar8 = thunk_FUN_00660910(param_1,*(short *)((int)param_1 + 0xc3),
                                   *(short *)((int)param_1 + 0xc5),*(short *)((int)param_1 + 199));
        goto joined_r0x00666ceb;
      }
      if (((*(int *)((int)param_1 + 0xa7) == 0) &&
          (uVar5 = AiFltClassTy::sub_0065D9C0(param_1),
          (int)*(short *)((int)param_1 + 0xc9) < CONCAT22(extraout_var_15,uVar5))) &&
         ((*(int *)((int)param_1 + 0xab) == 0 ||
          (*(uint *)((int)param_1 + 0x280) <=
           (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
      goto cf_common_exit_00667066;
      break;
    case 0x23a:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x800;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xc9);
        *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
        iVar8 = thunk_FUN_00660a40(param_1,*(short *)((int)param_1 + 0xc3),
                                   *(short *)((int)param_1 + 0xc5),*(short *)((int)param_1 + 199));
        goto joined_r0x00666ceb;
      }
      if ((*(int *)((int)param_1 + 0xa7) == 0) &&
         ((*(int *)((int)param_1 + 0xab) == 0 ||
          (*(uint *)((int)param_1 + 0x280) <=
           (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
      goto cf_common_exit_00667066;
      break;
    case 0x244:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x800;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0xc9);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      *(undefined4 *)((int)param_1 + 0x9b) = 0x246;
      goto cf_common_join_00667054;
    case 0x246:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x800;
      if (*(int *)((int)param_1 + 0xa3) != 0) goto LAB_00666db5;
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      iVar8 = thunk_FUN_00660b50((int)param_1,(int)*(short *)((int)param_1 + 0xc3),
                                 *(short *)((int)param_1 + 0xc3),*(short *)((int)param_1 + 0xc5),
                                 (int)*(short *)((int)param_1 + 199),*(int *)((int)param_1 + 0xbf));
joined_r0x00666ceb:
      if (iVar8 == 0) goto cf_common_exit_00667066;
      break;
    case 0x24e:
      *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
      if (*(int *)((int)param_1 + 0xa3) == 0) {
        *(undefined4 *)((int)param_1 + 0xa3) = 1;
        iVar8 = thunk_FUN_0065e450((int)param_1,*(undefined4 *)((int)param_1 + 0xc3),
                                   *(undefined4 *)((int)param_1 + 0xc3),
                                   (int)*(short *)((int)param_1 + 199),
                                   (int)*(short *)((int)param_1 + 0xc9));
        *(int *)((int)param_1 + 0xb3) = iVar8;
        if (0 < iVar8) {
          iVar8 = (*(int *)((int)param_1 + 0xcd) * iVar8) / 100;
          *(int *)((int)param_1 + 0xb3) = iVar8;
          if (iVar8 == 0) {
            *(undefined4 *)((int)param_1 + 0xb3) = 1;
          }
          goto cf_common_exit_00667066;
        }
      }
      else {
        local_8 = (void *)0x0;
        switch(*(undefined4 *)((int)param_1 + 0xc3)) {
        case 0xa3:
          iVar8 = 0x4e;
          break;
        default:
          iVar8 = 0;
          break;
        case 0xa8:
          iVar8 = 0x45;
          break;
        case 0xb2:
          iVar8 = 0x70;
          break;
        case 0xbe:
          iVar8 = 0x72;
        }
        local_10 = thunk_FUN_0065e360((int)param_1,(uint)bVar2,iVar8);
        if (local_10 != (uint *)0x0) {
          uVar10 = local_10[3];
          local_c = 0;
          if (0 < (int)uVar10) {
            do {
              if (local_c < uVar10) {
                puVar15 = (undefined2 *)(local_10[2] * local_c + local_10[7]);
              }
              else {
                puVar15 = (undefined2 *)0x0;
              }
              pvVar13 = (void *)STAllPlayersC::GetObjPtr
                                          (g_sTAllPlayers_007FA174,
                                           CONCAT31((int3)((uint)local_10 >> 8),
                                                    *(undefined1 *)((int)param_1 + 0x24)),
                                           CONCAT22((short)(local_c >> 0x10),*puVar15),CASE_1);
              local_48 = pvVar13;
              switch(*(undefined4 *)((int)param_1 + 0xc3)) {
              case 0xa3:
              case 0xa8:
              case 0xbe:
                uVar10 = thunk_FUN_004c5350(pvVar13,0,(int *)0x0,(int)*(short *)((int)param_1 + 199)
                                            ,(int)*(short *)((int)param_1 + 0xc9),0,0,0);
                if (uVar10 != 0) {
                  sVar6 = *(short *)((int)param_1 + 199);
                  sVar4 = *(short *)((int)param_1 + 0xc9);
                  *(uint *)((int)pvVar13 + 0x265) = *(uint *)((int)pvVar13 + 0x265) | 2;
                  *(int *)((int)pvVar13 + 0x2a5) = (int)sVar6;
                  *(int *)((int)pvVar13 + 0x2a9) = (int)sVar4;
                  *(undefined4 *)((int)pvVar13 + 0x2ad) = 0;
                  local_8 = (void *)((int)local_8 + 1);
                  if (*(int *)((int)param_1 + 0xb3) <= (int)local_8) goto cf_break_loop_0066703E;
                }
                break;
              case 0xb2:
                if (*(int *)((int)pvVar13 + 0x24) != *(int *)((int)pvVar13 + 0x23d)) {
                  uVar10 = thunk_FUN_004406c0((char)*(int *)((int)pvVar13 + 0x23d));
                  local_4c = ((uVar10 & 0xff) + *(int *)((int)pvVar13 + 0x235) * 3) * 3;
                  uVar10 = thunk_FUN_004406c0(*(char *)((int)pvVar13 + 0x24));
                  if ((&DAT_007e1984)[(uVar10 & 0xff) + local_4c] == '\0') break;
                }
                if ((*(int *)((int)local_48 + 0x245) == 0) && (99 < *(int *)((int)local_48 + 0x4ec))
                   ) {
                  thunk_FUN_004d8e70(local_48,(int)*(short *)((int)param_1 + 199),
                                     (int)*(short *)((int)param_1 + 0xc9),0);
                  local_8 = (void *)((int)local_8 + 1);
                  if (*(int *)((int)param_1 + 0xb3) <= (int)local_8) goto cf_break_loop_0066703E;
                }
              }
              local_c = local_c + 1;
              uVar10 = local_10[3];
            } while ((int)local_c < (int)uVar10);
          }
cf_break_loop_0066703E:
          FUN_006ae110((byte *)local_10);
        }
      }
    }
cf_common_join_00667047:
    thunk_FUN_0065f980((int)param_1);
    goto cf_common_join_0066704E;
  }
  if (uVar10 == 0x82) {
    *(undefined4 *)((int)param_1 + 0xeb) = 0x40;
    *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 400);
    *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
    thunk_FUN_0065fa10((int)param_1,*(undefined4 *)((int)param_1 + 400),0,0,0);
    iVar8 = *(int *)((int)param_1 + 0xef);
    if (((iVar8 == 0x200) || (iVar8 == 0x400)) &&
       (iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),
                                   (short *)((int)param_1 + 0x1a1),iVar8),
       iVar8 == *(int *)((int)param_1 + 0xef))) {
      *(undefined4 *)((int)param_1 + 0x9b) = 0x83;
    }
    else {
      *(undefined4 *)((int)param_1 + 0xef) = 0x100;
      *(undefined4 *)((int)param_1 + 0x9b) = 0x85;
    }
    goto cf_common_join_00667054;
  }
  switch(uVar10) {
  case 0:
    uVar3 = *(ushort *)((int)param_1 + 0x7b);
    if (0x10 < uVar3) {
      if (uVar3 == 0x20) goto LAB_006650bc;
      if (uVar3 != 0x8000) goto cf_common_exit_00667066;
      thunk_FUN_0065fd00((int)param_1,uVar14);
      *(undefined4 *)((int)param_1 + 0x9b) = 0x32;
      break;
    }
    if (uVar3 == 0x10) {
LAB_006650bc:
      thunk_FUN_0065fd00((int)param_1,uVar14);
      *(undefined4 *)((int)param_1 + 0x9b) = 0x3c;
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
    *(undefined4 *)((int)param_1 + 0xeb) = 1;
    goto cf_common_exit_00667066;
  case 0xc:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = 2000;
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0xe:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = 10;
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x10:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = 0x32;
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x12:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = 0x7d;
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_exit_00667066;
    }
LAB_006651f3:
    if ((*(int *)((int)param_1 + 0xab) == 0) ||
       (*(uint *)((int)param_1 + 0x280) <=
        (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))
    goto cf_common_exit_00667066;
    puVar20 = (undefined4 *)((int)param_1 + 0x1ad);
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)puVar20 = 0;
    if (*(int *)((int)param_1 + 0xb3) != 0) {
      thunk_FUN_0065f980((int)param_1);
    }
LAB_00665237:
    *(undefined4 *)((int)param_1 + 0x9b) = 10;
    break;
  case 0x14:
    if (*(char *)((int)param_1 + 0x115) == '\0') {
LAB_0066530b:
      *(undefined4 *)((int)param_1 + 0x9b) = 0x28;
LAB_00665315:
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x9b) = 0x19;
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
      *(undefined4 *)((int)param_1 + 0x11e) = *(undefined4 *)((int)param_1 + 0x116);
      *(undefined4 *)((int)param_1 + 0xeb) = 2;
    }
    goto LAB_00665327;
  case 0x19:
    *(undefined4 *)((int)param_1 + 0xeb) = 2;
    if (*(int *)((int)param_1 + 0xa3) != 0) {
      if ((*(int *)((int)param_1 + 0xa7) != 0) ||
         ((*(int *)((int)param_1 + 0xab) != 0 &&
          ((uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab)) <
           *(uint *)((int)param_1 + 0x280))))) goto LAB_0066530b;
      goto LAB_00665327;
    }
    *(undefined4 *)((int)param_1 + 0xa3) = 1;
    *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x11a);
    *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
    iVar8 = thunk_FUN_0065fe10((int)param_1,*(undefined4 *)((int)param_1 + 0x11a),
                               *(int *)((int)param_1 + 0x11e),(short *)0x0);
    if (-1 < iVar8) goto cf_common_exit_00667066;
    *(undefined4 *)((int)param_1 + 0x9b) = 0x28;
    break;
  case 0x1e:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    *(undefined4 *)((int)param_1 + 0x9b) = 0x23;
    break;
  case 0x23:
    *(undefined4 *)((int)param_1 + 0xeb) = 4;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x1bb);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      iVar8 = thunk_FUN_00660540(param_1,*(undefined4 *)((int)param_1 + 0x1ad),
                                 *(undefined2 *)((int)param_1 + 0x1c3),
                                 *(undefined2 *)((int)param_1 + 0x1c5),
                                 *(undefined2 *)((int)param_1 + 0x1c7),
                                 *(undefined2 *)((int)param_1 + 0x1b9),
                                 *(char *)((int)param_1 + 0x1c9),(char *)((int)param_1 + 0x1ca));
      if (-1 < iVar8) goto cf_common_exit_00667066;
      if (*(int *)((int)param_1 + 0xb3) != 0) goto cf_common_join_00667047;
      goto cf_common_join_0066704E;
    }
    if ((*(int *)((int)param_1 + 0xa7) == 0) &&
       ((*(int *)((int)param_1 + 0xab) == 0 ||
        (*(uint *)((int)param_1 + 0x280) <=
         (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
    goto cf_common_exit_00667066;
    puVar20 = (undefined4 *)((int)param_1 + 0x1ad);
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)puVar20 = 0;
    if (*(int *)((int)param_1 + 0xb3) != 0) {
      thunk_FUN_0065f980((int)param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1f7) = 0x19;
    *(undefined4 *)((int)param_1 + 0x9b) = 0x78;
    break;
  case 0x28:
    if ((*(char *)((int)param_1 + 0x122) == '\0') ||
       (*(int *)(*(int *)((int)param_1 + 0x223) + 0xc) == 0)) {
LAB_00665607:
      *(undefined4 *)((int)param_1 + 0x9b) = 0x3c;
      goto LAB_00665315;
    }
    *(undefined4 *)((int)param_1 + 0x12d) = 0;
    *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x123);
    *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
    *(undefined4 *)((int)param_1 + 0x9b) = 0x2a;
    *(undefined4 *)((int)param_1 + 0x9f) = 0;
    *(undefined4 *)((int)param_1 + 0xa3) = 0;
    *(undefined4 *)((int)param_1 + 0xa7) = 0;
    *(undefined4 *)((int)param_1 + 0xeb) = 8;
LAB_00665327:
    if (*(char *)((int)param_1 + 0x139) != '\0') {
      uVar10 = *(int *)((int)param_1 + 0x14e) + *(int *)((int)param_1 + 0x14a);
      bVar21 = *(uint *)((int)param_1 + 0x280) < uVar10;
      bVar22 = *(uint *)((int)param_1 + 0x280) == uVar10;
LAB_0066534b:
      if ((!bVar21 && !bVar22) &&
         (uVar5 = AiFltClassTy::sub_0065D9C0(param_1),
         (int)*(short *)((int)param_1 + 0x13e) <= CONCAT22(extraout_var,uVar5))) {
LAB_0066586a:
        *(undefined4 *)((int)param_1 + 0x9b) = 0x6e;
        *(undefined4 *)((int)param_1 + 0x9f) = 0;
        *(undefined4 *)((int)param_1 + 0xa3) = 0;
        *(undefined4 *)((int)param_1 + 0xa7) = 0;
      }
    }
LAB_00665886:
    if ((*(char *)((int)param_1 + 0x163) == '\0') ||
       (iVar8 = thunk_FUN_0065ef70((int)param_1), iVar8 == 0)) goto cf_common_exit_00667066;
    *(undefined4 *)((int)param_1 + 0x9b) = 100;
    break;
  case 0x2a:
    *(undefined4 *)((int)param_1 + 0xeb) = 8;
    if (*(int *)((int)param_1 + 0xa3) != 0) {
      iVar8 = *(int *)((int)param_1 + 0x135);
      if (iVar8 == 0) {
LAB_006655b2:
        if (*(int *)((int)param_1 + 0xa7) != 0) {
LAB_006655ba:
          *(undefined4 *)((int)param_1 + 0x9b) = 0x2a;
          *(undefined4 *)((int)param_1 + 0x9f) = 0;
          *(undefined4 *)((int)param_1 + 0xa3) = 0;
          *(int *)((int)param_1 + 0x12d) = *(int *)((int)param_1 + 0x12d) + 1;
          *(undefined4 *)((int)param_1 + 0xa7) = 0;
        }
      }
      else {
        if ((uint)(*(int *)((int)param_1 + 0x131) + iVar8) < *(uint *)((int)param_1 + 0x280))
        goto LAB_006655ba;
        if (iVar8 == 0) goto LAB_006655b2;
      }
      if ((*(int *)((int)param_1 + 0xab) != 0) &&
         ((uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab)) <
          *(uint *)((int)param_1 + 0x280))) goto LAB_00665607;
      goto LAB_00665327;
    }
    *(undefined4 *)((int)param_1 + 0xa3) = 1;
    iVar8 = *(int *)((int)param_1 + 0x223);
    if ((*(uint *)((int)param_1 + 0x12d) < *(uint *)(iVar8 + 0xc)) &&
       (psVar9 = (short *)(*(int *)(iVar8 + 8) * *(uint *)((int)param_1 + 0x12d) +
                          *(int *)(iVar8 + 0x1c)), psVar9 != (short *)0x0)) {
      *(undefined4 *)((int)param_1 + 0x131) = *(undefined4 *)((int)param_1 + 0x280);
      *(undefined4 *)((int)param_1 + 0x135) = *(undefined4 *)(psVar9 + 3);
      thunk_FUN_0065fa10((int)param_1,(int)psVar9[6],(int)psVar9[5],(int)psVar9[6],(int)psVar9[7]);
      local_64 = *psVar9;
      local_62 = psVar9[1];
      local_60 = psVar9[2];
      local_5e = 1;
      local_5c = 1;
      local_5a = 1;
      iVar8 = thunk_FUN_00660180(param_1,&local_64,'\x02');
      if (iVar8 == 0) goto cf_common_exit_00667066;
    }
    *(undefined4 *)((int)param_1 + 0x9b) = 0x3c;
    break;
  case 0x32:
    *(undefined4 *)((int)param_1 + 0x9b) = 0x33;
    break;
  case 0x33:
    *(undefined4 *)((int)param_1 + 0x9b) = 0x34;
    break;
  case 0x34:
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      iVar8 = thunk_FUN_00660010((int)param_1);
      if (iVar8 == 0) goto cf_common_exit_00667066;
      *(undefined4 *)((int)param_1 + 0x9b) = 0x78;
      *(undefined4 *)((int)param_1 + 0x1f7) = 3000;
      *(undefined4 *)((int)param_1 + 0x9f) = 0x33;
    }
    else {
      if (*(int *)((int)param_1 + 0xa7) == 0) goto cf_common_exit_00667066;
      uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
      if (CONCAT22(extraout_var_00,uVar5) != 0 && -1 < extraout_var_00) {
        uVar14 = *(undefined4 *)((int)param_1 + 0x280);
        puVar18 = local_9c;
        for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        local_9c[0] = 0x72;
        local_9c[2] = 2;
        local_9c[1] = uVar14;
        local_90 = thunk_FUN_0065da10((int)param_1,uVar14);
        if (*(AiTactClassTy **)((int)param_1 + 0x284) != (AiTactClassTy *)0x0) {
          AiTactClassTy::GetAiMess(*(AiTactClassTy **)((int)param_1 + 0x284),local_9c);
        }
        FUN_006ae110((byte *)local_90);
      }
      *(undefined4 *)((int)param_1 + 0x9b) = 0x78;
      *(undefined4 *)((int)param_1 + 0x1f7) = 0xfa;
      *(undefined4 *)((int)param_1 + 0x9f) = 0x33;
    }
    goto LAB_0066705a;
  case 0x3c:
    if (*(char *)((int)param_1 + 0x100) == '\0') {
      *(undefined4 *)((int)param_1 + 0x9b) = 0x14;
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x9b) = 0x41;
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
      *(undefined4 *)((int)param_1 + 0xeb) = 1;
    }
    if (*(char *)((int)param_1 + 0x139) != '\0') {
      uVar10 = *(int *)((int)param_1 + 0x14e) + *(int *)((int)param_1 + 0x14a);
      bVar21 = *(uint *)((int)param_1 + 0x280) < uVar10;
      bVar22 = *(uint *)((int)param_1 + 0x280) == uVar10;
      goto LAB_0066534b;
    }
    goto LAB_00665886;
  case 0x41:
    *(undefined4 *)((int)param_1 + 0xeb) = 1;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x107);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      thunk_FUN_0065fa10((int)param_1,(int)*(short *)((int)param_1 + 0x10d),
                         (int)*(short *)((int)param_1 + 0x10b),(int)*(short *)((int)param_1 + 0x10d)
                         ,(int)*(short *)((int)param_1 + 0x10f));
      thunk_FUN_0065fd50(param_1,(int)*(short *)((int)param_1 + 0x101),
                         (int)*(short *)((int)param_1 + 0x103),*(short *)((int)param_1 + 0x105),0);
      goto cf_common_exit_00667066;
    }
    if ((*(int *)((int)param_1 + 0xab) != 0) &&
       ((uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab)) <
        *(uint *)((int)param_1 + 0x280))) {
      *(undefined4 *)((int)param_1 + 0x9b) = 0x14;
      *(undefined4 *)((int)param_1 + 0x9f) = 0;
      *(undefined4 *)((int)param_1 + 0xa3) = 0;
      *(undefined4 *)((int)param_1 + 0xa7) = 0;
    }
    if (((*(char *)((int)param_1 + 0x139) == '\0') ||
        (*(uint *)((int)param_1 + 0x280) <=
         (uint)(*(int *)((int)param_1 + 0x14e) + *(int *)((int)param_1 + 0x14a)))) ||
       (uVar5 = AiFltClassTy::sub_0065D9C0(param_1),
       CONCAT22(extraout_var_01,uVar5) < (int)*(short *)((int)param_1 + 0x13e))) goto LAB_00665886;
    goto LAB_0066586a;
  case 100:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x100;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x16c);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      thunk_FUN_0065fa10((int)param_1,*(undefined4 *)((int)param_1 + 0x16c),0,0,0);
      thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),'\x01');
      goto cf_common_exit_00667066;
    }
    if ((*(int *)((int)param_1 + 0xa7) == 0) &&
       ((*(int *)((int)param_1 + 0xab) == 0 ||
        (*(uint *)((int)param_1 + 0x280) <=
         (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
    goto cf_common_exit_00667066;
    goto cf_common_join_0066704E;
  case 0x6e:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x80;
    *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x142);
    *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
    thunk_FUN_0065fa10((int)param_1,uVar14,0,0,0);
    if (*(uint *)((int)param_1 + 0x97) != 0xff) {
      iVar8 = thunk_FUN_0065e9a0(param_1,*(uint *)((int)param_1 + 0x97),
                                 (short *)((int)param_1 + 0x195),0,*(uint *)((int)param_1 + 0x13a),
                                 (byte *)0x0,0xffffffff,0);
      if (iVar8 == 0) {
        uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)param_1 + 0x1c) = uVar10;
        if ((uVar10 & 0x10000) == 0) {
          iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),
                                     (short *)((int)param_1 + 0x1a1),0);
          if ((iVar8 == 0x200) || (iVar8 == 0x400)) {
            *(int *)((int)param_1 + 0xef) = iVar8;
            *(undefined4 *)((int)param_1 + 0x9b) = 0x6f;
          }
          else {
            *(undefined4 *)((int)param_1 + 0xef) = 0x100;
            *(undefined4 *)((int)param_1 + 0x9b) = 0x71;
          }
        }
        else {
          *(undefined4 *)((int)param_1 + 0xef) = 0x100;
          *(undefined4 *)((int)param_1 + 0x9b) = 0x71;
        }
        break;
      }
    }
    *(undefined4 *)((int)param_1 + 0x14e) = *(undefined4 *)((int)param_1 + 0x280);
    goto cf_common_join_0066704E;
  case 0x6f:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x80;
    if (*(int *)((int)param_1 + 0xa3) != 0) {
      if (*(int *)((int)param_1 + 0xa7) != 0) {
        *(undefined4 *)((int)param_1 + 0x9b) = 0x70;
        *(undefined4 *)((int)param_1 + 0x9f) = 0;
        *(undefined4 *)((int)param_1 + 0xa3) = 0;
        *(undefined4 *)((int)param_1 + 0xa7) = 0;
      }
LAB_00665a76:
      uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
      if (((int)*(short *)((int)param_1 + 0x140) < CONCAT22(extraout_var_02,uVar5)) &&
         ((*(int *)((int)param_1 + 0xab) == 0 ||
          (*(uint *)((int)param_1 + 0x280) <=
           (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))))
      goto cf_common_exit_00667066;
LAB_00665aac:
      *(undefined4 *)((int)param_1 + 0x14e) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_join_0066704E;
    }
    *(undefined4 *)((int)param_1 + 0xa3) = 1;
LAB_00665b48:
    iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x1a1),'\x02');
    if (iVar8 == 0) goto cf_common_exit_00667066;
LAB_00665b57:
    *(undefined4 *)((int)param_1 + 0x9b) = 0x71;
    break;
  case 0x70:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x80;
    if (*(int *)((int)param_1 + 0xa3) != 0) {
      if (*(int *)((int)param_1 + 0xa7) != 0) {
        *(undefined4 *)((int)param_1 + 0x9b) = 0x71;
        *(undefined4 *)((int)param_1 + 0x9f) = 0;
        *(undefined4 *)((int)param_1 + 0xa3) = 0;
        *(undefined4 *)((int)param_1 + 0xa7) = 0;
      }
      uVar5 = AiFltClassTy::sub_0065D9C0(param_1);
      if ((int)*(short *)((int)param_1 + 0x140) < CONCAT22(extraout_var_03,uVar5)) {
        if ((*(int *)((int)param_1 + 0xab) == 0) ||
           (*(uint *)((int)param_1 + 0x280) <=
            (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab))))
        goto cf_common_exit_00667066;
        *(uint *)((int)param_1 + 0x14e) = *(uint *)((int)param_1 + 0x280);
        goto cf_common_join_0066704E;
      }
      goto LAB_00665aac;
    }
    *(undefined4 *)((int)param_1 + 0xa3) = 1;
    if (((*(int *)((int)param_1 + 0xef) != 0x200) && (*(int *)((int)param_1 + 0xef) != 0x400)) ||
       (uVar10 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039,
       *(uint *)((int)param_1 + 0x1c) = uVar10, (uVar10 & 0x10000) == 0)) goto LAB_00665b57;
    iVar8 = thunk_FUN_0065ed90(param_1,(short *)((int)param_1 + 0x195),
                               (short *)((int)param_1 + 0x1a1),*(int *)((int)param_1 + 0xef));
    if ((iVar8 == 0x200) || (iVar8 == 0x400)) goto LAB_00665b48;
    *(undefined4 *)((int)param_1 + 0x9b) = 0x71;
    break;
  case 0x71:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x80;
    if (*(int *)((int)param_1 + 0xa3) != 0) {
      if (*(int *)((int)param_1 + 0xa7) != 0) goto LAB_00665aac;
      goto LAB_00665a76;
    }
    *(undefined4 *)((int)param_1 + 0xa3) = 1;
    iVar8 = thunk_FUN_00660180(param_1,(short *)((int)param_1 + 0x195),
                               (char)*(undefined4 *)((int)param_1 + 0x146));
    if (iVar8 == 0) goto cf_common_exit_00667066;
    *(undefined4 *)((int)param_1 + 0x14e) = *(undefined4 *)((int)param_1 + 0x280);
cf_common_join_0066704E:
    *(undefined4 *)((int)param_1 + 0x9b) = 0;
    break;
  case 0x78:
    *(undefined4 *)((int)param_1 + 0xeb) = 0x4000;
    if (*(int *)((int)param_1 + 0xa3) == 0) {
      *(undefined4 *)((int)param_1 + 0xa3) = 1;
      *(undefined4 *)((int)param_1 + 0xab) = *(undefined4 *)((int)param_1 + 0x1f7);
      *(undefined4 *)((int)param_1 + 0xaf) = *(undefined4 *)((int)param_1 + 0x280);
      goto cf_common_exit_00667066;
    }
    if (*(uint *)((int)param_1 + 0x280) <=
        (uint)(*(int *)((int)param_1 + 0xaf) + *(int *)((int)param_1 + 0xab)))
    goto cf_common_exit_00667066;
    *(undefined4 *)((int)param_1 + 0x9b) = *(undefined4 *)((int)param_1 + 0x9f);
  }
cf_common_join_00667054:
  *(undefined4 *)((int)param_1 + 0x9f) = 0;
LAB_0066705a:
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0;
cf_common_exit_00667066:
  if (((*(int *)((int)param_1 + 0x284) != 0) && (*(char *)((int)param_1 + 0x176) != '\0')) &&
     ((*(uint *)((int)param_1 + 0xeb) & *(uint *)((int)param_1 + 0x17b)) != 0)) {
    AiFltClassTy::GoToRepair(param_1,unaff_ESI);
  }
  return;
}

