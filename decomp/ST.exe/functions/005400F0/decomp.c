#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004059D4|005400F0; family_names=ProdPanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:1,1c:0} */

int __thiscall ProdPanelTy::GetMessage(ProdPanelTy *this,STMessage *message)

{
  short sVar1;
  STMessageId SVar2;
  code *pcVar3;
  PanelTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  int iVar6;
  char *text;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x2a3,0,iVar4,"%s"
                               ,"ProdPanelTy::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\specpan.cpp",0x2a3);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  PanelTy::GetMessage(local_8,message);
  SVar2 = message->id;
  if (SVar2 < MESS_OPTPANELTY_C001) {
    if (SVar2 == MESS_SHARED_C000) {
      pCVar5 = thunk_FUN_00571240("BUT_MEDIUM",0);
      PanelTy::PaintIBut(this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar5,0x274e,0,1);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      sVar1 = *(short *)((int)&this_00[3].field_002C + 2);
      if (sVar1 == 3) {
        iVar4 = (*(int *)&this_00->field_0x58 - this_00->field_0048) + *(int *)&this_00->field_0x50;
        if (iVar4 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0xf;
        }
        if ((int)this_00->field_0044 <= iVar4) {
          iVar6 = *(int *)this_00;
          this_00->field_0044 = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar6 + 0x18))(1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (sVar1 == 4) {
        iVar4 = *(int *)&this_00->field_0x58 + *(int *)&this_00->field_0x50;
        if ((int)this_00->field_0044 < iVar4) {
          this_00->field_0044 = this_00->field_0044 + 0xf;
        }
        if (iVar4 <= (int)this_00->field_0044) {
          this_00->field_0044 = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else {
      if (SVar2 == MESS_SHARED_0003) {
        DoneProdPanel((ProdPanelTy *)this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar2 == MESS_SHARED_BFFF) {
        SetPanel((ProdPanelTy *)this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
  }
  else {
    if (SVar2 == MESS_SHARED_C005) {
      text = "BUT_SLRT";
    }
    else {
      if (SVar2 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      text = "BUT_SLLT";
    }
    pCVar5 = thunk_FUN_00571240(text,0);
    PanelTy::PaintBut(this_00,(AnonShape_005389E0_C98BD548 *)message,1,pCVar5,thunk_FUN_00529fe0,0,1
                     );
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

