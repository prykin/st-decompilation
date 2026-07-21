#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401A23|005564C0; family_names=TraksClassTy::GetMessage; ret4=5;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall TraksClassTy::GetMessage(TraksClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  TraksClassTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x151,0,iVar3,
                               "TraksClassTy::GetMessage error mess->id == %lX",message->id);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\traks.cpp",0x152);
    return 0xffff;
  }
  local_14->field_0020 = PTR_00802a38->field_00E4;
  FUN_006e5fd0(local_14,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_005557b0((AnonShape_005557B0_28260162 *)this_00);
      g_traksClass_00802A7C = (TraksClassTy *)0x0;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      TraksExec(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      local_8 = (ushort *)0x0;
      if (g_cMf32_00806754 != (cMf32 *)0x0) {
        local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_TRACKS_0079aebc,0,0);
      }
      if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
        pDVar4 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
        this_00->field_0024 = pDVar4;
        this_00->field_001C = DAT_00808754 * 0x7d;
      }
      else {
        PrepareAfterSave(this_00,local_8);
      }
      CreateDate(this_00);
      if ((g_cMf32_00806754 != (cMf32 *)0x0) && (local_8 != (ushort *)0x0)) {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_c = 0;
    local_10 = (byte *)PrepareToSave(this_00,&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_TRACKS_0079aebc,local_10,local_c,0xc);
    if (local_10 != (byte *)0x0) {
      FreeAndNull(&local_10);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

