
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 437 | 438 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void FUN_006827a0(void)

{
  int exceptionCode;

  do {
    exceptionCode = thunk_FUN_006736f0();
    if (exceptionCode < 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                 0x1b5);
    }
    if (DAT_007d2d18 == 0x1c) {
      RaiseInternalException
                (-0x6f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x1b6);
    }
  } while (DAT_007d2d18 == 0x1d);
  return;
}

