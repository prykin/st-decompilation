#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00674d20(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_108 [260];

  if ((DAT_0081196c != 0) && (DAT_00811970 != nullptr)) {
    uVar2 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar5 + -uVar2;
    pcVar7 = local_108;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_007c8ff4;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar5 = local_108;
    do {
      pcVar6 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    Library::MSVCRT::FUN_0072eb70(local_108,DAT_00811970);
  }
  return;
}

