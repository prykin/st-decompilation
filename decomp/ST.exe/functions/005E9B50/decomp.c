#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CreateCtrls */

void __thiscall WaitTy::CreateCtrls(WaitTy *this)

{
  StartSystemTy *this_00;
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  int iVar4;
  ccFntTy **ppcVar5;
  ccFntTy *local_8d8 [6];
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  int local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_74;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  ppcVar5 = local_8d8;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = (ccFntTy *)0x0;
    ppcVar5 = ppcVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pWVar2 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1A64 == 0) {
      StartSystemTy::CreateBinDesc(PTR_0081176c);
      StartSystemTy::CreateChatView(PTR_0081176c);
      ppcVar5 = local_8d8;
      for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar5 = (ccFntTy *)0x0;
        ppcVar5 = ppcVar5 + 1;
      }
      local_8d8[0] = (ccFntTy *)0x1;
      local_8d8[1] = (ccFntTy *)0x9;
      local_8d8[2] = PTR_0081176c->field_0034;
      local_8d8[3] = (ccFntTy *)0xcb;
      local_8d8[4] = (ccFntTy *)0x23f;
      local_8d8[5] = (ccFntTy *)PTR_0081176c->field_0682->field_0004;
      local_8c0 = PTR_0081176c->field_0682->field_0008;
      local_8bc = 0x104;
      local_8b8 = PTR_0081176c->field_0686;
      this_00 = pWVar2->field_000C;
      local_74 = 0x100;
      local_88c = this_00->field_0014;
      local_888 = 0;
      local_884 = 0xc0a0;
      local_84c = this_00->field_0014;
      local_848 = 0;
      local_844 = 0xc0a2;
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,6,&PTR_0081176c->field_054C,(int *)0x0,local_8d8,0);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x303,0,iVar4,&DAT_007a4ccc,
                             s_WaitTy__CreateCtrls_007cde24);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x303);
  return;
}

