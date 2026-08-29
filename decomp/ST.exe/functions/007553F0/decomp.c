#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0 */

int FUN_007553f0(AnonShape_007553F0_ACB112C2 *param_1,int *param_2,undefined4 *param_3,
                undefined4 *param_4)

{
  short sVar1;
  AnonNested_AnonShape_007553F0_ACB112C2_000C_55EC6C8F *pAVar2;
  int iVar3;
  RecoveredRecord_00755D40_97E6B3C8 *pRVar4;
  int *piVar5;
  uint uVar7;
  byte *puVar8;
  byte *puVar9;

  pAVar2 = (AnonNested_AnonShape_007553F0_ACB112C2_000C_55EC6C8F *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar2;
  pRVar4 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,
                        *(undefined4 *)((int)&pAVar2[2].field_0x0 + (int)pAVar2->field_001C * 2 * 4)
                        ,(int)pAVar2->field_001C);
  iVar3 = *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8);
  if (iVar3 == -1) {
    iVar3 = *(int *)&pRVar4->field_0x4;
  }
  else {
    if (iVar3 == pRVar4->field_0008) goto LAB_00755464;
    iVar3 = *(int *)(&pRVar4[1].field_0x6 + iVar3);
  }
  while (iVar3 != -1) {
    param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + 1);
    pRVar4 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,iVar3,
                          (int)param_1->field_000C->field_001C);
    *(undefined4 *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) =
         0xffffffff;
    iVar3 = *(int *)&pRVar4->field_0x4;
  }
LAB_00755464:

  FUN_00757450((RecoveredRecordView_00755E10_DA2F2616 *)param_1,
               *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8
                       ));
  pAVar2 = param_1->field_000C;
  puVar8 = (byte *)(pAVar2->field_001C);
  if (*(int *)(&pAVar2[2].field_0x4 + (int)puVar8 * 8) == (int)pRVar4->field_0008) {
    do {
      if (puVar8 == nullptr) {
        FUN_00750fb0((AnonShape_00750FB0_15A3AC3E *)param_1,0,0);
        return -4;
      }
      pAVar2->field_001C = (undefined4 *)((int)puVar8 + -1);
      puVar8 = (byte *)(param_1->field_000C->field_001C);
      pRVar4 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,
                            *(undefined4 *)(&param_1->field_000C[2].field_0x0 + (int)puVar8 * 8),
                            (int)puVar8);

      FUN_00757450((RecoveredRecordView_00755E10_DA2F2616 *)param_1,
                   *(int *)(&param_1->field_000C[2].field_0x4 +
                           (int)param_1->field_000C->field_001C * 8));
      pAVar2 = param_1->field_000C;
      puVar8 = (byte *)(pAVar2->field_001C);
    } while (*(int *)(&pAVar2[2].field_0x4 + (int)puVar8 * 8) == (int)pRVar4->field_0008);
  }
  iVar3 = *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8);
  puVar8 = (byte *)(&pRVar4[1].field_0x6 + iVar3);
  *param_3 = *(undefined4 *)(&pRVar4[2].field_0x0 + iVar3);
  *param_4 = *puVar8;
  sVar1 = *(short *)&param_1->field_000C[1].field_0x14;
  if (sVar1 == 0) {
    /* ST_CALLSITE[00755514]: CALL dword ptr [ESI + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar7 = (**(code **)&param_1->field_000C->field_0x8)(puVar8 + 2);
  }
  else {
    uVar7 = (uint)sVar1;
  }
  if (*param_2 == 1) {
    piVar5 = FUN_006bfb70(uVar7);
    *param_2 = (int)piVar5;
    if (piVar5 == nullptr) {
      return -2;
    }
  }
  if ((undefined4 *)*param_2 != nullptr) {
    puVar8 = (byte *)(puVar8 + 2);
    puVar9 = (byte *)*param_2;
    memmove(puVar9, puVar8, uVar7); /* compiler REP MOVS byte copy */
  }
  return 0;
}

