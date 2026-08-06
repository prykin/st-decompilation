#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004D8B70 -> 0052BC30 @ 004D8C18; literal 1 at 004D8BFD | 004D8B70 -> 0052BC30 @
   004D8C55; literal 0 at 004D8C48 | 004D8B70 -> 0052BC30 @ 004D8C9A; literal 1 at 004D8C88 */

void __thiscall
MoneyTy::sub_0052BC30
          (MoneyTy *this,uint param_1,uint param_2,uint param_3,byte param_4,byte param_5,
          int param_6)

{
  if (DAT_0080874e == '\x03') {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0xf423e < param_1) {
      param_1 = 999999;
    }
    this->field_008A = param_1;
  }
  else {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0x1869e < param_1) {
      param_1 = 99999;
    }
    this->field_008A = param_1;
  }
  if (param_6 != 0) {
    this->field_0086 = param_1 + 1;
  }
LAB_0052bc8f:
  if (param_2 != 0xffffffff) {
    if (0xf423e < param_2) {
      param_2 = 999999;
    }
    this->field_0092 = param_2;
    if (param_6 != 0) {
      this->field_008E = param_2 + 1;
    }
  }
  if (param_3 != 0xffffffff) {
    if (0xf423e < param_3) {
      param_3 = 999999;
    }
    this->field_009A = param_3;
    if (param_6 != 0) {
      this->field_0096 = param_3 + 1;
    }
  }
  if (param_4 != 0xff) {
    if ((int)((-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x15) <= (int)(uint)param_4) {
      param_4 = (-(DAT_0080874e != '\x03') & 0xf9U) + 0x14;
    }
    this->field_00A3 = param_4;
    this->field_00A5 = param_5;
  }
  if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
  }
  return;
}

