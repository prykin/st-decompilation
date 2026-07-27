
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
VisibleClassTy::sub_0041CDA0
          (VisibleClassTy *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;

  if ((DAT_0080874d == -1) || (this->field_00F8 == 0)) {
    return 1;
  }
  if (((-1 < param_1) &&
      (((param_1 < this->field_0020 && (-1 < param_2)) && (param_2 < this->field_0024)))) &&
     (this->field_0038 != (byte *)0x0)) {
    iVar2 = this->field_0020 * param_2;
    pbVar1 = this->field_0038 + (iVar2 + param_1) * 2;
    if ((pbVar1 != (byte *)0x0) && (pbVar1[1] != 0)) {
      if (7 < param_4) {
        return 1;
      }
      if ((&this->field_0054)[param_4] == 0) {
        return 1;
      }
      if (*(char *)((&this->field_0054)[param_4] + iVar2 + param_1) == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

