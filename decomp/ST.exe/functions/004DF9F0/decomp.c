
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004DF9F0(TLOBaseTy *this)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_playerRuntime[this->field_0024].field2165_0x9d2;
  if (array != (DArrayTy *)0x0) {
    index = 0;
    local_8 = this;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,&local_8);
        if (local_8 == this) {
          FUN_006b0c70(g_playerRuntime[this->field_0024].field2165_0x9d2,index);
          break;
        }
        index = index + 1;
        array = g_playerRuntime[this->field_0024].field2165_0x9d2;
      } while ((int)index < (int)array->count);
    }
    if ((g_playerRuntime[this->field_0024].field2165_0x9d2)->count == 0) {
      DArrayDestroy(g_playerRuntime[this->field_0024].field2165_0x9d2);
      g_playerRuntime[this->field_0024].field2165_0x9d2 = (DArrayTy *)0x0;
    }
  }
  return 0;
}

