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
  uint index;
  int iVar2;
  DArrayTy *pDVar3;
  STGameObjC *this_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  Global_sub_0043FC50_param_1Enum GVar7;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  int local_10;
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
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x215,0,iVar2,"%s",
                               "STAllPlayersC::AddObjToTmp");
    if (iVar5 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x216);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 == 0) {
    local_10 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_1,0);
    GVar7 = CASE_2;
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1f8);
      goto LAB_0042bc00;
    }
    local_10 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_4,0);
    GVar7 = CASE_5;
  }
  thunk_FUN_0043fc50(GVar7,param_3);
LAB_0042bc00:
  piVar6 = (int *)(param_3 * 0x10 + local_10);
  if (*piVar6 == 0) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    STField<DArrayTy *>(piVar6,10) = pDVar3;
    STField<undefined2>(piVar6,0xe) = 0;
    piVar6[1] = (int)param_4;
    if (param_2 == 0) {
      *piVar6 = 0x3c;
    }
    else if (param_2 == 1) {
      *piVar6 = 0x19a;
    }
  }
  if (piVar6[1] != (int)param_4) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x210,0,0,"%s",
                               "STAllPlayersC::AddObjToTmp something wrong...");
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pDVar3 = STField<DArrayTy *>(piVar6,10);
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
  Library::DKW::TBL::DArrayPut(pDVar3,local_14,&param_5);
  STField<short>(piVar6,0xe) = STField<short>(piVar6,0xe) + 1;
  /* ST_CALLSITE[0042BCBC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  this_00 = GetObjPtr(local_c,param_4,(ushort)param_5,CASE_1);
  /* ST_CALLSITE[0042BCC7]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
  (*this_00->vtable[1].vfunc_14)(this_00,1);
  g_currentExceptionFrame = local_5c.previous;
  return local_18;
}

