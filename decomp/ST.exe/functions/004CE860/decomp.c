
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CE860(TLOBaseTy *this)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = *(DArrayTy **)&g_packedRecords_A62x8[(int)this->field_0024].field_0x9de;
  if ((array != nullptr) && (index = 0, local_8 = this, 0 < (int)array->count)) {
    while( true ) {
      DArrayGetElement(array,index,&local_8);
      if (local_8->field_04E0[*(int *)&this->field_0x369 + -1] != 0) break;
      index = index + 1;
      array = *(DArrayTy **)&g_packedRecords_A62x8[(int)this->field_0024].field_0x9de;
      if ((int)array->count <= (int)index) {
        return 0;
      }
    }
    local_8->field_04E0[*(int *)&this->field_0x369 + -1] =
         local_8->field_04E0[*(int *)&this->field_0x369 + -1] - 1;
    this->field_0398 = (this->field_0398 * 0x32) / 100;
    this->field_039C = (this->field_039C * 0x32) / 100;
    this->field_03A0 = (this->field_03A0 * 0x32) / 100;
    this->field_03A4 = (this->field_03A4 * 0x32) / 100;
  }
  return 0;
}

