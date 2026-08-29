#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755E10 -> 00757450 @ 00755E66 */

int FUN_00757450(RecoveredRecordView_00755E10_DA2F2616 *param_1,int param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = param_1->field_0008->field_0034 + param_1->field_0010;
  if (param_2 == -1) {
    *(undefined4 *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) =
         0;
    return 0;
  }
  if (param_2 < STField<short>(iVar2,0x8)) {
    sVar1 = *(short *)&param_1->field_000C[1].field_0x14;
    if (sVar1 == 0) {
      /* ST_CALLSITE[0075749D]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)&param_1->field_000C->field_0x8)(iVar2 + 0x18 + param_2);
    }
    else {
      iVar2 = (int)sVar1;
    }
    param_2 = param_2 + 8 + iVar2;
  }
  *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) = param_2;
  return param_2;
}

