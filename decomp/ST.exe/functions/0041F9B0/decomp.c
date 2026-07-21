#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::CheckRay

   [STSwitchEnumApplier] Switch target param_7 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_CheckRay_param_7Enum. Cases:
   CASE_9B=155;CASE_A3=163;CASE_A5=165;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AA=170;CASE_AB=171;CASE_AF=175;CASE_B0=176;CASE_B1=177;CASE_B2=178;CASE_B3=179;CASE_B4=180;CASE_B5=181;CASE_B9=185;CASE_BB=187;CASE_BC=188
    */

undefined4 __thiscall
STSprGameObjC::CheckRay
          (STSprGameObjC *this,short param_1,short param_2,short param_3,short param_4,short param_5
          ,short param_6,STSprGameObjC_CheckRay_param_7Enum param_7,int *param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  STWorldObject *pSVar10;
  short sVar11;
  int iVar12;
  bool bVar13;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    if (iVar5 != -0x5001fff7) {
      if (iVar5 == -0x5001fff6) {
        return 1;
      }
      iVar9 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9b,0,iVar5,&DAT_007a4ccc
                                 ,s_STSprGameObjC__CheckRay_007a4f54);
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9c);
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
              (-0x5001fff6,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb69
              );
  }
  if (param_8 != (int *)0x0) {
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
      iVar9 = (local_60 * local_28) / local_30 + (int)param_1;
      iVar5 = (local_50 * local_28) / local_30 + (int)param_2;
      iVar12 = (local_48 * local_28) / local_30 + (int)param_3;
      local_64 = iVar9;
      local_5c = iVar5;
      local_54 = iVar12;
      local_8 = FUN_006acf0d(local_18,local_14,local_10,iVar9,iVar5,iVar12);
      local_8 = local_8 / 0x32;
      if (local_8 < 1) {
        local_8 = 1;
      }
      if (0 < local_8) {
        local_4c = iVar12 - local_10;
        local_68 = iVar5 - local_14;
        local_58 = iVar9 - local_18;
        local_44 = local_8;
        local_2c = local_68;
        local_24 = local_4c;
        local_20 = local_58;
        do {
          iVar5 = local_20 / local_8 + local_18;
          sVar8 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            local_c = (short)(((short)(iVar5 / 0xc9) + sVar8) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (int)(short)(((short)(iVar5 / 0xc9) + sVar8) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
          }
          iVar5 = local_2c / local_8 + local_14;
          sVar8 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar8) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar8) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
          }
          iVar9 = local_24 / local_8 + local_10;
          sVar8 = (short)(iVar9 >> 0x1f);
          if (iVar9 < 0) {
            iVar9 = (short)(((short)(iVar9 / 200) + sVar8) -
                           (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar9 = (int)(short)(((short)(iVar9 / 200) + sVar8) -
                                (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
          }
          sVar7 = (short)local_c;
          sVar8 = (short)iVar5;
          sVar11 = (short)iVar9;
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar8 < 0)) ||
              ((g_worldGrid.sizeY <= sVar8 || (sVar11 < 0)))) || (g_worldGrid.sizeZ <= sVar11)) {
            pSVar10 = (STWorldObject *)0x0;
          }
          else {
            pSVar10 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar11 +
                       (int)g_worldGrid.sizeX * (int)sVar8 + (int)sVar7].objects[0];
          }
          if (((pSVar10 == (STWorldObject *)0x0) || ((STWorldObjectVTable *)0x7 < pSVar10[1].vtable)
              ) || ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                    (7 < (byte)(&DAT_008087e9)[(int)pSVar10[1].vtable * 0x51])))) {
LAB_0041fe0d:
            if (g_pathingGrid.cells
                [g_pathingGrid.sizeX * iVar5 + local_c + g_pathingGrid.planeStride * iVar9] < 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb85);
            }
            sVar7 = (short)local_c;
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar8 < 0)) ||
               (((g_worldGrid.sizeY <= sVar8 || (sVar11 < 0)) || (g_worldGrid.sizeZ <= sVar11)))) {
              pSVar10 = (STWorldObject *)0x0;
            }
            else {
              pSVar10 = g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar11 +
                         (int)g_worldGrid.sizeX * (int)sVar8 + (int)sVar7].objects[1];
            }
            if (((pSVar10 != (STWorldObject *)0x0) &&
                (pSVar10[1].vtable < (STWorldObjectVTable *)0x8)) &&
               (((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                 ((byte)(&DAT_008087e9)[(int)pSVar10[1].vtable * 0x51] < 8)) &&
                (local_1c->field_0018 != *(int *)&pSVar10->field_0x18)))) {
              if ((pSVar10[0xc].value_20 & 0x1000) != 0) {
                if (param_8 != (int *)0x0) {
                  *param_8 = (int)pSVar10;
                }
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb8c);
              }
              if (param_9 == 0) {
                if (((STWorldObjectVTable *)0x7 < pSVar10[1].vtable) ||
                   ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                    (7 < (byte)(&DAT_008087e9)[(int)pSVar10[1].vtable * 0x51]))))
                goto cf_continue_loop_0042004A;
                bVar4 = *(byte *)&pSVar10[1].vtable;
                bVar1 = local_1c->field_0024;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_38 = CONCAT31(uStack_37,bVar4);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_3c = CONCAT31(uStack_3b,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar4 == bVar1) {
LAB_0041fffd:
                    iVar5 = 0;
                  }
                  else {
                    bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar5 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                      iVar5 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                      iVar5 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                      goto LAB_0041fffd;
                      iVar5 = 2;
                    }
                  }
                  bVar13 = iVar5 < 0;
                }
                else {
                  bVar13 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar4 * 0x51];
                }
                if ((!bVar13) && (pSVar10->value_20 == 0x1ae)) {
                  RaiseInternalException
                            (-0x5001fff7,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb91);
                }
              }
              RaiseInternalException
                        (-0x5001fff6,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb93);
            }
          }
          else if (local_1c->field_0018 != *(int *)&pSVar10->field_0x18) {
            if (param_8 != (int *)0x0) {
              *param_8 = (int)pSVar10;
            }
            if ((pSVar10[0xc].value_20 & 0x1000) != 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb7e);
            }
            if (param_9 == 0) {
              if (((STWorldObjectVTable *)0x7 < pSVar10[1].vtable) ||
                 ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                  (7 < (byte)(&DAT_008087e9)[(int)pSVar10[1].vtable * 0x51]))))
              goto cf_continue_loop_0042004A;
              bVar4 = *(byte *)&pSVar10[1].vtable;
              bVar1 = local_1c->field_0024;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_40 = CONCAT31(uStack_3f,bVar4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_34 = CONCAT31(uStack_33,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar4 == bVar1) {
LAB_0041fdc6:
                  iVar12 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar12 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar12 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                    iVar12 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                    goto LAB_0041fdc6;
                    iVar12 = 2;
                  }
                }
                bVar13 = iVar12 < 0;
              }
              else {
                bVar13 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar4 * 0x51];
              }
              if (!bVar13) {
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb81);
              }
            }
            RaiseInternalException
                      (-0x5001fff6,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb83);
            goto LAB_0041fe0d;
          }
cf_continue_loop_0042004A:
          local_20 = local_20 + local_58;
          local_2c = local_2c + local_68;
          local_24 = local_24 + local_4c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
        local_44 = 0;
        iVar5 = local_5c;
        iVar9 = local_64;
        iVar12 = local_54;
      }
      local_28 = local_28 + 1;
      local_18 = iVar9;
      local_14 = iVar5;
      local_10 = iVar12;
    } while (local_28 <= local_30);
  }
  g_currentExceptionFrame = local_ac.previous;
  return 1;
}

