
undefined4 __cdecl
FUN_0071a030(byte *param_1,uint param_2,byte param_3,int param_4,char *param_5,char param_6)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  ushort local_10 [6];
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_4 == 0) || (param_1 == (byte *)0x0)) || (param_5 == (char *)0x0)) {
      RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_mfwav_cpp_007f0800,0x7b);
    }
    local_10[0] = (ushort)param_3;
    cMf32::RecPut((cMf32 *)param_4,2,param_5,param_1,param_2,(undefined4 *)local_10,param_6,
                  (uint *)0x0);
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfwav_cpp_007f0800,0x80,0,errorCode,&DAT_007a4ccc,
                             s_mfWavSave_007f0844);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfwav_cpp_007f0800,0x82);
  return 0;
}

