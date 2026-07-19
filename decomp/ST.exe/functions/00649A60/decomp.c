
undefined4 * __cdecl FUN_00649a60(int param_1)

{
  code *pcVar1;
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x178,0,errorCode,
                               &DAT_007a4ccc,s_CreatePlrData_007d2930);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      puVar2 = (undefined4 *)(*pcVar1)();
      return puVar2;
    }
    RaiseInternalException(errorCode,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x179);
    return (undefined4 *)0x0;
  }
  if ((&DAT_008087e8)[param_1 * 0x51] != '\x01') {
    if ((&DAT_008087e8)[param_1 * 0x51] != '\x02') {
      RaiseInternalException(-5,DAT_007ed77c,s_E____titans_ai_ai_creat_cpp_007d2880,0x175);
      g_currentExceptionFrame = pIVar4;
      return local_8;
    }
    puVar2 = thunk_FUN_00649790();
    g_currentExceptionFrame = pIVar4;
    return puVar2;
  }
  puVar2 = thunk_FUN_006494c0();
  g_currentExceptionFrame = pIVar4;
  return puVar2;
}

