#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as HelpStringTy.
   Evidence: this_call_owners=[HelpStringTy]; agreed_this_calls=4; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
HelpStringTy::sub_0051FAC0(HelpStringTy *this,char *param_1,byte param_2,char param_3,uint param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar6_mg0;

  if (this->field_011C <= param_2) {
    if (param_1 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar6_mg0 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6_mg0 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar6_mg0;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar6_mg0 + -uVar3;
      pcVar7 = &this->field_0018;
      memmove(pcVar7, pcVar6, uVar3); /* compiler REP MOVS byte copy */
      this->field_011C = param_2;
      this->field_011D = param_3 - 1U;
      if (1 < (byte)(param_3 - 1U)) {
        this->field_011D = 0;
      }
      this->field_0126 = param_4;
      DVar2 = STAppC::sub_006E51B0(this->field_0010);
      this->field_0122 = DVar2;
      this->field_012E = 1;
      OutStr(this);
      return;
    }
    pcVar6 = &this->field_0018;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar6 = 0;
      pcVar6 = pcVar6 + 4;
    }
    this->field_012E = 0;
    OutStr(this);
  }
  return;
}

