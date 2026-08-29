#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AD740 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 004AD773

   [STPrototypeApplier] Propagated return.
   Evidence: 004AD740 returns return of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10 @ 004AD779 */

int FUN_004ad740(RecoveredReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                RecoveredRecordView_004AD740_D55C36BD *param_4)

{
  int iVar1;


  iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::thunk_FUN_00424e10
                    (param_1,param_4->field_0038,param_4->field_0024 - _DAT_007907a8,
                     param_4->field_0028 - _DAT_007907a8,param_4->field_002C,0x20,0x20,param_3);
  return iVar1;
}

