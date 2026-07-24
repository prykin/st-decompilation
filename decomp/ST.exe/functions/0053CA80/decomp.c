#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053CA80; family_names=ResearchPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:0,1c:2} */

int __thiscall ResearchPanelTy::GetMessage(ResearchPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  ResearchPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_58;
  uint local_14;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  ResearchPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\research.cpp",200,0,iVar3,"%s",
                               "ResearchPanelTy::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\research.cpp",200);
    return 0xffff;
  }
  iVar3 = 2;
  if (message->id == MESS_ID_CREATE) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        InitResearchPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        puVar6 = &this_00->field_027A;
        do {
          if ((DArrayTy *)*puVar6 != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)*puVar6);
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (this_00->field_0282 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0282);
        }
        this_00->field_0282 = 0;
        g_prodPanel_008016E8 = (ProdPanelTy *)0x0;
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_RESEARCHPANELTY_B207) {
        this_00->field_0279 = this_00->field_0278;
        this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
        thunk_FUN_005252c0(0xae);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_00->field_0000 + 0x1c))();
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else {
      iVar3 = (&this_00->field_027A)[(byte)this_00->field_0278];
      if ((iVar3 == 0) ||
         (iVar4 = SVar1 + this_00->field_0199, *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU)) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar5 != (undefined1 *)0x0) && (puVar5[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (uint)CONCAT11(*puVar5,2);
        local_10 = 0;
        uStack_f = 1;
        thunk_FUN_0054edf0((undefined4 *)0x1e,&local_14,0,0xffffffff);
        ProdPanelTy::SetPanel((ProdPanelTy *)this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else {
    switch(SVar1) {
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = message->arg0;
      sub_0053C620(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      PaintUpdBut(this_00,(AnonShape_004EF320_444F9AB1 *)message);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_RESEARCHPANELTY_C0B4:
      ProdPanelTy::PaintTab
                ((ProdPanelTy *)this_00,(AnonShape_0053FEE0_A49592EB *)message,thunk_FUN_0052a7b0);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

