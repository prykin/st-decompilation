
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_007178C0(ST3DSMAPContext *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == *(int *)&this[1].field_0x4e) {
    uVar2 = *(int *)((int)&this[1].field_0044 + 2) * param_3 + param_2 ^ 7;
    pbVar1 = (byte *)(*(int *)&this[1].field_0x2 + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    *(undefined4 *)&this->field_0x46a = 1;
  }
  return;
}

