
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\mfpla.cpp
   Diagnostic line evidence: 70 | 72 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfPlaGetClust(cMf32 *param_1,char *param_2,int param_3)

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
    puVar3 = cMf32::RecGetParam(param_1,0xd,param_2,(undefined4 *)local_10,param_3);
    if (puVar3 == (undefined4 *)0x0) {
      g_currentExceptionFrame = pIVar5;
      return -4;
    }
    g_currentExceptionFrame = pIVar5;
    return (int)local_10[0];
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E__ourlib_mfpla_cpp_007f0c44,0x46,0,iVar2,&DAT_007a4ccc,
                             s_mfPlaGetClust_007f0c58);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__ourlib_mfpla_cpp_007f0c44,0x48);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

