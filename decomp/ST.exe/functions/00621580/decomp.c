#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CEB00 -> 00621580 @ 004CEDDB; /TLOBaseTy+0x24

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=15; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall SndUnderAttMenegC::sub_00621580(SndUnderAttMenegC *this,byte *param_1,int param_2)

{
  uint uVar1;
  int local_8;

  local_8 = 0;
  if ((byte *)(uint)DAT_0080874d != param_1) {
    return;
  }
  if ((this->field_010A == nullptr) ||
     (uVar1 = thunk_FUN_00621640(this,param_2,&local_8), (int)uVar1 < 0)) {
    /* ST_CALLSITE[006215BD]: CALL 0x00405b37; direct=00405B37 SndUnderAttMenegC::sub_006216E0 */
    uVar1 = sub_006216E0(this,param_2);
  }
  if ((local_8 != 0) && (-1 < (int)uVar1)) {
    if (10 < g_playSystem_00802A38->field_00E4 - this->field_0106) {
      /* ST_CALLSITE[006215E9]: CALL 0x00401073; direct=00401073 SndUnderAttMenegC::sub_00621780 */
      sub_00621780(this,uVar1);
      return;
    }
    this->field_0105 = 1;
  }
  return;
}

