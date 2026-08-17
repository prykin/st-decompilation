#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007535F0 -> 0072F110 @ 007536C3 | 007535F0 -> 0072F110 @ 00753784
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00750940 @ 0075094E
   -> NEG NEG EAX */

int FUN_007535f0(char *_Drive)

{
  char cVar1;
  int local_EAX_58;
  int iVar2;
  int local_EAX_251;
  int local_EAX_275;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte local_408 [256];
  byte local_308 [256];
  byte local_208 [256];
  char local_108 [260];
  char *pcVar7_mg0;

  pcVar7_mg0 = _Drive;
  Library::MSVCRT::FUN_0072e730((byte *)_Drive,(byte *)&_Drive,local_408,local_308,local_208);
  local_EAX_58 = Library::MSVCRT::__strcmpi((char *)local_208,&CHAR___007c7078);
  if ((local_EAX_58 == 0) ||
     (iVar2 = Library::MSVCRT::__strcmpi((char *)local_208,&CHAR___007c7080), iVar2 == 0)) {
    Library::MSVCRT::__makepath
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&CHAR___007c7078);
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = pcVar7_mg0;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = local_108;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &CHAR___007c7078;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_108;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  iVar5 = FUN_00754f40(local_108);
  if (iVar5 == 0) {
    return 0;
  }
  local_EAX_251 = Library::MSVCRT::__strcmpi((char *)local_208,&CHAR___007c7078);
  if ((local_EAX_251 == 0) ||
     (local_EAX_275 = Library::MSVCRT::__strcmpi((char *)local_208,&CHAR___007c7080),
     local_EAX_275 == 0)) {
    Library::MSVCRT::__makepath
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&CHAR___007c7080);
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar7_mg0;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7_mg0 + 1;
      cVar1 = *pcVar7_mg0;
      pcVar7_mg0 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = local_108;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &CHAR___007c7080;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_108;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  /* ST_CALLSITE[00753793]: CALL dword ptr [0x0085bcd0] */
  DVar2 = GetFileAttributesA(local_108);
  return (uint)(DVar2 != 0xffffffff);
}

