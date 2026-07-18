
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ddd50(void *param_1)

{
  undefined4 ******ppppppuVar1;
  undefined4 ******ppppppuVar2;
  undefined4 *puVar3;
  undefined4 ******ppppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  undefined1 uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 ******ppppppuVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  ushort *puVar22;
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
  if (((*(int *)((int)param_1 + 4) == 0) ||
      ((*(uint *)(*(int *)((int)param_1 + 4) + 0xc) & 0x1100) != 0x100)) &&
     ((*(int *)((int)param_1 + 0x2dc) == 0 || (*(int *)((int)param_1 + 0x2d8) != 0)))) {
    ExceptionList = &local_14;
    *(undefined4 *)((int)param_1 + 0x2d8) = 1;
    local_8 = 0;
    FUN_0072da40();
    local_3c = (undefined4 *)&stack0xfffffed4;
    local_1c = &stack0xfffffed4;
    FUN_0072da40();
    local_8 = 0xffffffff;
    if ((*(int *)((int)param_1 + 0xa8) < 0) || (3 < *(int *)((int)param_1 + 0xa8))) {
      local_90 = *(int *)((int)param_1 + 0x13c);
      while (local_90 = local_90 + -1, local_cc = &stack0xfffffed4, local_1c = &stack0xfffffed4,
            0 < local_90) {
        puVar19 = (undefined4 *)((int)param_1 + 0x140);
        puVar14 = (undefined4 *)*puVar19;
        local_11c = local_90;
        if (0 < local_90) {
          do {
            puVar3 = (undefined4 *)*puVar14;
            puVar15 = puVar3;
            puVar20 = puVar14;
            if (*(short *)(puVar3 + 2) <= *(short *)(puVar14 + 2)) {
              *puVar19 = puVar3;
              *puVar14 = *puVar3;
              *puVar3 = puVar14;
              puVar15 = puVar14;
              puVar20 = puVar3;
            }
            local_11c = local_11c + -1;
            puVar14 = puVar15;
            puVar19 = puVar20;
          } while (local_11c != 0);
        }
      }
    }
    else {
      local_44 = (undefined4 ******)((int)param_1 + 0x140);
      for (ppppppuVar1 = *(undefined4 *******)((int)param_1 + 0x140);
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
        for (ppppppuVar4 = ppppppuVar1; ppppppuVar4 != (undefined4 ******)0x0;
            ppppppuVar4 = (undefined4 ******)*ppppppuVar4) {
          ppppppuVar13 = ppppppuVar1;
          do {
            if ((int)ppppppuVar4[0x11] < (int)ppppppuVar13[0x11]) break;
            ppppppuVar13 = (undefined4 ******)*ppppppuVar13;
          } while (ppppppuVar13 != (undefined4 ******)0x0);
          if (ppppppuVar13 == (undefined4 ******)0x0) break;
          ppppppuVar2 = ppppppuVar4;
        }
        if (ppppppuVar4 == (undefined4 ******)0x0) {
          *local_44 = ppppppuVar1;
        }
        else {
          *ppppppuVar2 = *ppppppuVar4;
          *ppppppuVar4 = (undefined4 *****)0x0;
          *local_44 = ppppppuVar4;
          ppppppuVar1 = (undefined4 ******)local_68[0];
          local_44 = ppppppuVar4;
        }
      }
    }
    if (*(int *)((int)param_1 + 0x124) == 0) {
      for (puVar19 = *(undefined4 **)((int)param_1 + 0x140); puVar19 != (undefined4 *)0x0;
          puVar19 = (undefined4 *)*puVar19) {
        FUN_006e1ee0(param_1,(int)puVar19,local_3c,(int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)puVar19);
        iVar21 = 0;
        if (0 < local_a0[0]) {
          do {
            FUN_007279b0(param_1,(int)puVar19,(uint)(byte)local_cc[iVar21],(int)local_3c);
            iVar21 = iVar21 + 1;
          } while (iVar21 < local_a0[0]);
        }
      }
    }
    else if (*(int *)((int)param_1 + 0x124) == 1) {
      local_38 = *(int *)((int)param_1 + 0x374);
      local_34 = *(int *)((int)param_1 + 0x378);
      local_30 = *(undefined4 *)((int)param_1 + 0x370);
      local_2c = local_30;
      for (puVar19 = *(undefined4 **)((int)param_1 + 0x140); puVar19 != (undefined4 *)0x0;
          puVar19 = (undefined4 *)*puVar19) {
        FUN_006e1ee0(param_1,(int)puVar19,local_3c,(int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)puVar19);
        iVar21 = 0;
        if (0 < local_a0[0]) {
          do {
            FUN_007282b0(param_1,(int)puVar19,(uint)(byte)local_cc[iVar21],(int)local_3c);
            iVar21 = iVar21 + 1;
          } while (iVar21 < local_a0[0]);
        }
        if (*(short *)(puVar19 + 2) == 0) {
          local_e4 = 0;
        }
        else {
          local_e4 = ((int)*(short *)(puVar19 + 2) - (uint)*(byte *)(puVar19 + 0x12)) *
                     *(int *)((int)param_1 + 900);
        }
        local_bc = *(int *)((int)param_1 + 0x380);
        local_c4 = *(short *)(puVar19 + 1) * local_bc;
        local_c0 = *(short *)((int)puVar19 + 6) * local_bc;
        local_bc = local_bc * 2;
        local_b8 = local_bc;
        iVar21 = FUN_006b0460(&local_b4,&local_c4,&local_38);
        if (iVar21 != 0) {
          if (local_e4 == 0) {
            FUN_006b0330(*(int *)((int)param_1 + 0x14),*(int *)((int)param_1 + 0x28),
                         local_b4 - local_38,local_b0 - local_34,puVar19[0x10],local_bc,
                         local_b4 - local_c4,local_b0 - local_c0,local_ac,local_a8,'\0');
          }
          else {
            pcVar11 = (char *)((((local_b0 - local_34) * *(int *)((int)param_1 + 0x28) +
                                *(int *)((int)param_1 + 0x14)) - local_38) + local_b4);
            pcVar16 = (char *)((((local_b0 - local_c0) * local_bc + puVar19[0x10]) - local_c4) +
                              local_b4);
            while (local_a8 = local_a8 + -1, -1 < local_a8) {
              if (-1 < local_ac + -1) {
                local_120 = local_ac;
                do {
                  if (*pcVar16 != '\0') {
                    *pcVar11 = *pcVar16 + (char)local_e4;
                  }
                  pcVar16 = pcVar16 + 1;
                  pcVar11 = pcVar11 + 1;
                  local_120 = local_120 + -1;
                } while (local_120 != 0);
              }
              pcVar11 = pcVar11 + (*(int *)((int)param_1 + 0x28) - local_ac);
              pcVar16 = pcVar16 + (local_bc - local_ac);
            }
          }
        }
      }
    }
    else {
      for (puVar19 = *(undefined4 **)((int)param_1 + 0x140); puVar19 != (undefined4 *)0x0;
          puVar19 = (undefined4 *)*puVar19) {
        if (*(int *)((int)param_1 + 0x124) == 3) {
          FUN_006e2b60(param_1,(int)puVar19,(int)local_3c,(int)local_cc,local_a0);
        }
        else {
          FUN_006e1ee0(param_1,(int)puVar19,local_3c,(int)local_cc,local_a0);
        }
        FUN_00726ce0(param_1,(int)puVar19);
        iVar21 = 0;
        if (0 < local_a0[0]) {
          do {
            FUN_00727da0(param_1,(int)puVar19,(uint)(byte)local_cc[iVar21],(int)local_3c);
            iVar21 = iVar21 + 1;
          } while (iVar21 < local_a0[0]);
        }
      }
    }
    if (*(int *)((int)param_1 + 0x124) == 5) {
      local_50 = *(char **)((int)param_1 + 0xc);
      puVar22 = *(ushort **)((int)param_1 + 0x14);
      local_8c = 0;
      if (0 < *(int *)((int)param_1 + 0x2c)) {
        do {
          iVar21 = 0;
          if (0 < *(int *)((int)param_1 + 0x28)) {
            do {
              if (*local_50 == -1) {
                iVar17 = (int)((30000 - (uint)*puVar22) * 0x100) / 30000;
                if (iVar17 < 0) {
                  iVar17 = 0;
                }
                if (0xff < iVar17) {
                  iVar17 = 0xff;
                }
                *local_50 = (char)iVar17;
              }
              local_50 = local_50 + 1;
              puVar22 = puVar22 + 1;
              iVar21 = iVar21 + 1;
            } while (iVar21 < *(int *)((int)param_1 + 0x28));
          }
          local_8c = local_8c + 1;
        } while (local_8c < *(int *)((int)param_1 + 0x2c));
      }
    }
    else if (*(int *)((int)param_1 + 0x124) == 2) {
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar5 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar6 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar7 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar8 = local_74;
      FUN_006e25d0(param_1,local_7c);
      ppppuVar9 = local_74;
      FUN_006e25d0(param_1,local_7c);
      iVar21 = ((int)local_74 - (int)ppppuVar9) / 10;
      puVar18 = *(undefined1 **)((int)param_1 + 0xc);
      puVar22 = *(ushort **)((int)param_1 + 0x14);
      local_8c = 0;
      if (0 < *(int *)((int)param_1 + 0x2c)) {
        do {
          iVar17 = 0;
          if (0 < *(int *)((int)param_1 + 0x28)) {
            do {
              uVar12 = (uint)*puVar22;
              if ((int)uVar12 < (int)local_74 - iVar21) {
                if ((int)ppppuVar9 - iVar21 <= (int)uVar12) {
                  uVar10 = *(undefined1 *)((int)param_1 + 0x439);
                  goto LAB_006de503;
                }
                if ((int)ppppuVar8 - iVar21 <= (int)uVar12) {
                  uVar10 = *(undefined1 *)((int)param_1 + 0x43a);
                  goto LAB_006de503;
                }
                if ((int)ppppuVar7 - iVar21 <= (int)uVar12) {
                  uVar10 = *(undefined1 *)((int)param_1 + 0x43b);
                  goto LAB_006de503;
                }
                if ((int)ppppuVar6 - iVar21 <= (int)uVar12) {
                  uVar10 = *(undefined1 *)((int)param_1 + 0x43c);
                  goto LAB_006de503;
                }
                if ((int)ppppuVar5 - iVar21 <= (int)uVar12) {
                  uVar10 = *(undefined1 *)((int)param_1 + 0x43d);
                  goto LAB_006de503;
                }
              }
              else {
                uVar10 = *(undefined1 *)((int)param_1 + 0x438);
LAB_006de503:
                *puVar18 = uVar10;
              }
              puVar18 = puVar18 + 1;
              puVar22 = puVar22 + 1;
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)((int)param_1 + 0x28));
          }
          local_8c = local_8c + 1;
        } while (local_8c < *(int *)((int)param_1 + 0x2c));
      }
    }
  }
  ExceptionList = local_14;
  return;
}

