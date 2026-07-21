
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::IsTorpLive */

undefined4 __thiscall STAllPlayersC::IsTorpLive(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_4c [16];
  undefined4 local_c;
  int local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_c = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar5);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar5;
    if (iVar2 != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x80b,0,iVar2,
                                 &DAT_007a4ccc,s_STAllPlayersC__IsTorpLive_007a6740);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x80c);
    }
    return local_c;
  }
  iVar2 = DArrayGetElement(PTR_007fa130,(int)param_1,&local_8);
  if (iVar2 != -4) {
    if (local_8 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x806);
    }
    if (*(int *)(local_8 + 0x18) == param_2) {
      g_currentExceptionFrame = pIVar5;
      return 1;
    }
  }
  g_currentExceptionFrame = pIVar5;
  return local_c;
}

