#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401401|0053EB70; family_names=SpecPanelTy::GetMessage; ret4=6;
   direct_offsets={10:3,14:0,18:1,1c:1} */

int __thiscall SpecPanelTy::GetMessage(SpecPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  code *pcVar3;
  SpecPanelTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x168,0,iVar4,"%s"
                               ,"SpecPanelTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\specpan.cpp",0x168);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&local_8->field_0x4c);
    iVar4 = this_00->field_0050 + this_00->field_0058;
    this_00->field_0044 = iVar4;
    this_00->field_0174 = (this_00->field_0048 - iVar4) + DAT_00806734;
  }
  PanelTy::GetMessage((PanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_C000) {
    if (SVar1 == MESS_SHARED_BFFF) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_001C)(0);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == 3) {
        iVar4 = this_00->field_0050 + (this_00->field_0058 - this_00->field_0048);
        if (iVar4 < this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0xf;
        }
        if (this_00->field_0044 <= iVar4) {
          this_00->field_0044 = iVar4;
          this_00->field_0172 = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0018)(1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == 4) {
        iVar4 = this_00->field_0050 + this_00->field_0058;
        if (this_00->field_0044 < iVar4) {
          this_00->field_0044 = this_00->field_0044 + 0xf;
        }
        if (iVar4 <= this_00->field_0044) {
          this_00->field_0044 = iVar4;
          this_00->field_0172 = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_SHARED_0003) {
      DonePanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_C000) {
    pAVar2 = this_00->field_0000;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0x274e;
    pCVar5 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pAVar2->field_0010)(message,pCVar5,uVar7,uVar8,uVar9);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

