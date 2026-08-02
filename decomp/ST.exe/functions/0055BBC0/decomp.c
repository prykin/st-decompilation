
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; literal 0 at 0055917B | 00559620 -> 0055BBC0 @
   00559691; literal 1 at 0055968F | 005599D0 -> 0055BBC0 @ 00559A3A; literal 2 at 00559A38 |
   00559D60 -> 0055BBC0 @ 00559DCA; literal 3 at 00559DC8 | 0055A110 -> 0055BBC0 @ 0055A17D; literal
   4 at 0055A17B | 0055A4C0 -> 0055BBC0 @ 0055A52D; literal 5 at 0055A52B | 0055A870 -> 0055BBC0 @
   0055A8DD; literal 6 at 0055A8DB

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_1 |
   005599D0 -> 0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_1 | 00559D60 ->
   0055BBC0 @ 00559DCA; VisibleClassTy::sub_00559D60 parameter param_1 | 0055A110 -> 0055BBC0 @
   0055A17D; VisibleClassTy::sub_0055A110 parameter param_1 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_1 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005599D0 -> 0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_2 |
   00559D60 -> 0055BBC0 @ 00559DCA; VisibleClassTy::sub_00559D60 parameter param_2 | 0055A110 ->
   0055BBC0 @ 0055A17D; VisibleClassTy::sub_0055A110 parameter param_2 | 0055A4C0 -> 0055BBC0 @
   0055A52D; VisibleClassTy::sub_0055A4C0 parameter param_2 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_3 |
   00559620 -> 0055BBC0 @ 00559691; VisibleClassTy::sub_00559620 parameter param_3 | 005599D0 ->
   0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_3 | 00559D60 -> 0055BBC0 @
   00559DCA; VisibleClassTy::sub_00559D60 parameter param_3 | 0055A110 -> 0055BBC0 @ 0055A17D;
   VisibleClassTy::sub_0055A110 parameter param_3 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_3 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_3

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0055BC26 MOV DL,byte ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_6 |
   00559620 -> 0055BBC0 @ 00559691; VisibleClassTy::sub_00559620 parameter param_6 | 005599D0 ->
   0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_6 | 00559D60 -> 0055BBC0 @
   00559DCA; VisibleClassTy::sub_00559D60 parameter param_6 | 0055A110 -> 0055BBC0 @ 0055A17D;
   VisibleClassTy::sub_0055A110 parameter param_6 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_6 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_6 */

void __thiscall
VisibleClassTy::sub_0055BBC0
          (VisibleClassTy *this,byte param_1,short param_2,short param_3,char param_4,uint param_5,
          byte param_6,int param_7)

{
  uint index;
  RecoveredRecord_VisibleClassTy_0055B9F0 local_10;

  if ((((this->field_0114 != 0) && (this->field_0110 != nullptr)) &&
      (param_5 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_5].field_0022 < 8)))) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10._6_1_ = param_4;
    local_10.field_0004 = param_3;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10._1_1_ = (char)param_5;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10._0_1_ = param_1;
    local_10.field_0002 = param_2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10._7_1_ = param_6;
    local_10.field_0008 = param_7;
    index = thunk_FUN_0055b9f0(this,&local_10);
    if (-1 < (int)index) {
      DArrayRemoveAt((DArrayTy *)this->field_0110,index);
    }
  }
  return;
}

