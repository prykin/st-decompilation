#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00623040 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 006230BC | 00623040
   parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 0062311E

   [STTypeFamilyApplier] EXACT_NAMED_LAYOUT.
   Evidence: anonymous structure has an exact full-layout match to one unique named type */

int FUN_00623040(RecoveredReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_00623040_D312340A *param_4)

{
  int iVar1;
  int iVar3;
  int local_EAX_124;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_4->field_0060 + 0x29);
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + param_4->field_0070 * 4), iVar3 != 0)) {
    if (param_4->field_004F != '\0') {
      local_EAX_124 =
           SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::thunk_FUN_00424e10
                     (param_1,iVar3,
                      (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                      (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                      (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
      return local_EAX_124;
    }
    iVar2 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,*(int *)(iVar1 + (uint)param_4->field_0078 * 4),
                       (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
    return iVar2;
  }
  return -4;
}

