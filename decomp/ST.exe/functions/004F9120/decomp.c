
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::sub_004F9120(CPanelTy *this,byte param_1,char param_2,undefined4 param_3)

{
  uint uVar1;

  if (param_1 < 8) {
    uVar1 = (uint)param_1;
    g_bulkInitializedRecords_008087C7[uVar1].field_0030 = param_2;
    *(undefined4 *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 = param_3;
    *(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x35 = this->field_09A0;
    if ((param_1 == DAT_0080874d) && (param_2 == '\0')) {
      DAT_0080c4d3 = 4;
    }
  }
  return;
}

