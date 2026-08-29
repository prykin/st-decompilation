#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AD6C0 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 004AD70E
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=6, scalar_uses=0; sites=004AD6C6 dereference: MOVSX ECX,byte ptr [EAX +
   0x13] | 004AD6CA dereference: MOV EDX,dword ptr [EAX + 0x20] | 004AD6DA dereference: MOV
   EDX,dword ptr [EAX + 0x30] | 004AD6E7 dereference: FLD float ptr [EAX + 0x28] | 004AD6F1
   dereference: MOV EDX,dword ptr [EAX + 0x2c] | 004AD6FD dereference: FLD float ptr [EAX + 0x24] */

int FUN_004ad6c0(RecoveredReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                RecoveredRecordView_004AD6C0_4545EBEE *param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(*(int *)(param_4->field_0020 + param_4->field_0013 * 0x24) + 0x29);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + param_4->field_0030 * 4), iVar2 != 0)) {

    iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,iVar2,param_4->field_0024 - _DAT_007907a8,
                       param_4->field_0028 - _DAT_007907a8,param_4->field_002C,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

