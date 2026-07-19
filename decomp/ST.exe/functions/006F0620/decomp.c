
int * __cdecl FUN_006f0620(short *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  int *piVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  int *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (int *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (param_1 == (short *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x20a);
    }
    local_8 = FUN_006f0700((int)*param_1 / 2,(int)param_1[1] / 2);
    FUN_006f0800((int)param_1,local_8);
    g_currentExceptionFrame = pIVar4;
    return local_8;
  }
  g_currentExceptionFrame = pIVar4;
  iVar2 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x210,0,errorCode,&DAT_007a4ccc,
                             s_AuxTMapCreate_007ef054);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    piVar3 = (int *)(*pcVar1)();
    return piVar3;
  }
  FUN_006f07e0((int *)&local_8);
  RaiseInternalException(errorCode,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x213);
  return (int *)0x0;
}

