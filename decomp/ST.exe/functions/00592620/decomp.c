
/* [STMethodOwnerApplier] Structural method owner recovered as CampaignTy.
   Evidence: this_call_owners=[CampaignTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CampaignTy::sub_00592620(CampaignTy *this)

{
  int *piVar1;
  int local_8;

  local_8 = 0xd;
  this->field_1FF8 = 0;
  piVar1 = &this->field_0066;
  do {
    if (*piVar1 != 0) {
      this->field_0025 = *piVar1;
      this->field_0029 = 2;
      this->field_002D = 0x20;
      this->field_0031 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this->field_000C + 0x18))(&this->field_0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

