
int FUN_006a5e20(int param_1)

{
  if (g_currentExceptionFrame != (InternalExceptionFrame *)0x0) {
                    /* WARNING: Subroutine does not return */
    Library::MSVCRT::_longjmp(g_currentExceptionFrame->jumpBuffer,param_1);
  }
  return param_1;
}

