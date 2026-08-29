#include "../../pseudocode_runtime.h"


void __fastcall FUN_00627170(RecoveredRecordView_00627170_DAC163CF *param_1)

{
  int iVar1;

  if ((param_1->field_035A == 0x15) && ((param_1->field_0355 & 1) != 0)) {
    if ((ushort)param_1->field_035E != param_1->field_004B) {
      /* ST_CALLSITE[006271B5]: CALL 0x00404d6d; direct=00404D6D STMineSetC::sub_00624570 */
      iVar1 = STMineSetC::sub_00624570
                        ((STMineSetC *)param_1,CASE_3,(int)param_1->field_003A,
                         (int)param_1->field_003C,
                         (short)((ushort)param_1->field_035E * 200 + 100) + -0x32);
      if (iVar1 != 0) {
        param_1->field_02EE = 3;
        param_1->field_02AE = 1;
      }
    }
    param_1->field_0359 = 0;
  }
  return;
}

