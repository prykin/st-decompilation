#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STBoatC::sub_00492420(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if ((this->field_07C6 == 1) && (this->field_07CA == nullptr))
  {
    this->field_07C6 = 0;
    local_8 = this;

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       *(RecoveredRecordView_005EFAE0_855D930D **)&this->field_0x58e,(int *)&local_8
                      );
    if (iVar1 != -4) {
      /* ST_CALLSITE[00492468]: CALL dword ptr [EDX + 0xa0] */
      local_8->ReleaseLoad((uint *)this->field_0018);
    }
  }
  return;
}

