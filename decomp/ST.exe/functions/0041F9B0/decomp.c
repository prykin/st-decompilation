#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::CheckRay

   [STSwitchEnumApplier] Switch target param_7 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_CheckRay_param_7Enum. Cases:
   CASE_9B=155;CASE_A3=163;CASE_A5=165;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AA=170;CASE_AB=171;CASE_AF=175;CASE_B0=176;CASE_B1=177;CASE_B2=178;CASE_B3=179;CASE_B4=180;CASE_B5=181;CASE_B9=185;CASE_BB=187;CASE_BC=188

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=10,
   ignored=0, unknown=0 */

int __thiscall
STSprGameObjC::CheckRay
          (STSprGameObjC *this,short param_1,short param_2,short param_3,short param_4,short param_5
          ,short param_6,STSprGameObjC_CheckRay_param_7Enum param_7,int *param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  int local_EAX_47;
  int iVar5;
  int iVar9;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  STWorldObject *pSVar9;
  short sVar10;
  int iVar11;
  bool bVar12;
  InternalExceptionFrame local_ac;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  byte local_40;
  undefined3 uStack_3f;
  byte local_3c;
  undefined3 uStack_3b;
  byte local_38;
  undefined3 uStack_37;
  byte local_34;
  undefined3 uStack_33;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  STSprGameObjC *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_1c = this;
  local_EAX_47 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0);
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    if (local_EAX_47 != -0x5001fff7) {
      if (local_EAX_47 == -0x5001fff6) {
        return 1;
      }
      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xb9b,0,local_EAX_47,
                                 "%s","STSprGameObjC::CheckRay");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_47,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xb9c);
    }
    return 0;
  }
  switch(param_7) {
  case CASE_9B:
  case CASE_A3:
  case CASE_A5:
  case CASE_A6:
  case CASE_A7:
  case CASE_A8:
  case CASE_A9:
  case CASE_AA:
  case CASE_AB:
  case CASE_AF:
  case CASE_B0:
  case CASE_B1:
  case CASE_B2:
  case CASE_B3:
  case CASE_B4:
  case CASE_B5:
  case CASE_B9:
  case CASE_BB:
  case CASE_BC:
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xb69
              );
  }
  if (param_8 != nullptr) {
    *param_8 = 0;
  }
  iVar5 = FUN_006acf0d((int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6
                      );
  bVar4 = thunk_FUN_00430750(param_7);
  local_30 = iVar5 / (int)(uint)bVar4;
  if (local_30 < 1) {
    local_30 = 1;
  }
  local_28 = 1;
  if (0 < local_30) {
    local_60 = (int)param_4 - (int)param_1;
    local_50 = (int)param_5 - (int)param_2;
    local_48 = (int)param_6 - (int)param_3;
    local_18 = (int)param_1;
    local_14 = (int)param_2;
    local_10 = (int)param_3;
    do {
      iVar8 = (local_60 * local_28) / local_30 + (int)param_1;
      iVar7 = (local_50 * local_28) / local_30 + (int)param_2;
      iVar11 = (local_48 * local_28) / local_30 + (int)param_3;
      local_64 = iVar8;
      local_5c = iVar7;
      local_54 = iVar11;
      local_8 = FUN_006acf0d(local_18,local_14,local_10,iVar8,iVar7,iVar11);
      local_8 = local_8 / 0x32;
      if (local_8 < 1) {
        local_8 = 1;
      }
      if (0 < local_8) {
        local_4c = iVar11 - local_10;
        local_68 = iVar7 - local_14;
        local_58 = iVar8 - local_18;
        local_44 = local_8;
        local_2c = local_68;
        local_24 = local_4c;
        local_20 = local_58;
        do {
          iVar7 = local_20 / local_8 + local_18;
          local_c = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = local_2c / local_8 + local_14;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar8 = local_24 / local_8 + local_10;
          iVar8 = STBiasedDiv16(iVar8, 200); /* exact signed 16-bit grid-index division */
          sVar5 = (short)local_c;
          sVar6 = (short)iVar7;
          sVar10 = (short)iVar8;
          if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar6 < 0)) ||
              ((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)))) || (g_worldGrid.sizeZ <= sVar10)) {
            pSVar9 = nullptr;
          }
          else {
            pSVar9 = STGridAt3D(g_worldGrid, sVar5, sVar6, sVar10).objects[0];
          }
          if (((pSVar9 == nullptr) || ((STWorldObjectVTable *)0x7 < pSVar9[1].vtable))
             || ((g_playSystem_00802A38 != nullptr &&
                 (7 < g_bulkInitializedRecords_008087C7[(int)pSVar9[1].vtable].field_0022)))) {
LAB_0041fe0d:
            if (STGridAt3D(g_pathingGrid, local_c, iVar7, iVar8) < 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb85);
            }
            sVar5 = (short)local_c;
            if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar6 < 0)) ||
               (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)))) {
              pSVar9 = nullptr;
            }
            else {
              pSVar9 = STGridAt3D(g_worldGrid, sVar5, sVar6, sVar10).objects[1];
            }
            if (((pSVar9 != nullptr) && (pSVar9[1].vtable < (STWorldObjectVTable *)0x8)
                ) && (((g_playSystem_00802A38 == nullptr ||
                       (g_bulkInitializedRecords_008087C7[(int)pSVar9[1].vtable].field_0022 < 8)) &&
                      (local_1c->field_0018 != *(int *)&pSVar9->field_0x18)))) {
              if ((pSVar9[0xc].value_20 & 0x1000) != 0) {
                if (param_8 != nullptr) {
                  *param_8 = (int)pSVar9;
                }
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb8c);
              }
              if (param_9 == 0) {
                if (((STWorldObjectVTable *)0x7 < pSVar9[1].vtable) ||
                   ((g_playSystem_00802A38 != nullptr &&
                    (7 < g_bulkInitializedRecords_008087C7[(int)pSVar9[1].vtable].field_0022))))
                goto cf_continue_loop_0042004A;
                bVar4 = *(byte *)&pSVar9[1].vtable;
                bVar1 = (byte)local_1c->field_0024;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_38 = CONCAT31(uStack_37,bVar4);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_3c = CONCAT31(uStack_3b,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar4 == bVar1) {
LAB_0041fffd:
                    iVar7 = 0;
                  }
                  else {
                    bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar7 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar7 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                      iVar7 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                      goto LAB_0041fffd;
                      iVar7 = 2;
                    }
                  }
                  bVar12 = iVar7 < 0;
                }
                else {
                  bVar12 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar4].field_0023;
                }
                if ((!bVar12) && (pSVar9->value_20 == 0x1ae)) {
                  RaiseInternalException
                            (-0x5001fff7,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb91);
                }
              }
              RaiseInternalException
                        (-0x5001fff6,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb93);
            }
          }
          else if (local_1c->field_0018 != *(int *)&pSVar9->field_0x18) {
            if (param_8 != nullptr) {
              *param_8 = (int)pSVar9;
            }
            if ((pSVar9[0xc].value_20 & 0x1000) != 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb7e);
            }
            if (param_9 == 0) {
              if (((STWorldObjectVTable *)0x7 < pSVar9[1].vtable) ||
                 ((g_playSystem_00802A38 != nullptr &&
                  (7 < g_bulkInitializedRecords_008087C7[(int)pSVar9[1].vtable].field_0022))))
              goto cf_continue_loop_0042004A;
              bVar4 = *(byte *)&pSVar9[1].vtable;
              bVar1 = (byte)local_1c->field_0024;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_40 = CONCAT31(uStack_3f,bVar4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_34 = CONCAT31(uStack_33,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar4 == bVar1) {
LAB_0041fdc6:
                  iVar11 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar11 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar11 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                    iVar11 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                    goto LAB_0041fdc6;
                    iVar11 = 2;
                  }
                }
                bVar12 = iVar11 < 0;
              }
              else {
                bVar12 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar4].field_0023;
              }
              if (!bVar12) {
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb81);
              }
            }
            RaiseInternalException
                      (-0x5001fff6,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\Tc_gobj.cpp",0xb83);
            goto LAB_0041fe0d;
          }
cf_continue_loop_0042004A:
          local_20 = local_20 + local_58;
          local_2c = local_2c + local_68;
          local_24 = local_24 + local_4c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
        local_44 = 0;
        iVar7 = local_5c;
        iVar8 = local_64;
        iVar11 = local_54;
      }
      local_28 = local_28 + 1;
      local_18 = iVar8;
      local_14 = iVar7;
      local_10 = iVar11;
    } while (local_28 <= local_30);
  }
  g_currentExceptionFrame = local_ac.previous;
  return 1;
}

