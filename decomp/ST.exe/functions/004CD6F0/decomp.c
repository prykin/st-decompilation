#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=004CD6FA dereference: MOV EAX,dword ptr [ESI +
   0x524] | 004CD70E dereference: MOV ECX,dword ptr [EBX] | 004CD739 dereference: MOV EAX,dword ptr
   [ESI + 0x524] | 004CD748 dereference: MOV dword ptr [ESI + 0x524],0x0 */

undefined4 __fastcall FUN_004cd6f0(RecoveredRecord_004CD6F0_B6FC69DC *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  TLOBaseTy *local_8;

  iVar3 = 0;
  local_8 = nullptr;
  if (0 < param_1->field_0524) {
    puVar2 = (undefined4 *)&param_1->field_0x4d0;
    do {

      iVar1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)*puVar2,
                         (int *)&local_8);
      if (iVar1 == 0) {
        local_8->field_04D4 = 0;
        local_8->field_05D3 = 0;

        thunk_FUN_004c91a0(local_8);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < param_1->field_0524);
    param_1->field_0524 = 0;
    return 0;
  }
  param_1->field_0524 = 0;
  return 0;
}

