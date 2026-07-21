#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042BC1A MOVSX ECX,byte ptr [EBP + 0x14] | 0042BC42 MOVSX
   EDX,byte ptr [EBP + 0x14] */

undefined4 __thiscall
STAllPlayersC::AddObjToTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,char param_4,uint param_5)

{
  code *pcVar1;
  uint index;
  int iVar2;
  DArrayTy *pDVar3;
  STGameObjC *pSVar4;
  undefined4 uVar5;
  int iVar6;
  STPlayerTempSlot *pSVar7;
  Global_sub_0043FC50_param_1Enum GVar8;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  STPlayerTempSlot *local_10;
  STAllPlayersC *local_c;
  short local_6;

  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar2 == -0x5001fff7) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x21d,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp invalid panel number");
      if (iVar2 == 0) {
        return local_18;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar2 == -0x5001ffff) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x219,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp coincide value");
      if (iVar2 == 0) {
        return 0xaffe0001;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x215,0,iVar2,"%s",
                               "STAllPlayersC::AddObjToTmp");
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x216);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 == 0) {
    local_10 = g_playerRuntime[param_1].tempSlots[0];
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_1,0);
    GVar8 = CASE_2;
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1f8);
      goto LAB_0042bc00;
    }
    local_10 = g_playerRuntime[param_1].tempSlots[1];
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_4,0);
    GVar8 = CASE_5;
  }
  thunk_FUN_0043fc50(GVar8,param_3);
LAB_0042bc00:
  pSVar7 = local_10 + param_3;
  if (pSVar7->objectType == 0) {
    pDVar3 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    pSVar7->objectIds = pDVar3;
    pSVar7->activityCount = 0;
    pSVar7->playerId = (int)param_4;
    if (param_2 == 0) {
      pSVar7->objectType = 0x3c;
    }
    else if (param_2 == 1) {
      pSVar7->objectType = 0x19a;
    }
  }
  if (pSVar7->playerId != (int)param_4) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x210,0,0,"%s",
                               "STAllPlayersC::AddObjToTmp something wrong...");
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pDVar3 = pSVar7->objectIds;
  local_14 = pDVar3->count;
  index = local_14;
  while (index = index - 1, -1 < (int)index) {
    DArrayGetElement(pDVar3,index,&local_6);
    if (local_6 == -1) {
      local_14 = index;
    }
    if (local_6 == (short)param_5) {
      RaiseInternalException
                (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x209);
    }
  }
  Library::DKW::TBL::FUN_006ae140(&pDVar3->flags,local_14,&param_5);
  pSVar7->activityCount = pSVar7->activityCount + 1;
  pSVar4 = GetObjPtr(local_c,param_4,param_5,CASE_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)&pSVar4->vtable[1].field_0x18)(1);
  g_currentExceptionFrame = local_5c.previous;
  return local_18;
}

