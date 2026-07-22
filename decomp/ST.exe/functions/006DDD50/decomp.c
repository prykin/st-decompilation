
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ddd50(AnonShape_006DDD50_309FA381 *param_1)

{
  undefined4 ******ppppppuVar1;
  undefined4 ******ppppppuVar2;
  int *piVar3;
  AnonShape_006E1EE0_698AE49A *pAVar4;
  AnonShape_007282B0_AFD740A9 *pAVar5;
  undefined4 ******ppppppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****ppppuVar11;
  undefined1 uVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 ******ppppppuVar15;
  int *piVar16;
  int *piVar17;
  char *pcVar18;
  int iVar19;
  undefined1 *puVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  ushort *puVar24;
  int local_120;
  int local_11c;
  float local_ec [2];
  int local_e4;
  undefined1 *local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0 [4];
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c [2];
  undefined4 ****local_74;
  undefined4 *****local_68 [4];
  float local_58 [2];
  char *local_50;
  undefined4 *****local_44;
  float local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079dff8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffed4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((param_1->field_0004 == 0) || ((*(uint *)(param_1->field_0004 + 0xc) & 0x1100) != 0x100)) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    ExceptionList = &local_14;
    param_1->field_02D8 = 1;
    local_8 = 0;
    Library::MSVCRT::FUN_0072da40();
    local_3c = (undefined4 *)&stack0xfffffed4;
    local_1c = &stack0xfffffed4;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    if ((param_1->field_00A8 < 0) || (3 < param_1->field_00A8)) {
      local_90 = param_1->field_013C;
      while (local_90 = local_90 + -1, local_cc = &stack0xfffffed4, local_1c = &stack0xfffffed4,
            0 < local_90) {
        piVar21 = &param_1->field_0140;
        piVar16 = (int *)*piVar21;
        local_11c = local_90;
        if (0 < local_90) {
          do {
            piVar3 = (int *)*piVar16;
            piVar17 = piVar3;
            piVar22 = piVar16;
            if ((short)piVar3[2] <= (short)piVar16[2]) {
              *piVar21 = (int)piVar3;
              *piVar16 = *piVar3;
              *piVar3 = (int)piVar16;
              piVar17 = piVar16;
              piVar22 = piVar3;
            }
            local_11c = local_11c + -1;
            piVar16 = piVar17;
            piVar21 = piVar22;
          } while (local_11c != 0);
        }
      }
    }
    else {
      local_44 = (undefined4 *****)&param_1->field_0140;
      for (ppppppuVar1 = (undefined4 ******)param_1->field_0140;
          ((ppppppuVar1 != (undefined4 ******)0x0 && (*(short *)(ppppppuVar1 + 2) == 0)) &&
          ((int)ppppppuVar1[9] < 3)); ppppppuVar1 = (undefined4 ******)*ppppppuVar1) {
        local_44 = ppppppuVar1;
      }
      ppppppuVar1 = (undefined4 ******)*local_44;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_68[0] = ppppppuVar1;
      local_1c = &stack0xfffffed4;
      local_cc = &stack0xfffffed4;
      for (ppppppuVar2 = ppppppuVar1; ppppppuVar2 != (undefined4 ******)0x0;
          ppppppuVar2 = (undefined4 ******)*ppppppuVar2) {
        FUN_006e25d0(param_1,local_7c);
        ppppppuVar2[0x11] = (undefined4 *****)local_74;
      }
      FUN_006dd530(param_1,local_ec,&local_40,local_58);
      while (ppppppuVar1 != (undefined4 ******)0x0) {
        ppppppuVar2 = local_68;
        for (ppppppuVar6 = ppppppuVar1; ppppppuVar6 != (undefined4 ******)0x0;
            ppppppuVar6 = (undefined4 ******)*ppppppuVar6) {
          ppppppuVar15 = ppppppuVar1;
          do {
            if ((int)ppppppuVar6[0x11] < (int)ppppppuVar15[0x11]) break;
            ppppppuVar15 = (undefined4 ******)*ppppppuVar15;
          } while (ppppppuVar15 != (undefined4 ******)0x0);
          if (ppppppuVar15 == (undefined4 ******)0x0) break;
          ppppppuVar2 = ppppppuVar6;
        }
        if (ppppppuVar6 == (undefined4 ******)0x0) {
          *local_44 = ppppppuVar1;
        }
        else {
          *ppppppuVar2 = *ppppppuVar6;
          *ppppppuVar6 = (undefined4 *****)0x0;
          *local_44 = ppppppuVar6;
          ppppppuVar1 = (undefined4 ******)local_68[0];
          local_44 = ppppppuVar6;
        }
      }
    }
    if (param_1->field_0124 == 0) {
      for (pAVar4 = (AnonShape_006E1EE0_698AE49A *)param_1->field_0140;
          pAVar4 != (AnonShape_006E1EE0_698AE49A *)0x0;
          pAVar4 = *(AnonShape_006E1EE0_698AE49A **)pAVar4) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_006e1ee0
                  ((AnonReceiver_00424E10 *)param_1,pAVar4,local_3c,(int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)pAVar4);
        iVar23 = 0;
        if (0 < local_a0[0]) {
          do {
            FUN_007279b0(param_1,(int)pAVar4,(uint)(byte)local_cc[iVar23],(int)local_3c);
            iVar23 = iVar23 + 1;
          } while (iVar23 < local_a0[0]);
        }
      }
    }
    else if (param_1->field_0124 == 1) {
      local_38 = param_1->field_0374;
      local_34 = param_1->field_0378;
      local_30 = param_1->field_0370;
      local_2c = local_30;
      for (pAVar5 = (AnonShape_007282B0_AFD740A9 *)param_1->field_0140;
          pAVar5 != (AnonShape_007282B0_AFD740A9 *)0x0;
          pAVar5 = *(AnonShape_007282B0_AFD740A9 **)pAVar5) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_006e1ee0
                  ((AnonReceiver_00424E10 *)param_1,(AnonShape_006E1EE0_698AE49A *)pAVar5,local_3c,
                   (int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)pAVar5);
        iVar23 = 0;
        if (0 < local_a0[0]) {
          do {
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_007282b0
                      ((AnonReceiver_00727C80 *)param_1,pAVar5,(uint)(byte)local_cc[iVar23],
                       (int)local_3c);
            iVar23 = iVar23 + 1;
          } while (iVar23 < local_a0[0]);
        }
        if (pAVar5->field_0008 == 0) {
          local_e4 = 0;
        }
        else {
          local_e4 = ((int)pAVar5->field_0008 - (uint)pAVar5->field_0048) * param_1->field_0384;
        }
        local_bc = param_1->field_0380;
        local_c4 = *(short *)&pAVar5->field_0x4 * local_bc;
        local_c0 = *(short *)&pAVar5->field_0x6 * local_bc;
        local_bc = local_bc * 2;
        local_b8 = local_bc;
        iVar23 = FUN_006b0460(&local_b4,&local_c4,&local_38);
        if (iVar23 != 0) {
          if (local_e4 == 0) {
            FUN_006b0330(param_1->field_0014,param_1->field_0028,local_b4 - local_38,
                         local_b0 - local_34,*(int *)&pAVar5->field_0x40,local_bc,
                         local_b4 - local_c4,local_b0 - local_c0,local_ac,local_a8,'\0');
          }
          else {
            pcVar13 = (char *)((((local_b0 - local_34) * param_1->field_0028 + param_1->field_0014)
                               - local_38) + local_b4);
            pcVar18 = (char *)((((local_b0 - local_c0) * local_bc + *(int *)&pAVar5->field_0x40) -
                               local_c4) + local_b4);
            while (local_a8 = local_a8 + -1, -1 < local_a8) {
              if (-1 < local_ac + -1) {
                local_120 = local_ac;
                do {
                  if (*pcVar18 != '\0') {
                    *pcVar13 = *pcVar18 + (char)local_e4;
                  }
                  pcVar18 = pcVar18 + 1;
                  pcVar13 = pcVar13 + 1;
                  local_120 = local_120 + -1;
                } while (local_120 != 0);
              }
              pcVar13 = pcVar13 + (param_1->field_0028 - local_ac);
              pcVar18 = pcVar18 + (local_bc - local_ac);
            }
          }
        }
      }
    }
    else {
      for (pAVar4 = (AnonShape_006E1EE0_698AE49A *)param_1->field_0140;
          pAVar4 != (AnonShape_006E1EE0_698AE49A *)0x0;
          pAVar4 = *(AnonShape_006E1EE0_698AE49A **)pAVar4) {
        if (param_1->field_0124 == 3) {
          FUN_006e2b60(param_1,(AnonShape_006E2B60_E36B924C *)pAVar4,(int)local_3c,(int)local_cc,
                       local_a0);
        }
        else {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_006e1ee0
                    ((AnonReceiver_00424E10 *)param_1,pAVar4,local_3c,(int)local_cc,local_a0);
        }
        FUN_00726ce0(param_1,(int)pAVar4);
        iVar23 = 0;
        if (0 < local_a0[0]) {
          do {
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_00727da0
                      ((AnonReceiver_00727C80 *)param_1,(AnonShape_00727DA0_C4265AA0 *)pAVar4,
                       (uint)(byte)local_cc[iVar23],(int)local_3c);
            iVar23 = iVar23 + 1;
          } while (iVar23 < local_a0[0]);
        }
      }
    }
    if (param_1->field_0124 == 5) {
      local_50 = (char *)param_1->field_000C;
      puVar24 = (ushort *)param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar23 = 0;
          if (0 < param_1->field_0028) {
            do {
              if (*local_50 == -1) {
                iVar19 = (int)((30000 - (uint)*puVar24) * 0x100) / 30000;
                if (iVar19 < 0) {
                  iVar19 = 0;
                }
                if (0xff < iVar19) {
                  iVar19 = 0xff;
                }
                *local_50 = (char)iVar19;
              }
              local_50 = local_50 + 1;
              puVar24 = puVar24 + 1;
              iVar23 = iVar23 + 1;
            } while (iVar23 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
    else if (param_1->field_0124 == 2) {
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar7 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar8 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar9 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar10 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar11 = local_74;
      FUN_006e25d0(param_1,local_7c);
      iVar23 = ((int)local_74 - (int)ppppuVar11) / 10;
      puVar20 = (undefined1 *)param_1->field_000C;
      puVar24 = (ushort *)param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar19 = 0;
          if (0 < param_1->field_0028) {
            do {
              uVar14 = (uint)*puVar24;
              if ((int)uVar14 < (int)local_74 - iVar23) {
                if ((int)ppppuVar11 - iVar23 <= (int)uVar14) {
                  uVar12 = param_1->field_0439;
                  goto cf_common_join_006DE503;
                }
                if ((int)ppppuVar10 - iVar23 <= (int)uVar14) {
                  uVar12 = param_1->field_043A;
                  goto cf_common_join_006DE503;
                }
                if ((int)ppppuVar9 - iVar23 <= (int)uVar14) {
                  uVar12 = param_1->field_043B;
                  goto cf_common_join_006DE503;
                }
                if ((int)ppppuVar8 - iVar23 <= (int)uVar14) {
                  uVar12 = param_1->field_043C;
                  goto cf_common_join_006DE503;
                }
                if ((int)ppppuVar7 - iVar23 <= (int)uVar14) {
                  uVar12 = param_1->field_043D;
                  goto cf_common_join_006DE503;
                }
              }
              else {
                uVar12 = param_1->field_0438;
cf_common_join_006DE503:
                *puVar20 = uVar12;
              }
              puVar20 = puVar20 + 1;
              puVar24 = puVar24 + 1;
              iVar19 = iVar19 + 1;
            } while (iVar19 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

