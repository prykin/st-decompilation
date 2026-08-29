#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00619540 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 006195AB */

int FUN_00619540(RecoveredReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                RecoveredRecordView_00619540_EF0F873C *param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_4->field_004E + 0x29);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + param_4->field_005E * 4), iVar2 != 0)) {

    iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,iVar2,
                       (float)param_4->field_0052 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0056 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_005A * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

