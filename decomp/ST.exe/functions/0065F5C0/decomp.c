
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall AiFltClassTy::sub_0065F5C0(AiFltClassTy *this,short *param_1)

{
  short *psVar1;
  int iVar2;
  AnonPointee_AiFltClassTy_0223 *pAVar3;
  uint uVar4;
  bool bVar5;

  uVar4 = 0;
  pAVar3 = this->field_0223;
  if (0 < *(int *)&pAVar3->field_0xc) {
    bVar5 = *(int *)&pAVar3->field_0xc != 0;
    do {
      if (bVar5) {
        psVar1 = (short *)(pAVar3->field_0008 * uVar4 + pAVar3->field_001C);
      }
      else {
        psVar1 = (short *)0x0;
      }
      iVar2 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*param_1,(int)param_1[1]);
      if (iVar2 < 8) {
        return 0;
      }
      pAVar3 = this->field_0223;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)&pAVar3->field_0xc;
    } while ((int)uVar4 < (int)*(uint *)&pAVar3->field_0xc);
  }
  Library::DKW::TBL::FUN_006ae1c0((uint *)this->field_0223,(undefined4 *)param_1);
  return 1;
}

