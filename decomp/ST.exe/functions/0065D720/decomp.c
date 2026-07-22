
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall AiFltClassTy::sub_0065D720(AnonShape_0065D720_52DE2AAB *param_1,undefined4 param_2)

{
  STGroupBoatC *pSVar1;

  if ((param_1->field_007D != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar1 = thunk_FUN_0042b760(param_1->field_0024,
                                CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (pSVar1 != (STGroupBoatC *)0x0) {
      thunk_FUN_00423380((int)pSVar1);
      return;
    }
  }
  return;
}

