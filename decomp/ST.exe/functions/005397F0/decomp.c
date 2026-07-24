#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005397F0; family_names=PausePanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall PausePanelTy::GetMessage(PausePanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  PausePanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x9f,0,iVar3,"%s",
                               "PausePanelTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\pause.cpp",0x9f);
    return 0xffff;
  }
  PanelTy::GetMessage((PanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      DonePausePanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar3 = this_00->field_0054 + -0x174 + this_00->field_004C;
        if (iVar3 < this_00->field_003C) {
          this_00->field_003C = this_00->field_003C + -0x1e;
        }
        if (this_00->field_003C <= iVar3) {
          this_00->field_003C = iVar3;
          this_00->field_0172 = CASE_1;
          ShiftControls(this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar3 = this_00->field_0054 + this_00->field_004C;
        if (this_00->field_003C < iVar3) {
          this_00->field_003C = this_00->field_003C + 0x1e;
        }
        if (iVar3 <= this_00->field_003C) {
          this_00->field_003C = iVar3;
          this_00->field_0172 = CASE_2;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      InitPausePanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_BFFF) {
    this_00->field_0028 = 0xa100;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
  }
  else if (SVar1 == MESS_SHARED_C000) {
    pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
    PanelTy::PaintIBut((PanelTy *)this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar4,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

