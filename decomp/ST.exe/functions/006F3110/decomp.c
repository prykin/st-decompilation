
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfaobj.cpp
   Diagnostic line evidence: 142 | 144 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl mfAObjSave(cMf32 *param_1,char *param_2,byte *param_3,uint param_4,char param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    cMf32::RecPut(param_1,0xc,param_2,param_3,param_4,&local_10,param_5,(uint *)0x0);
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfaobj_cpp_007efd3c,0x8e,0,iVar2,&DAT_007a4ccc,
                             s_mfAObjSave_007efd84);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfaobj_cpp_007efd3c,0x90);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

