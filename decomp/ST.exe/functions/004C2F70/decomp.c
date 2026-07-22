
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C2F70(TLOBaseTy *this)

{
  int iVar1;
  AnonShape_0060A470_93FA2EC1 *local_8;

  local_8 = (AnonShape_0060A470_93FA2EC1 *)0x0;
  if ((*(int *)(&DAT_007951b4 + this->field_0235 * 4) != 0) && (this->field_0408 != 0)) {
    iVar1 = FUN_006e62d0(g_playSystem_00802A38,this->field_040C,(int *)&local_8);
    if (iVar1 == 0) {
      if (this->field_021D != 0) {
        thunk_FUN_0060a430(local_8,1);
        return 0;
      }
      thunk_FUN_0060a470(local_8);
    }
  }
  return 0;
}

