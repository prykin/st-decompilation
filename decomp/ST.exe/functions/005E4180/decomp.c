#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::CreateBut */

undefined4 __thiscall
MTaskTy::CreateBut(MTaskTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
                  undefined4 param_8)

{
  int iVar4;
  int iVar3;
  uint uVar2;
  int iVar5;
  uint *puVar6;
  uint local_1cc [4];
  uint local_1bc;
  uint local_1b8;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_16c;
  uint local_168;
  uint local_164;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  uint local_8;
  puVar6 = local_1cc;
  local_c = this;
  for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 == 0) {
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    local_1ac = local_c->field_0008;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    /* ST_CALLSITE[005E4249]: CALL dword ptr [EAX + 0x8] */
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,local_1cc,0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x4a0,0,iVar4,"%s",
                             "MTaskTy::CreateBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\task_obj.cpp",0x4a0);
  return 0;
}

