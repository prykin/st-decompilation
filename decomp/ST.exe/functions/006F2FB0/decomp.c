
int __cdecl FUN_006f2fb0(cMf32 *param_1,char *param_2,int param_3)

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
    iVar2 = cMf32::RecGetOrigLen(param_1,0xc,param_2,(undefined1 *)0x0,param_3);
    g_currentExceptionFrame = pIVar4;
    return iVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfaobj_cpp_007efd3c,0x5c,0,iVar2,&DAT_007a4ccc,
                             s_mfAObjLen_007efd6c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfaobj_cpp_007efd3c,0x5e);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

