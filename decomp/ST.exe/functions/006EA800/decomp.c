
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006EA800(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return;
    }
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    if (param_3 == 0) {
      *puVar2 = *puVar2 & 0xffef;
    }
    else {
      *(byte *)puVar2 = (byte)*puVar2 | 0x10;
    }
    if ((puVar1[2] == 0) && ((*puVar1 & 0x10001) != 0)) {
      *puVar1 = *puVar1 & 0xff87ffff | 4;
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

