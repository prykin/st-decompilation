#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067ECE0 returns used as parameter 0 of FUN_0067eea0 @ 0067F399 */

byte * __cdecl FUN_0067ece0(undefined4 param_1)

{
  /* ST_CALLSITE[0067ECF3]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&DAT_0084850c,PTR_s___INCLUDE___03d_0079d73c,param_1);
  return &DAT_0084850c;
}

