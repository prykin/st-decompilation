
int __thiscall
FUN_006991c0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_134;
  uint local_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined2 local_128;
  undefined1 local_126;
  int local_124;
  undefined4 *local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 *local_110;
  undefined4 *local_10c;
  undefined1 *local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  int local_dc;
  int local_d4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 *local_b4;
  int local_b0;
  undefined4 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80 [9];
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_3c;
  int local_38;
  int local_30;
  int local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d7b8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe98;
  local_f0 = 0;
  local_118 = 0;
  local_8c = 0;
  ExceptionList = &local_14;
  local_d4 = param_1 * param_2;
  FUN_006ab060((undefined4 *)((int)this + 0x584b));
  puVar8 = (undefined4 *)FUN_006aac70(param_1 * param_2);
  *(undefined4 *)((int)this + 0x584b) = puVar8;
  uVar14 = *(uint *)((int)this + 0x582f);
  for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  thunk_FUN_006948e0(this,*(int *)((int)this + 0x5833));
  local_8 = 0;
  FUN_0072da40();
  iVar16 = local_d4;
  local_b4 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  FUN_0072da40();
  local_9c = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  FUN_0072da40();
  local_94 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  FUN_0072da40();
  local_8 = 0xffffffff;
  local_dc = 0;
  local_3c = &stack0xfffffe98;
  puVar6 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  puVar7 = &stack0xfffffe98;
  if (0 < iVar16) {
    do {
      if ((((0 < local_dc % param_1) && (0 < local_dc / param_1)) &&
          (local_dc % param_1 < *(int *)((int)this + 0x5833) + -1)) &&
         (local_dc / param_1 < *(int *)((int)this + 0x5837) + -1)) {
        iVar9 = thunk_FUN_00696400(this,local_dc,(int)local_80);
        local_140 = -1;
        bVar20 = false;
        iVar17 = 0;
        iVar16 = local_140;
        if (0 < param_7) {
          do {
            bVar20 = true;
            iVar16 = 0;
            if (0 < iVar9) {
              do {
                if (*(short *)(*(int *)((int)this + 0x584f) +
                              (local_80[iVar16] + *(int *)((int)this + 0x582f) * iVar17) * 2) < 1) {
                  bVar20 = false;
                  break;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar9);
            }
            iVar16 = iVar17;
          } while ((!bVar20) && (iVar17 = iVar17 + 1, iVar16 = local_140, iVar17 < param_7));
        }
        local_140 = iVar16;
        if ((bVar20) && (-1 < local_140)) {
          if (local_140 == 0) {
            *(undefined1 *)(*(int *)((int)this + 0x584b) + local_dc) = 1;
          }
          psVar1 = (short *)(local_9c + local_f0 * 10);
          *psVar1 = (short)(local_dc % param_1);
          psVar1[1] = (short)(local_dc / param_2);
          psVar1[2] = (short)local_140;
          iVar9 = 0;
          iVar16 = local_d4;
          if (0 < (int)param_5) {
            do {
              iVar17 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*(short *)(param_6 + iVar9 * 4)
                                    ,(int)*(short *)(param_6 + 2 + iVar9 * 4));
              if (iVar17 < iVar16) {
                iVar16 = iVar17;
              }
              *(int *)(local_94 + iVar9 * 4) = iVar17;
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)param_5);
          }
          iVar17 = 0;
          iVar9 = 0;
          if (0 < (int)param_5) {
            do {
              iVar17 = iVar17 + (*(int *)(local_94 + iVar9 * 4) - iVar16);
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)param_5);
          }
          *(int *)(local_9c + local_f0 * 10 + 6) = iVar17;
          local_f0 = local_f0 + 1;
        }
      }
      local_dc = local_dc + 1;
      puVar6 = local_3c;
      puVar7 = local_1c;
    } while (local_dc < local_d4);
  }
  local_1c = puVar7;
  local_3c = puVar6;
  if (local_f0 != 0) {
    local_dc = 0;
    if (0 < (int)param_5) {
      do {
        iVar9 = (int)*(short *)(param_6 + local_dc * 4);
        local_30 = iVar9 + -7;
        iVar16 = 0;
        if (local_30 < 0) {
          local_30 = 0;
        }
        iVar15 = (int)*(short *)(param_6 + 2 + local_dc * 4);
        iVar17 = iVar15 + -7;
        if (iVar17 < 0) {
          iVar17 = 0;
        }
        iVar9 = iVar9 + 8;
        if (*(int *)((int)this + 0x5833) < iVar9) {
          iVar9 = *(int *)((int)this + 0x5833);
        }
        iVar15 = iVar15 + 8;
        if (*(int *)((int)this + 0x5837) < iVar15) {
          iVar15 = *(int *)((int)this + 0x5837);
        }
        for (; iVar10 = local_30, iVar17 < iVar15; iVar17 = iVar17 + 1) {
          for (; iVar10 < iVar9; iVar10 = iVar10 + 1) {
            if (*(char *)(*(int *)((int)this + 0x5833) * iVar17 + *(int *)((int)this + 0x584b) +
                         iVar10) != '\0') {
              *(short *)(local_b4 + iVar16 * 10) = (short)iVar10;
              *(short *)((int)(local_b4 + iVar16 * 10) + 2) = (short)iVar17;
              iVar16 = iVar16 + 1;
            }
          }
        }
        if (iVar16 < 2) {
          ExceptionList = local_14;
          return local_118;
        }
        local_100 = 100;
        local_c0 = 0;
        local_48 = 0;
        local_58 = 0;
        local_11c = iVar9;
        local_50 = iVar15;
        do {
          uVar14 = FUN_0072e6c0();
          iVar17 = (int)uVar14 % iVar16;
          uVar14 = FUN_0072e6c0();
          iVar15 = (int)uVar14 % iVar16;
          iVar9 = FUN_006acf90((int)*(short *)(local_b4 + iVar17 * 10),
                               (int)*(short *)((int)(local_b4 + iVar17 * 10) + 2),
                               (int)*(short *)(local_b4 + iVar15 * 10),
                               (int)*(short *)((int)(local_b4 + iVar15 * 10) + 2));
          puVar6 = local_b4;
          if ((iVar17 != iVar15) && (2 < iVar9)) {
            if (0 < iVar9) {
              local_58 = iVar15;
              local_48 = iVar17;
            }
            local_c0 = 1;
          }
          local_100 = local_100 + -1;
        } while (0 < local_100);
        local_12c = 0;
        if (local_c0 == 0) {
          ExceptionList = local_14;
          return local_118;
        }
        local_134 = *(uint *)(local_b4 + local_48 * 10);
        local_130 = 0;
        uStack_12a = 0xde;
        local_128 = 0;
        local_126 = 0;
        FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&local_134);
        local_8c = local_8c + 1;
        local_134 = *(uint *)(puVar6 + local_58 * 10);
        local_130 = local_130 & 0xffff0000;
        uStack_12a = 0xdd;
        local_128 = 0;
        local_126 = 0;
        FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&local_134);
        local_118 = local_118 + 2;
        local_f4 = 0;
        iVar16 = 0;
        do {
          iVar9 = local_48;
          if ((local_f4 != 0) && (iVar9 = iVar16, local_f4 == 1)) {
            iVar9 = local_58;
          }
          local_11c = (int)*(short *)(local_b4 + iVar9 * 10);
          local_30 = local_11c + -7;
          if (local_30 < 0) {
            local_30 = 0;
          }
          local_50 = (int)*(short *)((int)(local_b4 + iVar9 * 10) + 2);
          iVar16 = local_50 + -7;
          if (iVar16 < 0) {
            iVar16 = 0;
          }
          local_11c = local_11c + 8;
          if (*(int *)((int)this + 0x5833) < local_11c) {
            local_11c = *(int *)((int)this + 0x5833);
          }
          local_50 = local_50 + 8;
          if (*(int *)((int)this + 0x5837) < local_50) {
            local_50 = *(int *)((int)this + 0x5837);
          }
          for (; iVar17 = local_30, iVar16 < local_50; iVar16 = iVar16 + 1) {
            for (; iVar17 < local_11c; iVar17 = iVar17 + 1) {
              *(undefined1 *)
               (*(int *)((int)this + 0x5833) * iVar16 + *(int *)((int)this + 0x584b) + iVar17) = 0;
              uVar14 = iVar17 - *(short *)(local_b4 + iVar9 * 10);
              uVar13 = (int)uVar14 >> 0x1f;
              if (((int)((uVar14 ^ uVar13) - uVar13) < 3) ||
                 (uVar14 = iVar16 - *(short *)((int)(local_b4 + iVar9 * 10) + 2),
                 uVar13 = (int)uVar14 >> 0x1f, (int)((uVar14 ^ uVar13) - uVar13) < 3)) {
                *(undefined1 *)
                 (*(int *)((int)this + 0x5833) * iVar16 + *(int *)((int)this + 0x584b) + iVar17) = 0
                ;
              }
            }
          }
          local_f4 = local_f4 + 1;
          iVar16 = iVar9;
        } while (local_f4 < 2);
        local_dc = local_dc + 1;
      } while (local_dc < (int)param_5);
    }
    *(int *)(param_8 + 8) = local_118;
    if (0 < param_4) {
      local_8 = 1;
      FUN_0072da40();
      local_a8 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_24 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_10c = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_e4 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_110 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_8 = 0xffffffff;
      local_dc = 0;
      local_108 = &stack0xfffffe98;
      puVar6 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      puVar7 = &stack0xfffffe98;
      if (0 < (int)param_5) {
        do {
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar16 = local_f4;
              iVar9 = FUN_006aced8((int)*(short *)(param_6 + local_dc * 4),
                                   (int)*(short *)(param_6 + 2 + local_dc * 4),
                                   (int)*(short *)(param_6 + local_f4 * 4),
                                   (int)*(short *)(param_6 + 2 + local_f4 * 4));
              iVar17 = local_dc * param_5;
              *(int *)(local_a8 + (iVar17 + iVar16) * 4) = iVar9;
              local_a4 = 0;
              local_104 = 0;
              if (0 < iVar16) {
                do {
                  iVar15 = iVar16;
                  if (iVar9 < *(int *)(local_a8 +
                                      (*(int *)(local_24 + (iVar17 + local_104) * 4) + iVar17) * 4))
                  {
                    while (iVar15 = iVar15 + -1, local_104 <= iVar15) {
                      *(undefined4 *)(local_24 + (iVar17 + iVar15) * 4 + 4) =
                           *(undefined4 *)(local_24 + (iVar17 + iVar15) * 4);
                      iVar16 = local_f4;
                    }
                    *(int *)(local_24 + (iVar17 + local_104) * 4) = iVar16;
                    local_a4 = 1;
                  }
                  if (local_a4 != 0) goto LAB_0069999c;
                  local_104 = local_104 + 1;
                } while (local_104 < iVar16);
              }
              if (local_a4 == 0) {
                *(int *)(local_24 + (iVar17 + iVar16) * 4) = iVar16;
              }
LAB_0069999c:
              local_f4 = iVar16 + 1;
              local_38 = iVar9;
            } while (local_f4 < (int)param_5);
          }
          local_dc = local_dc + 1;
          puVar6 = local_108;
          puVar7 = local_1c;
        } while (local_dc < (int)param_5);
      }
      local_1c = puVar7;
      local_108 = puVar6;
      puVar8 = local_10c;
      for (iVar16 = (param_5 & 0x1fffffff) << 1; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = local_e4;
      for (iVar16 = (param_5 & 0x1fffffff) << 1; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_114 = 0;
      local_dc = 0;
      if (0 < (int)param_5) {
        do {
          local_88 = 0;
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar16 = *(int *)(local_24 + (local_dc * param_5 + local_f4) * 4);
              local_88 = iVar16;
              if (((iVar16 != local_dc) && ((int)local_10c[iVar16] < 0)) &&
                 (local_10c[iVar16 + param_5] != local_dc)) {
                local_10c[iVar16] = 1;
                local_10c[local_dc + param_5] = iVar16;
                break;
              }
              local_f4 = local_f4 + 1;
            } while (local_f4 < (int)param_5);
          }
          piVar2 = (int *)(local_a8 + (local_dc * param_5 + local_88) * 4);
          if (((*piVar2 != 0) && (-1 < local_88)) && (local_88 < (int)param_5)) {
            iVar16 = (int)*(short *)(param_6 + local_dc * 4);
            local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar16) * 4) / 9 + iVar16;
            psVar1 = (short *)(param_6 + 2 + local_88 * 4);
            psVar3 = (short *)(param_6 + 2 + local_dc * 4);
            local_124 = (((int)*psVar1 - (int)*psVar3) * 4) / 9 + (int)*psVar3;
            iVar16 = FUN_006aced8(local_e0,local_124,iVar16,(int)*psVar3);
            if (0x1e < iVar16) {
              local_e0 = (int)*(short *)(param_6 + local_dc * 4);
              iVar16 = *piVar2;
              local_e0 = ((*(short *)(param_6 + local_88 * 4) - local_e0) * 0x1e) / iVar16 +
                         local_e0;
              local_124 = (((int)*psVar1 - (int)*psVar3) * 0x1e) / iVar16 + (int)*psVar3;
            }
            iVar16 = 0;
            local_144 = 0;
            local_100 = 3;
            local_44 = 5;
            do {
              local_f4 = 0;
              if (0 < local_f0) {
                do {
                  psVar1 = (short *)(local_9c + local_f4 * 10);
                  if ((*(int *)(psVar1 + 3) != 0) &&
                     (iVar9 = FUN_006aced8((int)*psVar1,(int)psVar1[1],local_e0,local_124),
                     iVar9 <= local_44)) {
                    iVar9 = iVar16 * 10;
                    *(undefined4 *)(&stack0xfffffe98 + iVar9) = *(undefined4 *)psVar1;
                    *(undefined4 *)(&stack0xfffffe9c + iVar9) = *(undefined4 *)(psVar1 + 2);
                    *(short *)(&stack0xfffffea0 + iVar9) = psVar1[4];
                    *(int *)(local_108 + iVar16 * 4) = local_f4;
                    iVar16 = iVar16 + 1;
                    local_144 = iVar16;
                    if (iVar16 == 0x7b) break;
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_f0);
              }
              if (iVar16 < 0xb) {
                local_100 = local_100 + -1;
                local_44 = local_44 + 2;
              }
              else {
                local_100 = 0;
              }
            } while (0 < local_100);
            if (0 < iVar16) {
              local_100 = 0x46;
              local_b0 = 0;
              local_48 = 0;
              local_58 = 0;
              do {
                uVar14 = FUN_0072e6c0();
                local_4c = (int)uVar14 % local_144;
                uVar13 = FUN_0072e6c0();
                local_5c = (int)uVar13 % local_144;
                iVar17 = ((int)uVar13 % local_144) * 10;
                iVar9 = ((int)uVar14 % local_144) * 10;
                iVar16 = FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar9),
                                      (int)*(short *)(&stack0xfffffe9a + iVar9),
                                      (int)*(short *)(&stack0xfffffe98 + iVar17),
                                      (int)*(short *)(&stack0xfffffe9a + iVar17));
                if ((local_4c != local_5c) && (iVar15 = 2, 1 < iVar16)) {
                  local_ec = 2;
                  local_f4 = 0;
                  if (0 < local_114) {
                    do {
                      local_ec = FUN_006acf90((int)*(short *)(local_9c + local_e4[local_f4] * 10),
                                              (int)*(short *)((int)(local_9c +
                                                                   local_e4[local_f4] * 10) + 2),
                                              (int)*(short *)(&stack0xfffffe98 + iVar9),
                                              (int)*(short *)(local_9c + iVar9 + 2));
                      iVar15 = FUN_006acf90((int)*(short *)(local_9c + local_e4[local_f4] * 10),
                                            (int)*(short *)((int)(local_9c + local_e4[local_f4] * 10
                                                                 ) + 2),
                                            (int)*(short *)(&stack0xfffffe98 + iVar17),
                                            (int)*(short *)(local_9c + iVar17 + 2));
                      if (local_ec < 2) goto LAB_00699f26;
                    } while ((1 < iVar15) && (local_f4 = local_f4 + 1, local_f4 < local_114));
                  }
                  if ((1 < local_ec) && (1 < iVar15)) {
                    local_ec = (*(int *)(local_a8 + (local_dc * param_5 + local_88) * 4) * iVar15) /
                               2;
                    psVar1 = (short *)(param_6 + 2 + local_88 * 4);
                    psVar3 = (short *)(param_6 + 2 + local_dc * 4);
                    iVar15 = FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9),
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar10 = FUN_006aced8((int)*(short *)(param_6 + local_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar11 = FUN_006aced8((int)*(short *)(param_6 + local_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9));
                    iVar16 = local_dc;
                    iVar17 = FUN_006aced8((int)*(short *)(param_6 + local_dc * 4),(int)*psVar3,
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar17 = iVar17 + local_ec;
                    iVar16 = FUN_006aced8((int)*(short *)(param_6 + iVar16 * 4),(int)*psVar3,
                                          (int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9));
                    iVar16 = iVar16 + iVar17 + iVar15 + iVar10 + iVar11;
                    if (local_b0 < iVar16) {
                      local_48 = local_4c;
                      local_58 = local_5c;
                      local_b0 = iVar16;
                    }
                  }
                }
LAB_00699f26:
                iVar16 = local_48;
                local_100 = local_100 + -1;
              } while (0 < local_100);
              if (local_48 != local_58) {
                local_134 = 0;
                local_130 = 0;
                local_12c = 0;
                uStack_12a = 0;
                local_128 = 0;
                local_126 = 0;
                iVar9 = local_48 * 10;
                uVar4 = *(ushort *)(&stack0xfffffe98 + iVar9);
                local_134 = (uint)uVar4;
                local_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar9),uVar4);
                local_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar9);
                *(undefined1 *)
                 ((int)*(short *)(&stack0xfffffe9a + iVar9) * *(int *)((int)this + 0x5833) +
                  (int)(short)uVar4 + *(int *)((int)this + 0x584b)) = 0;
                uStack_12a = 0xdd;
                local_128 = 0;
                local_126 = 1;
                FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&local_134);
                iVar9 = local_58;
                local_118 = local_118 + 1;
                iVar16 = *(int *)(local_108 + iVar16 * 4);
                local_e4[local_114] = iVar16;
                *(undefined4 *)(local_9c + iVar16 * 10 + 6) = 0;
                local_114 = local_114 + 1;
                if (1 < param_4) {
                  local_134 = 0;
                  local_130 = 0;
                  local_12c = 0;
                  uStack_12a = 0;
                  local_128 = 0;
                  local_126 = 0;
                  iVar16 = local_58 * 10;
                  uVar4 = *(ushort *)(&stack0xfffffe98 + iVar16);
                  local_134 = (uint)uVar4;
                  local_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar16),uVar4);
                  *(undefined1 *)
                   ((int)*(short *)(&stack0xfffffe9a + iVar16) * *(int *)((int)this + 0x5833) +
                    (int)(short)uVar4 + *(int *)((int)this + 0x584b)) = 0;
                  local_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar16);
                  uStack_12a = 0xde;
                  local_128 = 0;
                  local_126 = 1;
                  FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&local_134);
                  iVar16 = *(int *)(local_108 + iVar9 * 4);
                  local_e4[local_114] = iVar16;
                  *(undefined4 *)(local_9c + iVar16 * 10 + 6) = 0;
                  local_114 = local_114 + 1;
                  local_118 = local_118 + 1;
                  local_8c = local_8c + 1;
                }
              }
            }
          }
          local_dc = local_dc + 1;
        } while (local_dc < (int)param_5);
      }
    }
    local_bc = param_3 - local_118;
    if (0 < local_bc) {
      local_8 = 2;
      FUN_0072da40();
      local_120 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_a0 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_84 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      FUN_0072da40();
      local_8 = 0xffffffff;
      iVar16 = 0;
      local_b8 = 0;
      uVar14 = 0;
      local_20 = (undefined4 *)&stack0xfffffe98;
      puVar8 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      puVar6 = &stack0xfffffe98;
      if (0 < local_f0) {
        do {
          iVar9 = thunk_FUN_0069ac20((int)*(short *)(local_9c + uVar14 * 10),
                                     (int)*(short *)((int)(local_9c + uVar14 * 10) + 2),0xf,
                                     *(int *)(param_8 + 0x1c));
          if (0xf < iVar9) {
            *(uint *)(&stack0xfffffe98 + iVar16 * 4) = iVar9 << 0x10 | uVar14 & 0xffff;
            iVar16 = iVar16 + 1;
            local_b8 = iVar16;
          }
          uVar14 = uVar14 + 1;
          puVar8 = local_20;
          puVar6 = local_1c;
        } while ((int)uVar14 < local_f0);
      }
      local_1c = puVar6;
      local_20 = puVar8;
      if (0 < iVar16) {
        local_100 = 0x82;
        uVar14 = 0;
        local_b0 = 0;
        iVar16 = local_b8;
        puVar8 = local_120;
        puVar18 = local_a0;
        do {
          for (; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar18 = puVar18 + 1;
          }
          local_fc = 0;
          local_28 = 0;
          puVar8 = local_84;
          for (iVar16 = local_bc; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          local_dc = 0;
          do {
            uVar13 = FUN_0072e6c0();
            iVar16 = (int)uVar13 % local_b8;
            uVar13 = local_a0[iVar16];
            if (uVar13 >> 0x10 != 0) {
              local_84[local_fc] = iVar16;
              local_28 = local_28 + (uVar13 >> 0x10);
              local_fc = local_fc + 1;
              if (local_bc <= (int)local_fc) break;
              uVar4 = *(ushort *)(local_a0 + iVar16);
              if (((int)(uint)uVar4 < local_f0) && (local_f4 = 0, 0 < local_b8)) {
                do {
                  uVar5 = *(ushort *)(local_a0 + local_f4);
                  if (((int)(uint)uVar5 < local_f0) &&
                     (iVar16 = FUN_006acf90((int)*(short *)(local_9c + (uint)uVar5 * 10),
                                            (int)*(short *)((int)(local_9c + (uint)uVar5 * 10) + 2),
                                            (int)*(short *)(local_9c + (uint)uVar4 * 10),
                                            (int)*(short *)((int)(local_9c + (uint)uVar4 * 10) + 2))
                     , iVar16 < 0xf)) {
                    local_a0[local_f4] = (uint)uVar5;
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_b8);
              }
            }
            local_dc = local_dc + 1;
          } while (local_dc < 0x82);
          uVar13 = local_fc;
          puVar8 = local_84;
          puVar18 = local_20;
          if (local_b0 < local_28) {
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar18 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar18 = puVar18 + 1;
            }
            local_b0 = local_28;
            uVar14 = local_fc;
          }
          local_100 = local_100 + -1;
          iVar16 = local_b8;
          puVar8 = local_120;
          puVar18 = local_a0;
        } while (0 < local_100);
        if (uVar14 != 0) {
          local_8 = 3;
          FUN_0072da40();
          local_ac = (undefined4 *)&stack0xfffffe98;
          local_1c = &stack0xfffffe98;
          FUN_0072da40();
          local_1c = &stack0xfffffe98;
          FUN_0072da40();
          local_8 = 0xffffffff;
          local_dc = 0;
          local_e8 = &stack0xfffffe98;
          local_1c = &stack0xfffffe98;
          puVar6 = &stack0xfffffe98;
          iVar16 = local_dc;
          puVar7 = &stack0xfffffe98;
          if (0 < (int)uVar14) {
            do {
              for (; local_1c = puVar7, local_e8 = puVar6, iVar16 < (int)uVar14; iVar16 = iVar16 + 1
                  ) {
                uVar12 = FUN_006aced8((int)*(short *)(local_9c +
                                                     (uint)*(ushort *)
                                                            (local_120 + local_20[local_dc]) * 10),
                                      (int)*(short *)((int)(local_9c +
                                                           (uint)*(ushort *)
                                                                  (local_120 + local_20[local_dc]) *
                                                           10) + 2),
                                      (int)*(short *)(local_9c +
                                                     (uint)*(ushort *)(local_120 + local_20[iVar16])
                                                     * 10),
                                      (int)*(short *)((int)(local_9c +
                                                           (uint)*(ushort *)
                                                                  (local_120 + local_20[iVar16]) *
                                                           10) + 2));
                *(undefined4 *)(local_e8 + (uVar14 * local_dc + iVar16) * 4) = uVar12;
                puVar6 = local_e8;
                puVar7 = local_1c;
              }
              local_dc = local_dc + 1;
              puVar6 = local_e8;
              iVar16 = local_dc;
              puVar7 = local_1c;
            } while (local_dc < (int)uVar14);
          }
          local_90 = (int)uVar14 / 2;
          uVar13 = uVar14 & 0x80000001;
          bVar20 = uVar13 == 0;
          if ((int)uVar13 < 0) {
            bVar20 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_13c = local_90;
          if (!bVar20) {
            local_13c = local_90 + 1;
          }
          local_100 = 100;
          local_b0 = 0;
          uVar13 = uVar14;
          puVar18 = local_ac;
          puVar8 = local_ac;
          do {
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            iVar16 = 0;
            local_38 = 0;
            if (0 < local_13c) {
              do {
                uVar13 = FUN_0072e6c0();
                iVar9 = (int)uVar13 % (int)uVar14;
                if (puVar8[iVar9] == 0) {
                  puVar8[iVar9] = 0xdd;
                }
                else {
                  iVar17 = 0;
                  if (0 < (int)uVar14) {
                    do {
                      iVar15 = iVar9 + iVar17;
                      if ((int)uVar14 <= iVar15) {
                        iVar15 = iVar15 - uVar14;
                      }
                      if (puVar8[iVar15] == 0) {
                        puVar8[iVar15] = 0xdd;
                        break;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < (int)uVar14);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < local_13c);
            }
            iVar16 = 0;
            if (0 < local_90) {
              do {
                uVar13 = FUN_0072e6c0();
                iVar9 = (int)uVar13 % (int)uVar14;
                if (puVar8[iVar9] == 0) {
                  puVar8[iVar9] = 0xde;
                }
                else {
                  iVar17 = 0;
                  if (0 < (int)uVar14) {
                    do {
                      iVar15 = iVar9 + iVar17;
                      if ((int)uVar14 <= iVar15) {
                        iVar15 = iVar15 - uVar14;
                      }
                      if (puVar8[iVar15] == 0) {
                        puVar8[iVar15] = 0xde;
                        break;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < (int)uVar14);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < local_90);
            }
            iVar16 = 0;
            iVar9 = iVar16;
            if (0 < (int)uVar14) {
              do {
                for (; iVar16 < (int)uVar14; iVar16 = iVar16 + 1) {
                  if (puVar8[iVar16] == puVar8[iVar9]) {
                    local_38 = local_38 + *(int *)(local_e8 + (uVar14 * iVar9 + iVar16) * 4);
                    puVar8 = local_ac;
                  }
                }
                iVar16 = iVar9 + 1;
                iVar9 = iVar16;
              } while (iVar16 < (int)uVar14);
            }
            puVar18 = puVar8;
            if (local_b0 <= local_38) {
              local_b0 = local_38;
              puVar8 = local_ac;
              puVar19 = (undefined4 *)&stack0xfffffe98;
              for (uVar13 = uVar14; puVar18 = local_ac, uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar19 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            local_100 = local_100 + -1;
            uVar13 = uVar14;
            puVar8 = puVar18;
          } while (-1 < local_100);
          iVar16 = 0;
          if (0 < (int)uVar14) {
            do {
              uStack_12a = (undefined2)*(undefined4 *)(&stack0xfffffe98 + iVar16 * 4);
              local_128 = (undefined2)((uint)*(undefined4 *)(&stack0xfffffe98 + iVar16 * 4) >> 0x10)
              ;
              local_134 = *(uint *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar16]) * 10)
              ;
              local_130 = CONCAT22(local_130._2_2_,
                                   *(undefined2 *)
                                    ((int)(local_9c +
                                          (uint)*(ushort *)(local_120 + local_20[iVar16]) * 10) + 4)
                                  );
              local_126 = 2;
              FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&local_134);
              local_118 = local_118 + 1;
              iVar16 = iVar16 + 1;
            } while (iVar16 < (int)uVar14);
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_118;
}

