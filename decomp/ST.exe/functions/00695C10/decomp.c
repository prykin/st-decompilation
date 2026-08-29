#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00696810 -> 00695C10 @ 006968C4; zero-filled partial register load at 00696853 */

uint __thiscall
CGenerate::sub_00695C10
          (CGenerate *this,uint param_1,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5)

{
  DArrayTy *pCVar1;
  uint uVar1;
  uint local_24;
  byte local_20;
  uint local_1f;
  uint local_1b;
  uint local_17;
  memset(&local_24, 0, 0x1d); /* compiler bulk-zero initialization */
  local_1f = param_2;
  local_24 = param_1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  local_20 = (undefined1)param_3;
  local_1b = param_4;
  local_17 = param_5;
  if (this->field_5853 == nullptr) {
    /* ST_CALLSITE[00695C61]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/CGenerate_field_5853DArray; source view only; no Ghidra override */
    pCVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x1d,10);
    this->field_5853 = (CGenerate_field_5853DArray *)pCVar1;
  }
  if (this->field_5853 != nullptr) {

    uVar1 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_5853,&local_24);
    return uVar1;
  }
  return 0xffffffff;
}

