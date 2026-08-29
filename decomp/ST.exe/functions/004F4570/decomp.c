#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
CPanelTy::sub_004F4570
          (CPanelTy *this,char param_1,RecoveredRecord_004F4570_07A3F315 *param_2,
          RecoveredRecord_004F4570_D72BA975 *param_3)

{
  uint uVar1;
  short sVar2;
  char *pcVar3;
  int local_8;

  sVar2 = -1;
  pcVar3 = &param_2[1].field_0007;
  local_8 = 6;
  do {
    if ((pcVar3[-6] != 0) &&
       ((sVar2 = sVar2 + 1, *pcVar3 != pcVar3[(int)param_3 - (int)param_2] ||
        (param_2->field_0007 != param_3->field_0007)))) {
      this->field_0028 = 0x54;
      if (param_2->field_0007 == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)(byte)*pcVar3;
      }
      *(uint *)&this->field_0x2c = uVar1;
      this->field_0030 = (int)sVar2;
      FUN_006e6080(this,2,*(undefined4 *)((int)this->field_0308 + (uint)(param_1 == '\0') * 4 + -10)
                   ,(undefined4 *)&this->field_0x18);
    }
    pcVar3 = pcVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

