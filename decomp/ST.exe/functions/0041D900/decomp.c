#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall FUN_0041d900(void *this,short param_1,short param_2,short param_3)

{
  if (STField<int>(this,0x2c) == 0) {
    /* ST_CALLSITE[0041D964]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)((int)this + 0x1d5),(float)(int)param_1 * _DAT_007904f8 + _DAT_007904f4,
               (float)(int)param_2 * _DAT_007904f8 + _DAT_007904f4,
               (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
    return;
  }
  /* ST_CALLSITE[0041D9BD]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)((int)this + 0x1d5),(float)(param_1 + 1) * _DAT_007904f8,
             (float)(param_2 + 1) * _DAT_007904f8,
             (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  return;
}

