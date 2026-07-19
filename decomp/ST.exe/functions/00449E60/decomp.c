
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterArtefact */

undefined4 __thiscall
STAllPlayersC::UnRegisterArtefact(STAllPlayersC *this,uint param_1,uint param_2)

{
  code *pcVar1;
  STAllPlayersC *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (errorCode == 0) {
    uVar2 = GetObjPtr(local_c,0xffffffff,param_1,CASE_2);
    uVar4 = extraout_ECX;
    if (uVar2 != param_2) {
      RaiseInternalException
                (-0x5001fff9,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2eea);
      uVar4 = extraout_ECX_00;
    }
    DelObjFromTmps(this_00,DAT_0080874d,*(int *)(param_2 + 0x20),
                   CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_2 + 0x24)),param_1);
    DelObjFromSaveTmps(this_00,*(int *)(param_2 + 0x20),*(char *)(param_2 + 0x24),(short)param_1);
    Library::DKW::TBL::FUN_006ae140(DAT_007fa154,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2ef5,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__UnRegisterArtefac_007a8730);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2ef6);
      return 0xffffffff;
    }
  }
  return 0;
}

