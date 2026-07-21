#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005397F0; family_names=PausePanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall PausePanelTy::GetMessage(PausePanelTy *this,STMessage *message)

{
  short sVar1;
  STMessageId SVar2;
  code *pcVar3;
  PanelTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x9f,0,iVar4,"%s",
                               "PausePanelTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\pause.cpp",0x9f);
    return 0xffff;
  }
  PanelTy::GetMessage(local_8,message);
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      DonePausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      sVar1 = *(short *)((int)&this_00[3].field_002C + 2);
      if (sVar1 == 3) {
        iVar4 = *(int *)&this_00->field_0x54 + -0x174 + *(int *)&this_00->field_0x4c;
        if (iVar4 < (int)this_00->field_003C) {
          this_00->field_003C = this_00->field_003C + -0x1e;
        }
        if ((int)this_00->field_003C <= iVar4) {
          this_00->field_003C = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 1;
          ShiftControls((PausePanelTy *)this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (sVar1 == 4) {
        iVar4 = *(int *)&this_00->field_0x54 + *(int *)&this_00->field_0x4c;
        if ((int)this_00->field_003C < iVar4) {
          this_00->field_003C = this_00->field_003C + 0x1e;
        }
        if (iVar4 <= (int)this_00->field_003C) {
          this_00->field_003C = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar2 == MESS_ID_CREATE) {
      InitPausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_BFFF) {
    this_00->field_0028 = 0xa100;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)PTR_00802a30->field_0000)(&this_00->field_0x18);
  }
  else if (SVar2 == MESS_SHARED_C000) {
    pCVar5 = thunk_FUN_00571240("BUT_MEDIUM",0);
    PanelTy::PaintIBut(this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar5,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

