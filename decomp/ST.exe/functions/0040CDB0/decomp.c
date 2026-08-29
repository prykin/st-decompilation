#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STGroupBoatC::sub_0040CDB0(STGroupBoatC *this,uint param_1)

{
  STGameObjC *pSVar1;

  /* ST_CALLSITE[0040CDB8]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
  pSVar1 = sub_00423E70(this,(ushort)param_1);
  if (pSVar1 != nullptr) {
    FreeAndNull(&pSVar1->field_009F);
    pSVar1->field_00A3 = 0;
    pSVar1->field_00A7 = 0;
    pSVar1->field_00AB = nullptr;
  }
  return;
}

