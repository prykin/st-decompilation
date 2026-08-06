#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13 */

int __cdecl FUN_006adb90(char *sourceFile,int sourceLine,int errorCode,byte *param_4)

{
  char cVar1;
  int local_EAX_41;
  int iVar3;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_204 [512];

  local_204[0] = '\0';
  if ((param_4 != nullptr) &&
     (local_EAX_41 = Library::MSVCRT::FUN_007300e0
                               (local_204,0x200,param_4,(undefined4 *)&stack0x00000014),
     local_EAX_41 < 0)) {
    uVar3 = 0xffffffff;
    pcVar6 = "User message too long";
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = local_204;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  iVar3 = ReportDebugMessage(sourceFile,sourceLine,0,errorCode,"%s",local_204);
  if (iVar3 == 0) {
    return errorCode;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

