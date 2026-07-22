
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00490CD0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=10;
   ecx_pointer_setup=10; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=3; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00490CD0::sub_00490CD0
          (AnonReceiver_00490CD0 *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4
          )

{
  short sVar1;

  if (param_3 < 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_3._2_2_ = 0;
  }
  sVar1 = (short)param_4;
  if ((short)param_4 < 0) {
    sVar1 = 0;
  }
  if (param_4 < 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_4._2_2_ = 0;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (g_worldGrid.sizeX + -1 < (int)param_3._2_2_) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_3._2_2_ = g_worldGrid.sizeX + -1;
  }
  if (g_worldGrid.sizeY + -1 < (int)sVar1) {
    sVar1 = g_worldGrid.sizeY + -1;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (g_worldGrid.sizeZ + -1 < (int)param_4._2_2_) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_4._2_2_ = g_worldGrid.sizeZ + -1;
  }
  *(short *)&this->field_0x475 = param_3._2_2_;
  *(short *)&this->field_0x477 = sVar1;
  *(short *)&this->field_0x479 = param_4._2_2_;
  return;
}

