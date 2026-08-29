#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00693910_1CC6632C (current recovered
   extent=6560) */

RecoveredRecordView_00693910_0CDC4AE1 * __fastcall
FUN_00693910(RecoveredRecordView_00693910_0CDC4AE1 *param_1)

{
  int iVar1;
  uint *puVar2;
  byte *puVar3;
  RecoveredRecordView_00693910_0CDC4AE1 *pRVar4;
  byte *puVar5;
  int local_8;

  puVar2 = (undefined4 *)&param_1->field_0x4a;
  pRVar4 = param_1;
  for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pRVar4 = 0;
    pRVar4 = (RecoveredRecordView_00693910_0CDC4AE1 *)&pRVar4->field_0x4;
  }
  *(undefined1 *)pRVar4 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0x8f000205;
  param_1->field_02DA = 1;
  param_1->field_02DB = 1;
  param_1->field_0x2dc = 0;
  param_1->field_02DD = 2;
  param_1->field_02E1 = 0xffffffff;
  local_8 = 8;
  do {
    puVar3 = (byte *)(&DAT_007d6268);
    puVar5 = (byte *)((int)puVar2 + -0x39);
    memmove(puVar5, puVar3, 0x51); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    puVar3 = (byte *)(puVar2);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = (byte *)(puVar3 + 1);
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x51);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1->field_1999 = 0;
  return param_1;
}

