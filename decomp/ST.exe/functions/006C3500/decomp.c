#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006c3500(AnonShape_006C3500_19C01617 *param_1)

{
  int iVar1;
  undefined4 local_80 [26];
  uint local_18;

  iVar1 = param_1->field_0028;
  if (((param_1->field_0004 & 1) != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
    memset(local_80, 0, 0x7c); /* compiler bulk-zero initialization */
    local_80[0] = 0x7c;
    local_18 = param_1->field_002C & 0x4840;
    local_80[1] = 7;
    local_80[3] = *(undefined4 *)(iVar1 + 0x18);
    local_80[2] = *(undefined4 *)(iVar1 + 0x1c);
    /* ST_CALLSITE[006C355E]: CALL dword ptr [ECX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x18))(*(int **)(iVar1 + 0x30),local_80,iVar1 + 0x40,0);
  }
  return;
}

