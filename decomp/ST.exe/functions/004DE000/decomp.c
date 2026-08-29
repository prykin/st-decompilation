#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DE000 returns zeroed full register at 004DE015 @ 004DE017 */

uint __fastcall FUN_004de000(RecoveredRecord_004DE000_A2D9992B *param_1)

{
  /* ST_CALLSITE[004DE010]: CALL 0x004051eb; direct=004051EB STAllPlayersC::sub_004D7570 */
  STAllPlayersC::sub_004D7570(g_allPlayers_007FA174,param_1->field_0024,3,param_1->field_0018);
  return 0;
}

