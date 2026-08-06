#include "../../pseudocode_runtime.h"


void __thiscall FUN_00490ed0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    Library::MSVCRT::_strncpy((char *)((int)this + 0x6fb),param_1,0xe);
    STField<undefined1>(this,0x709) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x6fb);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

