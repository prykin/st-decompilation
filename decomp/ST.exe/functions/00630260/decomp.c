#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STRubbishC::sub_00630260(STRubbishC *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int local_24 [4];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;

  if (g_manRub3_008117A4 != (STManRub3C *)0x0) {
    puVar1 = (undefined4 *)(&this->field_01E5)[param_1];
    if ((puVar1 != (undefined4 *)0x0) && ((puVar1[1] == 3 || (puVar1[1] == 6)))) {
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_24[0] = puVar1[3];
      local_24[1] = this->field_01D5;
      local_24[2] = this->field_01D9;
      local_24[3] = this->field_01DD;
      local_14 = *puVar1;
      local_10 = param_1;
      local_c = puVar1[2];
      if (param_2 != 0) {
        STManRub3C::AddNewRub3(g_manRub3_008117A4,local_24);
        return;
      }
      thunk_FUN_0062d230(g_manRub3_008117A4,local_24);
    }
  }
  return;
}

