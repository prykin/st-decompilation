
undefined4 __cdecl
FUN_0070ad60(cMf32 *param_1,char *param_2,int param_3,uint param_4,uint *param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_4c [16];
  uint local_c;
  int local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_c = 0;
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  errorCode = __setjmp3(local_4c,0,unaff_ESI,pIVar4);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar2 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,400,0,errorCode,&DAT_007a4ccc,
                               s_mfJpgLoadToDib_007f0070);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    cMf32::RecMemFree(param_1,&local_c);
    if (local_8 != 0) {
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x195);
    return 0;
  }
  local_c = FUN_0070ad40(param_1,param_2,0,param_7);
  if (local_c == 0) {
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  local_8 = FUN_00751c40(local_c,param_4,param_3,param_5,param_6);
  cMf32::RecMemFree(param_1,&local_c);
  g_currentExceptionFrame = pIVar4;
  return local_8;
}

