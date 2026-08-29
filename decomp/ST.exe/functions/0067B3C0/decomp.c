#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::SetTech

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00652810 -> 0067B3C0 @ 0065668A; literal -1 at 0065667D | 0067B520 -> 0067B3C0 @
   0067B8C7; MOVSX at 0067B8AC establishes signed source width 2 */

int __thiscall
AiPlrClassTy::SetTech(AiPlrClassTy *this,int param_1,int param_2,int param_3,char param_4)

{
  AiPlrClassTy *pAVar2;
  int local_EAX_18;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_60;
  char local_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int local_14;
  int local_10;
  ushort local_c;
  AiPlrClassTy *local_8;

  local_8 = this;
  local_EAX_18 = thunk_FUN_0067b2e0(this,param_1,param_2);
  if (0 < local_EAX_18) {
    return 0;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    local_1c = param_4;
    uStack_1b = (undefined2)param_1;
    local_c = 0;
    uStack_15 = 0;
    uStack_17 = 1;
    uStack_19 = (undefined1)param_2;
    uStack_18 = (undefined1)((uint)param_2 >> 8);
    if (0 < param_3) {
      uStack_17 = (undefined2)param_3;
    }
    local_14 = iVar3;
    local_10 = iVar3;
    Library::DKW::TBL::DArrayAppend((DArrayTy *)local_8->field_06A1,&local_1c);
    thunk_FUN_00676c40((DArrayTy *)pAVar2->field_06A1,thunk_FUN_0067b350);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  g_currentExceptionFrame = local_60.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x3a9,0,iVar3,"%s",
                             "AiPlrClassTy::SetTech");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_plr.cpp",0x3aa);
  return iVar3;
}

