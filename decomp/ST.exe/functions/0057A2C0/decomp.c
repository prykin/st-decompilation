
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_etorp.cpp
   Diagnostic line evidence: 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0057B670 -> 0057A2C0 @ 0057B6F7 */

undefined4 __cdecl
FUN_0057a2c0(AnonShape_0057A2C0_A829D396 *param_1,uint param_2,int *param_3,int param_4,int param_5,
            int *param_6,int param_7)

{
  int *piVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  code *pcVar7;
  uint uVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  int *this;
  bool bVar25;
  longlong lVar26;
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
  iVar11 = Library::DKW::LIB::FUN_006aac70(param_2 * 8);
  *param_3 = iVar11;
  if (((iVar11 == 0) || (param_2 == 0)) || ((param_2 != 5 && (param_2 != 7)))) {
    iVar11 = ReportDebugMessage(s_E____titans_Igor_to_etorp_cpp_007caf5c,0x4c,0,0,&DAT_007a4ccc,
                                s_ConusExplosion_Bad_parameters_or_007caf24);
    if (iVar11 != 0) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return uVar13;
    }
    if (*param_3 != 0) {
      FUN_006ab060((LPVOID *)param_3);
    }
  }
  else {
    sVar14 = param_1->field_003A;
    sVar9 = *(short *)&param_1->field_0x34;
    sVar19 = *(short *)&param_1->field_0x3c;
    sVar6 = param_1->field_0036;
    local_40 = (int)param_1->field_003E - (int)*(short *)&param_1->field_0x38;
    if ((param_4 == 0) || (param_5 == 0)) {
LAB_0057ac02:
      iVar11 = FUN_006acf0d((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                            (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
      iVar23 = FUN_006aced8((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)param_1->field_003A,(int)*(short *)&param_1->field_0x3c);
      local_a0 = (((int)*(short *)&param_1->field_0x3c - (int)param_1->field_0036) * 10000) / iVar11
      ;
      iVar16 = (((int)param_1->field_003A - (int)*(short *)&param_1->field_0x34) * 10000) / iVar11;
      iVar20 = (((int)param_1->field_003E - (int)*(short *)&param_1->field_0x38) * 10000) / iVar11;
      local_50 = (iVar23 * 10000) / iVar11;
      lVar26 = Library::MSVCRT::__ftol();
      local_78 = (int)lVar26;
      iVar11 = param_2 - 1;
      if (-1 < iVar11) {
        local_120 = (int *)(local_f0 + iVar11 * 4);
        iVar23 = iVar11 * 0xc;
        do {
          if ((local_f0 == (undefined1 *)0x0) || (*local_120 == 0)) {
            uVar15 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&param_1->field_0x1c = uVar15;
            local_78 = local_78 +
                       ((uVar15 >> 0x10) % (((int)((local_78 >> 0x1f & 7U) + local_78) >> 3) + 1U) -
                       ((int)(local_78 + (local_78 >> 0x1f & 0xfU)) >> 4));
            if (param_2 == 7) {
              iVar17 = *(int *)(iVar23 + 0x7cae80);
              iVar12 = (int)((ulonglong)
                             ((longlong)(local_78 * *(int *)(iVar23 + 0x7cae7c)) * 0x68db8bad) >>
                            0x20);
            }
            else {
              iVar17 = *(int *)(iVar23 + 0x7caed4);
              iVar12 = (int)((ulonglong)
                             ((longlong)(*(int *)(iVar23 + 0x7caed0) * local_78) * 0x68db8bad) >>
                            0x20);
            }
            local_d4 = (iVar17 * local_78) / 10000;
            local_6c = (iVar12 >> 0xc) - (iVar12 >> 0x1f);
            iVar12 = (local_50 * param_5) / 10000 - (iVar20 * local_d4) / 10000;
            iVar21 = local_6c * iVar16;
            iVar22 = iVar12 * local_a0;
            sVar14 = param_1->field_0043;
            local_4c = ((iVar20 * param_5) / 10000 - (local_50 * local_d4) / 10000) +
                       (int)(short)param_1->field_0045;
            iVar12 = iVar12 * iVar16;
            iVar17 = local_6c * local_a0;
            *(short *)(*param_3 + iVar11 * 8) =
                 ((((short)(iVar12 / 10000) + (short)(iVar12 >> 0x1f)) -
                  (short)((longlong)iVar12 * 0x68db8bad >> 0x3f)) -
                 (((short)(iVar17 / 10000) + (short)(iVar17 >> 0x1f)) -
                 (short)((longlong)iVar17 * 0x68db8bad >> 0x3f))) + param_1->field_0041;
            *(short *)(*param_3 + 2 + iVar11 * 8) =
                 (((short)(iVar22 / 10000) + (short)(iVar22 >> 0x1f) +
                  (((short)(iVar21 / 10000) + (short)(iVar21 >> 0x1f)) -
                  (short)((longlong)iVar21 * 0x68db8bad >> 0x3f))) -
                 (short)((longlong)iVar22 * 0x68db8bad >> 0x3f)) + sVar14;
            iVar17 = *param_3;
            *(undefined2 *)(iVar17 + 4 + iVar11 * 8) = (undefined2)local_4c;
            puVar2 = (undefined2 *)(*param_3 + iVar11 * 8);
            uVar18 = (undefined2)((uint)iVar17 >> 0x10);
            uVar10 = (undefined2)((uint)puVar2 >> 0x10);
            local_d0 = iVar11;
            uVar10 = (**(code **)(*(int *)param_1 + 0x10))
                               (CONCAT22(uVar18,param_1->field_0041),
                                CONCAT22(uVar10,param_1->field_0043),
                                CONCAT22(uVar18,param_1->field_0045),CONCAT22(uVar10,*puVar2),
                                CONCAT22(uVar18,puVar2[1]),CONCAT22(uVar18,puVar2[2]));
            *(undefined2 *)(*param_3 + 6 + iVar11 * 8) = uVar10;
          }
          iVar11 = iVar11 + -1;
          local_120 = local_120 + -1;
          iVar23 = iVar23 + -0xc;
        } while (-1 < iVar11);
      }
      ExceptionList = local_14;
      return 1;
    }
    lVar26 = Library::MSVCRT::__ftol();
    local_c4 = (int)lVar26;
    local_dc = FUN_006acf0d((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                            (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
    if (local_dc != 0) {
      local_8c = (((int)sVar14 - (int)sVar9) * 10000) / local_dc;
      local_98 = (((int)sVar19 - (int)sVar6) * 10000) / local_dc;
      local_a8 = (local_40 * 10000) / local_dc;
      sVar14 = param_1->field_0041;
      iVar23 = (int)sVar14;
      sVar9 = param_1->field_0043;
      iVar11 = (int)sVar9;
      local_40 = (int)(short)param_1->field_0045;
      local_68 = (local_8c * 0x324) / 10000 + iVar23;
      local_64 = (local_98 * 0x324) / 10000 + iVar11;
      local_b8 = FUN_006aced8(iVar23,iVar11,local_68,local_64);
      if (local_b8 != 0) {
        local_94 = ((local_64 - iVar11) * 10000) / local_b8;
        local_b8 = ((iVar23 - local_68) * 10000) / local_b8;
        if (((int)param_2 < 0) || (10 < (int)param_2)) {
          param_2 = 7;
        }
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_1c = &stack0xfffffec8;
        puVar24 = (undefined4 *)&stack0xfffffec8;
        for (uVar15 = param_2 & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
        for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(undefined1 *)puVar24 = 0;
          puVar24 = (undefined4 *)((int)puVar24 + 1);
        }
        local_8 = 0xffffffff;
        if (iVar23 < 0) {
          local_38[0] = sVar14 / 0xc9 + -1;
        }
        else {
          local_38[0] = (sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                        (short)((longlong)iVar23 * 0x28c1979 >> 0x3f);
        }
        if (iVar11 < 0) {
          local_38[1] = sVar9 / 0xc9 + -1;
        }
        else {
          local_38[1] = (sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                        (short)((longlong)iVar11 * 0x28c1979 >> 0x3f);
        }
        if (local_40 < 0) {
          local_38[2] = (short)(local_40 / 200) + -1;
        }
        else {
          local_38[2] = ((short)(local_40 / 200) + (short)(local_40 >> 0x1f)) -
                        (short)((longlong)local_40 * 0x51eb851f >> 0x3f);
        }
        iVar16 = ((param_5 + 0xc9) * local_94) / 10000;
        iVar20 = local_68 + iVar16;
        if (iVar20 < 0) {
          local_30 = (short)(iVar20 / 0xc9) + -1;
        }
        else {
          local_30 = ((short)(iVar20 / 0xc9) + (short)(iVar20 >> 0x1f)) -
                     (short)((longlong)iVar20 * 0x28c1979 >> 0x3f);
        }
        iVar20 = ((param_5 + 0xc9) * local_b8) / 10000;
        iVar17 = local_64 + iVar20;
        if (iVar17 < 0) {
          local_2e = (short)(iVar17 / 0xc9) + -1;
        }
        else {
          local_2e = ((short)(iVar17 / 0xc9) + (short)(iVar17 >> 0x1f)) -
                     (short)((longlong)iVar17 * 0x28c1979 >> 0x3f);
        }
        local_2c = 0;
        iVar16 = local_68 - iVar16;
        if (iVar16 < 0) {
          local_28 = (short)(iVar16 / 0xc9) + -1;
        }
        else {
          local_28 = ((short)(iVar16 / 0xc9) + (short)(iVar16 >> 0x1f)) -
                     (short)((longlong)iVar16 * 0x28c1979 >> 0x3f);
        }
        iVar20 = local_64 - iVar20;
        if (iVar20 < 0) {
          local_26 = (short)(iVar20 / 0xc9) + -1;
        }
        else {
          local_26 = ((short)(iVar20 / 0xc9) + (short)(iVar20 >> 0x1f)) -
                     (short)((longlong)iVar20 * 0x28c1979 >> 0x3f);
        }
        local_24 = 5;
        if (((((-1 < local_38[0]) && (local_38[0] < SHORT_007fb240)) && (-1 < local_38[1])) &&
            ((local_38[1] < SHORT_007fb242 && (-1 < local_38[2])))) && (local_38[2] < 5)) {
          iVar16 = (int)local_38[0];
          local_5c = iVar16;
          local_58 = (int)local_38[1];
          local_84 = (int)local_38[1];
          iVar20 = 1;
          local_fc = iVar16;
          do {
            iVar17 = (int)local_38[iVar20 * 4];
            if (iVar17 < iVar16) {
              local_5c = iVar17;
              iVar16 = iVar17;
            }
            iVar12 = (int)local_38[iVar20 * 4 + 1];
            if (iVar12 < local_58) {
              local_58 = iVar12;
            }
            if (local_fc < iVar17) {
              local_fc = iVar17;
            }
            if (local_84 < iVar12) {
              local_84 = iVar12;
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < 3);
          if (iVar16 < 0) {
            iVar16 = 0;
            local_5c = 0;
          }
          if (local_58 < 0) {
            local_58 = 0;
          }
          iVar20 = local_fc + 1;
          if ((int)SHORT_007fb240 < local_fc + 1) {
            iVar20 = (int)SHORT_007fb240;
          }
          iVar17 = local_84 + 1;
          if ((int)SHORT_007fb242 < local_84 + 1) {
            iVar17 = (int)SHORT_007fb242;
          }
          local_8 = 1;
          local_84 = iVar17;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_d8 = 0;
          local_74 = 0;
          local_cc = &stack0xfffffec8;
          local_1c = &stack0xfffffec8;
          do {
            local_80 = local_58;
            iVar12 = iVar16;
            iVar21 = local_74;
            iVar22 = local_5c;
            if (local_58 < iVar17) {
              do {
                while (iVar16 = local_5c, local_5c = iVar16, iVar22 < iVar20) {
                  sVar14 = (short)iVar12;
                  if (((sVar14 < 0) || (SHORT_007fb240 <= sVar14)) ||
                     ((sVar9 = (short)local_80, sVar9 < 0 ||
                      (((SHORT_007fb242 <= sVar9 || (sVar19 = (short)local_74, sVar19 < 0)) ||
                       (SHORT_007fb244 <= sVar19)))))) {
                    this = (int *)0x0;
                  }
                  else {
                    this = *(int **)(DAT_007fb248 +
                                    ((int)sVar19 * (int)SHORT_007fb246 +
                                     (int)sVar9 * (int)SHORT_007fb240 + (int)sVar14) * 8);
                  }
                  local_74 = iVar21;
                  if (((this != (int *)0x0) && (iVar16 = (**(code **)(*this + 0xf0))(), iVar16 != 0)
                      ) && (((uint)this[9] < 8 &&
                            ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                             ((byte)(&DAT_008087e9)[this[9] * 0x51] < 8)))))) {
                    bVar3 = *(byte *)(this + 9);
                    bVar4 = param_1->field_0x24;
                    if (DAT_00808a8f == '\0') {
                      if (bVar3 == bVar4) {
LAB_0057a96b:
                        iVar16 = 0;
                      }
                      else {
                        uVar15 = (uint)bVar3;
                        uVar8 = (uint)bVar4;
                        cVar5 = *(char *)((int)&DAT_00808a4f + uVar15 * 8 + uVar8);
                        if ((cVar5 == '\0') &&
                           (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar15) == '\0')) {
                          iVar16 = -2;
                        }
                        else if ((cVar5 == '\x01') &&
                                (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar15) == '\0')) {
                          iVar16 = -1;
                        }
                        else if ((cVar5 == '\0') &&
                                (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar15) == '\x01')) {
                          iVar16 = 1;
                        }
                        else {
                          if ((cVar5 != '\x01') ||
                             (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar15) != '\x01'))
                          goto LAB_0057a96b;
                          iVar16 = 2;
                        }
                      }
                      bVar25 = iVar16 < 0;
                    }
                    else {
                      bVar25 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                               (&DAT_008087ea)[(uint)bVar3 * 0x51];
                    }
                    if ((bVar25) && (iVar16 = (**(code **)(*this + 0xf8))(), iVar16 != 0)) {
                      thunk_FUN_00416270(this,local_b4,(int *)local_e8,(int *)local_20);
                      iVar16 = thunk_FUN_0057bc50(iVar23,iVar11,local_40,local_8c,local_98,local_a8,
                                                  (int)local_b4[0],(int)local_e8[0],(int)local_20[0]
                                                 );
                      if ((iVar16 < 0) ||
                         (iVar17 = FUN_006acf0d((iVar16 * local_8c) / 10000 + iVar23,
                                                (iVar16 * local_98) / 10000 + iVar11,
                                                (iVar16 * local_a8) / 10000 + local_40,
                                                (int)local_b4[0],(int)local_e8[0],(int)local_20[0]),
                         iVar17 * 0x324 <= iVar16 * local_c4 * 2)) {
                        piVar1 = (int *)(local_cc + local_d8 * 0x2c);
                        *piVar1 = this[9];
                        *(int *)((int)piVar1 + 0x26) = this[6];
                        *(undefined2 *)((int)piVar1 + 0x2a) = *(undefined2 *)((int)this + 0x32);
                        *(int **)((int)piVar1 + 0x1a) = this;
                        *(short *)(piVar1 + 5) = sVar14;
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
                  iVar12 = iVar12 + 1;
                  iVar17 = local_84;
                  iVar21 = local_74;
                  iVar22 = iVar12;
                }
                local_80 = local_80 + 1;
                iVar12 = iVar16;
                iVar22 = iVar16;
              } while (local_80 < iVar17);
            }
            local_74 = local_74 + 1;
          } while (local_74 < 5);
          local_f0 = &stack0xfffffec8;
          if (local_d8 != 0) {
            local_c8 = param_7 % local_d8;
            iVar11 = 0;
            local_f0 = &stack0xfffffec8;
            if (0 < local_d8) {
              do {
                local_f0 = &stack0xfffffec8;
                if ((int)param_2 <= iVar11) break;
                iVar23 = local_c8 + iVar11;
                if (local_d8 <= iVar23) {
                  iVar23 = iVar23 - local_d8;
                }
                *(undefined2 *)(*param_3 + iVar11 * 8) =
                     *(undefined2 *)(local_cc + iVar23 * 0x2c + 8);
                *(undefined2 *)(*param_3 + 2 + iVar11 * 8) =
                     *(undefined2 *)(local_cc + iVar23 * 0x2c + 0xc);
                iVar16 = *param_3;
                *(undefined2 *)(iVar16 + 4 + iVar11 * 8) =
                     *(undefined2 *)(local_cc + iVar23 * 0x2c + 0x10);
                puVar2 = (undefined2 *)(*param_3 + iVar11 * 8);
                uVar18 = (undefined2)((uint)iVar16 >> 0x10);
                uVar10 = (undefined2)((uint)puVar2 >> 0x10);
                uVar10 = (**(code **)(*(int *)param_1 + 0x10))
                                   (CONCAT22(uVar18,param_1->field_0041),
                                    CONCAT22(uVar10,param_1->field_0043),
                                    CONCAT22(uVar18,param_1->field_0045),CONCAT22(uVar10,*puVar2),
                                    CONCAT22(uVar18,puVar2[1]),CONCAT22(uVar18,puVar2[2]));
                *(undefined2 *)(*param_3 + 6 + iVar11 * 8) = uVar10;
                *(undefined4 *)(&stack0xfffffec8 + iVar11 * 4) = 1;
                iVar11 = iVar11 + 1;
                local_f0 = &stack0xfffffec8;
              } while (iVar11 < local_d8);
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

