
ushort * __cdecl FUN_006f0cd0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_44 [16];
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = __setjmp3(local_44,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    puVar2 = FUN_006f1ce0(0x1b,param_2,(int *)0x0,param_3);
    g_currentExceptionFrame = pIVar4;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,700,0,errorCode,&DAT_007a4ccc,
                             s_mf3DXLoad_007ef088);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (ushort *)(*pcVar1)();
    return puVar2;
  }
  RaiseInternalException(errorCode,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x2be);
  return (ushort *)0x0;
}

