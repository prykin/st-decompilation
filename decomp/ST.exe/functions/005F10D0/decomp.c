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
  code *pcVar2;
  AnonShape_005F2330_0E1D2560 *this_00;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  AnonShape_005F2330_0E1D2560 *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = (AnonShape_005F2330_0E1D2560 *)this;
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
      sub_005F2330((STManBasisC *)local_c);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      sub_005F19A0((STManBasisC *)local_c);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      *(int *)&local_c->field_0x1c = *(int *)&local_c->field_0x18 * DAT_00808754;
      if (g_cMf32_00806754 != (cMf32 *)0x0) {
        local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_BASIS_MAN_0079c57c,0,0)
        ;
      }
      if (local_8 == (ushort *)0x0) {
        *(undefined4 *)&this_00->field_0x20 = 0;
        *(undefined4 *)&this_00->field_0x24 = 0xff;
        *(undefined4 *)&this_00->field_0x28 = 1;
        *(undefined4 *)&this_00->field_0x2c = 1;
      }
      else if (*(int *)(local_8 + 6) == 2) {
        sub_005F2110((STManBasisC *)this_00,(undefined4 *)local_8);
        *(undefined4 *)&this_00->field_0x1c = *(undefined4 *)&this_00[1].field_0x4;
        sub_005F21D0((STManBasisC *)this_00);
      }
      else {
        thunk_FUN_005f1380(this_00);
      }
      if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_14 = sub_005F1FA0((STManBasisC *)local_c,(int *)&local_10);
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_s_BASIS_MAN_0079c57c,local_14,local_10,0xc)
    ;
    FreeAndNull(&local_14);
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

