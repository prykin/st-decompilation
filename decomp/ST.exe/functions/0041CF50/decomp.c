#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0041cf50(RecoveredRecordView_0041CF50_A204ECAD *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041CF7D]: CALL 0x00402018; direct=00402018 VisibleClassTy::sub_00559620 */
    VisibleClassTy::sub_00559620
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(undefined **)&param_1->field_0x24,param_1->field_0105,
               *(int *)&param_1->field_0x18,0xffffffff);
  }
  /* ST_CALLSITE[0041CF86]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x8);
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    ST3DSMAPContext::sub_006E6780
              (g_sT3DSMAPContext_00807598,
               (*(uint *)&param_1->field_0x18 >> 0x10 & 0xff) << 0x10 |
               (uint)*(ushort *)&param_1->field_0x18);
  }
  param_1->field_0105 = 0xffffffff;
  return;
}

