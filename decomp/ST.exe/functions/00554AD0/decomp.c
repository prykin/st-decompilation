#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLine */

void __thiscall cLoadingTy::DrawLine(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  sub_00555570(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0004,0,
                 local_8->field_0014 + local_8->field_000C,local_8->field_0010 + local_8->field_0018
                 ,local_8->field_001C,local_8->field_0034,0);
    ccFntTy::WrStr(pcVar2->field_0008,param_1,pcVar2->field_000C,pcVar2->field_0010,
                   pcVar2->field_0024);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_000C + pcVar2->field_0014;
    Library::DKW::DDX::FUN_006b42d0
              ((uint)DAT_0080759c,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0000,(uint *)0x0,iVar4,
               iVar3,pcVar2->field_001C,pcVar2->field_0034);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    Library::DKW::DDX::FUN_006b4680
              (DAT_0080759c,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0004,(uint *)0x0,iVar4,iVar3,
               pcVar2->field_001C,pcVar2->field_0034,0);
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    if ((code *)pcVar2->field_0058 != (code *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar2->field_0058)(pcVar2->field_0054);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xcc,0,iVar3,&DAT_007a4ccc,
                             s_cLoadingTy__DrawLine_007c8f7c);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0xcd);
  return;
}

