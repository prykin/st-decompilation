
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00558840 -> 00717870 @ 005588CB

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_00717870(ST3DSMAPContext *this)

{
  int iVar1;

  iVar1 = 0;
  this->field_04BA = 0;
  this->field_04A2 = 0;
  do {
    FUN_006a5e90(*(short **)((int)this->field_0472 + iVar1));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x140);
  FreeAndNull(&this->field_0472);
  FreeAndNull(&this->field_046E);
  this->field_0466 = 0;
  return;
}

