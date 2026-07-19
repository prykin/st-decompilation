
void RaiseInternalException(int exceptionCode,int overwriteContext,char *sourceFile,int sourceLine)

{
  if ((overwriteContext != 0) || (g_exceptionSourceFile == (char *)0x0)) {
    g_exceptionSourceFile = sourceFile;
    g_exceptionSourceLine = sourceLine;
    g_exceptionCode = exceptionCode;
  }
  if (g_currentExceptionFrame != (InternalExceptionFrame *)0x0) {
                    /* WARNING: Subroutine does not return */
    Library::MSVCRT::_longjmp(g_currentExceptionFrame->jumpBuffer,exceptionCode);
  }
  return;
}

