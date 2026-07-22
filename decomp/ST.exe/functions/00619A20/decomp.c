
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STJumpMineC::sub_00619A20(STJumpMineC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;

  if (this->field_0097 < 0) {
    LoadImagJMine(this,this->field_008F);
  }
  pVVar1 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  else {
    iVar2 = (int)this->field_00CD;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                      (int)this->field_00C9,(int)this->field_00CB,&local_8,&local_c), iVar2 < 0)) ||
         ((4 < iVar2 || (local_8 < 0)))) ||
        ((pVVar1->field_0030 <= local_8 ||
         ((local_c = g_centeredOffsets5[iVar2] + local_c, local_c < 0 ||
          (pVVar1->field_0034 <= local_c)))))) ||
       ((pVVar1->field_004C == (byte *)0x0 ||
        (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] != 0)))) {
      iVar2 = this->field_00AB + 1;
      this->field_00AB = iVar2;
      if (this->field_00AF <= iVar2) {
        this->field_00AB = 0;
      }
      FUN_006ea960(PTR_00807598,this->field_0097,
                   (float)this->field_009F * _DAT_007904f8 * _DAT_007904f0,
                   (float)this->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                   (float)this->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006ea270(PTR_00807598,this->field_0097,0,this->field_00AB);
      FUN_006e96d0(PTR_00807598,this->field_0097);
      if (this->field_00C4 != '\0') {
        return;
      }
      FUN_006eaaa0(PTR_00807598,this->field_0097,0);
      this->field_00C4 = 1;
      return;
    }
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  FUN_006eab60(PTR_00807598,uVar3);
  this->field_00C4 = 0;
  return;
}

