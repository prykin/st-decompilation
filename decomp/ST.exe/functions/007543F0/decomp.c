#include "../../pseudocode_runtime.h"


undefined4
FUN_007543f0(AnonShape_007543F0_E9DD5DAA *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  AnonNested_AnonShape_007543F0_E9DD5DAA_000C_D54F7079 *pAVar2;
  int iVar3;
  int iVar4;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *puVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_000C =
       *(AnonNested_AnonShape_007543F0_E9DD5DAA_000C_D54F7079 **)(param_1->field_0008 + 0x50);
  do {
    puVar4 = param_1->field_000C->field_001C;
    iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                         *(undefined4 *)(&param_1->field_000C[2].field_0x0 + (int)puVar4 * 8),
                         (int)puVar4);
    FUN_007561d0((AnonShape_00753C80_4C8E695D *)param_1,
                 *(int *)(&param_1->field_000C[2].field_0x4 +
                         (int)param_1->field_000C->field_001C * 8));
    iVar5 = *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8);
    if (iVar5 == -1) {
      iVar5 = *(int *)(iVar3 + 4);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x10 + iVar3);
    }
    while (iVar5 != -1) {
      param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar5,
                           (int)param_1->field_000C->field_001C);
      iVar4 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      iVar5 = *(int *)(iVar4 + 0x10 + iVar3);
    }
    pAVar2 = param_1->field_000C;
    puVar4 = pAVar2->field_001C;
    if (*(int *)(&pAVar2[2].field_0x4 + (int)puVar4 * 8) == -1) {
      do {
        if (puVar4 == nullptr) {
          FUN_00750f20((AnonShape_00750F20_F8C16F98 *)param_1,0,0);
          return 0xfffffffc;
        }
        pAVar2->field_001C = (uint *)((int)puVar4 + -1);
        pAVar2 = param_1->field_000C;
        puVar4 = pAVar2->field_001C;
      } while (*(int *)(&pAVar2[2].field_0x4 + (int)puVar4 * 8) == -1);
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(&pAVar2[2].field_0x0 + (int)pAVar2->field_001C * 8),
                           (int)pAVar2->field_001C);
    }
    pAVar2 = param_1->field_000C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(&pAVar2[2].field_0x4 + (int)pAVar2->field_001C * 8) + 0x10 + iVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  } while (((code *)pAVar2->field_000C != nullptr) &&
          /* ST_CALLSITE[007544C7]: CALL ECX */
          (iVar5 = (*(code *)pAVar2->field_000C)(iVar3 + 8,*(undefined4 *)&pAVar2->field_0x10),
          iVar5 != 0));
  *param_3 = *(undefined4 *)(iVar3 + 4);
  if (param_2 != nullptr) {
    sVar1 = *(short *)&param_1->field_000C[1].field_0x14;
    if (sVar1 == 0) {
      /* ST_CALLSITE[0075450F]: CALL dword ptr [ESI + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar6 = (**(code **)&param_1->field_000C->field_0x8)(iVar3 + 8);
    }
    else {
      uVar6 = (uint)sVar1;
    }
    puVar8 = (byte *)(iVar3 + 8);
    memmove(param_2, puVar8, uVar6); /* compiler REP MOVS byte copy */
  }
  return 0;
}

