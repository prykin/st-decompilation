
void __cdecl thunk_FUN_0055dbf0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  undefined4 in_stack_fffffbb8;
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  errorCode = __setjmp3(IStack_48.jumpBuffer,0,unaff_ESI,in_stack_fffffbb8);
  if (errorCode == 0) {
    FUN_006b0ba0((int)param_1,&stack0xfffffbb8,0,0x100);
    FUN_007192d0(param_1,(undefined4 *)&stack0xfffffbb8,0,0x100,param_2,param_3);
    g_currentExceptionFrame = IStack_48.previous;
    return;
  }
  g_currentExceptionFrame = IStack_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_paltool_cpp_007c95d8,0x1d,0,errorCode,&DAT_007a4ccc,
                             s_DarkScreen_007c95f4);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_paltool_cpp_007c95d8,0x1f);
  return;
}

