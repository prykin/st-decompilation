#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterPGPair

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
STAllPlayersC::RegisterPGPair(STAllPlayersC *this,uint param_1,uint *param_2,uint *param_3)

{
  int iVar2;
  STGameObjC *pSVar2;
  int iVar4;
  DArrayTy *pDVar5;
  STBoatC *this_00;
  int iVar3;
  uint uVar6;
  STAllPlayersC *this_01;
  uint uVar7;
  bool bVar8;
  char objPtr;
  InternalExceptionFrame local_88;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  int local_38;
  STAllPlayersC *local_34;
  dword local_30;
  uint local_2c;
  DArrayTy *local_28;
  int *local_24;
  uint local_20;
  short local_1a;
  DArrayTy *local_18;
  DArrayTy *local_14;
  uint local_10;
  uint local_c;
  short local_8 [2];

  local_18 = nullptr;
  local_14 = nullptr;
  local_28 = nullptr;
  local_38 = 0;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_34 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_88.previous;
    if (local_28 != nullptr) {
      DArrayDestroy(local_28);
    }
    if (local_18 != nullptr) {
      DArrayDestroy(local_18);
    }
    if (local_14 != nullptr) {
      DArrayDestroy(local_14);
    }
    if (iVar2 != -0x5001fff7) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x28a2,0,0,"%s",
                                 "STAllPlayersC::RegisterPGPair");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x28a3);
    }
    return;
  }
  if ((((param_2 == nullptr) || (param_3 == nullptr)) ||
      (uVar6 = param_2[3], local_10 = uVar6, uVar6 == 0)) || (local_c = param_3[3], local_c == 0)) {
    uVar6 = local_10;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2837);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_18,param_2);
  Library::DKW::TBL::FUN_006afe40((int *)&local_14,param_3);
  uVar7 = 0;
  objPtr = (char)param_1;
  this_01 = local_34;
  if (0 < (int)uVar6) {
    do {
      DArrayGetElement(local_18,uVar7,local_8);
      this_01 = local_34;
      pSVar2 = GetObjPtr(local_34,objPtr,local_8[0],CASE_1);
      if ((pSVar2 == nullptr) ||
         (iVar4 = (*pSVar2->vtable[1].vfunc_24)(pSVar2), iVar4 == 0)) {
        DArrayRemoveAt(local_18,uVar7);
        uVar6 = uVar6 - 1;
        uVar7 = uVar7 - 1;
        local_10 = uVar6;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar6);
  }
  if (uVar6 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2842);
  }
  uVar6 = 0;
  if (0 < (int)local_c) {
    do {
      DArrayGetElement(local_14,uVar6,local_8);
      pSVar2 = GetObjPtr(this_01,objPtr,local_8[0],CASE_1);
      if (((pSVar2 == nullptr) || (iVar4 = thunk_FUN_00490d90(pSVar2), iVar4 == 0)) ||
         ((iVar4 = (*pSVar2->vtable[1].vfunc_24)(pSVar2), iVar4 == 0 || (pSVar2->field_0030 == -1)))
         ) {
        DArrayRemoveAt(local_14,uVar6);
        local_c = local_c - 1;
        uVar6 = uVar6 - 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_c);
  }
  if (local_c == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x284d);
  }
  uVar6 = 0;
  pDVar5 = local_28;
  if (0 < (int)local_10) {
    do {
      DArrayGetElement(local_18,uVar6,local_8);
      uVar7 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement(local_14,uVar7,&local_1a);
          if (local_8[0] == local_1a) {
            if (pDVar5 == nullptr) {
              pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_28 = pDVar5;
            }
            Library::DKW::TBL::DArrayAppend(pDVar5,local_8);
            DArrayRemoveAt(local_18,uVar6);
            local_10 = local_10 - 1;
            uVar6 = uVar6 - 1;
            DArrayRemoveAt(local_14,uVar7);
            local_c = local_c - 1;
            uVar7 = uVar7 - 1;
            if ((local_10 == 0) || (local_c == 0)) {
              local_38 = 1;
              break;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)local_c);
      }
      this_01 = local_34;
    } while ((local_38 != 1) && (uVar6 = uVar6 + 1, (int)uVar6 < (int)local_10));
  }
  if (pDVar5 == nullptr) goto LAB_00445e36;
  if ((local_10 == 0) && (local_c == 0)) {
    local_30 = pDVar5->count;
    local_20 = 0;
    if (0 < (int)local_30) {
      local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
      do {
        DArrayGetElement(pDVar5,local_20,local_8);
        this_00 = (STBoatC *)GetObjPtr(this_01,objPtr,local_8[0],CASE_1);
        local_2c = g_playSystem_00802A38->field_00E4;
        STBoatC::CmdToObj(this_00,CASE_21,&local_2c);
        if ((*local_24 != 0) && (iVar4 = _DeleteGuardBoat(this_01,objPtr,local_8[0],1), iVar4 == -1)
           ) {
          _DeleteGuardBoat(this_01,objPtr,local_8[0],0);
        }
        local_20 = local_20 + 1;
      } while ((int)local_20 < (int)local_30);
    }
    if (g_packedRecords_A62x8[objPtr].field1976_0x9f6 != 0) {
      OptimizeGuardBoats(this_01,objPtr);
      DistributeGuardBoats(this_01,objPtr);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2872);
  }
  if (local_10 == 0) {
    bVar8 = local_c == 0;
    if (!bVar8) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_18,&pDVar5->flags);
      goto LAB_00445db2;
    }
  }
  else {
LAB_00445db2:
    bVar8 = local_c == 0;
  }
  if (bVar8) {
    if (local_10 != 0) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_14,&pDVar5->flags);
      goto LAB_00445dca;
    }
  }
  else {
LAB_00445dca:
    if ((local_10 != 0) && (local_c != 0)) {
      local_30 = pDVar5->count;
      local_20 = 0;
      if (0 < (int)local_30) {
        do {
          DArrayGetElement(pDVar5,local_20,local_8);
          Library::DKW::TBL::DArrayAppend(local_14,local_8);
          local_20 = local_20 + 1;
        } while ((int)local_20 < (int)local_30);
      }
    }
  }
  local_10 = local_18->count;
  local_c = local_14->count;
  DArrayDestroy(pDVar5);
  local_28 = nullptr;
LAB_00445e36:
  uVar6 = 0;
  if (0 < (int)local_c) {
    local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
    do {
      if (*local_24 == 0) break;
      DArrayGetElement(local_14,uVar6,local_8);
      iVar4 = _DeleteGuardBoat(this_01,objPtr,local_8[0],1);
      if (iVar4 == -1) {
        _DeleteGuardBoat(this_01,objPtr,local_8[0],0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_c);
  }
  uVar6 = 0;
  if (0 < (int)local_10) {
    local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
    do {
      if (*local_24 == 0) break;
      DArrayGetElement(local_18,uVar6,local_8);
      _DeleteGuardBoat(this_01,objPtr,local_8[0],1);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_10);
  }
  local_44 = Library::DKW::TBL::DArrayCreate(nullptr,local_10,2,1);
  Library::DKW::TBL::FUN_006afe40((int *)&local_44,&local_18->flags);
  local_40 = Library::DKW::TBL::DArrayCreate(nullptr,local_c,2,1);
  Library::DKW::TBL::FUN_006afe40((int *)&local_40,&local_14->flags);
  local_3c = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
  if (g_packedRecords_A62x8[objPtr].field1976_0x9f6 == 0) {
    pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,1,0xc,1);
    g_packedRecords_A62x8[objPtr].field1976_0x9f6 = pDVar5;
  }
  Library::DKW::TBL::DArrayAppend
            ((DArrayTy *)g_packedRecords_A62x8[objPtr].field1976_0x9f6,&local_44);
  OptimizeGuardBoats(this_01,objPtr);
  DistributeGuardBoats(this_01,objPtr);
  if (local_18 != nullptr) {
    DArrayDestroy(local_18);
  }
  if (local_14 != nullptr) {
    DArrayDestroy(local_14);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

