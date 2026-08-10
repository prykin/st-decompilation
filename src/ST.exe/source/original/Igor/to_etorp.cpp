#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_etorp.cpp

// 0057A2C0 FUN_0057a2c0
#line 4 "decomp/ST.exe/functions/0057A2C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_etorp.cpp
   Diagnostic line evidence: 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0057B670 -> 0057A2C0 @ 0057B6F7

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0057B670 -> 0057A2C0 @ 0057B6F7; FUN_0057b670 parameter param_4

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0057B670 -> 0057A2C0 @ 0057B6F7; FUN_0057b670 parameter param_5 */

undefined4 __cdecl
st::fn_0057A2C0(AnonShape_0057A2C0_A829D396 *param_1,uint param_2,int *param_3,short *param_4,
            int param_5,int *param_6,short *param_7)

{
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar7;
  void *pvVar9;
  int iVar10;
  int iVar14;
  int iVar15;
  undefined2 uVar8;
  int iVar22;
  undefined4 uVar11;
  short sVar12;
  uint uVar13;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  STWorldObject *this;
  bool bVar27;
  longlong lVar28;
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
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079b3a8);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
  local_f0 = nullptr;
  ExceptionList = &local_14;
  pvVar9 = st::fn_006AAC70(param_2 * 8);
  *param_3 = (int)pvVar9;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((pvVar9 == nullptr) || (param_2 == 0)) || ((param_2 != 5 && (param_2 != 7)))) {
    iVar20 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_etorp.cpp"),0x4c,0,0,st::mutable_c_string("%s"),
                                "ConusExplosion:Bad parameters or memory error");
    if (iVar20 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (*param_3 != 0) {
      st::fn_006AB060(param_3);
    }
  }
  else {
    sVar12 = param_1->field_003A;
    sVar7 = *(short *)&param_1->field_0x34;
    sVar19 = *(short *)&param_1->field_0x3c;
    sVar5 = param_1->field_0036;
    local_40 = (int)param_1->field_003E - (int)*(short *)&param_1->field_0x38;
    if ((param_4 == nullptr) || (param_5 == 0)) {
LAB_0057ac02:
      iVar20 = st::fn_006ACF0D((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                            (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
      iVar22 = st::fn_006ACED8((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)param_1->field_003A,(int)*(short *)&param_1->field_0x3c);
      local_a0 = (((int)*(short *)&param_1->field_0x3c - (int)param_1->field_0036) * 10000) / iVar20
      ;
      iVar25 = (((int)param_1->field_003A - (int)*(short *)&param_1->field_0x34) * 10000) / iVar20;
      iVar16 = (((int)param_1->field_003E - (int)*(short *)&param_1->field_0x38) * 10000) / iVar20;
      local_50 = (iVar22 * 10000) / iVar20;
      lVar28 = st::fn_0072E288();
      local_78 = (int)lVar28;
      iVar20 = param_2 - 1;
      if (-1 < iVar20) {
        local_120 = (int *)(local_f0 + iVar20 * 4);
        iVar21 = iVar20 * 0xc;
        do {
          if ((local_f0 == nullptr) || (*local_120 == 0)) {
            uVar13 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&param_1->field_0x1c = uVar13;
            local_78 = local_78 +
                       ((uVar13 >> 0x10) % (((int)((local_78 >> 0x1f & 7U) + local_78) >> 3) + 1U) -
                       ((int)(local_78 + (local_78 >> 0x1f & 0xfU)) >> 4));
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_2 == 7) {
              iVar17 = *(int *)(iVar21 + 0x7cae80);
              iVar10 = (int)((ulonglong)
                             ((longlong)(local_78 * *(int *)(iVar21 + 0x7cae7c)) * 0x68db8bad) >>
                            0x20);
            }
            else {
              iVar17 = *(int *)(iVar21 + 0x7caed4);
              iVar10 = (int)((ulonglong)
                             ((longlong)(*(int *)(iVar21 + 0x7caed0) * local_78) * 0x68db8bad) >>
                            0x20);
            }
            local_d4 = (iVar17 * local_78) / 10000;
            local_6c = (iVar10 >> 0xc) - (iVar10 >> 0x1f);
            iVar10 = (local_50 * param_5) / 10000 - (iVar16 * local_d4) / 10000;
            iVar23 = local_6c * iVar25;
            iVar24 = iVar10 * local_a0;
            sVar12 = param_1->field_0043;
            local_4c = ((iVar16 * param_5) / 10000 - (local_50 * local_d4) / 10000) +
                       (int)(short)param_1->field_0045;
            iVar10 = iVar10 * iVar25;
            iVar17 = local_6c * local_a0;
            *(short *)(*param_3 + iVar20 * 8) =
                 ((((short)(iVar10 / 10000) + (short)(iVar10 >> 0x1f)) -
                  (short)((longlong)iVar10 * 0x68db8bad >> 0x3f)) -
                 (((short)(iVar17 / 10000) + (short)(iVar17 >> 0x1f)) -
                 (short)((longlong)iVar17 * 0x68db8bad >> 0x3f))) + param_1->field_0041;
            *(short *)(*param_3 + 2 + iVar20 * 8) =
                 (((short)(iVar24 / 10000) + (short)(iVar24 >> 0x1f) +
                  (((short)(iVar23 / 10000) + (short)(iVar23 >> 0x1f)) -
                  (short)((longlong)iVar23 * 0x68db8bad >> 0x3f))) -
                 (short)((longlong)iVar24 * 0x68db8bad >> 0x3f)) + sVar12;
            iVar17 = *param_3;
            *(undefined2 *)(iVar17 + 4 + iVar20 * 8) = (undefined2)local_4c;
            puVar1 = (undefined2 *)(*param_3 + iVar20 * 8);
            uVar18 = (undefined2)((uint)iVar17 >> 0x10);
            uVar8 = (undefined2)((uint)puVar1 >> 0x10);
            local_d0 = iVar20;
            /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
            uVar8 = (**(code **)(*(int *)param_1 + 0x10))
                              (CONCAT22(uVar18,param_1->field_0041),
                               CONCAT22(uVar8,param_1->field_0043),
                               CONCAT22(uVar18,param_1->field_0045),CONCAT22(uVar8,*puVar1),
                               CONCAT22(uVar18,puVar1[1]),CONCAT22(uVar18,puVar1[2]));
            *(undefined2 *)(*param_3 + 6 + iVar20 * 8) = uVar8;
          }
          iVar20 = iVar20 + -1;
          local_120 = local_120 + -1;
          iVar21 = iVar21 + -0xc;
        } while (-1 < iVar20);
      }
      ExceptionList = local_14;
      return 1;
    }
    lVar28 = st::fn_0072E288();
    local_c4 = (int)lVar28;
    local_dc = st::fn_006ACF0D((int)*(short *)&param_1->field_0x34,(int)param_1->field_0036,
                            (int)*(short *)&param_1->field_0x38,(int)param_1->field_003A,
                            (int)*(short *)&param_1->field_0x3c,(int)param_1->field_003E);
    if (local_dc != 0) {
      local_8c = (((int)sVar12 - (int)sVar7) * 10000) / local_dc;
      local_98 = (((int)sVar19 - (int)sVar5) * 10000) / local_dc;
      local_a8 = (local_40 * 10000) / local_dc;
      sVar12 = param_1->field_0041;
      iVar25 = (int)sVar12;
      sVar7 = param_1->field_0043;
      iVar20 = (int)sVar7;
      local_40 = (int)(short)param_1->field_0045;
      local_68 = (local_8c * 0x324) / 10000 + iVar25;
      local_64 = (local_98 * 0x324) / 10000 + iVar20;
      local_b8 = st::fn_006ACED8(iVar25,iVar20,local_68,local_64);
      if (local_b8 != 0) {
        local_94 = ((local_64 - iVar20) * 10000) / local_b8;
        local_b8 = ((iVar25 - local_68) * 10000) / local_b8;
        if (((int)param_2 < 0) || (10 < (int)param_2)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 7;
        }
        local_8 = 0;
        st::fn_0072DA40();
        local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
        puVar26 = (undefined4 *)&stack0xfffffec8;
        for (uVar13 = param_2 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        }
        for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(undefined1 *)puVar26 = 0;
          puVar26 = (undefined4 *)((int)puVar26 + 1);
        }
        local_8 = 0xffffffff;
        if (iVar25 < 0) {
          local_38[0] = sVar12 / 0xc9 + -1;
        }
        else {
          local_38[0] = (sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                        (short)((longlong)iVar25 * 0x28c1979 >> 0x3f);
        }
        if (iVar20 < 0) {
          local_38[1] = sVar7 / 0xc9 + -1;
        }
        else {
          local_38[1] = (sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                        (short)((longlong)iVar20 * 0x28c1979 >> 0x3f);
        }
        if (local_40 < 0) {
          local_38[2] = (short)(local_40 / 200) + -1;
        }
        else {
          local_38[2] = ((short)(local_40 / 200) + (short)(local_40 >> 0x1f)) -
                        (short)((longlong)local_40 * 0x51eb851f >> 0x3f);
        }
        iVar16 = ((param_5 + 0xc9) * local_94) / 10000;
        iVar21 = local_68 + iVar16;
        if (iVar21 < 0) {
          local_30 = (short)(iVar21 / 0xc9) + -1;
        }
        else {
          local_30 = ((short)(iVar21 / 0xc9) + (short)(iVar21 >> 0x1f)) -
                     (short)((longlong)iVar21 * 0x28c1979 >> 0x3f);
        }
        iVar21 = ((param_5 + 0xc9) * local_b8) / 10000;
        iVar17 = local_64 + iVar21;
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
        iVar21 = local_64 - iVar21;
        if (iVar21 < 0) {
          local_26 = (short)(iVar21 / 0xc9) + -1;
        }
        else {
          local_26 = ((short)(iVar21 / 0xc9) + (short)(iVar21 >> 0x1f)) -
                     (short)((longlong)iVar21 * 0x28c1979 >> 0x3f);
        }
        local_24 = 5;
        if (((((-1 < local_38[0]) && (local_38[0] < g_worldGrid.sizeX)) && (-1 < local_38[1])) &&
            ((local_38[1] < g_worldGrid.sizeY && (-1 < local_38[2])))) && (local_38[2] < 5)) {
          iVar16 = (int)local_38[0];
          local_5c = iVar16;
          local_58 = (int)local_38[1];
          local_84 = (int)local_38[1];
          iVar21 = 1;
          local_fc = iVar16;
          do {
            iVar17 = (int)local_38[iVar21 * 4];
            if (iVar17 < iVar16) {
              local_5c = iVar17;
              iVar16 = iVar17;
            }
            iVar10 = (int)local_38[iVar21 * 4 + 1];
            if (iVar10 < local_58) {
              local_58 = iVar10;
            }
            if (local_fc < iVar17) {
              local_fc = iVar17;
            }
            if (local_84 < iVar10) {
              local_84 = iVar10;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < 3);
          if (iVar16 < 0) {
            iVar16 = 0;
            local_5c = 0;
          }
          if (local_58 < 0) {
            local_58 = 0;
          }
          iVar21 = local_fc + 1;
          if ((int)g_worldGrid.sizeX < local_fc + 1) {
            iVar21 = (int)g_worldGrid.sizeX;
          }
          iVar17 = local_84 + 1;
          if ((int)g_worldGrid.sizeY < local_84 + 1) {
            iVar17 = (int)g_worldGrid.sizeY;
          }
          local_8 = 1;
          local_84 = iVar17;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          local_d8 = 0;
          local_74 = 0;
          local_cc = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
          local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
          do {
            local_80 = local_58;
            iVar10 = iVar16;
            iVar23 = local_74;
            iVar24 = local_5c;
            if (local_58 < iVar17) {
              do {
                while (iVar16 = local_5c, local_5c = iVar16, iVar24 < iVar21) {
                  sVar12 = (short)iVar10;
                  if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                     ((sVar7 = (short)local_80, sVar7 < 0 ||
                      (((g_worldGrid.sizeY <= sVar7 || (sVar19 = (short)local_74, sVar19 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar19)))))) {
                    this = nullptr;
                  }
                  else {
                    this = STGridAt3D(g_worldGrid, sVar12, sVar7, sVar19).objects[0];
                  }
                  local_74 = iVar23;
                  if (((this != nullptr) &&
                      (iVar16 = (*this->vtable[5].slots_00_28[0])(), iVar16 != 0)) &&
                     ((this[1].vtable < (STWorldObjectVTable *)0x8 &&
                      ((g_playSystem_00802A38 == nullptr ||
                       (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8))))))
                  {
                    bVar2 = *(byte *)&this[1].vtable;
                    bVar3 = param_1->field_0x24;
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == bVar3) {
LAB_0057a96b:
                        iVar16 = 0;
                      }
                      else {
                        bVar4 = g_playerRelationMatrix[bVar2][bVar3];
                        if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar2] == 0)) {
                          iVar16 = -2;
                        }
                        else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][bVar2] == 0)) {
                          iVar16 = -1;
                        }
                        else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar2] == 1)) {
                          iVar16 = 1;
                        }
                        else {
                          if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][bVar2] != 1))
                          goto LAB_0057a96b;
                          iVar16 = 2;
                        }
                      }
                      bVar27 = iVar16 < 0;
                    }
                    else {
                      bVar27 = g_bulkInitializedRecords_008087C7[bVar3].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                    }
                    if ((bVar27) && (iVar16 = (*this->vtable[5].slots_00_28[2])(), iVar16 != 0)) {
                      st::fn_004031E3(this,(uint *)local_b4,(int *)local_e8,local_20);
                      iVar14 = st::fn_00401726(iVar25,iVar20,local_40,local_8c,local_98,local_a8,
                                                  (int)local_b4[0],(int)local_e8[0],(int)local_20[0]
                                                 );
                      if ((iVar14 < 0) ||
                         (iVar15 = st::fn_006ACF0D((iVar14 * local_8c) / 10000 + iVar25,
                                                (iVar14 * local_98) / 10000 + iVar20,
                                                (iVar14 * local_a8) / 10000 + local_40,
                                                (int)local_b4[0],(int)local_e8[0],(int)local_20[0]),
                         iVar15 * 0x324 <= iVar14 * local_c4 * 2)) {
                        puVar26 = (undefined4 *)(local_cc + local_d8 * 0x2c);
                        *puVar26 = st::machine_word_boundary_cast<undefined4>(this[1].vtable);
                        STField<undefined4>(puVar26,0x26) = *(undefined4 *)&this->field_0x18;
                        STField<undefined2>(puVar26,0x2a) = *(undefined2 *)&this[1].field_0xe;
                        STField<STWorldObject *>(puVar26,0x1a) = this;
                        *(short *)(puVar26 + 5) = sVar12;
                        STField<undefined2>(puVar26,0x16) = (undefined2)local_80;
                        *(undefined2 *)(puVar26 + 6) = (undefined2)local_74;
                        puVar26[2] = (int)local_b4[0];
                        puVar26[3] = (int)local_e8[0];
                        puVar26[4] = (int)local_20[0];
                        STField<undefined4>(puVar26,0x1e) = 0;
                        local_d8 = local_d8 + 1;
                      }
                    }
                  }
                  iVar10 = iVar10 + 1;
                  iVar17 = local_84;
                  iVar23 = local_74;
                  iVar24 = iVar10;
                }
                local_80 = local_80 + 1;
                iVar10 = iVar16;
                iVar24 = iVar16;
              } while (local_80 < iVar17);
            }
            local_74 = local_74 + 1;
          } while (local_74 < 5);
          local_f0 = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
          if (local_d8 != 0) {
            local_c8 = (int)param_7 % local_d8;
            iVar20 = 0;
            local_f0 = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
            if (0 < local_d8) {
              do {
                local_f0 = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
                if ((int)param_2 <= iVar20) break;
                iVar25 = local_c8 + iVar20;
                if (local_d8 <= iVar25) {
                  iVar25 = iVar25 - local_d8;
                }
                *(undefined2 *)(*param_3 + iVar20 * 8) =
                     *(undefined2 *)(local_cc + iVar25 * 0x2c + 8);
                *(undefined2 *)(*param_3 + 2 + iVar20 * 8) =
                     *(undefined2 *)(local_cc + iVar25 * 0x2c + 0xc);
                iVar16 = *param_3;
                *(undefined2 *)(iVar16 + 4 + iVar20 * 8) =
                     *(undefined2 *)(local_cc + iVar25 * 0x2c + 0x10);
                puVar1 = (undefined2 *)(*param_3 + iVar20 * 8);
                uVar18 = (undefined2)((uint)iVar16 >> 0x10);
                uVar8 = (undefined2)((uint)puVar1 >> 0x10);
                /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
                uVar8 = (**(code **)(*(int *)param_1 + 0x10))
                                  (CONCAT22(uVar18,param_1->field_0041),
                                   CONCAT22(uVar8,param_1->field_0043),
                                   CONCAT22(uVar18,param_1->field_0045),CONCAT22(uVar8,*puVar1),
                                   CONCAT22(uVar18,puVar1[1]),CONCAT22(uVar18,puVar1[2]));
                *(undefined2 *)(*param_3 + 6 + iVar20 * 8) = uVar8;
                *(undefined4 *)(&stack0xfffffec8 + iVar20 * 4) = 1;
                iVar20 = iVar20 + 1;
                local_f0 = st::pointer_boundary_cast<undefined1 *>(&stack0xfffffec8);
              } while (iVar20 < local_d8);
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

// 0057B350 FUN_0057b350
#line 4 "decomp/ST.exe/functions/0057B350/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_etorp.cpp
   Diagnostic line evidence: 342 | 349 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl st::fn_0057B350(int *param_1,int param_2,int *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar5;
  undefined2 uVar6;
  void *pvVar7;
  int local_EAX_70;
  undefined4 uVar8;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  int *piVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar5 = param_1;
  if ((param_2 < 0x1a) || (0x23 < param_2)) {
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_etorp.cpp"),0x156,0,0,st::mutable_c_string("%s"),
                               "ConusExplosion:Wrong number of torppedos (min 26, max 35)");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    pvVar7 = st::fn_006AAC70(param_2 << 3);
    *param_3 = (int)pvVar7;
    if (pvVar7 != nullptr) {
      local_8 = 0;
      local_c = -0xc9;
      local_18 = 3;
      do {
        local_14 = 3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)0xffffff37;
        do {
          iVar10 = -200;
          local_10 = 3;
          piVar11 = param_3 + local_8;
          do {
            if ((int)param_1 + iVar10 + local_c != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)),
                                 CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)),
                                 CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      if (param_2 == 0x1a) {
        return 1;
      }
      local_c = -100;
      local_10 = 2;
      do {
        local_14 = 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)0xffffff9c;
        do {
          iVar10 = -100;
          local_18 = 1;
          piVar11 = param_3 + local_8;
          do {
            if (param_2 <= local_8) break;
            if ((int)param_1 + local_c + iVar10 != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)),
                                 CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)),
                                 CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_18 = local_18 + -1;
          } while (-1 < local_18);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          return 1;
        }
      } while( true );
    }
    local_EAX_70 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_etorp.cpp"),0x15d,0,0,
                                      st::mutable_c_string("%s"),"SphereExplosion:Bad parameters");
    if (local_EAX_70 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0;
}

