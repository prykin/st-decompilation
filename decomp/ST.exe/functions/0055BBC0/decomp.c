
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00];
   agreed_this_calls=2; incoming_this_accesses=3; incoming_edx_uses=0;
   incoming_stack_parameter_uses=7; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BBC0
          (AnonReceiver_00558C00 *this,undefined1 param_1,short param_2,undefined2 param_3,
          undefined1 param_4,uint param_5,undefined1 param_6,int param_7)

{
  uint uVar1;
  AnonShape_0055B9F0_A6E61FFF local_10;

  if ((((*(int *)&this->field_0x114 != 0) && (*(int *)&this->field_0x110 != 0)) && (param_5 < 8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_5 * 0x51] < 8)))) {
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
    uVar1 = thunk_FUN_0055b9f0(this,&local_10);
    if (-1 < (int)uVar1) {
      FUN_006b0c70(*(DArrayTy **)&this->field_0x110,uVar1);
    }
  }
  return;
}

