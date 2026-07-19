
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 594 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void FUN_00682d70(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_c;
  undefined2 local_b;
  
  pcVar3 = DAT_00857548;
  pbVar1 = thunk_FUN_0067eca0();
  iVar2 = thunk_FUN_0067f180(pbVar1,pcVar3);
  if (iVar2 < 0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x252);
  }
  local_c = 3;
  local_b = (undefined2)iVar2;
  thunk_FUN_00682370((undefined4 *)&local_c);
  thunk_FUN_006827a0();
  return;
}

