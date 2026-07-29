
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E8580(ST3DSMAPContext *this,int *param_1)

{
  *(int **)this = param_1;
  param_1[0x8a] = (int)FUN_006eb4b0;
  *(code **)(*(int *)this + 0x230) = FUN_006eb540;
  *(code **)(*(int *)this + 0x22c) = FUN_006eb570;
  *(ST3DSMAPContext **)(*(int *)this + 0x234) = this;
  if (DAT_007ee1ac < 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::DDX::FUN_006cff10
              (param_1,(uint *)&DAT_007ee1ac,0,0,*(int *)(*(int *)&this->field_0x4 + 0x1c) - 0xd,
               0xfa,0x10,0xffffff,0xffffffff);
  }
  if (DAT_007ee1b0 < 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::DDX::FUN_006cff10
              (param_1,(uint *)&DAT_007ee1b0,0,*(int *)(*(int *)&this->field_0x4 + 0x18) - 0xfa,
               *(int *)(*(int *)&this->field_0x4 + 0x1c) - 0xd,0xfa,0x10,0xffffff,0xffffffff);
  }
  return;
}

