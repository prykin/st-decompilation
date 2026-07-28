#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=2; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00631010 -> 00630BB0 @ 006310B0; MOVSX at 00631092 establishes signed source width 2 |
   00631190 -> 00630BB0 @ 006311CA; STManRuinC::FUN_00631190 parameter param_5 | 00631450 ->
   00630BB0 @ 00631496; MOVSX at 00631479 establishes signed source width 2 | 006315D0 -> 00630BB0 @
   0063177E; MOVSX at 00631760 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall
STManRuinC::sub_00630BB0
          (STManRuinC *this,short param_1,short param_2,short param_3,undefined4 param_4,int param_5
          ,undefined4 param_6)

{

  memset(&this->field_0040, 0, 0x21); /* compiler bulk-zero initialization */
  this->field_0040 = param_4;
  this->field_0060 = 0;
  this->field_0061 = -1;
  this->field_0054 = (int)(short)(param_1 * 0xc9 + 100);
  this->field_0058 = (int)(short)(param_2 * 0xc9 + 100);
  this->field_005C = (int)(short)(param_3 * 200 + 100);
  this->field_004C = param_5;
  this->field_0050 = param_6;
  return;
}

