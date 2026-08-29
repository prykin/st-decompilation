#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_004924a0(RecoveredRecordView_004924A0_8E78FEB0 *param_1)

{
  int iVar1;
  STBoatC *local_8;

  if (((param_1->field_045D == 0x14) &&
      (param_1->field_05A2 != nullptr)) &&
     (param_1->field_05C0 != 3)) {
    local_8 = (STBoatC *)param_1;

    iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1->field_05A2,(int *)&local_8);
    if (iVar1 != -4) {
      /* ST_CALLSITE[004924DF]: CALL 0x00403864; direct=00403864 STBoatC::CancelLoading */
      STBoatC::CancelLoading(local_8,param_1->field_0018);
    }
  }
  return;
}

