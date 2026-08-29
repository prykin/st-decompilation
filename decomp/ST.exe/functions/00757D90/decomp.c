#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int FUN_00757d90(RecoveredRecordView_00757D90_DCA96F11 *param_1)

{
  int *piVar1;
  byte bVar2;
  AnonNested_AnonShape_00757D90_5427B306_0010_D8C59A06 *pAVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;

  pAVar3 = param_1->field_0010;
  pbVar5 = (byte *)pAVar3->field_0000;
  iVar4 = pAVar3->field_0004;
  while( true ) {
    if (iVar4 == 0) {
      /* ST_CALLSITE[00757DAB]: CALL dword ptr [ESI + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)pAVar3->field_0000;
      iVar4 = pAVar3->field_0004;
    }
    bVar2 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar2 == 0xff) break;
      piVar1 = (int *)(param_1->field_01A6 + 0x5c);
      *piVar1 = *piVar1 + 1;
      pAVar3->field_0000 = pbVar5;
      pAVar3->field_0004 = iVar4;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00757DD8]: CALL dword ptr [ESI + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)pAVar3->field_0000;
        iVar4 = pAVar3->field_0004;
      }
      bVar2 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        /* ST_CALLSITE[00757DF7]: CALL dword ptr [ESI + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)pAVar3->field_0000;
        iVar4 = pAVar3->field_0004;
      }
      iVar4 = iVar4 + -1;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    piVar1 = (int *)(param_1->field_01A6 + 0x5c);
    *piVar1 = *piVar1 + 2;
    pAVar3->field_0000 = pbVar5;
    pAVar3->field_0004 = iVar4;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1->field_01A6 + 0x5c) != 0) {
    *(undefined4 *)(param_1->field_01A6 + 0x5c) = 0;
  }
  param_1->field_018E = uVar6;
  pAVar3->field_0000 = pbVar5;
  pAVar3->field_0004 = iVar4;
  return 1;
}

