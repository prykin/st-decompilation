
undefined4 __cdecl
FUN_0057a2c0(int *param_1,uint param_2,int *param_3,int param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  uint uVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined2 uVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  int *this;
  bool bVar24;
  longlong lVar25;
  int *local_120;
  int local_fc;
  undefined1 *local_f0;
  short local_e8 [6];
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 *local_cc;
  int local_c8;
  int local_c4;
  int local_b8;
  short local_b4 [6];
  int local_a8;
  int local_a0;
  int local_98;
  int local_94;
  int local_8c;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_40;
  short local_38 [4];
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079b3a8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec8;
  local_f0 = (undefined1 *)0x0;
  ExceptionList = &local_14;
  iVar10 = Library::DKW::LIB::FUN_006aac70(param_2 * 8);
  *param_3 = iVar10;
  if (((iVar10 == 0) || (param_2 == 0)) || ((param_2 != 5 && (param_2 != 7)))) {
    iVar10 = ReportDebugMessage(s_E____titans_Igor_to_etorp_cpp_007caf5c,0x4c,0,0,&DAT_007a4ccc,
                                s_ConusExplosion_Bad_parameters_or_007caf24);
    if (iVar10 != 0) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    if (*param_3 != 0) {
      FUN_006ab060(param_3);
    }
  }
  else {
    sVar13 = *(short *)((int)param_1 + 0x3a);
    iVar10 = param_1[0xd];
    iVar22 = param_1[0xf];
    sVar8 = *(short *)((int)param_1 + 0x36);
    local_40 = (int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe];
    if ((param_4 == 0) || (param_5 == 0)) {
LAB_0057ac02:
      iVar10 = FUN_006acf0d((int)(short)param_1[0xd],(int)*(short *)((int)param_1 + 0x36),
                            (int)(short)param_1[0xe],(int)*(short *)((int)param_1 + 0x3a),
                            (int)(short)param_1[0xf],(int)*(short *)((int)param_1 + 0x3e));
      iVar22 = FUN_006aced8((int)(short)param_1[0xd],(int)*(short *)((int)param_1 + 0x36),
                            (int)*(short *)((int)param_1 + 0x3a),(int)(short)param_1[0xf]);
      local_a0 = (((int)(short)param_1[0xf] - (int)*(short *)((int)param_1 + 0x36)) * 10000) /
                 iVar10;
      iVar15 = (((int)*(short *)((int)param_1 + 0x3a) - (int)(short)param_1[0xd]) * 10000) / iVar10;
      iVar19 = (((int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe]) * 10000) / iVar10;
      local_50 = (iVar22 * 10000) / iVar10;
      lVar25 = Library::MSVCRT::__ftol();
      local_78 = (int)lVar25;
      iVar10 = param_2 - 1;
      if (-1 < iVar10) {
        local_120 = (int *)(local_f0 + iVar10 * 4);
        iVar22 = iVar10 * 0xc;
        do {
          if ((local_f0 == (undefined1 *)0x0) || (*local_120 == 0)) {
            uVar14 = param_1[7] * 0x41c64e6d + 0x3039;
            param_1[7] = uVar14;
            local_78 = local_78 +
                       ((uVar14 >> 0x10) % (((int)((local_78 >> 0x1f & 7U) + local_78) >> 3) + 1U) -
                       ((int)(local_78 + (local_78 >> 0x1f & 0xfU)) >> 4));
            if (param_2 == 7) {
              iVar16 = *(int *)(iVar22 + 0x7cae80);
              iVar11 = (int)((ulonglong)
                             ((longlong)(local_78 * *(int *)(iVar22 + 0x7cae7c)) * 0x68db8bad) >>
                            0x20);
            }
            else {
              iVar16 = *(int *)(iVar22 + 0x7caed4);
              iVar11 = (int)((ulonglong)
                             ((longlong)(*(int *)(iVar22 + 0x7caed0) * local_78) * 0x68db8bad) >>
                            0x20);
            }
            local_d4 = (iVar16 * local_78) / 10000;
            local_6c = (iVar11 >> 0xc) - (iVar11 >> 0x1f);
            iVar11 = (local_50 * param_5) / 10000 - (iVar19 * local_d4) / 10000;
            iVar20 = local_6c * iVar15;
            iVar21 = iVar11 * local_a0;
            sVar13 = *(short *)((int)param_1 + 0x43);
            local_4c = ((iVar19 * param_5) / 10000 - (local_50 * local_d4) / 10000) +
                       (int)*(short *)((int)param_1 + 0x45);
            iVar11 = iVar11 * iVar15;
            iVar16 = local_6c * local_a0;
            *(short *)(*param_3 + iVar10 * 8) =
                 ((((short)(iVar11 / 10000) + (short)(iVar11 >> 0x1f)) -
                  (short)((longlong)iVar11 * 0x68db8bad >> 0x3f)) -
                 (((short)(iVar16 / 10000) + (short)(iVar16 >> 0x1f)) -
                 (short)((longlong)iVar16 * 0x68db8bad >> 0x3f))) + *(short *)((int)param_1 + 0x41);
            *(short *)(*param_3 + 2 + iVar10 * 8) =
                 (((short)(iVar21 / 10000) + (short)(iVar21 >> 0x1f) +
                  (((short)(iVar20 / 10000) + (short)(iVar20 >> 0x1f)) -
                  (short)((longlong)iVar20 * 0x68db8bad >> 0x3f))) -
                 (short)((longlong)iVar21 * 0x68db8bad >> 0x3f)) + sVar13;
            iVar16 = *param_3;
            *(undefined2 *)(iVar16 + 4 + iVar10 * 8) = (undefined2)local_4c;
            puVar2 = (undefined2 *)(*param_3 + iVar10 * 8);
            uVar17 = (undefined2)((uint)iVar16 >> 0x10);
            uVar9 = (undefined2)((uint)puVar2 >> 0x10);
            local_d0 = iVar10;
            uVar9 = (**(code **)(*param_1 + 0x10))
                              (CONCAT22(uVar17,*(undefined2 *)((int)param_1 + 0x41)),
                               CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x43)),
                               CONCAT22(uVar17,*(undefined2 *)((int)param_1 + 0x45)),
                               CONCAT22(uVar9,*puVar2),CONCAT22(uVar17,puVar2[1]),
                               CONCAT22(uVar17,puVar2[2]));
            *(undefined2 *)(*param_3 + 6 + iVar10 * 8) = uVar9;
          }
          iVar10 = iVar10 + -1;
          local_120 = local_120 + -1;
          iVar22 = iVar22 + -0xc;
        } while (-1 < iVar10);
      }
      ExceptionList = local_14;
      return 1;
    }
    lVar25 = Library::MSVCRT::__ftol();
    local_c4 = (int)lVar25;
    local_dc = FUN_006acf0d((int)(short)param_1[0xd],(int)*(short *)((int)param_1 + 0x36),
                            (int)(short)param_1[0xe],(int)*(short *)((int)param_1 + 0x3a),
                            (int)(short)param_1[0xf],(int)*(short *)((int)param_1 + 0x3e));
    if (local_dc != 0) {
      local_8c = (((int)sVar13 - (int)(short)iVar10) * 10000) / local_dc;
      local_98 = (((int)(short)iVar22 - (int)sVar8) * 10000) / local_dc;
      local_a8 = (local_40 * 10000) / local_dc;
      sVar13 = *(short *)((int)param_1 + 0x41);
      iVar22 = (int)sVar13;
      sVar8 = *(short *)((int)param_1 + 0x43);
      iVar10 = (int)sVar8;
      local_40 = (int)*(short *)((int)param_1 + 0x45);
      local_68 = (local_8c * 0x324) / 10000 + iVar22;
      local_64 = (local_98 * 0x324) / 10000 + iVar10;
      local_b8 = FUN_006aced8(iVar22,iVar10,local_68,local_64);
      if (local_b8 != 0) {
        local_94 = ((local_64 - iVar10) * 10000) / local_b8;
        local_b8 = ((iVar22 - local_68) * 10000) / local_b8;
        if (((int)param_2 < 0) || (10 < (int)param_2)) {
          param_2 = 7;
        }
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_1c = &stack0xfffffec8;
        puVar23 = (undefined4 *)&stack0xfffffec8;
        for (uVar14 = param_2 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
        }
        for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined1 *)puVar23 = 0;
          puVar23 = (undefined4 *)((int)puVar23 + 1);
        }
        local_8 = 0xffffffff;
        if (iVar22 < 0) {
          local_38[0] = sVar13 / 0xc9 + -1;
        }
        else {
          local_38[0] = (sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                        (short)((longlong)iVar22 * 0x28c1979 >> 0x3f);
        }
        if (iVar10 < 0) {
          local_38[1] = sVar8 / 0xc9 + -1;
        }
        else {
          local_38[1] = (sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                        (short)((longlong)iVar10 * 0x28c1979 >> 0x3f);
        }
        if (local_40 < 0) {
          local_38[2] = (short)(local_40 / 200) + -1;
        }
        else {
          local_38[2] = ((short)(local_40 / 200) + (short)(local_40 >> 0x1f)) -
                        (short)((longlong)local_40 * 0x51eb851f >> 0x3f);
        }
        iVar15 = ((param_5 + 0xc9) * local_94) / 10000;
        iVar19 = local_68 + iVar15;
        if (iVar19 < 0) {
          local_30 = (short)(iVar19 / 0xc9) + -1;
        }
        else {
          local_30 = ((short)(iVar19 / 0xc9) + (short)(iVar19 >> 0x1f)) -
                     (short)((longlong)iVar19 * 0x28c1979 >> 0x3f);
        }
        iVar19 = ((param_5 + 0xc9) * local_b8) / 10000;
        iVar16 = local_64 + iVar19;
        if (iVar16 < 0) {
          local_2e = (short)(iVar16 / 0xc9) + -1;
        }
        else {
          local_2e = ((short)(iVar16 / 0xc9) + (short)(iVar16 >> 0x1f)) -
                     (short)((longlong)iVar16 * 0x28c1979 >> 0x3f);
        }
        local_2c = 0;
        iVar15 = local_68 - iVar15;
        if (iVar15 < 0) {
          local_28 = (short)(iVar15 / 0xc9) + -1;
        }
        else {
          local_28 = ((short)(iVar15 / 0xc9) + (short)(iVar15 >> 0x1f)) -
                     (short)((longlong)iVar15 * 0x28c1979 >> 0x3f);
        }
        iVar19 = local_64 - iVar19;
        if (iVar19 < 0) {
          local_26 = (short)(iVar19 / 0xc9) + -1;
        }
        else {
          local_26 = ((short)(iVar19 / 0xc9) + (short)(iVar19 >> 0x1f)) -
                     (short)((longlong)iVar19 * 0x28c1979 >> 0x3f);
        }
        local_24 = 5;
        if (((((-1 < local_38[0]) && (local_38[0] < DAT_007fb240)) && (-1 < local_38[1])) &&
            ((local_38[1] < DAT_007fb242 && (-1 < local_38[2])))) && (local_38[2] < 5)) {
          iVar15 = (int)local_38[0];
          local_5c = iVar15;
          local_58 = (int)local_38[1];
          local_84 = (int)local_38[1];
          iVar19 = 1;
          local_fc = iVar15;
          do {
            iVar16 = (int)local_38[iVar19 * 4];
            if (iVar16 < iVar15) {
              local_5c = iVar16;
              iVar15 = iVar16;
            }
            iVar11 = (int)local_38[iVar19 * 4 + 1];
            if (iVar11 < local_58) {
              local_58 = iVar11;
            }
            if (local_fc < iVar16) {
              local_fc = iVar16;
            }
            if (local_84 < iVar11) {
              local_84 = iVar11;
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < 3);
          if (iVar15 < 0) {
            iVar15 = 0;
            local_5c = 0;
          }
          if (local_58 < 0) {
            local_58 = 0;
          }
          iVar19 = local_fc + 1;
          if ((int)DAT_007fb240 < local_fc + 1) {
            iVar19 = (int)DAT_007fb240;
          }
          iVar16 = local_84 + 1;
          if ((int)DAT_007fb242 < local_84 + 1) {
            iVar16 = (int)DAT_007fb242;
          }
          local_8 = 1;
          local_84 = iVar16;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_d8 = 0;
          local_74 = 0;
          local_cc = &stack0xfffffec8;
          local_1c = &stack0xfffffec8;
          do {
            local_80 = local_58;
            iVar11 = iVar15;
            iVar20 = local_74;
            iVar21 = local_5c;
            if (local_58 < iVar16) {
              do {
                while (iVar15 = local_5c, local_5c = iVar15, iVar21 < iVar19) {
                  sVar13 = (short)iVar11;
                  if (((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
                     ((sVar8 = (short)local_80, sVar8 < 0 ||
                      (((DAT_007fb242 <= sVar8 || (sVar18 = (short)local_74, sVar18 < 0)) ||
                       (DAT_007fb244 <= sVar18)))))) {
                    this = (int *)0x0;
                  }
                  else {
                    this = *(int **)(DAT_007fb248 +
                                    ((int)sVar18 * (int)DAT_007fb246 +
                                     (int)sVar8 * (int)DAT_007fb240 + (int)sVar13) * 8);
                  }
                  local_74 = iVar20;
                  if (((this != (int *)0x0) && (iVar15 = (**(code **)(*this + 0xf0))(), iVar15 != 0)
                      ) && (((uint)this[9] < 8 &&
                            ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[this[9] * 0x51] < 8))))))
                  {
                    bVar3 = *(byte *)(this + 9);
                    bVar4 = *(byte *)(param_1 + 9);
                    if (DAT_00808a8f == '\0') {
                      if (bVar3 == bVar4) {
LAB_0057a96b:
                        iVar15 = 0;
                      }
                      else {
                        uVar14 = (uint)bVar3;
                        uVar7 = (uint)bVar4;
                        cVar5 = *(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar7);
                        if ((cVar5 == '\0') &&
                           (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar14) == '\0')) {
                          iVar15 = -2;
                        }
                        else if ((cVar5 == '\x01') &&
                                (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar14) == '\0')) {
                          iVar15 = -1;
                        }
                        else if ((cVar5 == '\0') &&
                                (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar14) == '\x01')) {
                          iVar15 = 1;
                        }
                        else {
                          if ((cVar5 != '\x01') ||
                             (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar14) != '\x01'))
                          goto LAB_0057a96b;
                          iVar15 = 2;
                        }
                      }
                      bVar24 = iVar15 < 0;
                    }
                    else {
                      bVar24 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                               (&DAT_008087ea)[(uint)bVar3 * 0x51];
                    }
                    if ((bVar24) && (iVar15 = (**(code **)(*this + 0xf8))(), iVar15 != 0)) {
                      thunk_FUN_00416270(this,local_b4,local_e8,local_20);
                      iVar15 = thunk_FUN_0057bc50(iVar22,iVar10,local_40,local_8c,local_98,local_a8,
                                                  (int)local_b4[0],(int)local_e8[0],(int)local_20[0]
                                                 );
                      if ((iVar15 < 0) ||
                         (iVar16 = FUN_006acf0d((iVar15 * local_8c) / 10000 + iVar22,
                                                (iVar15 * local_98) / 10000 + iVar10,
                                                (iVar15 * local_a8) / 10000 + local_40,
                                                (int)local_b4[0],(int)local_e8[0],(int)local_20[0]),
                         iVar16 * 0x324 <= iVar15 * local_c4 * 2)) {
                        piVar1 = (int *)(local_cc + local_d8 * 0x2c);
                        *piVar1 = this[9];
                        *(int *)((int)piVar1 + 0x26) = this[6];
                        *(undefined2 *)((int)piVar1 + 0x2a) = *(undefined2 *)((int)this + 0x32);
                        *(int **)((int)piVar1 + 0x1a) = this;
                        *(short *)(piVar1 + 5) = sVar13;
                        *(undefined2 *)((int)piVar1 + 0x16) = (undefined2)local_80;
                        *(undefined2 *)(piVar1 + 6) = (undefined2)local_74;
                        piVar1[2] = (int)local_b4[0];
                        piVar1[3] = (int)local_e8[0];
                        piVar1[4] = (int)local_20[0];
                        *(undefined4 *)((int)piVar1 + 0x1e) = 0;
                        local_d8 = local_d8 + 1;
                      }
                    }
                  }
                  iVar11 = iVar11 + 1;
                  iVar16 = local_84;
                  iVar20 = local_74;
                  iVar21 = iVar11;
                }
                local_80 = local_80 + 1;
                iVar11 = iVar15;
                iVar21 = iVar15;
              } while (local_80 < iVar16);
            }
            local_74 = local_74 + 1;
          } while (local_74 < 5);
          local_f0 = &stack0xfffffec8;
          if (local_d8 != 0) {
            local_c8 = param_7 % local_d8;
            iVar10 = 0;
            local_f0 = &stack0xfffffec8;
            if (0 < local_d8) {
              do {
                local_f0 = &stack0xfffffec8;
                if ((int)param_2 <= iVar10) break;
                iVar22 = local_c8 + iVar10;
                if (local_d8 <= iVar22) {
                  iVar22 = iVar22 - local_d8;
                }
                *(undefined2 *)(*param_3 + iVar10 * 8) =
                     *(undefined2 *)(local_cc + iVar22 * 0x2c + 8);
                *(undefined2 *)(*param_3 + 2 + iVar10 * 8) =
                     *(undefined2 *)(local_cc + iVar22 * 0x2c + 0xc);
                iVar15 = *param_3;
                *(undefined2 *)(iVar15 + 4 + iVar10 * 8) =
                     *(undefined2 *)(local_cc + iVar22 * 0x2c + 0x10);
                puVar2 = (undefined2 *)(*param_3 + iVar10 * 8);
                uVar17 = (undefined2)((uint)iVar15 >> 0x10);
                uVar9 = (undefined2)((uint)puVar2 >> 0x10);
                uVar9 = (**(code **)(*param_1 + 0x10))
                                  (CONCAT22(uVar17,*(undefined2 *)((int)param_1 + 0x41)),
                                   CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x43)),
                                   CONCAT22(uVar17,*(undefined2 *)((int)param_1 + 0x45)),
                                   CONCAT22(uVar9,*puVar2),CONCAT22(uVar17,puVar2[1]),
                                   CONCAT22(uVar17,puVar2[2]));
                *(undefined2 *)(*param_3 + 6 + iVar10 * 8) = uVar9;
                *(undefined4 *)(&stack0xfffffec8 + iVar10 * 4) = 1;
                iVar10 = iVar10 + 1;
                local_f0 = &stack0xfffffec8;
              } while (iVar10 < local_d8);
            }
          }
          goto LAB_0057ac02;
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

