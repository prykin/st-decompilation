
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\mfdarr.cpp
   Diagnostic line evidence: 91 | 96 | 99 | 103 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfDarGetNum(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  int local_10 [3];
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_mfdarr_cpp_007f03fc,0x5b);
    }
    cMf32::RecGetParam((cMf32 *)param_1,0x14,param_2,local_10,1);
    g_currentExceptionFrame = pIVar4;
    return local_10[0];
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__ourlib_mfdarr_cpp_007f03fc,0x60,0,iVar2,&DAT_007a4ccc,
                             s_mfDarGetNum_007f0420);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (iVar2 == -4) {
    if (param_3 != 0) {
      RaiseInternalException(-4,0,s_E__ourlib_mfdarr_cpp_007f03fc,99);
    }
    return -4;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_mfdarr_cpp_007f03fc,0x67);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

