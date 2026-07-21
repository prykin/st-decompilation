#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CreateCtrls */

void __thiscall WaitTy::CreateCtrls(WaitTy *this)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  WaitTy *pWVar3;
  int iVar4;
  int iVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_8d8 [6];
  undefined4 local_8c0;
  undefined4 local_8bc;
  uint *local_8b8;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_74;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  ppcVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar6 = (ccFntTy *)0x0;
    ppcVar6 = ppcVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pWVar3 = local_8;
  if (iVar5 == 0) {
    if (local_8->field_1A64 == 0) {
      StartSystemTy::CreateBinDesc(PTR_0081176c);
      StartSystemTy::CreateChatView(PTR_0081176c);
      ppcVar6 = local_8d8;
      for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppcVar6 = (ccFntTy *)0x0;
        ppcVar6 = ppcVar6 + 1;
      }
      local_8d8[0] = (ccFntTy *)0x1;
      local_8d8[1] = (ccFntTy *)0x9;
      local_8d8[2] = PTR_0081176c->field_0034;
      local_8d8[3] = (ccFntTy *)0xcb;
      local_8d8[4] = (ccFntTy *)0x23f;
      local_8d8[5] = *(ccFntTy **)(PTR_0081176c->field_0682 + 2);
      local_8c0 = *(undefined4 *)(PTR_0081176c->field_0682 + 4);
      local_8bc = 0x104;
      local_8b8 = PTR_0081176c->field_0686;
      pSVar1 = pWVar3->field_000C;
      local_74 = 0x100;
      local_88c = pSVar1->field_0014;
      local_888 = 0;
      local_884 = 0xc0a0;
      local_84c = pSVar1->field_0014;
      local_848 = 0;
      local_844 = 0xc0a2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pSVar1->vtable->field_0008)(6,&PTR_0081176c->field_054C,0,local_8d8,0);
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,PTR_0081176c->field_0554);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x303,0,iVar5,"%s",
                             "WaitTy::CreateCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\wait_obj.cpp",0x303);
  return;
}

