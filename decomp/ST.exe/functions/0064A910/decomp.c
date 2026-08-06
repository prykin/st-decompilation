#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0064A910 returns used as parameter 0 of FUN_0064a970 @ 00672042 | 0064A910 returns used
   as parameter 1 of SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0 @
   0067201F

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00672440 -> 0064A910 @ 006724CA;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440 parameter param_1 |
   00683C70 -> 0064A910 @ 00689967; data at 00848A14 */

char * __cdecl FUN_0064a910(int *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < param_1[1])) {
    return (char *)(param_1[2] + param_2 * 5);
  }
  return nullptr;
}

