
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::IsTorpLive */

undefined4 __thiscall STAllPlayersC::IsTorpLive(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
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
  errorCode = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar5);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar5;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x80b,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__IsTorpLive_007a6740);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x80c);
    }
    return local_c;
  }
  uVar2 = FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa130,(int)param_1,&local_8);
  if (uVar2 != 0xfffffffc) {
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

