
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E51B0 returns stored into /CampaignTy+0x61 @ 00593058 | 006E51B0 returns stored into
   /ChooseMapTy+0x61 @ 005B0BBB | 006E51B0 returns stored into /FSGSTy+0x61 @ 005A436B | 006E51B0
   returns stored into /MainMenuTy+0x61 @ 005B4BC9 | 006E51B0 returns stored into /PrividerTy+0x61 @
   005BC5FB | 006E51B0 returns stored into /SIDTy+0x61 @ 005D9486 | 006E51B0 returns stored into
   /SettMapTy+0x61 @ 005C8A5B | 006E51B0 returns stored into /WaitTy+0x61 @ 005EA69B */

DWORD __fastcall FUN_006e51b0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(DWORD *)(param_1 + 0x18);
}

