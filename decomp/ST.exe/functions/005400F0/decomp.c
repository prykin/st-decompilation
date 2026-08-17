#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004059D4|005400F0; family_names=ProdPanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:1,1c:0}

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/ProdPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall ProdPanelTy::GetMessage(ProdPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  ProdPanelTy *this_00;
  int iVar3;
  int iVar5;
  LPSTR pCVar6;
  int iVar4;
  char *text;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x2a3,0,iVar3,"%s"
                               ,"ProdPanelTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0x2a3);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0054012D]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  PanelTy::GetMessage((PanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < MESS_OPTPANELTY_C001) {
    if (SVar1 == MESS_SHARED_C000) {
      pCVar6 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[00540281]: CALL 0x00402121; direct=00402121 PanelTy::PaintIBut */
      PanelTy::PaintIBut((PanelTy *)this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar6,0x274e,0,1
                        );
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar5 = (this_00->field_0058 - this_00->field_0048) + this_00->field_0050;
        if (iVar5 < this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0xf;
        }
        if (this_00->field_0044 <= iVar5) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[00540236]: CALL dword ptr [EDX + 0x18] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)this_00->field_0000->field_0018)(1);
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar5 = this_00->field_0058 + this_00->field_0050;
        if (this_00->field_0044 < iVar5) {
          this_00->field_0044 = this_00->field_0044 + 0xf;
        }
        if (iVar5 <= this_00->field_0044) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = CASE_2;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00540185]: CALL 0x00403ecc; direct=00403ECC ProdPanelTy::DoneProdPanel */
        DoneProdPanel(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_BFFF) {
        /* ST_CALLSITE[0054015E]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        SetPanel(this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
  }
  else {
    if (SVar1 == MESS_SHARED_C005) {
      text = "BUT_SLRT";
    }
    else {
      if (SVar1 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      text = "BUT_SLLT";
    }
    pCVar6 = thunk_FUN_00571240(text,0);
    /* ST_CALLSITE[005402CA]: CALL 0x00403373; direct=00403373 PanelTy::PaintBut */
    PanelTy::PaintBut((PanelTy *)this_00,(AnonShape_005389E0_C98BD548 *)message,1,pCVar6,
                      thunk_FUN_00529fe0,0,1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

