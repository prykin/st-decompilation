
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterBlot */

undefined4 __thiscall STAllPlayersC::RegisterBlot(STAllPlayersC *this,ushort param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  int local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    if (param_2 == (void *)0x0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x2fa0);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)PTR_007fa164->count;
    }
    else {
      iVar2 = DArrayGetElement(PTR_007fa164,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x2fa2);
      }
    }
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa164->flags,(uint)param_1,&param_2);
    thunk_FUN_00419c50(param_2,param_1);
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fa8,0,iVar2,&DAT_007a4ccc,
                             s_STAllPlayersC__RegisterBlot_007a8844);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fa9);
  return 0xffffffff;
}

