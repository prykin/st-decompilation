
undefined4 __cdecl FUN_0071adb0(byte *param_1,uint param_2,int param_3,char *param_4,char param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_3 == 0) || (param_1 == (byte *)0x0)) || (param_4 == (char *)0x0)) {
      RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x2d);
    }
    FUN_006f13f0(0,param_4,param_1,param_2,(undefined4 *)0x0,param_5,(uint *)0x0);
    g_currentExceptionFrame = local_48.previous;
    return 1;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfany_cpp_007f08c8,0x31,0,errorCode,&DAT_007a4ccc,
                             s_mfAnySave_007f08e8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfany_cpp_007f08c8,0x33);
  return 0;
}

