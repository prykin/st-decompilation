
undefined4 __cdecl FUN_0071b010(LPCSTR param_1,int param_2,char *param_3,char param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_2 == 0) || (param_1 == (LPCSTR)0x0)) || (param_3 == (char *)0x0)) {
      RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x6f);
    }
    local_8 = (byte *)FUN_0071ae80(param_1,&local_c);
    FUN_0071adb0(local_8,local_c,param_2,param_3,param_4);
    g_currentExceptionFrame = local_50.previous;
    return 1;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfany_cpp_007f08c8,0x74,0,errorCode,&DAT_007a4ccc,
                             s_mfAnySaveFile_007f0900);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfany_cpp_007f08c8,0x78);
  return 0;
}

