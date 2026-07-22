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
  JumpManagC *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  JumpManagC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4b,0,iVar3,"%s"
                               ,"JumpManagC::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4d);
    return 0xffff;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_CREATE) {
    puVar5 = (message->arg0).ptr;
    if (puVar5[3] != 2) {
      puVar6 = (undefined4 *)&local_8->field_0x1c;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    sub_00618170(local_8,puVar5);
    sub_006179D0(this_00);
  }
  else if (SVar1 == MESS_SHARED_0003) {
    sub_00618AD0(local_8);
    if (this_00->field_005E != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_005E);
      this_00->field_005E = (DArrayTy *)0x0;
    }
    if ((DArrayTy *)this_00->field_0062 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0062);
      this_00->field_0062 = (AnonPointee_JumpManagC_0062 *)0x0;
    }
    if ((DArrayTy *)this_00->field_0066 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0066);
      this_00->field_0066 = (AnonPointee_JumpManagC_0066 *)0x0;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_10 = sub_00617FB0(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

