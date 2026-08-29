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
  DArrayOf_STGameObjCPtr *pDVar1;
  dword dVar2;
  byte objPtr;
  uint uVar4;
  int piVar5_mg0;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  int iVar8;
  STGroupBoatC *this_00;
  STGameObjC *pSVar6;
  int iVar7;
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
  char cVar8;
  byte local_14 [4];
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  objPtr = DAT_0080874d;
  uVar4 = (uint)DAT_0080874d;
  local_8 = nullptr;
  local_10 = nullptr;
  local_c = nullptr;
  local_8 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  switch(param_1) {
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_0:
    param_3 = 0;
    pDVar1 = g_packedRecords_A62x8[uVar4].field3_0x9;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        pSVar6 = pDVar1->data[param_3];
        if (((pSVar6 != nullptr) && (pSVar6->field_0020 == 0x14)) &&
           /* ST_CALLSITE[0044B673]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           ((iVar7 = pSVar6->vfunc_F8(), iVar7 == 1 &&
            /* ST_CALLSITE[0044B682]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar7 = pSVar6->vfunc_EC(), iVar7 == 1)))) {

          Library::DKW::TBL::DArrayAppend(local_8,&pSVar6->field_0032);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_1:
    /* ST_CALLSITE[0044B6CF]: CALL 0x00405227; direct=00405227 STAllPlayersC::GetGObjFromZone */
    GetGObjFromZone(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_8,
                    nullptr);
    param_3 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = local_8->count;
    if (0 < (int)param_2) {
      do {
        /* ST_CALLSITE[0044B6FB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar6 = GetObjPtr(this,objPtr,STFixedStrideAt<ushort>(local_8->data, param_3),CASE_1);
        if ((((pSVar6 == nullptr) || (pSVar6->field_0020 != 0x14)) ||
            /* ST_CALLSITE[0044B710]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar7 = (*pSVar6->vtable[1].vfunc_24)(pSVar6), iVar7 == 0)) ||
           /* ST_CALLSITE[0044B71E]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar7 = (*pSVar6->vtable[1].vfunc_18)(pSVar6), iVar7 == 0)) {

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
    pDVar1 = g_packedRecords_A62x8[uVar4].field3_0x9;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        pSVar6 = pDVar1->data[param_3];
        if (((pSVar6 != nullptr) && (pSVar6->field_0020 == 0x14)) &&
           /* ST_CALLSITE[0044B79D]: CALL dword ptr [EDX + 0x2c] */
           (((iVar7 = pSVar6->vfunc_2C(),
             (STBitTest(g_bitset_00800F10, iVar7 + 0x41U)) != 0 ||
             /* ST_CALLSITE[0044B7C9]: CALL dword ptr [EAX + 0x2c] */
             (iVar7 = pSVar6->vfunc_2C(),
             (STBitTest(g_bitset_00800F00, iVar7 + 0x41U)) != 0)) &&
            /* ST_CALLSITE[0044B7F5]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            ((iVar7 = pSVar6->vfunc_F8(), iVar7 == 1 &&
             /* ST_CALLSITE[0044B804]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = pSVar6->vfunc_EC(), iVar7 == 1)))))) {

          Library::DKW::TBL::DArrayAppend(local_8,&pSVar6->field_0032);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_3:
    param_3 = 0;
    pDVar1 = g_packedRecords_A62x8[uVar4].field3_0x9;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        pSVar6 = pDVar1->data[param_3];
        if (((pSVar6 != nullptr) && (pSVar6->field_0020 == 0x14)) &&
           /* ST_CALLSITE[0044B876]: CALL dword ptr [EDX + 0x2c] */
           ((iVar7 = pSVar6->vfunc_2C(),
            (STBitTest(g_bitset_00801000, iVar7 + 0x41U)) != 0 &&
            /* ST_CALLSITE[0044B8A2]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            ((iVar7 = pSVar6->vfunc_F8(), iVar7 == 1 &&
             /* ST_CALLSITE[0044B8B1]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = pSVar6->vfunc_EC(), iVar7 == 1)))))) {

          Library::DKW::TBL::DArrayAppend(local_8,&pSVar6->field_0032);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_4:
    param_3 = 0;
    pDVar1 = g_packedRecords_A62x8[uVar4].field3_0x9;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        pSVar6 = pDVar1->data[param_3];
        if ((((pSVar6 != nullptr) && (pSVar6->field_0020 == 0x14)) &&
            /* ST_CALLSITE[0044B91F]: CALL dword ptr [EDX + 0x2c] */
            (iVar7 = pSVar6->vfunc_2C(),
            (STBitTest(g_bitset_00800FA0, iVar7 + 0x41U)) != 0)) &&
           /* ST_CALLSITE[0044B94B]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           ((iVar7 = pSVar6->vfunc_F8(), iVar7 == 1 &&
            /* ST_CALLSITE[0044B95A]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar7 = pSVar6->vfunc_EC(), iVar7 == 1)))) {

          Library::DKW::TBL::DArrayAppend(local_8,&pSVar6->field_0032);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_5:
    param_3 = 0;
    pDVar1 = g_packedRecords_A62x8[uVar4].field3_0x9;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        pSVar6 = pDVar1->data[param_3];
        if (((pSVar6 != nullptr) && (pSVar6->field_0020 == 0x14)) &&
           /* ST_CALLSITE[0044B9C8]: CALL dword ptr [EDX + 0x2c] */
           ((iVar7 = pSVar6->vfunc_2C(),
            (STBitTest(g_bitset_00801010, iVar7 + 0x41U)) != 0 &&
            /* ST_CALLSITE[0044B9F4]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            ((iVar7 = pSVar6->vfunc_F8(), iVar7 == 1 &&
             /* ST_CALLSITE[0044BA03]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = pSVar6->vfunc_EC(), iVar7 == 1)))))) {

          Library::DKW::TBL::DArrayAppend(local_8,&pSVar6->field_0032);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_6:
    /* ST_CALLSITE[0044BA40]: CALL 0x006eb350; direct=006EB350 ST3DSMAPContext::sub_006EB350; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    piVar5_mg0 = ST3DSMAPContext::sub_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
    if (((piVar5_mg0 != 0) && (STField<uint>(piVar5_mg0,0x24) == uVar4)) &&
       (STField<int>(piVar5_mg0,0x20) == 0x14)) {
      DArrayDestroy(local_8);
      /* ST_CALLSITE[0044BA8F]: CALL 0x00405227; direct=00405227 STAllPlayersC::GetGObjFromZone */
      GetGObjFromZone(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                      (int *)&local_c,nullptr);
      cVar8 = -1;
      iVar7 = 0;
      /* ST_CALLSITE[0044BA9C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      SVar5 = (**(code **)(*(int *)piVar5_mg0 + 0x2c))();
      local_8 = (DArrayTy *)
                /* ST_CALLSITE[0044BAA7]: CALL 0x004050b0; direct=004050B0 STAllPlayersC::GetTOBJListFromDArr */
                GetTOBJListFromDArr(this,uVar4,(RecoveredRecordView_0043EED0_30C6163F *)local_c,
                                    SVar5,iVar7,cVar8);
      DArrayDestroy(local_c);
      param_3 = 0;
      param_2 = local_8->count;
      if (0 < (int)param_2) {
        do {
          /* ST_CALLSITE[0044BAE3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar6 = GetObjPtr(this,objPtr,STFixedStrideAt<ushort>(local_8->data, param_3),CASE_1);
          if ((((pSVar6 == nullptr) || (pSVar6->field_0020 != 0x14)) ||
              /* ST_CALLSITE[0044BAF8]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              (iVar7 = (*pSVar6->vtable[1].vfunc_24)(pSVar6), iVar7 == 0)) ||
             /* ST_CALLSITE[0044BB06]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = (*pSVar6->vtable[1].vfunc_18)(pSVar6), iVar7 == 0)) {

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
    if ((((iVar8 != 0) && (STField<uint>(iVar8,0x24) == uVar4)) && (STField<int>(iVar8,0x20) == 0x14))
       && ((STField<ushort>(iVar8,0x30) != 0xffff &&
           /* ST_CALLSITE[0044BB7E]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STGroupC; source view only; no Ghidra override */
           (this_00 = thunk_FUN_0042b760(objPtr,STField<ushort>(iVar8,0x30)),
           this_00 != nullptr)))) {
      DArrayDestroy(local_8);
      /* ST_CALLSITE[0044BB98]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
      local_8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this_00);
      param_2 = local_8->count;
      index = 0;
      if (0 < (int)param_2) {
        do {

          DArrayGetElement(local_8,index,local_14);
          /* ST_CALLSITE[0044BBC3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar6 = GetObjPtr(this,objPtr,STPiece<0,2>(local_14),CASE_1);
          /* ST_CALLSITE[0044BBCC]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = (*pSVar6->vtable[1].vfunc_18)(pSVar6);
          if (iVar7 == 0) {

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
  if (g_packedRecords_A62x8[uVar4].field200_0x203 == 0) {
    iVar7 = g_packedRecords_A62x8[uVar4].field96_0x163;
    if (iVar7 != 0) {
      if (iVar7 == 0x3c) {
        /* ST_CALLSITE[0044BE24]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_2100 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < local_EAX_2100) {
          /* ST_CALLSITE[0044BE33]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,objPtr,0,local_EAX_2100);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < local_EAX_2100) goto cf_common_exit_0044BD53;
        /* ST_CALLSITE[0044BE48]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
        PushTV(objPtr,0);
        if (g_packedRecords_A62x8[uVar4].field105_0x177 == uVar4) {
          /* ST_CALLSITE[0044BE6A]: CALL 0x004020d6; direct=004020D6 STAllPlayersC::CalibrateTmp */
          CalibrateTmp(this,objPtr,0,1,&local_8->flags,(int *)&local_10,nullptr,nullptr);
          /* ST_CALLSITE[0044BE7C]: CALL 0x004027c0; direct=004027C0 STAllPlayersC::ResetActivityFromObjs */
          ResetActivityFromObjs(this,uVar4,0x3c,local_10,0,0);
          DArrayDestroy(local_10);
        }
        else {
          /* ST_CALLSITE[0044BE9A]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
          ResetActivityFromTmp(this,objPtr,0,1,0);
        }
      }
      else {
        if (iVar7 != 0x1ae) {

          local_EAX_2006 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3152,0,0,"%s",
                                  "STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_LEFT");
          if (local_EAX_2006 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0044BD53;
        }
        /* ST_CALLSITE[0044BDE3]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
        local_EAX_2035 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < local_EAX_2035) {
          /* ST_CALLSITE[0044BDF2]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
          ActivateTV(this,objPtr,0,local_EAX_2035);
          goto cf_common_exit_0044BD53;
        }
        /* ST_CALLSITE[0044BE01]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
        PushTV(objPtr,0);
        /* ST_CALLSITE[0044BE0F]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
        ResetActivityFromTmp(this,objPtr,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    /* ST_CALLSITE[0044BEB3]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
    local_EAX_2243 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
    if (local_EAX_2243 < 1) goto cf_common_exit_0044BD3D;
    /* ST_CALLSITE[0044BEC6]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
    ActivateTV(this,objPtr,0,local_EAX_2243);
  }
  else {
    if (g_packedRecords_A62x8[uVar4].field200_0x203 != 1) {

      local_EAX_1656 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x317d,0,0,"%s",
                              "STAllPlayersC::SelectObjects GAMETYPE_BOAT wrong panel number");
      if (local_EAX_1656 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0044BD53;
    }
    g_packedRecords_A62x8[uVar4].field200_0x203 = 0;
    /* ST_CALLSITE[0044BC91]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
    ResetActivityFromTmp(this,objPtr,1,0,0);
    iVar7 = g_packedRecords_A62x8[uVar4].field96_0x163;
    if (iVar7 == 0) {
      /* ST_CALLSITE[0044BD7A]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
      local_EAX_1930 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < local_EAX_1930) {
        /* ST_CALLSITE[0044BD8D]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,objPtr,0,local_EAX_1930);
        goto LAB_0044bd49;
      }
    }
    else if (iVar7 == 0x3c) {
      /* ST_CALLSITE[0044BD19]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
      local_EAX_1833 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (-1 < local_EAX_1833) {
        /* ST_CALLSITE[0044BD28]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,objPtr,0,local_EAX_1833);
        goto cf_common_exit_0044BD53;
      }
      /* ST_CALLSITE[0044BD34]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
      PushTV(objPtr,0);
    }
    else {
      if (iVar7 != 0x1ae) {

        local_EAX_1752 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3179,0,0,"%s",
                                "STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_RIGHT");
        if (local_EAX_1752 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0044BD53;
      }
      /* ST_CALLSITE[0044BCE5]: CALL 0x0040196f; direct=0040196F STAllPlayersC::CheckTmps */
      local_EAX_1781 = CheckTmps(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < local_EAX_1781) {
        /* ST_CALLSITE[0044BCF4]: CALL 0x0040317f; direct=0040317F STAllPlayersC::ActivateTV */
        ActivateTV(this,objPtr,0,local_EAX_1781);
        goto cf_common_exit_0044BD53;
      }
      /* ST_CALLSITE[0044BD00]: CALL 0x00405920; direct=00405920 STAllPlayersC::PushTV */
      PushTV(objPtr,0);
    }
cf_common_exit_0044BD3D:
    /* ST_CALLSITE[0044BD44]: CALL 0x00405bbe; direct=00405BBE STAllPlayersC::AddObjsToTmp */
    AddObjsToTmp(this,uVar4,0,0,local_8);
  }
LAB_0044bd49:
  g_packedRecords_A62x8[uVar4].field96_0x163 = 0x3c;
cf_common_exit_0044BD53:
  DArrayDestroy(local_8);
  /* ST_CALLSITE[0044BD5E]: CALL 0x004027de; direct=004027DE STAllPlayersC::SelfCheckObjControl */
  SelfCheckObjControl(this);
  return;
}

