
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall TLOEmbryoTy::sub_00419CF0(int *param_1,undefined4 param_2,uint param_3)

{
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STAllPlayersC::RegisterObject
            (g_allPlayers_007FA174,(char)param_1[9],
             CONCAT22((short)((uint)param_2 >> 0x10),(short)param_1[0xc]),param_3,param_1,1,0);
  return;
}

