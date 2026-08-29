#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042D770 -> 004233C0 @ 0042D8CF; return of FUN_0042b760 | 0042F2B0 -> 004233C0 @
   0042FFCC; return of FUN_0042b760

   [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=5; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=6, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00415160 @ 00415187 -> read as AX on every CFG path | 00415590 @
   004155D4 -> read as AX on every CFG path | 0042D770 @ 0042D8CF -> read as AX on every CFG path |
   0042F2B0 @ 0042FFCC -> read as AX on every CFG path | 0065D9C0 @ 0065D9E7 -> read as AX on every
   CFG path | 0065DA50 @ 0065DADB -> read as AX on every CFG path */

ushort __thiscall STGroupBoatC::sub_004233C0(STGroupBoatC *this)

{
  return this->field_0027;
}

