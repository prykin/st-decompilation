
undefined4 __cdecl FUN_00715050(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  byte *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_c = (byte *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E__ourlib_mfdarr_cpp_007f03fc,0x1f,0,errorCode,&DAT_007a4ccc,
                               s_mfDarLoad_007f03f0);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (local_8 != (uint *)0x0) {
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
    }
    if (local_c != (byte *)0x0) {
      FUN_006ae110(local_c);
    }
    RaiseInternalException(errorCode,0,s_E__ourlib_mfdarr_cpp_007f03fc,0x24);
    return 0;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_mfdarr_cpp_007f03fc,0x16);
  }
  puVar2 = cMf32::RecGet((cMf32 *)param_1,0x14,param_2,(int *)&local_8,param_3);
  if (puVar2 == (ushort *)0x0) {
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  uVar3 = FUN_006b0060((uint *)0x0,local_8);
  if (local_8 != (uint *)0x0) {
    local_c = (byte *)uVar3;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
  }
  g_currentExceptionFrame = local_50.previous;
  return uVar3;
}

