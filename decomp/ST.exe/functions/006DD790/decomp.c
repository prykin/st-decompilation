
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=6;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DD790(ST3DSMAPContext *this,float param_1)

{
  longlong lVar1;

  *(double *)&this->field_0x114 = (double)param_1;
  if (param_1 < (float)*(double *)&this->field_0x11c) {
    *(double *)&this->field_0x10c =
         (double)((float)_DAT_0079df78 / ((float)*(double *)&this->field_0x11c - param_1));
    lVar1 = Library::MSVCRT::__ftol();
    *(int *)&this->field_0x2e4 = (int)lVar1;
    sub_006DD870(this);
    return;
  }
  return;
}

