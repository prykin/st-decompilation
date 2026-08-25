#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_6=6 */

undefined4 __fastcall FUN_004e4b60(STMineSetC *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;

  switch(param_1->field_0245) {
  case CASE_0:
    if ((param_1->field_05AC == 0x36) || (param_1->field_05AC == 0x5d)) {
      if (param_1->field_0024 != param_1->field_023D) {
        /* ST_CALLSITE[004E4BA2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar1 = LookupRecordByte((char)param_1->field_023D);
        iVar3 = param_1->field_0235;
        /* ST_CALLSITE[004E4BC7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte((char)param_1->field_0024);
        if ((&DAT_007e1984)[(uint)bVar2 + (iVar3 * 3 + (uint)bVar1) * 3] == '\0') {
          return 0;
        }
      }
      if (param_1->field_04DC == 0) {
        iVar3 = thunk_FUN_004e60d0(param_1->field_0024,
                                   *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
        iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
        param_1->field_04D0 = iVar3;
        thunk_FUN_0041ce40(param_1,iVar3);
        param_1->field_04DC = 1;
        return 0;
      }
    }
    break;
  case CASE_1:
  case CASE_2:
  case CASE_6:
    if ((((param_1->field_05AC == 0x36) || (param_1->field_05AC == 0x5d)) &&
        (0 < param_1->field_04D0)) && (param_1->field_04DC != 0)) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      param_1->field_04DC = 0;
    }
    if ((param_1->field_05AC == 0x3d) || (param_1->field_05AC == 0x5d)) {
      if (param_1->field_04E0 != 0) {
        thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
        param_1->field_04E0 = 0;
      }
      if (param_1->field_04E4 != 0) {
        /* ST_CALLSITE[004E4CB5]: CALL 0x0040216c; direct=0040216C STMineSetC::sub_0041D2B0 */
        STMineSetC::sub_0041D2B0(param_1);
        param_1->field_04E4 = 0;
      }
    }
  }
  return 0;
}

