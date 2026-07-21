
void __fastcall FUN_00550bb0(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_50;
  int local_c;
  char local_5;

  if (DAT_0080877e == '\0') {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = param_1;
    iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (iVar1 == 0) {
      FUN_006b6500(g_int_00811764,1);
      local_5 = '\0';
      iVar1 = FUN_00715360(g_int_00811764,1,'B',&local_5,1,0,0xffffffff);
      if (iVar1 == 0) {
        *(undefined4 *)(local_c + 0x59) = 1;
      }
      FUN_006b6500(g_int_00811764,DAT_0080733c);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

