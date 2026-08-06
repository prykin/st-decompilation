#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
FUN_00693b20(void *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7,char *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *puVar6;
  char *pcVar7;
  byte *puVar8;
  char *pcVar9;

  iVar3 = thunk_FUN_00693e60(param_1,param_2);
  if (iVar3 != 0) {
    return nullptr;
  }
  uVar4 = thunk_FUN_006941c0(param_1);
  puVar1 = (undefined4 *)((int)param_1 + param_2 * 0x51 + 0x11);
  puVar6 = (byte *)(&DAT_007d6268);
  puVar8 = (byte *)(puVar1);
  memmove(puVar8, puVar6, 0x51); /* compiler REP MOVS byte copy */
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
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_8 + 1;
      cVar2 = *param_8;
      param_8 = pcVar7;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    pcVar9 = (char *)((int)param_1 + param_2 * 0x51 + 0x12);
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
  }
  STField<char>(param_1,0x10) = STField<char>(param_1,0x10) + '\x01';
  return puVar1;
}

