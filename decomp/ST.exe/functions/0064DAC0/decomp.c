#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DAC0 returns zeroed full register at 0064DAE9 @ 0064DAEC */

uint __cdecl FUN_0064dac0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  /* ST_CALLSITE[0064DAD9]: CALL 0x0040387d; direct=0040387D STAllPlayersC::DestroyObjectMsg */
  STAllPlayersC::DestroyObjectMsg(g_allPlayers_007FA174,(char)param_1,param_2,CASE_5,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

