
/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STRubbishC::sub_0062FEA0(STRubbishC *this,int param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  int iVar3;
  STRubbishC *local_8;

  if ((((PTR_00807598->field_0048 <= param_1) && (param_1 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= param_2)) && (param_2 <= PTR_00807598->field_0054)) {
    local_8 = this;
    iVar2 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    if (iVar2 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return iVar2;
    }
    iVar3 = this->field_01DD;
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar2;
    }
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,this->field_01D5,
               this->field_01D9,&param_2,(int *)&local_8);
    if (iVar3 < 0) {
      return iVar2;
    }
    if (4 < iVar3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0030 <= param_2) {
      return iVar2;
    }
    iVar3 = (int)&local_8->vtable + g_centeredOffsets5[iVar3];
    if (iVar3 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0034 <= iVar3) {
      return iVar2;
    }
    if (pVVar1->field_004C == (byte *)0x0) {
      return iVar2;
    }
    if (pVVar1->field_004C[param_2 + iVar3 * pVVar1->field_0030] != 0) {
      return iVar2;
    }
  }
  return 0;
}

