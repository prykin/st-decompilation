
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfany.cpp
   Diagnostic line evidence: 25 | 27 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

ushort * __cdecl mfAnyLoad(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  int iVar3;
  void *unaff_ESI;
  int *piVar4;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  int local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    if ((param_3 & 4) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = &local_8;
    }
    puVar2 = cMf32::RecGet(param_1,0,param_2,piVar4,param_4);
    g_currentExceptionFrame = pIVar5;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfany_cpp_007f08c8,0x19,0,errorCode,&DAT_007a4ccc,
                             s_mfAnyLoad_007f08dc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (ushort *)(*pcVar1)();
    return puVar2;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfany_cpp_007f08c8,0x1b);
  return (ushort *)0x0;
}

