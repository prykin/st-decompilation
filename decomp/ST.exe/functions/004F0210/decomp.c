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
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (ProdPanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x9a,0,iVar3,"%s",
                               "BldLabPanelTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x9a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        InitBldLabPanel((BldLabPanelTy *)this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (*(DArrayTy **)&this_00[1].field_0xd5 != (DArrayTy *)0x0) {
        DArrayDestroy(*(DArrayTy **)&this_00[1].field_0xd5);
      }
      *(undefined4 *)&this_00[1].field_0xd5 = 0;
      g_prodPanel_00801680 = (ProdPanelTy *)0x0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    iVar3 = *(int *)&this_00[1].field_0xd5;
    if ((iVar3 == 0) ||
       (iVar4 = SVar1 + *(int *)&this_00->field_0x199, *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
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
    ProdPanelTy::SetPanel(this_00,'\0');
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
      PaintUpdBut((BldLabPanelTy *)this_00,(AnonShape_004EF320_444F9AB1 *)message);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    *(STMessageArg *)&this_00->field_0x199 = message->arg0;
    sub_004EFE20((BldLabPanelTy *)this_00);
  }
  thunk_FUN_005252c0(0xae);
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

