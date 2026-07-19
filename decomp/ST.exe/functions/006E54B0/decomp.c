
int FUN_006e54b0(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_50 [16];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    local_10 = param_4;
    local_c = FUN_006e3810(param_1,param_4);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(local_c + 8);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_c;
    }
    *(int *)(local_c + 0xc) = local_8;
    FUN_006ae1c0(*(uint **)(local_8 + 0x10),&local_10);
    g_currentExceptionFrame = pIVar4;
    return local_c;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x3b3,0,iVar2,
                             s_SystemClassTy___CreateObject_err_007eeac8,param_1,param_1);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x3b4);
  return 0;
}

