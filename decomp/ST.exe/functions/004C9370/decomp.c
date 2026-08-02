
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004C9370(TLOBaseTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  int iVar3;

  iVar3 = this->field_03D4;
  iVar1 = 0;
  if (((iVar3 != 0) && (pAVar2 = this->field_0607, pAVar2 != nullptr)) &&
     (0 < iVar3)) {
    do {
      if (((pAVar2->field_0000 == param_1) && (pAVar2->field_0004 == param_2)) &&
         ((param_3 < 0 || (param_3 == pAVar2->field_000C)))) {
        iVar1 = iVar1 + pAVar2->field_0008;
      }
      pAVar2 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar2[1].field_000C + 3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

