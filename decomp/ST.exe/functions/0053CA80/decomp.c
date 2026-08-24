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
  ResearchPanelTy *this_00;
  int iVar3;
  int iVar5;
  byte *puVar6;
  int iVar4;
  int iVar7;
  uint *puVar8;
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
  iVar7 = 2;
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[0053CAC9]: CALL 0x004032a6; direct=004032A6 ProdPanelTy::PreInitProdPanel */
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  /* ST_CALLSITE[0053CAD1]: CALL 0x004059d4; direct=004059D4 ProdPanelTy::GetMessage */
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        /* ST_CALLSITE[0053CB98]: CALL 0x004011b3; direct=004011B3 ResearchPanelTy::InitResearchPanel */
        InitResearchPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        puVar8 = &this_00->field_027A;
        do {
          if ((DArrayTy *)*puVar8 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar8);
            *puVar8 = 0;
          }
          puVar8 = puVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (this_00->field_0282 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0282);
        }
        this_00->field_0282 = 0;
        g_researchPanel_008016E8 = nullptr;
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_RESEARCHPANELTY_B207) {
        this_00->field_0279 = this_00->field_0278;
        this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
        thunk_FUN_005252c0(0xae);
        /* ST_CALLSITE[0053CB2F]: CALL dword ptr [EAX + 0x1c] */
        this_00->Update();
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else {
      iVar7 = (&this_00->field_027A)[(byte)this_00->field_0278];
      if ((iVar7 == 0) ||
         (iVar5 = SVar1 + this_00->field_0199, *(uint *)(iVar7 + 0xc) <= iVar5 - 0xc09fU)) {
        puVar6 = nullptr;
      }
      else {
        puVar6 = (undefined1 *)((iVar5 + -0xc09f) * *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0x1c));
      }
      if ((puVar6 != nullptr) && (puVar6[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (uint)CONCAT11(*puVar6,2);
        local_10 = 0;
        uStack_f = 1;
        thunk_FUN_0054edf0((undefined4 *)0x1e,&local_14,0,0xffffffff);
        /* ST_CALLSITE[0053CC34]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
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
      /* ST_CALLSITE[0053CC7D]: CALL 0x00405664; direct=00405664 ResearchPanelTy::sub_0053C620 */
      sub_0053C620(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      /* ST_CALLSITE[0053CCA5]: CALL 0x00405ebb; direct=00405EBB ResearchPanelTy::PaintUpdBut */
      PaintUpdBut(this_00,(AnonShape_004EF320_444F9AB1 *)message);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_RESEARCHPANELTY_C0B4:
      /* ST_CALLSITE[0053CCC5]: CALL 0x00403ea4; direct=00403EA4 ProdPanelTy::PaintTab */
      ProdPanelTy::PaintTab
                ((ProdPanelTy *)this_00,(AnonShape_0053FEE0_A49592EB *)message,thunk_FUN_0052a7b0);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

