#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004DBA88 dereference: MOV EAX,dword ptr [EDI] |
   004DBA8E dereference: CMP dword ptr [EDI + 0x18],EBX | 004DBAD4 dereference: MOV dword ptr
   [EDI],EBX */

undefined4 __fastcall FUN_004dba70(void *param_1)

{
  AnonShape_004DBA70_007C3C4C *pAVar1;
  int iVar2;
  uint *puVar3;
  AnonShape_004DBA70_007C3C4C *local_c;
  int local_8;

  puVar3 = (undefined4 *)((int)param_1 + 0x4d0);
  local_8 = 2;
  do {
    if (((RecoveredRecordView_005EFAE0_855D930D *)*puVar3 !=
         nullptr) && (puVar3[6] != 0)) {

      iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)*puVar3,
                         (int *)&local_c);
      pAVar1 = local_c;
      if (iVar2 == 0) {
        local_c->field_04C0 = 0;
        if ((RecoveredRecord_00635FD0_23FED72E *)local_c->field_061F !=
            nullptr) {
          thunk_FUN_00635fd0((RecoveredRecord_00635FD0_23FED72E *)local_c->field_061F);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar1->field_061F);
          pAVar1->field_061F = nullptr;
        }
      }
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

