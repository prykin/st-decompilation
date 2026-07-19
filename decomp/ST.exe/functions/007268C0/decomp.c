
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfspr.cpp
   Diagnostic line evidence: 392 | 396 | 398 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfUSprGetNumFas(cMf32 *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  short local_10 [6];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    puVar3 = cMf32::RecGetParam(param_1,0x15,param_2,(undefined4 *)local_10,param_3);
    if (puVar3 == (undefined4 *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x188);
    }
    g_currentExceptionFrame = pIVar5;
    return (int)local_10[0];
  }
  g_currentExceptionFrame = pIVar5;
  if ((param_3 == 0) && (iVar2 == -4)) {
    return -4;
  }
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfspr_cpp_007f0c8c,0x18c,0,iVar2,&DAT_007a4ccc,
                             s_mfUSprGetNumFas_007f0d0c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfspr_cpp_007f0c8c,0x18e);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

