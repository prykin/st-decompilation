#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00594440; family_names=ComboTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:4,18:3,1c:0} */

int __thiscall ComboTy::GetMessage(ComboTy *this,STMessage *message)

{
  undefined1 uVar1;
  STMessageId SVar2;
  ushort *puVar3;
  code *pcVar4;
  ComboTy *this_00;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_50;
  ComboTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\combo.cpp",0xb7,0,iVar5,"%s",
                               "ComboTy::GetMessage");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\combo.cpp",0xb7);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < 0x10000) {
    if (SVar2 == MESS_COMBOTY_FFFF) {
      message->arg1 = (STMessageArg)local_c->field_00CC;
      goto cf_common_exit_00594615;
    }
    switch(SVar2) {
    case MESS_ID_CREATE:
      InitCombo(local_c,(message->arg0).ptr);
      break;
    case MESS_SHARED_0003:
      DoneCombo(local_c);
      break;
    case MESS_SHARED_0005:
      FUN_006b35d0((int *)PTR_008075a8,local_c->field_0108);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      uVar9 = (uint)(message->arg1).words.low;
      uVar8 = (uint)(message->arg1).words.high;
      if (((local_c->field_00EC <= (int)uVar9) &&
          ((int)uVar9 < local_c->field_00F4 + local_c->field_00EC)) &&
         (local_c->field_00F0 <= (int)uVar8)) {
        if (local_c->field_00F8 + local_c->field_00F0 <= (int)uVar8) {
          thunk_FUN_005943f0((AnonShape_005943F0_068A3707 *)local_c);
        }
        break;
      }
    case MESS_SHARED_0064:
switchD_005944a8_caseD_64:
      thunk_FUN_005943f0((AnonShape_005943F0_068A3707 *)local_c);
    }
cf_common_exit_00594615:
    g_currentExceptionFrame = local_50.previous;
    iVar5 = FUN_006e5fd0(this_00,message);
    return iVar5;
  }
  switch(SVar2) {
  case 0x10001:
    puVar3 = local_c->field_0104;
    local_8 = *(uint *)(puVar3 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar3 + 4);
    }
    uVar1 = local_c->field_00D8;
    puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar3);
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = uVar1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    this_00->field_00BC = message->arg0;
    FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xa8);
    puVar3 = this_00->field_0104;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_00FC,0,(message->arg1).words.low + 5,
               (message->arg1).words.high + 5,(byte *)puVar3,0,0,0,*(int *)(puVar3 + 2),
               *(int *)(puVar3 + 4));
    goto cf_common_exit_00594615;
  case 0x10002:
    if (local_c->field_0110 == 0) goto cf_common_exit_00594615;
  case 0x10000:
    local_c->field_009C = message->arg0;
    break;
  case 0x10003:
    break;
  default:
    goto cf_common_exit_00594615;
  }
  goto switchD_005944a8_caseD_64;
}

