
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\Mfimg.cpp
   Diagnostic line evidence: 971 | 975 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
imgGetSprFromFile(byte *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,
                 uint param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_4c [16];
  int local_c;
  int *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_c = 0;
  local_8 = (int *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    local_8 = imgGetDibFromFile(param_1,param_2,param_3,param_4,param_5,param_7,8,(uint *)0x0,0);
    iVar2 = FUN_006b4fa0((int)local_8);
    FUN_006b4b20(&local_c,(uint)local_8,iVar2,param_6);
    if (local_8 != (int *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = pIVar4;
    return local_c;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x3cb,0,iVar2,&DAT_007a4ccc,
                             s_imgGetSprFromFile_007f00ec);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x3cf);
  return 0;
}

