
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=6;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DD800(ST3DSMAPContext *this,float param_1)

{
  longlong lVar1;

  this->field_011C = (double)param_1;
  if ((float)this->field_0114 < param_1) {
    this->field_010C = (double)((float)_DAT_0079df78 / (param_1 - (float)this->field_0114));
    lVar1 = Library::MSVCRT::__ftol();
    this->field_02E4 = (int)lVar1;
    sub_006DD870(this);
    return;
  }
  return;
}

