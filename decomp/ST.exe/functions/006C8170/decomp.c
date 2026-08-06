#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DA7A0 -> 006C8170 @ 005DA834 | 006B6230 -> 006C8170 @ 006B6290 */

char * FUN_006c8170(char *resourceString)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *piVar5;
  char *pcVar6;
  int *piVar7;

  piVar2 = nullptr;
  if (resourceString != nullptr) {
    uVar3 = 0xffffffff;
    pcVar6 = resourceString;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    piVar2 = FUN_006bfb70(~uVar3);
    if (piVar2 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = resourceString;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = resourceString + 1;
        cVar1 = *resourceString;
        resourceString = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      piVar5 = (int *)(pcVar6 + -uVar3);
      piVar7 = piVar2;
      memmove(piVar7, piVar5, uVar3); /* compiler REP MOVS byte copy */
    }
  }
  return (char *)piVar2;
}

