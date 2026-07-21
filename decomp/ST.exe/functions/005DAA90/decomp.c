
undefined4 FUN_005daa90(void)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  if (g_int_00811764 != (int *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      StartSystemTy::sub_005DAB30(local_8);
      Library::DKW::DDX::FUN_006b65f0(g_int_00811764,&local_8->field_068E);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    StartSystemTy::sub_005DAB30(local_8);
  }
  return 0xfffffffa;
}

