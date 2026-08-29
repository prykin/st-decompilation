#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall STRubbishC::sub_00630260(STRubbishC *this,int param_1,int param_2)

{
  uint *puVar1;
  int local_24 [4];
  uint local_14;
  int local_10;
  uint local_c;
  if (g_manRub3_008117A4 != nullptr) {
    puVar1 = (undefined4 *)(&this->field_01E5)[param_1];
    if ((puVar1 != nullptr) && ((puVar1[1] == 3 || (puVar1[1] == 6)))) {
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_24[0] = puVar1[3];
      local_24[1] = this->field_01D5;
      local_24[2] = this->field_01D9;
      local_24[3] = this->field_01DD;
      local_14 = *puVar1;
      local_10 = param_1;
      local_c = puVar1[2];
      if (param_2 != 0) {
        /* ST_CALLSITE[006302E0]: CALL 0x00404af2; direct=00404AF2 STManRub3C::AddNewRub3 */
        STManRub3C::AddNewRub3(g_manRub3_008117A4,local_24);
        return;
      }
      thunk_FUN_0062d230(g_manRub3_008117A4,local_24);
    }
  }
  return;
}

