#include "../../pseudocode_runtime.h"


void __fastcall FUN_0062f7a0(RecoveredRecordView_0062F7A0_F6CC2FA1 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {

    thunk_FUN_0062f6c0(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (((-1 < (int)param_1->field_01D5) || (-1 < (int)param_1->field_01D9)) ||
     (-1 < (int)param_1->field_01DD)) {

    thunk_FUN_00495ff0((short)param_1->field_01D5,(short)param_1->field_01D9,
                       (short)param_1->field_01DD,1,(RecoveredRecordView_00495FF0_A2A90B23 *)param_1
                      );
    param_1->field_01D5 = 0xffffffff;
    param_1->field_01D9 = 0xffffffff;
    param_1->field_01DD = 0xffffffff;
  }
  return;
}

