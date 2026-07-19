
undefined4 * __cdecl FUN_00648780(int param_1,char *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  ushort *local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x7f);
    }
    local_8 = FUN_006f2d90(param_1,param_2,1,0);
    if (local_8 != (ushort *)0x0) {
      local_c = thunk_FUN_00648530((undefined4 *)local_8);
      thunk_FUN_006484f0((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x86,0,errorCode,&DAT_007a4ccc,
                             s_LoadBossEdit_007d2828);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  thunk_FUN_006484f0((int *)&local_8);
  thunk_FUN_006484f0((int *)&local_c);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x88);
  return (undefined4 *)0x0;
}

