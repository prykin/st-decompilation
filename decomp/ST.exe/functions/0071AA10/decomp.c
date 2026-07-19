
uint * __cdecl FUN_0071aa10(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfsarr_cpp_007f0898,0x1e,0,errorCode,&DAT_007a4ccc,
                               s_mfSarLoad_007f088c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
    if (local_8 != (uint *)0x0) {
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
    }
    if (local_c != (uint *)0x0) {
      FUN_006b5570((byte *)local_c);
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_mfsarr_cpp_007f0898,0x23);
    return (uint *)0x0;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfsarr_cpp_007f0898,0x15);
  }
  puVar2 = FUN_006f1ce0(0x17,param_2,(int *)&local_8,param_3);
  if (puVar2 == (ushort *)0x0) {
    g_currentExceptionFrame = local_50.previous;
    return (uint *)0x0;
  }
  puVar3 = FUN_006c8680((uint *)0x0,local_8);
  if (local_8 != (uint *)0x0) {
    local_c = puVar3;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
  }
  g_currentExceptionFrame = local_50.previous;
  return puVar3;
}

