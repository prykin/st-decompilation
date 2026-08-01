
void FUN_005531f0(void)

{
  int iVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_array_00802A4C == (DArrayTy *)0x0) {
      g_array_00802A4C = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,6,10);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

