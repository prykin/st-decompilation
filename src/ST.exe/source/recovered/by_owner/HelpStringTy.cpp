#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/HelpStringTy.cpp

// 0051FAC0 HelpStringTy::sub_0051FAC0
#line 4 "decomp/ST.exe/functions/0051FAC0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as HelpStringTy.
   Evidence: this_call_owners=[HelpStringTy]; agreed_this_calls=4; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_0051FAC0(HelpStringTy *this,char *param_1,byte param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;
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
      pcVar5 = pcVar6_mg0 + -uVar3;
      pcVar6 = &this->field_0018;
      memmove(pcVar6, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      this->field_011C = param_2;
      this->field_011D = param_3 - 1U;
      if (1 < (byte)(param_3 - 1U)) {
        this->field_011D = 0;
      }
      this->field_0126 = param_4;

      iVar2 = st::fn_006E51B0(this->field_0010);
      this->field_0122 = iVar2;
      this->field_012E = 1;
      /* ST_CALLSITE[0051FB42]: CALL 0x004015fa; direct=004015FA HelpStringTy::OutStr */
      st::fn_004015FA(this);
      return;
    }
    memset(&this->field_0018, 0, 0x104); /* compiler bulk-zero initialization */
    this->field_012E = 0;
    /* ST_CALLSITE[0051FB61]: CALL 0x004015fa; direct=004015FA HelpStringTy::OutStr */
    st::fn_004015FA(this);
  }
  return;
}
