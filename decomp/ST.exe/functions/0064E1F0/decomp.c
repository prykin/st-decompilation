
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064E1F0 returns zeroed full register at 0064E219 @ 0064E21C */

uint __cdecl FUN_0064e1f0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  STAllPlayersC::DestroyObjectMsg(g_allPlayers_007FA174,(char)param_1,param_2,CASE_3,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

