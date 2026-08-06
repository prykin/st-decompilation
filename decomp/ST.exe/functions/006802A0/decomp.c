#include "../../pseudocode_runtime.h"


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
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg0;

  if (resourceString != nullptr) {
    uVar2 = 0xffffffff;
    do {
      pcVar4_mg0 = resourceString;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4_mg0 = resourceString + 1;
      cVar1 = *resourceString;
      resourceString = pcVar4_mg0;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4_mg0 + -uVar2;
    pcVar5 = (char *)&DAT_008488b4;
    memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  }
  RaiseInternalException
            (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x74);
  return;
}

