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
  JumpManagC *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  byte *puVar7;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
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
    puVar6 = (byte *)((message->arg0).ptr);
    if (puVar6[3] != 2) {
      puVar7 = (byte *)&local_8->field_0x1c;
      memmove(puVar7, puVar6, 0x3e); /* compiler REP MOVS byte copy */
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    /* ST_CALLSITE[0061774E]: CALL 0x00405119; direct=00405119 JumpManagC::sub_00618170 */
    sub_00618170(local_8,puVar6);
    /* ST_CALLSITE[00617755]: CALL 0x00404d09; direct=00404D09 JumpManagC::sub_006179D0 */
    sub_006179D0(this_00);
  }
  else if (SVar1 == MESS_SHARED_0003) {
    /* ST_CALLSITE[006176D7]: CALL 0x00401a46; direct=00401A46 JumpManagC::sub_00618AD0 */
    sub_00618AD0(local_8);
    if (this_00->field_005E != nullptr) {
      DArrayDestroy(this_00->field_005E);
      this_00->field_005E = nullptr;
    }
    if (this_00->field_0062 != nullptr) {
      DArrayDestroy(this_00->field_0062);
      this_00->field_0062 = nullptr;
    }
    if (this_00->field_0066 != nullptr) {
      DArrayDestroy(this_00->field_0066);
      this_00->field_0066 = nullptr;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[0061769B]: CALL 0x004015f5; direct=004015F5 JumpManagC::sub_00617FB0 */
    local_10 = sub_00617FB0(local_8,(int *)&local_c);
    /* ST_CALLSITE[006176B2]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

