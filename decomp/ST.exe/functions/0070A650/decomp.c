
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\Mfimg.cpp
   Diagnostic line evidence: 55 | 57 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfImgGetLen(cMf32 *param_1,byte param_2,char *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_44 [16];
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar2 = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    iVar2 = cMf32::RecGetOrigLen(param_1,param_2,param_3,(undefined1 *)0x0,param_4);
    g_currentExceptionFrame = pIVar4;
    return iVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x37,0,iVar2,&DAT_007a4ccc,0x7f0000);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x39);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

