#include "../../pseudocode_runtime.h"


void FUN_0074c8a9(AnonShape_0074C8A9_0F993FDC *param_1)

{
  int iVar1;
  byte *puVar3;
  byte *puVar4;
  undefined4 auStack_24 [6];

  iVar1 = param_1->field_0090->field_0000;
  puVar3 = (byte *)&stack0x0000000c;
  puVar4 = (byte *)(auStack_24);
  memmove(puVar4, puVar3, 0x18); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(iVar1 + 0x40))();
  if (iVar1 == 1) {
    FUN_007489f8(param_1->field_0090->field_008C,(undefined4 *)&stack0xfffffff4);
  }
  return;
}

