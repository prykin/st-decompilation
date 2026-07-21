
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 116 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006802A0 -> 006A5E40 @ 006802E7 | 006823E0 -> 006802A0 @ 006825E2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006826A0 -> 006802A0 @ 006826B9 | 006826A0 -> 006802A0 @ 006826D6 | 006826A0 ->
   006802A0 @ 006826F4 | 00682720 -> 006802A0 @ 00682739 | 00682720 -> 006802A0 @ 00682756 |
   00682720 -> 006802A0 @ 00682774 | 00683C70 -> 006802A0 @ 00684F1A */

void __cdecl FUN_006802a0(int exceptionCode,char *resourceString)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;

  if (resourceString != (char *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = resourceString;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = resourceString + 1;
      cVar1 = *resourceString;
      resourceString = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = (char *)&DAT_008488b4;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  RaiseInternalException
            (exceptionCode,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0x74)
  ;
  return;
}

