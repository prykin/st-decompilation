
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
TLOBaseTy::sub_004DE7D0(TLOBaseTy *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  if (((int)(this->field_04D0 + param_3) < DAT_007e6190) &&
     (iVar1 = thunk_FUN_004e60d0((int)this->field_0024,0x19), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

