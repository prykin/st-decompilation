#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004F0210; family_names=BldLabPanelTy::GetMessage; ret4=5;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall BldLabPanelTy::GetMessage(BldLabPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  BldLabPanelTy *this_00;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x9a,0,iVar4,"%s",
                               "BldLabPanelTy::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x9a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        InitBldLabPanel(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_027A != (DArrayTy *)0x0) {
        DArrayDestroy(this_00->field_027A);
      }
      this_00->field_027A = (DArrayTy *)0x0;
      g_prodPanel_00801680 = (ProdPanelTy *)0x0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    pDVar2 = this_00->field_027A;
    if ((pDVar2 == (DArrayTy *)0x0) ||
       (iVar4 = SVar1 + this_00->field_0199, pDVar2->count <= iVar4 - 0xc09fU)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      puVar5 = (undefined4 *)((iVar4 + -0xc09f) * pDVar2->elementSize + (int)pDVar2->data);
    }
    if (puVar5 == (undefined4 *)0x0) {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (*(char *)(puVar5 + 2) == '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    thunk_FUN_0054b630(g_cursorClass_00802A30,0xe,*puVar5);
    ProdPanelTy::SetPanel((ProdPanelTy *)this_00,'\0');
  }
  else {
    if (SVar1 != MESS_BLDLABPANELTY_C0A4) {
      if (SVar1 < MESS_INTERCOMPANELTY_C0AF) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (MESS_BLDLABPANELTY_C0B3 < SVar1) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      PaintUpdBut(this_00,(AnonShape_004EF320_444F9AB1 *)message);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    this_00->field_0199 = message->arg0;
    sub_004EFE20(this_00);
  }
  thunk_FUN_005252c0(0xae);
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

