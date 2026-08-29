#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_00550430(STPlaySystemC *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;

  uVar1 = 0;
  if (DAT_00808aaf != 0) {
    pcVar3 = &CHAR_00h_00808ab0;
    while (*(int *)(pcVar3 + 0x40) != param_1) {
      uVar1 = uVar1 + 1;
      pcVar3 = pcVar3 + 0x9c;
      if (DAT_00808aaf <= uVar1) {
        return;
      }
    }

    iVar2 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
    *(int *)(pcVar3 + 0x48) = iVar2;
    if (((param_2 != 0) && (DAT_00808788 != 0)) && (this->field_00F4 == param_1)) {
      this->field_00F4 = 0;
      DAT_00808788 = 0;
      this->field_00D0 = 0xa106;

      AppClassTy::SendMessage
                ((AppClassTy *)&DAT_00807620,3,0x101,
                 (RecoveredRecord_006E3DB0_0F66DDCF *)&this->field_0xc0);
    }
  }
  return;
}

