
int __cdecl FUN_006f3050(cMf32 *param_1,char *param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  undefined2 local_10;
  undefined2 local_e;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    cMf32::RecGetParam(param_1,0xc,param_2,(undefined4 *)&local_10,1);
    g_currentExceptionFrame = pIVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_10;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = local_e;
    }
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfaobj_cpp_007efd3c,0x74,0,iVar2,&DAT_007a4ccc,
                             s_mfAObjParam_007efd78);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfaobj_cpp_007efd3c,0x76);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

