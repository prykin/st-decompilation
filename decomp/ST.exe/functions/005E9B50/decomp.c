#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CreateCtrls */

void __thiscall WaitTy::CreateCtrls(WaitTy *this)

{
  StartSystemTy *this_00;
  WaitTy *pWVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_8d8 [6];
  uint local_8c0;
  uint local_8bc;
  DArrayTy *local_8b8;
  int local_88c;
  uint local_888;
  uint local_884;
  int local_84c;
  uint local_848;
  uint local_844;
  uint local_74;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  ppcVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pWVar2 = local_8;
  if (iVar4 == 0) {
    if (local_8->array_00BC[0xc].field_01E4 == 0) {
      /* ST_CALLSITE[005E9BAD]: CALL 0x00402a4a; direct=00402A4A StartSystemTy::CreateBinDesc */
      StartSystemTy::CreateBinDesc(g_startSystem_0081176C);
      /* ST_CALLSITE[005E9BB8]: CALL 0x004028b5; direct=004028B5 StartSystemTy::CreateChatView */
      StartSystemTy::CreateChatView(g_startSystem_0081176C);
      ppcVar6 = local_8d8;
      for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppcVar6 = nullptr;
        ppcVar6 = ppcVar6 + 1;
      }
      local_8d8[0] = (ccFntTy *)0x1;
      local_8d8[1] = (ccFntTy *)0x9;
      local_8d8[2] = g_startSystem_0081176C->field_0034;
      local_8d8[3] = (ccFntTy *)0xcb;
      local_8d8[4] = (ccFntTy *)0x23f;
      local_8d8[5] = *(ccFntTy **)(g_startSystem_0081176C->field_0682 + 2);
      local_8c0 = *(undefined4 *)(g_startSystem_0081176C->field_0682 + 4);
      local_8bc = 0x104;
      local_8b8 = g_startSystem_0081176C->field_0686;
      this_00 = pWVar2->field_000C;
      local_74 = 0x100;
      local_88c = this_00->field_0014;
      local_888 = 0;
      local_884 = 0xc0a0;
      local_84c = this_00->field_0014;
      local_848 = 0;
      local_844 = 0xc0a2;
      /* ST_CALLSITE[005E9C8F]: CALL dword ptr [EDX + 0x8] */
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,6,&g_startSystem_0081176C->field_054C,nullptr,local_8d8
                 ,0);

      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x303,0,iVar4,"%s",
                             "WaitTy::CreateCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\wait_obj.cpp",0x303);
  return;
}

