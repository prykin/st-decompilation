#include "../../pseudocode_runtime.h"


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
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  code *pcVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 uVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  STWorldObject *this;
  bool bVar23;
  longlong lVar24;
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
  iVar9 = Library::DKW::LIB::FUN_006aac70(param_2 * 8);
  *param_3 = iVar9;
  if (((iVar9 == 0) || (param_2 == 0)) || ((param_2 != 5 && (param_2 != 7)))) {
    iVar9 = ReportDebugMessage("E:\\__titans\\Igor\\to_etorp.cpp",0x4c,0,0,"%s",
                               "ConusExplosion:Bad parameters or memory error");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (*param_3 != 0) {
      FreeAndNull((void **)param_3);
    }
  }
  else {
    sVar12 = param_1->field_003A;
    sVar7 = *(short *)&param_1->field_0x34;
    sVar17 = *(short *)&param_1->field_0x3c;
    sVar5 = param_1->field_0036;
    local_40 = (int)param_1->field_003E - (int)*(short *)&param_1->field_0x38;
    if ((param_4 == 0) || (param_5 == 0)) {
LAB_0057ac02:
      iVar9 = FUN_006acf0d((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                           (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                           (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
      iVar21 = FUN_006aced8((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)param_1->field_003A,(int)*(short *)&param_1->field_0x3c);
      local_a0 = (((int)*(short *)&param_1->field_0x3c - (int)param_1->field_0036) * 10000) / iVar9;
      iVar14 = (((int)param_1->field_003A - (int)*(short *)&param_1->field_0x34) * 10000) / iVar9;
      iVar18 = (((int)param_1->field_003E - (int)*(short *)&param_1->field_0x38) * 10000) / iVar9;
      local_50 = (iVar21 * 10000) / iVar9;
      lVar24 = Library::MSVCRT::__ftol();
      local_78 = (int)lVar24;
      iVar9 = param_2 - 1;
      if (-1 < iVar9) {
        local_120 = (int *)(local_f0 + iVar9 * 4);
        iVar21 = iVar9 * 0xc;
        do {
          if ((local_f0 == (undefined1 *)0x0) || (*local_120 == 0)) {
            uVar13 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&param_1->field_0x1c = uVar13;
            local_78 = local_78 +
                       ((uVar13 >> 0x10) % (((int)((local_78 >> 0x1f & 7U) + local_78) >> 3) + 1U) -
                       ((int)(local_78 + (local_78 >> 0x1f & 0xfU)) >> 4));
            if (param_2 == 7) {
              iVar15 = *(int *)(iVar21 + 0x7cae80);
              iVar10 = (int)((ulonglong)
                             ((longlong)(local_78 * *(int *)(iVar21 + 0x7cae7c)) * 0x68db8bad) >>
                            0x20);
            }
            else {
              iVar15 = *(int *)(iVar21 + 0x7caed4);
              iVar10 = (int)((ulonglong)
                             ((longlong)(*(int *)(iVar21 + 0x7caed0) * local_78) * 0x68db8bad) >>
                            0x20);
            }
            local_d4 = (iVar15 * local_78) / 10000;
            local_6c = (iVar10 >> 0xc) - (iVar10 >> 0x1f);
            iVar10 = (local_50 * param_5) / 10000 - (iVar18 * local_d4) / 10000;
            iVar19 = local_6c * iVar14;
            iVar20 = iVar10 * local_a0;
            sVar12 = param_1->field_0043;
            local_4c = ((iVar18 * param_5) / 10000 - (local_50 * local_d4) / 10000) +
                       (int)(short)param_1->field_0045;
            iVar10 = iVar10 * iVar14;
            iVar15 = local_6c * local_a0;
            *(short *)(*param_3 + iVar9 * 8) =
                 ((((short)(iVar10 / 10000) + (short)(iVar10 >> 0x1f)) -
                  (short)((longlong)iVar10 * 0x68db8bad >> 0x3f)) -
                 (((short)(iVar15 / 10000) + (short)(iVar15 >> 0x1f)) -
                 (short)((longlong)iVar15 * 0x68db8bad >> 0x3f))) + param_1->field_0041;
            *(short *)(*param_3 + 2 + iVar9 * 8) =
                 (((short)(iVar20 / 10000) + (short)(iVar20 >> 0x1f) +
                  (((short)(iVar19 / 10000) + (short)(iVar19 >> 0x1f)) -
                  (short)((longlong)iVar19 * 0x68db8bad >> 0x3f))) -
                 (short)((longlong)iVar20 * 0x68db8bad >> 0x3f)) + sVar12;
            iVar15 = *param_3;
            *(undefined2 *)(iVar15 + 4 + iVar9 * 8) = (undefined2)local_4c;
            puVar1 = (undefined2 *)(*param_3 + iVar9 * 8);
            uVar16 = (undefined2)((uint)iVar15 >> 0x10);
            uVar8 = (undefined2)((uint)puVar1 >> 0x10);
            local_d0 = iVar9;
            /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
            uVar8 = (**(code **)(*(int *)param_1 + 0x10))
                              (CONCAT22(uVar16,param_1->field_0041),
                               CONCAT22(uVar8,param_1->field_0043),
                               CONCAT22(uVar16,param_1->field_0045),CONCAT22(uVar8,*puVar1),
                               CONCAT22(uVar16,puVar1[1]),CONCAT22(uVar16,puVar1[2]));
            *(undefined2 *)(*param_3 + 6 + iVar9 * 8) = uVar8;
          }
          iVar9 = iVar9 + -1;
          local_120 = local_120 + -1;
          iVar21 = iVar21 + -0xc;
        } while (-1 < iVar9);
      }
      ExceptionList = local_14;
      return 1;
    }
    lVar24 = Library::MSVCRT::__ftol();
    local_c4 = (int)lVar24;
    local_dc = FUN_006acf0d((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                            (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
    if (local_dc != 0) {
      local_8c = (((int)sVar12 - (int)sVar7) * 10000) / local_dc;
      local_98 = (((int)sVar17 - (int)sVar5) * 10000) / local_dc;
      local_a8 = (local_40 * 10000) / local_dc;
      sVar12 = param_1->field_0041;
      iVar21 = (int)sVar12;
      sVar7 = param_1->field_0043;
      iVar9 = (int)sVar7;
      local_40 = (int)(short)param_1->field_0045;
      local_68 = (local_8c * 0x324) / 10000 + iVar21;
      local_64 = (local_98 * 0x324) / 10000 + iVar9;
      local_b8 = FUN_006aced8(iVar21,iVar9,local_68,local_64);
      if (local_b8 != 0) {
        local_94 = ((local_64 - iVar9) * 10000) / local_b8;
        local_b8 = ((iVar21 - local_68) * 10000) / local_b8;
        if (((int)param_2 < 0) || (10 < (int)param_2)) {
          param_2 = 7;
        }
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_1c = &stack0xfffffec8;
        puVar22 = (undefined4 *)&stack0xfffffec8;
        for (uVar13 = param_2 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar22 = 0;
          puVar22 = puVar22 + 1;
        }
        for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(undefined1 *)puVar22 = 0;
          puVar22 = (undefined4 *)((int)puVar22 + 1);
        }
        local_8 = 0xffffffff;
        if (iVar21 < 0) {
          local_38[0] = sVar12 / 0xc9 + -1;
        }
        else {
          local_38[0] = (sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                        (short)((longlong)iVar21 * 0x28c1979 >> 0x3f);
        }
        if (iVar9 < 0) {
          local_38[1] = sVar7 / 0xc9 + -1;
        }
        else {
          local_38[1] = (sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                        (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
        }
        if (local_40 < 0) {
          local_38[2] = (short)(local_40 / 200) + -1;
        }
        else {
          local_38[2] = ((short)(local_40 / 200) + (short)(local_40 >> 0x1f)) -
                        (short)((longlong)local_40 * 0x51eb851f >> 0x3f);
        }
        iVar14 = ((param_5 + 0xc9) * local_94) / 10000;
        iVar18 = local_68 + iVar14;
        if (iVar18 < 0) {
          local_30 = (short)(iVar18 / 0xc9) + -1;
        }
        else {
          local_30 = ((short)(iVar18 / 0xc9) + (short)(iVar18 >> 0x1f)) -
                     (short)((longlong)iVar18 * 0x28c1979 >> 0x3f);
        }
        iVar18 = ((param_5 + 0xc9) * local_b8) / 10000;
        iVar15 = local_64 + iVar18;
        if (iVar15 < 0) {
          local_2e = (short)(iVar15 / 0xc9) + -1;
        }
        else {
          local_2e = ((short)(iVar15 / 0xc9) + (short)(iVar15 >> 0x1f)) -
                     (short)((longlong)iVar15 * 0x28c1979 >> 0x3f);
        }
        local_2c = 0;
        iVar14 = local_68 - iVar14;
        if (iVar14 < 0) {
          local_28 = (short)(iVar14 / 0xc9) + -1;
        }
        else {
          local_28 = ((short)(iVar14 / 0xc9) + (short)(iVar14 >> 0x1f)) -
                     (short)((longlong)iVar14 * 0x28c1979 >> 0x3f);
        }
        iVar18 = local_64 - iVar18;
        if (iVar18 < 0) {
          local_26 = (short)(iVar18 / 0xc9) + -1;
        }
        else {
          local_26 = ((short)(iVar18 / 0xc9) + (short)(iVar18 >> 0x1f)) -
                     (short)((longlong)iVar18 * 0x28c1979 >> 0x3f);
        }
        local_24 = 5;
        if (((((-1 < local_38[0]) && (local_38[0] < g_worldGrid.sizeX)) && (-1 < local_38[1])) &&
            ((local_38[1] < g_worldGrid.sizeY && (-1 < local_38[2])))) && (local_38[2] < 5)) {
          iVar14 = (int)local_38[0];
          local_5c = iVar14;
          local_58 = (int)local_38[1];
          local_84 = (int)local_38[1];
          iVar18 = 1;
          local_fc = iVar14;
          do {
            iVar15 = (int)local_38[iVar18 * 4];
            if (iVar15 < iVar14) {
              local_5c = iVar15;
              iVar14 = iVar15;
            }
            iVar10 = (int)local_38[iVar18 * 4 + 1];
            if (iVar10 < local_58) {
              local_58 = iVar10;
            }
            if (local_fc < iVar15) {
              local_fc = iVar15;
            }
            if (local_84 < iVar10) {
              local_84 = iVar10;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < 3);
          if (iVar14 < 0) {
            iVar14 = 0;
            local_5c = 0;
          }
          if (local_58 < 0) {
            local_58 = 0;
          }
          iVar18 = local_fc + 1;
          if ((int)g_worldGrid.sizeX < local_fc + 1) {
            iVar18 = (int)g_worldGrid.sizeX;
          }
          iVar15 = local_84 + 1;
          if ((int)g_worldGrid.sizeY < local_84 + 1) {
            iVar15 = (int)g_worldGrid.sizeY;
          }
          local_8 = 1;
          local_84 = iVar15;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_d8 = 0;
          local_74 = 0;
          local_cc = &stack0xfffffec8;
          local_1c = &stack0xfffffec8;
          do {
            local_80 = local_58;
            iVar10 = iVar14;
            iVar19 = local_74;
            iVar20 = local_5c;
            if (local_58 < iVar15) {
              do {
                while (iVar14 = local_5c, local_5c = iVar14, iVar20 < iVar18) {
                  sVar12 = (short)iVar10;
                  if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                     ((sVar7 = (short)local_80, sVar7 < 0 ||
                      (((g_worldGrid.sizeY <= sVar7 || (sVar17 = (short)local_74, sVar17 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar17)))))) {
                    this = (STWorldObject *)0x0;
                  }
                  else {
                    this = g_worldGrid.cells
                           [(int)sVar17 * (int)g_worldGrid.planeStride +
                            (int)sVar7 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0];
                  }
                  local_74 = iVar19;
                  if (((this != (STWorldObject *)0x0) &&
                      (iVar14 = (*this->vtable[5].slots_00_28[0])(), iVar14 != 0)) &&
                     ((this[1].vtable < (STWorldObjectVTable *)0x8 &&
                      ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
                       ((byte)(&DAT_008087e9)[(int)this[1].vtable * 0x51] < 8)))))) {
                    bVar2 = *(byte *)&this[1].vtable;
                    bVar3 = param_1->field_0x24;
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == bVar3) {
LAB_0057a96b:
                        iVar14 = 0;
                      }
                      else {
                        bVar4 = g_playerRelationMatrix[bVar2][bVar3];
                        if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar2] == 0)) {
                          iVar14 = -2;
                        }
                        else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][bVar2] == 0)) {
                          iVar14 = -1;
                        }
                        else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar2] == 1)) {
                          iVar14 = 1;
                        }
                        else {
                          if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][bVar2] != 1))
                          goto LAB_0057a96b;
                          iVar14 = 2;
                        }
                      }
                      bVar23 = iVar14 < 0;
                    }
                    else {
                      bVar23 = (&DAT_008087ea)[(uint)bVar3 * 0x51] !=
                               (&DAT_008087ea)[(uint)bVar2 * 0x51];
                    }
                    if ((bVar23) && (iVar14 = (*this->vtable[5].slots_00_28[2])(), iVar14 != 0)) {
                      thunk_FUN_00416270(this,local_b4,(int *)local_e8,(int *)local_20);
                      iVar14 = thunk_FUN_0057bc50(iVar21,iVar9,local_40,local_8c,local_98,local_a8,
                                                  (int)local_b4[0],(int)local_e8[0],(int)local_20[0]
                                                 );
                      if ((iVar14 < 0) ||
                         (iVar15 = FUN_006acf0d((iVar14 * local_8c) / 10000 + iVar21,
                                                (iVar14 * local_98) / 10000 + iVar9,
                                                (iVar14 * local_a8) / 10000 + local_40,
                                                (int)local_b4[0],(int)local_e8[0],(int)local_20[0]),
                         iVar15 * 0x324 <= iVar14 * local_c4 * 2)) {
                        puVar22 = (undefined4 *)(local_cc + local_d8 * 0x2c);
                        *puVar22 = this[1].vtable;
                        *(undefined4 *)((int)puVar22 + 0x26) = *(undefined4 *)&this->field_0x18;
                        *(undefined2 *)((int)puVar22 + 0x2a) = *(undefined2 *)&this[1].field_0xe;
                        *(STWorldObject **)((int)puVar22 + 0x1a) = this;
                        *(short *)(puVar22 + 5) = sVar12;
                        *(undefined2 *)((int)puVar22 + 0x16) = (undefined2)local_80;
                        *(undefined2 *)(puVar22 + 6) = (undefined2)local_74;
                        puVar22[2] = (int)local_b4[0];
                        puVar22[3] = (int)local_e8[0];
                        puVar22[4] = (int)local_20[0];
                        *(undefined4 *)((int)puVar22 + 0x1e) = 0;
                        local_d8 = local_d8 + 1;
                      }
                    }
                  }
                  iVar10 = iVar10 + 1;
                  iVar15 = local_84;
                  iVar19 = local_74;
                  iVar20 = iVar10;
                }
                local_80 = local_80 + 1;
                iVar10 = iVar14;
                iVar20 = iVar14;
              } while (local_80 < iVar15);
            }
            local_74 = local_74 + 1;
          } while (local_74 < 5);
          local_f0 = &stack0xfffffec8;
          if (local_d8 != 0) {
            local_c8 = param_7 % local_d8;
            iVar9 = 0;
            local_f0 = &stack0xfffffec8;
            if (0 < local_d8) {
              do {
                local_f0 = &stack0xfffffec8;
                if ((int)param_2 <= iVar9) break;
                iVar21 = local_c8 + iVar9;
                if (local_d8 <= iVar21) {
                  iVar21 = iVar21 - local_d8;
                }
                *(undefined2 *)(*param_3 + iVar9 * 8) =
                     *(undefined2 *)(local_cc + iVar21 * 0x2c + 8);
                *(undefined2 *)(*param_3 + 2 + iVar9 * 8) =
                     *(undefined2 *)(local_cc + iVar21 * 0x2c + 0xc);
                iVar14 = *param_3;
                *(undefined2 *)(iVar14 + 4 + iVar9 * 8) =
                     *(undefined2 *)(local_cc + iVar21 * 0x2c + 0x10);
                puVar1 = (undefined2 *)(*param_3 + iVar9 * 8);
                uVar16 = (undefined2)((uint)iVar14 >> 0x10);
                uVar8 = (undefined2)((uint)puVar1 >> 0x10);
                /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
                uVar8 = (**(code **)(*(int *)param_1 + 0x10))
                                  (CONCAT22(uVar16,param_1->field_0041),
                                   CONCAT22(uVar8,param_1->field_0043),
                                   CONCAT22(uVar16,param_1->field_0045),CONCAT22(uVar8,*puVar1),
                                   CONCAT22(uVar16,puVar1[1]),CONCAT22(uVar16,puVar1[2]));
                *(undefined2 *)(*param_3 + 6 + iVar9 * 8) = uVar8;
                *(undefined4 *)(&stack0xfffffec8 + iVar9 * 4) = 1;
                iVar9 = iVar9 + 1;
                local_f0 = &stack0xfffffec8;
              } while (iVar9 < local_d8);
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

