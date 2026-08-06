#include "../../pseudocode_runtime.h"


uint __cdecl FUN_006f2d10(byte *param_1,byte *param_2)

{
  short sVar1;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_204 [128];

  if (*param_2 != *param_1) {
    return (uint)*param_2 - (uint)*param_1;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  memset(local_204, 0, 0x200); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1 + 0x16);
  puVar5 = (uint *)(param_1 + 0x18);
  puVar6 = local_204;
  for (uVar4 = (uint)(int)sVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = (int)sVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  uVar3 = FUN_006f2cb0(local_204,(char *)(param_2 + 1));
  return uVar3;
}

