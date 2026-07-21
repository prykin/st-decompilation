
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00];
   agreed_this_calls=1; incoming_this_accesses=2; incoming_edx_uses=0;
   incoming_stack_parameter_uses=7; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BB00
          (AnonReceiver_00558C00 *this,undefined1 param_1,undefined2 param_2,undefined2 param_3,
          undefined1 param_4,uint param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined2 local_c;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined4 local_8;

  if ((((*(int *)&this->field_0x114 != 0) && (*(uint **)&this->field_0x110 != (uint *)0x0)) &&
      (param_5 < 8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_5 * 0x51] < 8)))) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = CONCAT22(param_2,(short)CONCAT31((int3)param_5,param_1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this->field_0x110,&local_10);
  }
  return;
}

