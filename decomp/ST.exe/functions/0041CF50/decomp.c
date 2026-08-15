#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0041cf50(AnonShape_0041CF50_01071190 *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    VisibleClassTy::sub_00559620
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(undefined **)&param_1->field_0x24,param_1->field_0105,
               *(int *)&param_1->field_0x18,0xffffffff);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)param_1 + 8))();
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    ST3DSMAPContext::sub_006E6780
              (g_sT3DSMAPContext_00807598,
               (*(uint *)&param_1->field_0x18 >> 0x10 & 0xff) << 0x10 |
               (uint)*(ushort *)&param_1->field_0x18);
  }
  param_1->field_0105 = 0xffffffff;
  return;
}

