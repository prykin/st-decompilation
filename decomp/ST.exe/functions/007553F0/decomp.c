#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0 */

int FUN_007553f0(AnonShape_007553F0_ACB112C2 *param_1,int *param_2,undefined4 *param_3,
                undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar7;
  byte *puVar8;
  byte *puVar9;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar2;
  iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(iVar2 + 0x40 + *(int *)(iVar2 + 0x1c) * 8),
                       *(int *)(iVar2 + 0x1c));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  if (iVar2 == -1) {
    iVar2 = *(int *)(iVar4 + 4);
  }
  else {
    if (iVar2 == *(short *)(iVar4 + 8)) goto LAB_00755464;
    iVar2 = *(int *)(iVar2 + 0x10 + iVar4);
  }
  while (iVar2 != -1) {
    *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar2,
                         *(int *)(param_1->field_000C + 0x1c));
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
         0xffffffff;
    iVar2 = *(int *)(iVar4 + 4);
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00755464:
  FUN_00757450((AnonShape_00755E10_BD685653 *)param_1,
               *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
  iVar2 = param_1->field_000C;
  iVar3 = *(int *)(iVar2 + 0x1c);
  if (*(int *)(iVar2 + 0x44 + iVar3 * 8) == (int)*(short *)(iVar4 + 8)) {
    do {
      if (iVar3 == 0) {
        FUN_00750fb0((AnonShape_00750FB0_15A3AC3E *)param_1,0,0);
        return -4;
      }
      *(int *)(iVar2 + 0x1c) = iVar3 + -1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_1->field_000C + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(param_1->field_000C + 0x40 + iVar2 * 8),iVar2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_00757450((AnonShape_00755E10_BD685653 *)param_1,
                   *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
      iVar2 = param_1->field_000C;
      iVar3 = *(int *)(iVar2 + 0x1c);
    } while (*(int *)(iVar2 + 0x44 + iVar3 * 8) == (int)*(short *)(iVar4 + 8));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  puVar8 = (byte *)(iVar2 + 0x10 + iVar4);
  *param_3 = *(undefined4 *)(iVar2 + 0x14 + iVar4);
  *param_4 = *puVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1->field_000C + 0x34);
  if (sVar1 == 0) {
    /* ST_CALLSITE[00755514]: CALL dword ptr [ESI + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar7 = (**(code **)(param_1->field_000C + 8))(puVar8 + 2);
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

