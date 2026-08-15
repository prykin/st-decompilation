#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall SndUnderAttMenegC::sub_0061FCC0(SndUnderAttMenegC *this)

{
  if (this->field_00B9 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00B9);
    this->field_00B9 = nullptr;
  }
  if (this->field_00C5 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00C5);
    this->field_00C5 = nullptr;
  }
  if (this->field_00D1 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00D1);
    this->field_00D1 = nullptr;
  }
  if (this->field_00DD != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00DD);
    this->field_00DD = nullptr;
  }
  if (this->field_00E9 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00E9);
    this->field_00E9 = nullptr;
  }
  if (this->field_00F5 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00F5);
    this->field_00F5 = nullptr;
  }
  if (this->field_0101 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_0101);
    this->field_0101 = nullptr;
  }
  if (this->field_010A != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_010A);
    this->field_010A = nullptr;
  }
  return;
}

