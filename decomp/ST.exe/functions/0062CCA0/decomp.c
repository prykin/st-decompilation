#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004040D9|0062CCA0; family_names=STManRub3C::GetMessage; ret4=4;
   direct_offsets={10:1,14:0,18:0,1c:1} */

int __thiscall STManRub3C::GetMessage(STManRub3C *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  STManRub3C *this_00;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManRub3C *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x4e,0,iVar3,"%s",
                               "STManRub3C::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x50);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_CREATE) {
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_RUBBISH_3_0079d080,0,0);
    }
    if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 6) != 2)) {
      local_c->field_001C = 0;
      local_c->field_0028 = 1;
      local_c->field_0024 = 1;
      local_c->field_0020 = 0xff;
      local_c->field_00B4 = DAT_00808754;
    }
    else {
      sub_0062D840(local_c,(undefined4 *)local_8);
    }
    if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    }
  }
  else {
    if (SVar1 == MESS_SHARED_0003) {
      sub_0062CF50(local_c);
      sub_0062DD40(this_00);
      sub_0062E130(this_00);
      g_manRub3_008117A4 = (STManRub3C *)0x0;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_010F) {
      local_14 = sub_0062D670(local_c,&local_10);
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,PTR_s_RUBBISH_3_0079d080,local_14,local_10,0xc);
      FreeAndNull(&local_14);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

