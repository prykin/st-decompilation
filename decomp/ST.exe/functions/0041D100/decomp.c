#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0041d100(AnonShape_0041D100_A90F7B7E *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D12B]: CALL 0x00401636; direct=00401636 VisibleClassTy::sub_005599D0 */
    VisibleClassTy::sub_005599D0
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0109,
               *(int *)&param_1->field_0x18);
  }
  /* ST_CALLSITE[0041D134]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(param_1->field_0000 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(1,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                        *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_0109 = 0xffffffff;
  return;
}

