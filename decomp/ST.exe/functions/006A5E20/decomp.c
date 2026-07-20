
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A5E20 -> 007338AC @ 006A5E34 */

int FUN_006a5e20(int value)

{
  if (g_currentExceptionFrame != (InternalExceptionFrame *)0x0) {
                    /* WARNING: Subroutine does not return */
    Library::MSVCRT::_longjmp(g_currentExceptionFrame->jumpBuffer,value);
  }
  return value;
}

