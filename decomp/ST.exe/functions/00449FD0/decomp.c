
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterMine */

undefined4 __thiscall STAllPlayersC::RegisterMine(STAllPlayersC *this,ushort param_1,void *param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  int local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    if (param_2 == (void *)0x0) {
      RaiseInternalException
                (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f05);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)DAT_007fa158[3];
    }
    else {
      uVar2 = FUN_006acc70((int)DAT_007fa158,(uint)param_1,&local_8);
      if ((uVar2 != 0xfffffffc) && (local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f07);
      }
    }
    Library::DKW::TBL::FUN_006ae140(DAT_007fa158,(uint)param_1,&param_2);
    thunk_FUN_00419c50(param_2,param_1);
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f0d,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__RegisterMine_007a8758);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f0e);
  return 0xffffffff;
}

