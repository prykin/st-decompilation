#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __cdecl FUN_00648a30(int param_1,char *param_2)

{
  char cVar1;
  AiPlrClassTy *pAVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  if ((((g_allPlayers_007FA174 == nullptr) || (param_1 < 0)) || (7 < param_1)) ||
     (pAVar2 = thunk_FUN_004357f0((char)param_1), pAVar2 == nullptr)) {
    return 0;
  }
  if (param_2 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5 = &pAVar2->field_0x5ee;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    memmove(param_2, pcVar5, uVar3); /* compiler REP MOVS byte copy */
  }
  return 1;
}

