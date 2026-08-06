#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4D60 @ 004E5702 */

undefined4 __fastcall FUN_004e4d60(AnonShape_004E4D60_C16F78E8 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;

  if ((param_1->field_0245 == 0) && ((param_1->field_05AC == 0x36 || (param_1->field_05AC == 0x5d)))
     ) {
    if (param_1->field_04DC != 0) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      param_1->field_04DC = 0;
    }
    if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
      bVar1 = LookupRecordByte((char)param_1->field_023D);
      iVar3 = param_1->field_0235;
      bVar2 = LookupRecordByte(param_1->field_0x24);
      if ((&DAT_007e1984)[(uint)bVar2 + ((uint)bVar1 + iVar3 * 3) * 3] == '\0') {
        return 0;
      }
    }
    iVar3 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,
                               *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
    iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
    param_1->field_04D0 = iVar3;
    thunk_FUN_0041ce40(param_1,iVar3);
    param_1->field_04DC = 1;
  }
  return 0;
}

