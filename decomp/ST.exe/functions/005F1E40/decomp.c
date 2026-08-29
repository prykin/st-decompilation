#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005f1e40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;

  puVar1 = thunk_FUN_005f1700(param_1,param_2,1,param_3,param_4,param_5,0xffffffff);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  if (param_1 == 0) {
    /* ST_CALLSITE[005F1EC4]: CALL 0x006e9000; direct=006E9000 ST3DSMAPContext::sub_006E9000; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
    puVar1 = ST3DSMAPContext::sub_006E9000
                       (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar1,0x21),0x5a,0x35,
                        (float)param_3 * _DAT_007904f8 * _DAT_007904f0,
                        (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                        (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
    return (undefined4 *)puVar1;
  }
  /* ST_CALLSITE[005F1F32]: CALL 0x006e9000; direct=006E9000 ST3DSMAPContext::sub_006E9000; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
  puVar1 = ST3DSMAPContext::sub_006E9000
                     (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar1,0x21),0x78,0x56,
                      (float)(param_3 + 100) * _DAT_007904f8 * _DAT_007904f0,
                      (float)(param_4 + 100) * _DAT_007904f8 * _DAT_007904f0,
                      (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc,0);
  return (undefined4 *)puVar1;
}

