#include "../../pseudocode_runtime.h"


void __fastcall FUN_0041d4f0(AnonShape_0041D4F0_1597DF6B *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D51B]: CALL 0x00404de0; direct=00404DE0 VisibleClassTy::sub_0055A110 */
    VisibleClassTy::sub_0055A110
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0111,
               *(int *)&param_1->field_0x18);
  }
  /* ST_CALLSITE[0041D524]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(param_1->field_0000 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                        *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_0111 = 0xffffffff;
  return;
}

