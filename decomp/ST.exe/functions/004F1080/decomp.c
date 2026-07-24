#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004F1080; family_names=BldObjPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:0,1c:2} */

int __thiscall BldObjPanelTy::GetMessage(BldObjPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  BldObjPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  BldObjPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\bldobj.cpp",0xca,0,iVar3,"%s",
                               "BldObjPanelTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\bldobj.cpp",0xca);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_RESEARCHPANELTY_B207) {
    if (SVar1 == MESS_BLDOBJPANELTY_B206) {
      ProdPanelTy::PaintTab
                ((ProdPanelTy *)this_00,(AnonShape_0053FCD0_D10A885A *)message,thunk_FUN_0052a7b0);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      InitBldObjPanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_004f0a60((AnonShape_004F0A60_A5DE070F *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_BLDOBJPANELTY_B205) {
      this_00->field_0279 = this_00->field_0278;
      this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
      thunk_FUN_005252c0(0xae);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 0x1c))();
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else {
    switch(SVar1) {
    case MESS_SHARED_C09F:
    case MESS_BEHPANELTY_C0A0:
    case MESS_FSGSTY_C0A1:
    case MESS_SHARED_C0A2:
    case MESS_SHARED_C0A3:
      iVar3 = (&this_00->field_027E)[(byte)this_00->field_0278];
      if ((iVar3 == 0) ||
         (iVar5 = SVar1 + this_00->field_0199, *(uint *)(iVar3 + 0xc) <= iVar5 - 0xc09fU)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)((iVar5 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 2) != '\0')) {
        thunk_FUN_0054b630(g_cursorClass_00802A30,0xe,*puVar4);
        ProdPanelTy::SetPanel((ProdPanelTy *)this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      break;
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = message->arg0;
      sub_004F0C80(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      PaintBldBut(this_00,(AnonShape_004EF320_444F9AB1 *)message);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

