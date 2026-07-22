
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STMineSetC::sub_006226C0(STMineSetC *this,uint param_1,int param_2)

{
  AnonPointee_STMineSetC_0211 *pAVar1;
  VisibleClassTy *pVVar2;
  STMineSetC_field_02AEState SVar3;
  int iVar4;
  STMineSetC *local_8;

  SVar3 = this->field_02AE;
  local_8 = this;
  if (((SVar3 == CASE_0) || (SVar3 == CASE_1)) &&
     (SVar3 = (STMineSetC_field_02AEState)DAT_0080874d, this->field_0024 != SVar3)) {
    switch(this->field_02AD) {
    case 0:
    case 2:
      SVar3 = thunk_FUN_0041d6c0(this,SVar3);
      if (SVar3 == CASE_0) {
        return 0;
      }
      break;
    case 1:
      SVar3 = thunk_FUN_0041d620(this,SVar3);
      if (SVar3 == CASE_0) {
        return 0;
      }
      break;
    case 3:
      return 0;
    }
  }
  pAVar1 = this->field_0211;
  if ((((int)pAVar1->field_0048 <= (int)param_1) && ((int)param_1 <= (int)pAVar1->field_0058)) &&
     ((SVar3 = param_2, (int)pAVar1->field_0044 <= param_2 && (param_2 <= (int)pAVar1->field_0054)))
     ) {
    param_1 = FUN_006ddbd0();
    pVVar2 = g_visibleClass_00802A88;
    SVar3 = param_1;
    if ((param_1 == CASE_0) || (g_visibleClass_00802A88 == (VisibleClassTy *)0x0))
    goto cf_common_exit_006227F9;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    SVar3 = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar4 = (int)this->field_004B;
    if ((DAT_0080874d == 0xff) ||
       ((((((SVar3 = CASE_0, g_visibleClass_00802A88->field_00F8 == 0 ||
            (SVar3 = thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                        (int)this->field_0047,(int)this->field_0049,&param_2,
                                        (int *)&local_8), iVar4 < 0)) || (4 < iVar4)) ||
          ((param_2 < 0 || (pVVar2->field_0030 <= param_2)))) ||
         ((SVar3 = (int)&local_8->vtable + g_centeredOffsets5[iVar4], (int)SVar3 < 0 ||
          ((pVVar2->field_0034 <= (int)SVar3 || (pVVar2->field_004C == (byte *)0x0)))))) ||
        (SVar3 = (STMineSetC_field_02AEState)
                 pVVar2->field_004C[param_2 + SVar3 * pVVar2->field_0030], SVar3 != CASE_0))))
    goto cf_common_exit_006227F9;
  }
  param_1 = 0;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_006227F9:
  return CONCAT31((int3)(SVar3 >> 8),(undefined1)param_1);
}

