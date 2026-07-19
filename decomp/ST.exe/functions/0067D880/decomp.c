
undefined4 * __cdecl FUN_0067d880(int param_1,char *param_2)

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
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0xee);
    }
    local_8 = FUN_006f2d90(param_1,param_2,1,0);
    if (local_8 != (ushort *)0x0) {
      local_c = thunk_FUN_0067d1d0((undefined4 *)local_8);
      thunk_FUN_0067d160((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0xf5,0,errorCode,&DAT_007a4ccc,
                             s_LoadPlrEdit_007d2fd8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  thunk_FUN_0067d160((int *)&local_8);
  thunk_FUN_0067d160((int *)&local_c);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0xf7);
  return (undefined4 *)0x0;
}

