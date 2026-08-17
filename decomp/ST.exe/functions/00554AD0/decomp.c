#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLine */

void __thiscall cLoadingTy::DrawLine(cLoadingTy *this,uint *param_1)

{
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  /* ST_CALLSITE[00554ADA]: CALL 0x0040249b; direct=0040249B cLoadingTy::sub_00555570 */
  sub_00555570(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_8->field_0004,0,
                 local_8->field_0014 + local_8->field_000C,local_8->field_0010 + local_8->field_0018
                 ,local_8->field_001C,local_8->field_0034,0);
    ccFntTy::WrStr(pcVar2->field_0008,(char *)param_1,pcVar2->field_000C,pcVar2->field_0010,
                   pcVar2->field_0024);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_000C + pcVar2->field_0014;
    Library::DKW::DDX::FUN_006b42d0
              (g_dDXContext_0080759C,iVar4,iVar3,pcVar2->field_0000,nullptr,iVar4,iVar3,
               pcVar2->field_001C,pcVar2->field_0034);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    Library::DKW::DDX::FUN_006b4680
              ((int *)g_dDXContext_0080759C,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0004,nullptr
               ,iVar4,iVar3,pcVar2->field_001C,pcVar2->field_0034,0);
    Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
    if ((code *)pcVar2->field_0058 != nullptr) {
      /* ST_CALLSITE[00554BC0]: CALL EAX */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)pcVar2->field_0058)(pcVar2->field_0054);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0xcc,0,iVar3,"%s",
                             "cLoadingTy::DrawLine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0xcd);
  return;
}

