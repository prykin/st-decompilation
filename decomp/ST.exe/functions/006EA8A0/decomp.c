
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006EA8A0
          (ST3DSMAPContext *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  byte *pbVar2;
  ushort *puVar3;

  if ((param_1 < *(uint *)&this->field_0x310) &&
     (puVar1 = (uint *)(*(int *)&this->field_0x31c + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return;
    }
    if ((int)param_3 < 1) {
      puVar3 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar3 = *puVar3 & 0xfeff;
    }
    else {
      pbVar2 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 1;
      puVar1[0x26] = param_3;
      puVar1[0x27] = param_4;
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

