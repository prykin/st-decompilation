#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp2 */

undefined4 __thiscall
STAllPlayersC::AddObjToTmp2
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,uint param_5,
          uint param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  STGameObjC *pSVar4;
  char objPtr;
  STPlayerTempSlot *pSVar5;
  Global_sub_0043FC50_param_1Enum GVar6;
  InternalExceptionFrame local_58;
  STPlayerTempSlot *local_14;
  undefined4 local_10;
  STAllPlayersC *local_c;
  STAllPlayersC_GetObjPtr_param_3Enum local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      return local_10;
    }
    local_10 = 0xaffe0001;
    if (iVar2 == -0x5001ffff) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x251,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp2 coincide value");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x252,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp2");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    return 0xaffe0001;
  }
  if (param_2 == 0) {
    local_14 = g_playerRuntime[param_1].tempSlots[0];
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_1,0);
      GVar6 = CASE_2;
LAB_0042bf8b:
      thunk_FUN_0043fc50(GVar6,param_3);
    }
  }
  else if (param_2 == 1) {
    local_14 = g_playerRuntime[param_1].tempSlots[1];
    if (param_3 == 0) {
      thunk_FUN_0043fc50(CASE_4,0);
      GVar6 = CASE_5;
      goto LAB_0042bf8b;
    }
  }
  else {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x23b,0,0,"%s",
                               "STAllPlayersC::AddObjToTmp2 invalid panel number");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x23c);
  }
  pSVar5 = local_14 + param_3;
  objPtr = (char)param_5;
  if (((pSVar5->objectType == param_4) && (pSVar5->playerId == (int)objPtr)) &&
     (pSVar5->objectId == (short)param_6)) {
    RaiseInternalException
              (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x23f);
  }
  pSVar5->objectType = param_4;
  pSVar5->playerId = (int)objPtr;
  pSVar5->objectId = (short)param_6;
  if (param_4 < 0x1a5) {
    if (param_4 == 0x1a4) {
      local_8 = CASE_5;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x5a) {
      local_8 = CASE_4;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x172) {
      local_8 = CASE_2;
      goto cf_common_exit_0042C072;
    }
  }
  else {
    if (param_4 == 0x1ae) {
      local_8 = CASE_3;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x1b8) {
      local_8 = CASE_6;
      goto cf_common_exit_0042C072;
    }
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x249,0,0,"%s",
                             "STAllPlayersC::AddObjToTmp2 invalid game type");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException
            (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0x24a)
  ;
cf_common_exit_0042C072:
  pSVar4 = GetObjPtr(local_c,objPtr,param_6,local_8);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)&pSVar4->vtable[1].field_0x18)(1);
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

