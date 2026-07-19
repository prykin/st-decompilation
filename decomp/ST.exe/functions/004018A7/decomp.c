
void __cdecl thunk_FUN_00648c10(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  iStack_c = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((((DAT_00802a38 == (void *)0x0) || (param_1 == 0)) || (7 < param_2)) ||
       (7 < (byte)(&DAT_008087e9)[param_2 * 0x51])) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_creat_cpp_007d2880,0x49);
    }
    iVar2 = thunk_FUN_004357f0((char)param_2);
    if (iVar2 != 0) {
      thunk_FUN_00648dd0(param_2);
    }
    iStack_8 = param_1;
    *(uint *)(param_1 + 4) = param_2;
    *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)((int)&DAT_008087eb + param_2 * 0x51);
    *(undefined2 *)(param_1 + 0x69) = *(undefined2 *)((int)&DAT_008087ef + param_2 * 0x51);
    *(undefined2 *)(param_1 + 0x6b) = *(undefined2 *)((int)&DAT_008087f3 + param_2 * 0x51);
    FUN_006e6200(DAT_00802a38,0x402,(undefined4 *)(param_2 + 0x29),(undefined4 *)0x0,(int *)0x0,
                 param_1,0);
    if (iStack_c != 0) {
      thunk_FUN_0067d160(&iStack_8);
    }
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x5f,0,iVar2,&DAT_007a4ccc,
                             s_StartStrateg_007d28a4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iStack_c != 0) {
    thunk_FUN_0067d160(&iStack_8);
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x61);
  return;
}

