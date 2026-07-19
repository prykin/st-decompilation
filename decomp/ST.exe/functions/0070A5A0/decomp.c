
ushort * __cdecl
FUN_0070a5a0(undefined4 param_1,byte param_2,char *param_3,byte param_4,int param_5)

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
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    if ((param_4 & 2) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = &local_8;
    }
    puVar2 = FUN_006f1ce0(param_2,param_3,piVar4,param_5);
    g_currentExceptionFrame = pIVar5;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x1f,0,errorCode,&DAT_007a4ccc,
                             s_mfImgLoad_007efff4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (ushort *)(*pcVar1)();
    return puVar2;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x21);
  return (ushort *)0x0;
}

