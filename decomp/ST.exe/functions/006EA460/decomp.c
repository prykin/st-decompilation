
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050];
   agreed_this_calls=1; incoming_this_accesses=2; incoming_edx_uses=0;
   incoming_stack_parameter_uses=2; direct_non_thunk_callers=22; incoming_ecx_receiver_callers=1;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
          (AnonReceiver_006EA050 *this,uint param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_1 < *(uint *)&this->field_0x310) {
    iVar2 = *(int *)&this->field_0x31c;
    iVar1 = iVar2 + param_1 * 0x114;
    if (((*(uint *)(iVar2 + param_1 * 0x114) & 0x8000) != 0) &&
       ((param_2 == -1 ||
        (((-1 < param_2 && (param_2 < (int)*(uint *)&this->field_0x310)) &&
         ((*(uint *)(iVar2 + param_2 * 0x114) & 0x8000) != 0)))))) {
      *(int *)(iVar1 + 0x1c) = param_2;
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffaf | 0x20;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

