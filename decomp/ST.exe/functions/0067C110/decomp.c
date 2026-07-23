
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiPlrClassTy::sub_0067C110(AiPlrClassTy *this)

{
  int iVar1;
  AnonShape_0068FD00_A5257008 **ppAVar2;
  AnonShape_0068FD00_A5257008 *local_38;
  uint local_34;
  undefined1 local_30;

  ppAVar2 = &local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppAVar2 = (AnonShape_0068FD00_A5257008 *)0x0;
    ppAVar2 = ppAVar2 + 1;
  }
  local_34 = this->field_06FE;
  this->field_0689 = 0;
  local_38 = (AnonShape_0068FD00_A5257008 *)0x67;
  local_30 = 1;
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006799B0::sub_0067A020
            ((AnonReceiver_006799B0 *)this,(AnonShape_0068FD00_A5257008 *)&local_38,-1);
  return;
}

