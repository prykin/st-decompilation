
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041CAF0 -> 0041CDA0 @ 0041CCEE; MOVSX at 0041CCE6 establishes signed source width 2 */

undefined4 __thiscall
VisibleClassTy::sub_0041CDA0(VisibleClassTy *this,int param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;

  if ((DAT_0080874d == -1) || (this->field_00F8 == 0)) {
    return 1;
  }
  if (((-1 < param_1) &&
      (((param_1 < this->field_0020 && (-1 < param_2)) && (param_2 < this->field_0024)))) &&
     (this->field_0038 != nullptr)) {
    iVar2 = this->field_0020 * param_2;
    pbVar1 = this->field_0038 + (iVar2 + param_1) * 2;
    if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
      if (7 < param_4) {
        return 1;
      }
      if (this->field_003C[param_4 + 6] == nullptr) {
        return 1;
      }
      if (*(char *)((int)this->field_003C[param_4 + 6] + param_1 + iVar2) == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

