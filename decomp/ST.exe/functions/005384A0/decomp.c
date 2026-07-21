#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::GetMessage */

undefined4 __thiscall PanelTy::GetMessage(PanelTy *this,int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_8 = this;
  DVar2 = FUN_006e51b0(this->field_0010);
  this->field_0038 = DVar2;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 2) {
      InitPanel(local_8);
    }
    else if (iVar3 == 3) {
      DonePanel(local_8);
    }
    else if (iVar3 == 5) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,local_8->field_0060,0xffffffff,local_8->field_003C,local_8->field_0044
                );
    }
    g_currentExceptionFrame = local_4c.previous;
    uVar4 = FUN_006e5fd0();
    return uVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0x52,0,iVar3,&DAT_007a4ccc,
                             s_PanelTy__GetMessage_007c73e4);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_panel_cpp_007c7390,0x52);
  return 0xffff;
}

