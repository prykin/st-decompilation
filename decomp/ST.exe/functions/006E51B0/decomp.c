
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E51B0 returns stored into /CampaignTy+0x61 @ 00593058 | 006E51B0 returns stored into
   /ChooseMapTy+0x61 @ 005B0BBB | 006E51B0 returns stored into /FSGSTy+0x61 @ 005A436B | 006E51B0
   returns stored into /MainMenuTy+0x61 @ 005B4BC9 | 006E51B0 returns stored into /PrividerTy+0x61 @
   005BC5FB | 006E51B0 returns stored into /SIDTy+0x61 @ 005D9486 | 006E51B0 returns stored into
   /SettMapTy+0x61 @ 005C8A5B | 006E51B0 returns stored into /WaitTy+0x61 @ 005EA69B

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056A5F0 -> 006E51B0 @ 0056A74B

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=39;
   incoming_ecx_receiver_callers=2; attributed_named_callers=2; owner_evidence_coverage=adequate */

DWORD __thiscall STAppC::sub_006E51B0(STAppC *this)

{
  return this->field_0018;
}

