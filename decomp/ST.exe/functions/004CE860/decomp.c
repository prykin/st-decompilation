
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CE860(TLOBaseTy *this)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_playerRuntime[(int)this->field_0024].field2168_0x9de;
  if ((array != (DArrayTy *)0x0) && (index = 0, local_8 = this, 0 < (int)array->count)) {
    while( true ) {
      DArrayGetElement(array,index,&local_8);
      if ((&local_8->field_04DC)[*(int *)&this->field_0x369] != 0) break;
      index = index + 1;
      array = g_playerRuntime[(int)this->field_0024].field2168_0x9de;
      if ((int)array->count <= (int)index) {
        return 0;
      }
    }
    (&local_8->field_04DC)[*(int *)&this->field_0x369] =
         (&local_8->field_04DC)[*(int *)&this->field_0x369] - 1;
    this->field_0398 = (this->field_0398 * 0x32) / 100;
    this->field_039C = (this->field_039C * 0x32) / 100;
    this->field_03A0 = (this->field_03A0 * 0x32) / 100;
    this->field_03A4 = (this->field_03A4 * 0x32) / 100;
  }
  return 0;
}

