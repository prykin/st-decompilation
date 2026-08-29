#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STAppC::sub_005711D0(STAppC *this,int *param_1)

{
  if ((RecoveredRecord_006E4C30_151FBAE9 *)*param_1 != nullptr) {
    FUN_006e4c30(this,(RecoveredRecord_006E4C30_151FBAE9 *)*param_1);
    FUN_006e4b80(this,(RecoveredRecord_006E4B80_A7B295CE *)*param_1);
    FUN_006e4d20(this,(DebugSystemC *)*param_1);
    /* ST_CALLSITE[005711FE]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)*param_1 + 4))();
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)*param_1);
    *param_1 = 0;
  }
  return;
}

