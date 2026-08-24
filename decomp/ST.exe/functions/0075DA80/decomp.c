#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_0075da80(AnonShape_0075DA80_57A0CDEF *param_1)

{
  AnonNested_0075DA80_01B6_323D7698 *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  pAVar1 = param_1->field_01B6;
  /* ST_CALLSITE[0075DA9A]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0008 = uVar2;
  /* ST_CALLSITE[0075DAA9]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_000C = uVar2;
  /* ST_CALLSITE[0075DAB8]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0010 = uVar2;
  /* ST_CALLSITE[0075DAC7]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0014 = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  auto param_1_after_write = (AnonShape_0075DA80_57A0CDEF *)0xff1daf00; /* compiler stack-slot lifetime split */
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(pAVar1->field_0008 + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(pAVar1->field_000C + iVar3) = (int)param_1_after_write >> 0x10;
    *(int *)(pAVar1->field_0010 + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(pAVar1->field_0014 + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1_after_write = (AnonShape_0075DA80_57A0CDEF *)&param_1_after_write[0x105].field_0xf6;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

