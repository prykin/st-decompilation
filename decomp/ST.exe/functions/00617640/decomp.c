#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040260D|00617640; family_names=JumpManagC::GetMessage; ret4=5;
   direct_offsets={10:1,14:1,18:1,1c:1} */

int __thiscall JumpManagC::GetMessage(JumpManagC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  JumpManagC *pJVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  JumpManagC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pJVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4b,0,iVar4,"%s"
                               ,"JumpManagC::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4d);
    return 0xffff;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_CREATE) {
    puVar6 = (message->arg0).ptr;
    if (puVar6[3] != 2) {
      puVar7 = (undefined4 *)&local_8->field_0x1c;
      for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00618170(local_8,puVar6);
    thunk_FUN_006179d0((AnonShape_006179D0_BD0E52D0 *)pJVar3);
  }
  else if (SVar1 == MESS_SHARED_0003) {
    thunk_FUN_00618ad0((AnonShape_00618AD0_F1827B9B *)local_8);
    if (pJVar3->field_005E != (DArrayTy *)0x0) {
      DArrayDestroy(pJVar3->field_005E);
      pJVar3->field_005E = (DArrayTy *)0x0;
    }
    if ((DArrayTy *)pJVar3->field_0062 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pJVar3->field_0062);
      pJVar3->field_0062 = 0;
    }
    if ((DArrayTy *)pJVar3->field_0066 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pJVar3->field_0066);
      pJVar3->field_0066 = 0;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_10 = thunk_FUN_00617fb0(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,pJVar3->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

