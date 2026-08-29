#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_basis.cpp
   STManBasisC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405A15|005F10D0; family_names=STManBasisC::GetMessage; ret4=5;
   direct_offsets={10:1,14:0,18:1,1c:2} */

int __thiscall STManBasisC::GetMessage(STManBasisC *this,STMessage *message)

{
  STMessageId SVar1;
  STManBasisC *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManBasisC *local_c;
  AnonShape_005F10D0_60EBA416 *local_8;

  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_basis.cpp",0x5b,0,iVar3,"%s",
                               "STManBasisC::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_basis.cpp",0x5d);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[005F11F5]: CALL 0x004049bc; direct=004049BC STManBasisC::sub_005F2330 */
      sub_005F2330(local_c);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      /* ST_CALLSITE[005F11DB]: CALL 0x0040355d; direct=0040355D STManBasisC::sub_005F19A0 */
      sub_005F19A0(local_c);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      local_c->field_001C = local_c->field_0018 * DAT_00808754;
      if (g_cMf32_00806754 != nullptr) {
        local_8 = (AnonShape_005F10D0_60EBA416 *)
                  Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_BASIS_MAN_0079c57c,0,0);
      }
      if (local_8 == nullptr) {
        this_00->field_0020 = nullptr;
        this_00->field_0024 = 0xff;
        this_00->field_0028 = 1;
        this_00->field_002C = 1;
      }
      else if (local_8->field_000C == 2) {
        /* ST_CALLSITE[005F1189]: CALL 0x00403eae; direct=00403EAE STManBasisC::sub_005F2110 */
        sub_005F2110(this_00,(undefined4 *)local_8);
        this_00->field_001C = this_00->field_0044;
        /* ST_CALLSITE[005F1196]: CALL 0x00404f5c; direct=00404F5C STManBasisC::sub_005F21D0 */
        sub_005F21D0(this_00);
      }
      else {

        thunk_FUN_005f1380((RecoveredRecord_005F1380_AD368A85 *)this_00);
      }
      if ((local_8 != nullptr) && (g_cMf32_00806754 != nullptr)) {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[005F121A]: CALL 0x004030d5; direct=004030D5 STManBasisC::sub_005F1FA0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    local_14 = sub_005F1FA0(local_c,(int *)&local_10);
    /* ST_CALLSITE[005F1236]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_s_BASIS_MAN_0079c57c,local_14,local_10,0xc);
    FreeAndNull(&local_14);
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

