#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 006B9B20 @ 0056B1DA

   [STPrototypeApplier] Propagated return.
   Evidence: 006B9B20 returns return of Library::DKW::DDX::FUN_006b9940 @ 006B9B37 */

int FUN_006b9b20(undefined4 *param_1,HWND param_2,int *param_3)

{
  int iVar1;

  iVar1 = Library::DKW::DDX::FUN_006b9940(param_1,0,param_2,param_3);
  return iVar1;
}

