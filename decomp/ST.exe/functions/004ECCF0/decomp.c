#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004eccf0(RecoveredRecordView_004ECC70_6C1B81DC *param_1)

{
  int iVar2_mg1;
  int iVar2_mg2;
  int iVar1;
  int iVar2;
  longlong lVar3;

  if ((param_1->field_04D4 + 0x19 <= g_playSystem_00802A38->field_00E4) &&
     (param_1->field_04D4 = g_playSystem_00802A38->field_00E4, (int)param_1->field_04D0 < 5000)) {
    lVar3 = FUN_006b12cc(0x19);
    iVar2 = (int)lVar3;
    lVar3 = FUN_006b12cc(0x1194);

    iVar2_mg1 = FUN_006b12a8((int)lVar3,iVar2);
    lVar3 = FUN_006b12cc(5000);

    iVar2_mg2 = FUN_006b12a8((int)lVar3,iVar2_mg1);

    iVar1 = FUN_006b1280(iVar2_mg2);
    iVar2 = param_1->field_04D0 + iVar1;
    param_1->field_04D0 = iVar2;
    if ((4999 < iVar2) && (param_1->field_04D0 = 5000, param_1->field_05AC == 0x73)) {

      thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
    }
  }
  return 0;
}

