#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DD30 returns zeroed full register at 0064DD59 @ 0064DD5C */

uint __cdecl FUN_0064dd30(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  STAllPlayersC::DestroyObjectMsg(g_allPlayers_007FA174,(char)param_1,param_2,CASE_2,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

