#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055BDD0 -> 0072E340 @ 0055BE55 | 0055BDD0 -> 0072ED50 @ 0055BE34 | 0055C830 ->
   0055BDD0 @ 0055C8DB | 0055C830 -> 0055BDD0 @ 0055CA31 | 0055C830 -> 0055BDD0 @ 0055CAE4 |
   0055C830 -> 0055BDD0 @ 0055CC62 | 0055C830 -> 0055BDD0 @ 0055CD2A */

void FUN_0055bdd0(char *param_1,char *source)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;

  if (param_1 == nullptr) {
    Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,source,0x834);
  }
  else {
    Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,param_1,0x20);
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_007c94cc;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_0080f33a;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_007c94cc;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    Library::MSVCRT::_strncat((char *)&DAT_0080f33a,source,0x814 - (~uVar2 - 1));
  }
  DAT_0080fb6d = 0;
  if (g_popUp_008016D8 != nullptr) {
    thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
  }
  return;
}

