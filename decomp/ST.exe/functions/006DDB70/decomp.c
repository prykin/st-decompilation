
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DDB70(ST3DSMAPContext *this)

{
  void *pvVar1;

  if (0 < this->field_0174) {
    this->field_0144 = 1;
    this->field_02D8 = 1;
    pvVar1 = Library::DKW::LIB::MemRealloc(this->field_001C,this->field_0028 * this->field_0174);
    this->field_001C = pvVar1;
  }
  return;
}

