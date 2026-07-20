
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterMine */

undefined4 __thiscall
STAllPlayersC::UnRegisterMine
          (STAllPlayersC *this,uint param_1,uint param_2,AnonShape_0044A150_E4FE1661 *param_3)

{
  code *pcVar1;
  STAllPlayersC *this_00;
  int errorCode;
  AnonShape_0044A150_E4FE1661 *pAVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
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
    pAVar2 = (AnonShape_0044A150_E4FE1661 *)GetObjPtr(local_c,param_1,param_2,CASE_3);
    uVar4 = extraout_EDX;
    if (pAVar2 != param_3) {
      RaiseInternalException
                (-0x5001fff9,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x2f1d);
      uVar4 = extraout_EDX_00;
    }
    DelObjFromTmps(this_00,DAT_0080874d,param_3->field_0020,
                   CONCAT31((int3)((uint)uVar4 >> 8),param_3->field_0024),param_2);
    DelObjFromSaveTmps(this_00,param_3->field_0020,(char)param_1,(short)param_2);
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa158->flags,param_2 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f26,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__UnRegisterMine_007a877c);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f27);
      return 0xffffffff;
    }
  }
  return 0;
}

