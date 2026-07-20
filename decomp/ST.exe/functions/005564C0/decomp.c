
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::GetMessage */

undefined4 __thiscall TraksClassTy::GetMessage(TraksClassTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  TraksClassTy *this_00;
  int errorCode;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x151,0,errorCode,
                               s_TraksClassTy__GetMessage_error_m_007c91fc,
                               *(undefined4 *)(param_1 + 0x10));
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(errorCode,0,s_E____titans_grig_traks_cpp_007c9104,0x152);
    return 0xffff;
  }
  local_14->field_0020 = DAT_00802a38->field_00E4;
  FUN_006e5fd0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005557b0((int)this_00);
      g_traksClass_00802A7C = (TraksClassTy *)0x0;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar1 == 0) {
      TraksExec(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar1 == 2) {
      local_8 = (ushort *)0x0;
      if (g_cMf32_00806754 != (cMf32 *)0x0) {
        local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_TRACKS_0079aebc,0,0);
      }
      if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
        this_00->field_0024 = puVar3;
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
  else if (uVar1 == 0x10f) {
    local_c = 0;
    local_10 = (byte *)PrepareToSave(this_00,&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_TRACKS_0079aebc,local_10,local_c,0xc);
    if (local_10 != (byte *)0x0) {
      FUN_006ab060(&local_10);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

