#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
FUN_00693b20(void *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7,char *param_8)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *puVar7;
  char *pcVar8;
  byte *puVar9;
  char *pcVar10;
  char *pcVar8_mg0;

  iVar3 = thunk_FUN_00693e60(param_1,param_2);
  if (iVar3 != 0) {
    return nullptr;
  }
  uVar4 = thunk_FUN_006941c0(param_1);
  puVar1 = (undefined4 *)((int)param_1 + param_2 * 0x51 + 0x11);
  puVar7 = (byte *)(&DAT_007d6268);
  puVar9 = (byte *)(puVar1);
  memmove(puVar9, puVar7, 0x51); /* compiler REP MOVS byte copy */
  *(char *)((int)param_1 + param_2 * 0x51 + 0x33) = (char)param_2;
  *(undefined1 *)((int)param_1 + param_2 * 0x51 + 0x32) = param_3;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x35) = param_4;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x39) = param_5;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x3d) = param_6;
  *(undefined1 *)puVar1 = param_7;
  if (-1 < (int)uVar4) {
    *(char *)((int)param_1 + param_2 * 0x51 + 0x34) = (char)uVar4;
  }
  if (param_8 != nullptr) {
    uVar5 = 0xffffffff;
    do {
      pcVar8_mg0 = param_8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8_mg0 = param_8 + 1;
      cVar2 = *param_8;
      param_8 = pcVar8_mg0;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8_mg0 + -uVar5;
    pcVar10 = (char *)((int)param_1 + param_2 * 0x51 + 0x12);
    memmove(pcVar10, pcVar8, uVar5); /* compiler REP MOVS byte copy */
  }
  STField<char>(param_1,0x10) = STField<char>(param_1,0x10) + '\x01';
  return puVar1;
}

