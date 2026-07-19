
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 79 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl DibPut(undefined4 *param_1,int param_2,int param_3,char param_4,byte *param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  if ((param_1 != (undefined4 *)0x0) && (param_5 != (byte *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
    if (errorCode == 0) {
      if (param_4 == '\x01') {
        Library::DKW::WGR::FUN_006b55f0
                  (param_1,0,param_2,param_3,(int)param_5,0,0,0,*(int *)(param_5 + 4),
                   *(int *)(param_5 + 8));
      }
      else if (param_4 == '\x06') {
        FUN_006b84d0((uint)param_1,0,param_2,param_3,param_5);
        g_currentExceptionFrame = pIVar3;
        return;
      }
      g_currentExceptionFrame = pIVar3;
      return;
    }
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x4f,0,errorCode,
                               &DAT_007a4ccc,s_DibPut_007c7b7c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_support_cpp_007c7b2c,0x4f);
  }
  return;
}

