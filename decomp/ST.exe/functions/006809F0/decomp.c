
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 292 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl FUN_006809f0(uint *param_1)

{
  InternalExceptionFrame local_5c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;

  local_c = 0;
  local_8 = (byte *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (local_14 == 0) {
    local_18 = param_1[2];
    local_10 = local_14;
    local_8 = (byte *)FUN_006c8910(param_1,(int *)&local_c);
    thunk_FUN_00680890(0x17,local_8,local_c,&local_18);
    if (local_8 != (byte *)0x0) {
      FreeAndNull(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (local_8 != (byte *)0x0) {
    FreeAndNull(&local_8);
  }
  RaiseInternalException(local_14,0,s_E____titans_ai_ai_script_cpp_007d5604,0x124);
  return 0;
}

