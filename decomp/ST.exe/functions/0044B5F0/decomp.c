#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelectObjects

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_SelectObjects_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

void __thiscall
STAllPlayersC::SelectObjects
          (STAllPlayersC *this,STAllPlayersC_SelectObjects_param_1Enum param_1,uint param_2,
          uint param_3)

{
  int iVar1;
  byte objPtr;
  uint uVar3;
  int iVar4;
  int *piVar5;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar6;
  int iVar8;
  STGroupBoatC *this_00;
  STGameObjC *pSVar7;
  int iVar9;
  int local_EAX_1560;
  int local_EAX_1656;
  int local_EAX_1752;
  int local_EAX_1781;
  int local_EAX_1833;
  int local_EAX_1930;
  int local_EAX_2006;
  int local_EAX_2035;
  int local_EAX_2100;
  int local_EAX_2243;
  uint index;
  char cVar10;
  undefined1 local_14 [4];
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  objPtr = DAT_0080874d;
  uVar3 = (uint)DAT_0080874d;
  local_8 = nullptr;
  local_10 = nullptr;
  local_c = nullptr;
  local_8 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  switch(param_1) {
  case CASE_0:
    param_3 = 0;
    iVar9 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar9 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::DArrayAppend(local_8,(void *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_1:
    GetGObjFromZone(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_8,
                    nullptr);
    param_3 = 0;
    param_2 = local_8->count;
    if (0 < (int)param_2) {
      do {
        pSVar7 = GetObjPtr(this,objPtr,*(ushort *)((int)local_8->data + param_3 * 2),CASE_1);
        if ((((pSVar7 == nullptr) || (pSVar7->field_0020 != 0x14)) ||
            (iVar9 = pSVar7->vfunc_F8(), iVar9 == 0)) ||
           (iVar9 = pSVar7->vfunc_EC(), iVar9 == 0)) {
          DArrayRemoveAt(local_8,param_3);
          param_2 = param_2 - 1;
          param_3 = param_3 - 1;
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)param_2);
    }
    break;
  case CASE_2:
    param_3 = 0;
    iVar9 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar9 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           (((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar4 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 ||
             (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             ((&DAT_00800f00)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::DArrayAppend(local_8,(void *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_3:
    param_3 = 0;
    iVar9 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar9 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801000)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::DArrayAppend(local_8,(void *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_4:
    param_3 = 0;
    iVar9 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar9 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if ((((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
            (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00800fa0)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::DArrayAppend(local_8,(void *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_5:
    param_3 = 0;
    iVar9 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar9 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar9 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801010)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::DArrayAppend(local_8,(void *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_6:
    piVar5 = (int *)ST3DSMAPContext::sub_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
    if (((piVar5 != nullptr) && (piVar5[9] == uVar3)) && (piVar5[8] == 0x14)) {
      DArrayDestroy(local_8);
      GetGObjFromZone(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                      (int *)&local_c,nullptr);
      cVar10 = -1;
      iVar9 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      SVar6 = (**(code **)(*piVar5 + 0x2c))();
      local_8 = (DArrayTy *)
                GetTOBJListFromDArr(this,uVar3,(AnonShape_0043EED0_93C25F9A *)local_c,SVar6,iVar9,
                                    cVar10);
      DArrayDestroy(local_c);
      param_3 = 0;
      param_2 = local_8->count;
      if (0 < (int)param_2) {
        do {
          pSVar7 = GetObjPtr(this,objPtr,*(ushort *)((int)local_8->data + param_3 * 2),CASE_1);
          if ((((pSVar7 == nullptr) || (pSVar7->field_0020 != 0x14)) ||
              (iVar9 = pSVar7->vfunc_F8(), iVar9 == 0)) ||
             (iVar9 = pSVar7->vfunc_EC(), iVar9 == 0)) {
            DArrayRemoveAt(local_8,param_3);
            param_2 = param_2 - 1;
            param_3 = param_3 - 1;
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 < (int)param_2);
      }
    }
    break;
  case CASE_7:
    iVar8 = ST3DSMAPContext::sub_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
    if ((((iVar8 != 0) && (*(uint *)(iVar8 + 0x24) == uVar3)) && (*(int *)(iVar8 + 0x20) == 0x14))
       && ((*(ushort *)(iVar8 + 0x30) != 0xffff &&
           (this_00 = thunk_FUN_0042b760(objPtr,*(ushort *)(iVar8 + 0x30)),
           this_00 != nullptr)))) {
      DArrayDestroy(local_8);
      local_8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this_00);
      param_2 = local_8->count;
      index = 0;
      if (0 < (int)param_2) {
        do {
          DArrayGetElement(local_8,index,local_14);
          pSVar7 = GetObjPtr(this,objPtr,STPiece<0,2>(local_14),CASE_1);
          iVar9 = pSVar7->vfunc_EC();
          if (iVar9 == 0) {
            DArrayRemoveAt(local_8,index);
            param_2 = param_2 - 1;
            index = index - 1;
          }
          index = index + 1;
        } while ((int)index < (int)param_2);
      }
    }
    break;
  default:
    local_EAX_1560 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3123,0,0,"%s",
                            "STAllPlayersC::SelectObjects invalid type");
    if (local_EAX_1560 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (local_8->count == 0) {
    DArrayDestroy(local_8);
    return;
  }
  if (g_packedRecords_A62x8[uVar3].field200_0x203 == 0) {
    iVar9 = g_packedRecords_A62x8[uVar3].field96_0x163;
    if (iVar9 != 0) {
      if (iVar9 == 0x3c) {
        local_EAX_2100 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < local_EAX_2100) {
          ActivateTV(this,objPtr,0,local_EAX_2100);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < local_EAX_2100) goto cf_common_exit_0044BD53;
        PushTV(objPtr,0);
        if (g_packedRecords_A62x8[uVar3].field105_0x177 == uVar3) {
          CalibrateTmp(this,objPtr,0,1,&local_8->flags,(int *)&local_10,nullptr,nullptr);
          ResetActivityFromObjs(this,uVar3,0x3c,local_10,0,0);
          DArrayDestroy(local_10);
        }
        else {
          ResetActivityFromTmp(this,objPtr,0,1,0);
        }
      }
      else {
        if (iVar9 != 0x1ae) {
          local_EAX_2006 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3152,0,0,"%s",
                                  "STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_LEFT");
          if (local_EAX_2006 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0044BD53;
        }
        local_EAX_2035 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < local_EAX_2035) {
          ActivateTV(this,objPtr,0,local_EAX_2035);
          goto cf_common_exit_0044BD53;
        }
        PushTV(objPtr,0);
        ResetActivityFromTmp(this,objPtr,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    local_EAX_2243 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
    if (local_EAX_2243 < 1) goto cf_common_exit_0044BD3D;
    ActivateTV(this,objPtr,0,local_EAX_2243);
  }
  else {
    if (g_packedRecords_A62x8[uVar3].field200_0x203 != 1) {
      local_EAX_1656 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x317d,0,0,"%s",
                              "STAllPlayersC::SelectObjects GAMETYPE_BOAT wrong panel number");
      if (local_EAX_1656 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0044BD53;
    }
    g_packedRecords_A62x8[uVar3].field200_0x203 = 0;
    ResetActivityFromTmp(this,objPtr,1,0,0);
    iVar9 = g_packedRecords_A62x8[uVar3].field96_0x163;
    if (iVar9 == 0) {
      local_EAX_1930 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < local_EAX_1930) {
        ActivateTV(this,objPtr,0,local_EAX_1930);
        goto LAB_0044bd49;
      }
    }
    else if (iVar9 == 0x3c) {
      local_EAX_1833 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (-1 < local_EAX_1833) {
        ActivateTV(this,objPtr,0,local_EAX_1833);
        goto cf_common_exit_0044BD53;
      }
      PushTV(objPtr,0);
    }
    else {
      if (iVar9 != 0x1ae) {
        local_EAX_1752 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3179,0,0,"%s",
                                "STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_RIGHT");
        if (local_EAX_1752 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0044BD53;
      }
      local_EAX_1781 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < local_EAX_1781) {
        ActivateTV(this,objPtr,0,local_EAX_1781);
        goto cf_common_exit_0044BD53;
      }
      PushTV(objPtr,0);
    }
cf_common_exit_0044BD3D:
    AddObjsToTmp(this,uVar3,0,0,local_8);
  }
LAB_0044bd49:
  g_packedRecords_A62x8[uVar3].field96_0x163 = 0x3c;
cf_common_exit_0044BD53:
  DArrayDestroy(local_8);
  SelfCheckObjControl(this);
  return;
}

