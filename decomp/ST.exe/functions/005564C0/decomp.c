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
  TraksClassTy *this_00;
  int iVar3;
  DArrayTy *pTVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  byte *local_10;
  uint local_c;
  TraksClassTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x151,0,iVar3,
                               "TraksClassTy::GetMessage error mess->id == %lX",message->id);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\traks.cpp",0x152);
    return 0xffff;
  }
  local_14->field_0020 = g_playSystem_00802A38->field_00E4;

  FUN_006e5fd0(local_14,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_005557b0((AnonShape_005557B0_28260162 *)this_00);
      g_traksClass_00802A7C = nullptr;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      /* ST_CALLSITE[005565CC]: CALL 0x004040ca; direct=004040CA TraksClassTy::TraksExec */
      TraksExec(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      local_8 = nullptr;
      if (g_cMf32_00806754 != nullptr) {
        /* ST_CALLSITE[0055654D]: CALL 0x006f2d90; direct=006F2D90 Library::Ourlib::MFAOBJ::mfAObjLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TraksClassTy; signature=__cdecl;pointer:/TraksClassTy;pointer:/cMf32;pointer:/char;/byte;/int */
        local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_TRACKS_0079aebc,0,0);
      }
      if ((local_8 == nullptr) || (*(int *)&local_8->field_0x14 == 0)) {
        /* ST_CALLSITE[00556575]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
        pTVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0x32,0x3c,0x32);
        this_00->field_0024 = (TraksClassTy_field_0024DArray *)pTVar3;
        this_00->field_001C = DAT_00808754 * 0x7d;
      }
      else {
        /* ST_CALLSITE[00556566]: CALL 0x0040359e; direct=0040359E TraksClassTy::PrepareAfterSave */
        PrepareAfterSave(this_00,(ushort *)local_8);
      }
      /* ST_CALLSITE[00556590]: CALL 0x00403701; direct=00403701 TraksClassTy::CreateDate */
      CreateDate(this_00);
      if ((g_cMf32_00806754 != nullptr) && (local_8 != nullptr)) {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_c = 0;
    /* ST_CALLSITE[0055661C]: CALL 0x00404845; direct=00404845 TraksClassTy::PrepareToSave; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    local_10 = PrepareToSave(this_00,&local_c);
    /* ST_CALLSITE[00556638]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_s_TRACKS_0079aebc,local_10,local_c,0xc);
    if (local_10 != nullptr) {
      FreeAndNull(&local_10);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

