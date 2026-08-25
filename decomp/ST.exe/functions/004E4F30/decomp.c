#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4F30 @ 004E5728 */

undefined4 __fastcall FUN_004e4f30(STMineSetC *param_1)

{
  int iVar1;
  byte bVar2;
  int local_EAX_85;
  int local_EAX_124;
  int iVar3;
  int uVar2;
  int uVar3;

  if ((param_1->field_05AC != 0x5d) && (param_1->field_05AC != 0x3d)) {
    return 0;
  }
  if (param_1->field_04E0 != 0) {
    thunk_FUN_0041d100((AnonShape_0041D100_A90F7B7E *)param_1);
    param_1->field_04E0 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    /* ST_CALLSITE[004E4F85]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_85 = LookupRecordByte((char)param_1->field_023D);
    iVar3 = param_1->field_0235;
    /* ST_CALLSITE[004E4FAC]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_124 = LookupRecordByte((char)param_1->field_0024);
    local_EAX_124 = (int)(byte)local_EAX_124;
    if ((&DAT_007e1984)[local_EAX_124 + ((uint)(byte)local_EAX_85 + iVar3 * 3) * 3] == '\0')
    goto LAB_004e4ffe;
  }
  if ((param_1->field_05AC != 0x5d) ||
     (iVar3 = thunk_FUN_004e60d0(param_1->field_0024,0x46), iVar3 != 0)) {
    thunk_FUN_0041cff0(param_1,*(int *)(&DAT_00798fbc + param_1->field_0239 * 4));
    param_1->field_04E0 = 1;
  }
LAB_004e4ffe:
  if (param_1->field_05AC == 0x5d) {
    iVar3 = 0x4a;
  }
  else if ((param_1->field_05AC == 0x3d) &&
          /* ST_CALLSITE[004E501F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          (bVar2 = LookupRecordByte((char)param_1->field_0024), bVar2 == 1)) {
    iVar3 = 0x12;
  }
  else {
    iVar3 = 0;
  }
  if (param_1->field_04E4 != 0) {
    /* ST_CALLSITE[004E503F]: CALL 0x0040216c; direct=0040216C STMineSetC::sub_0041D2B0 */
    STMineSetC::sub_0041D2B0(param_1);
    param_1->field_04E4 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    /* ST_CALLSITE[004E5063]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar2 = LookupRecordByte((char)param_1->field_023D);
    iVar1 = param_1->field_0235;
    /* ST_CALLSITE[004E508A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar3 = LookupRecordByte((char)param_1->field_0024);
    uVar3 = (int)(byte)uVar3;
    if ((&DAT_007e1984)[uVar3 + ((uint)(byte)uVar2 + iVar1 * 3) * 3] == '\0') {
      return 0;
    }
  }
  if ((iVar3 != 0) && (iVar3 = thunk_FUN_004e60d0(param_1->field_0024,iVar3), iVar3 == 0)) {
    return 0;
  }
  /* ST_CALLSITE[004E50BC]: CALL 0x00402b3f; direct=00402B3F STMineSetC::sub_0041D1A0 */
  STMineSetC::sub_0041D1A0(param_1,10);
  param_1->field_04E4 = 1;
  return 0;
}

