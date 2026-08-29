#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00594440; family_names=ComboTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:4,18:3,1c:0} */

int __thiscall ComboTy::GetMessage(ComboTy *this,STMessage *message)

{
  byte uVar1;
  STMessageId SVar2;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar3;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  ComboTy *this_00;
  int local_EAX_35;
  uint *puVar6;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_50;
  ComboTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\combo.cpp",0xb7,0,local_EAX_35,
                               "%s","ComboTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_35,0,"E:\\__titans\\Start\\combo.cpp",0xb7);
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
      /* ST_CALLSITE[005944B5]: CALL 0x004036cf; direct=004036CF ComboTy::InitCombo */
      InitCombo(local_c,(message->arg0).ptr);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[005944C1]: CALL 0x00403134; direct=00403134 ComboTy::DoneCombo */
      DoneCombo(local_c);
      break;
    case MESS_SHARED_0005:

      FUN_006b35d0((int *)g_ddxContext_008075A8,local_c->field_0108);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      uVar9 = (uint)(message->arg1).words.low;
      uVar8 = (uint)(message->arg1).words.high;
      if (((local_c->field_00EC <= (int)uVar9) &&
          ((int)uVar9 < local_c->field_00F4 + local_c->field_00EC)) &&
         (local_c->field_00F0 <= (int)uVar8)) {
        if (local_c->field_00F8 + local_c->field_00F0 <= (int)uVar8) {
          /* ST_CALLSITE[00594521]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
          sub_005943F0(local_c);
        }
        break;
      }
    case MESS_SHARED_0064:
switchD_005944a8_caseD_64:
      /* ST_CALLSITE[00594567]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
      sub_005943F0(local_c);
    }
cf_common_exit_00594615:
    g_currentExceptionFrame = local_50.previous;

    iVar5 = FUN_006e5fd0(this_00,message);
    return iVar5;
  }
  switch(SVar2) {
  case 0x10001:
    pRVar3 = (RecoveredRecord_006B4FA0_DAC3A217 *)local_c->field_0104;
    local_8 = *(uint *)&pRVar3[1].field_0x4;
    if (local_8 == 0) {
      local_8 = ((uint)pRVar3->field_000E * *(int *)&pRVar3->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar3->field_0x8;
    }
    uVar1 = local_c->field_00D8;

    puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar3));
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
    pRVar4 = (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0104;

    Library::DKW::WGR::FUN_006b55f0
              (this_00->field_00FC,0,(message->arg1).words.low + 5,(message->arg1).words.high + 5,
               pRVar4,0,0,0,*(int *)&pRVar4->field_0x4,*(int *)&pRVar4->field_0x8);
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

