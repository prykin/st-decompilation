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
  PausePanelTy *this_00;
  int iVar3;
  int iVar5;
  LPSTR pCVar6;
  int iVar4;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x9f,0,iVar3,"%s",
                               "PausePanelTy::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\pause.cpp",0x9f);
    return 0xffff;
  }
  /* ST_CALLSITE[0053982D]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  PanelTy::GetMessage((PanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[00539937]: CALL 0x0040466f; direct=0040466F PausePanelTy::DonePausePanel */
      DonePausePanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar5 = this_00->field_0054 + -0x174 + this_00->field_004C;
        if (iVar5 < this_00->field_003C) {
          this_00->field_003C = this_00->field_003C + -0x1e;
        }
        if (this_00->field_003C <= iVar5) {
          this_00->field_003C = iVar5;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[00539903]: CALL 0x00404ea3; direct=00404EA3 PausePanelTy::ShiftControls */
          ShiftControls(this_00,1);
        }

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar5 = this_00->field_0054 + this_00->field_004C;
        if (this_00->field_003C < iVar5) {
          this_00->field_003C = this_00->field_003C + 0x1e;
        }
        if (iVar5 <= this_00->field_003C) {
          this_00->field_003C = iVar5;
          this_00->field_0172 = CASE_2;
        }

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      /* ST_CALLSITE[00539854]: CALL 0x0040434f; direct=0040434F PausePanelTy::InitPausePanel */
      InitPausePanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_BFFF) {
    this_00->field_0028 = 0xa100;
    /* ST_CALLSITE[005399A0]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
  }
  else if (SVar1 == MESS_SHARED_C000) {
    /* ST_CALLSITE[00539960]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_00538DB0_574DDCD0; source view only; no Ghidra override */
    pCVar6 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[00539975]: CALL 0x00402121; direct=00402121 PanelTy::PaintIBut */
    PanelTy::PaintIBut((PanelTy *)this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar6,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

