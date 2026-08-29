#include "../../pseudocode_runtime.h"


uint __cdecl FUN_006f2d10(RecoveredRecord_006F2D10_2C6A4914 *param_1,byte *param_2)

{
  short sVar1;
  uint uVar3;
  uint uVar4;
  RecoveredRecord_006F2D10_2C6A4914 *pRVar5;
  uint *puVar6;
  uint local_204 [128];

  if (*param_2 != *(byte *)param_1) {
    return (uint)*param_2 - (uint)*(byte *)param_1;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  memset(local_204, 0, 0x200); /* compiler bulk-zero initialization */
  sVar1 = param_1->field_0016;
  pRVar5 = param_1 + 1;
  puVar6 = local_204;
  for (uVar4 = (uint)(int)sVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(uint *)pRVar5;
    pRVar5 = (RecoveredRecord_006F2D10_2C6A4914 *)&pRVar5->field_0x4;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = (int)sVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)pRVar5;
    pRVar5 = (RecoveredRecord_006F2D10_2C6A4914 *)&pRVar5->field_0x1;
    puVar6 = (uint *)((int)puVar6 + 1);
  }

  uVar3 = FUN_006f2cb0(local_204,(char *)(param_2 + 1));
  return uVar3;
}

