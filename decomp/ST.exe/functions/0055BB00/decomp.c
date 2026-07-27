
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=6; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

void __thiscall
VisibleClassTy::sub_0055BB00
          (VisibleClassTy *this,undefined1 param_1,undefined2 param_2,undefined2 param_3,
          undefined1 param_4,uint param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined2 local_c;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined4 local_8;

  if ((((this->field_0114 != 0) && (this->field_0110 != (DArrayTy *)0x0)) && (param_5 < 8)) &&
     ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_5 * 0x51] < 8))
     )) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = CONCAT22(param_2,(short)CONCAT31((int3)param_5,param_1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    Library::DKW::TBL::FUN_006ae1c0(&this->field_0110->flags,&local_10);
  }
  return;
}

