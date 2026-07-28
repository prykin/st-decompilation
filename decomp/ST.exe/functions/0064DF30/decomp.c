
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DF30 returns zeroed full register at 0064DF59 @ 0064DF5C */

uint __cdecl FUN_0064df30(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  STAllPlayersC::DestroyObjectMsg(g_allPlayers_007FA174,(char)param_1,param_2,CASE_6,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

