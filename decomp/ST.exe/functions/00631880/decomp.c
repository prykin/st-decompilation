#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00631010 @ 00631106 -> read as EAX on
   every CFG path | 006315D0 @ 006317BB -> read as EAX on every CFG path */

int __thiscall STManRuinC::sub_00631880(STManRuinC *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  DArrayTy *pSVar2;
  byte *puVar2;
  uint local_2c [8];
  uint local_b;
  iVar1 = -1;
  if (param_1 != nullptr) {
    puVar2 = (byte *)(local_2c);
    memmove(puVar2, param_1, 0x21); /* compiler REP MOVS byte copy */
    local_b = param_2;
    if (this->field_003C == nullptr) {
      /* ST_CALLSITE[006318B6]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_003CDArray; source view only; no Ghidra override */
      pSVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x25,10);
      this->field_003C = (STManRuinC_field_003CDArray *)pSVar2;
    }
    if (this->field_003C == nullptr) {
      iVar1 = -1;
    }
    else {

      iVar1 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_003C,local_2c);
      if (-1 < iVar1) {
        return iVar1 + 1;
      }
    }
  }
  return iVar1;
}

