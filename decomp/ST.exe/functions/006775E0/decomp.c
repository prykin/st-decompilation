#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 776 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
FUN_006775e0(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,int param_12)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  code *pcVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    /* ST_CALLSITE[0067761A]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,2,10);
    pcVar2 = thunk_FUN_00677250;
    if (param_12 == 0) {
      pcVar2 = thunk_FUN_00677220;
    }
    local_8 = pDVar1;
    /* ST_CALLSITE[00677665]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
    _EnumPlObj(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,pcVar2,&pDVar1->flags,nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return &pDVar1->flags;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    DArrayDestroy(local_8);
  }
  local_8 = nullptr;
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x308);
  return nullptr;
}

