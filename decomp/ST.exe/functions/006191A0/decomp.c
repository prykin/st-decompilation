
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STJumpMineC::sub_006191A0(STJumpMineC *this,uint param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar2;
  STJumpMineC *local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((((PTR_00807598->field_0048 <= (int)param_1) && ((int)param_1 <= PTR_00807598->field_0058)) &&
      (in_EAX = param_2, PTR_00807598->field_0044 <= param_2)) &&
     (param_2 <= PTR_00807598->field_0054)) {
    local_8 = this;
    param_1 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = param_1;
    if ((param_1 == 0) || (g_visibleClass_00802A88 == (VisibleClassTy *)0x0))
    goto cf_common_exit_00619287;
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    in_EAX = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar2 = (int)this->field_00CD;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((DAT_0080874d == -1) || (in_EAX = 0, g_visibleClass_00802A88->field_00F8 == 0))
    goto cf_common_exit_00619287;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                        (int)this->field_00C9,(int)this->field_00CB,&param_2,(int *)&local_8);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((((iVar2 < 0) || (4 < iVar2)) || (param_2 < 0)) ||
       ((((pVVar1->field_0030 <= param_2 ||
          (in_EAX = (int)&local_8->vtable + g_centeredOffsets5[iVar2], (int)in_EAX < 0)) ||
         (pVVar1->field_0034 <= (int)in_EAX)) ||
        ((pVVar1->field_004C == (byte *)0x0 ||
         (in_EAX = (uint)pVVar1->field_004C[param_2 + in_EAX * pVVar1->field_0030], in_EAX != 0)))))
       ) goto cf_common_exit_00619287;
  }
  param_1 = 0;
/* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_00619287:
  return CONCAT31((int3)(in_EAX >> 8),(undefined1)param_1);
}

