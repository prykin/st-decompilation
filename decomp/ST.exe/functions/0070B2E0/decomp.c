
uint __cdecl FUN_0070b2e0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  undefined1 local_10 [12];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  errorCode = __setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar5;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x215,0,errorCode,&DAT_007a4ccc,
                               s_mfImtGetModeIms_007f009c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x217);
    return 0xff;
  }
  puVar2 = FUN_006f2310(0xb,param_2,(undefined4 *)local_10,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    g_currentExceptionFrame = pIVar5;
    return 0xfffffffc;
  }
  g_currentExceptionFrame = pIVar5;
  return local_10._2_4_ & 0xff;
}

