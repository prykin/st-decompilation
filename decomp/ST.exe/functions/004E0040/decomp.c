#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e0040(RecoveredRecordView_004E0040_BB411413 *param_1)

{
  uint *this;
  int iVar1;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0xffffffff;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04E8 = 0;
  this = thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
  if (this == nullptr) goto LAB_004e0119;
  /* ST_CALLSITE[004E009D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(this, 0x2C);
  param_1->field_04DC = iVar1;
  switch(param_1->field_05AC) {
  case 0x38:
    if (iVar1 != 0xdc) break;
    goto LAB_004e00e5;
  case 0x39:
  case 0x5e:
    if (iVar1 == 0xdd) goto LAB_004e00e5;
    break;
  case 0x4f:
    goto joined_r0x004e00e3;
  case 0x61:
joined_r0x004e00e3:
    if (iVar1 == 0xde) {
LAB_004e00e5:
      param_1->field_04D4 = 1;
    }
  }
  if (param_1->field_04D4 != 0) {
    param_1->field_04E0 = STField<undefined4>(this,0x259);
    thunk_FUN_005804f0(this,param_1->field_0018,(ushort)param_1->field_0024,param_1->field_0032);
  }
LAB_004e0119:
  if (param_1->field_05AC == 0x61) {
    param_1->field_0518 = 0;
    param_1->field_0520 = param_1->field_04E0;
    param_1->field_051C = 0;
    param_1->field_0524 = g_playSystem_00802A38->field_00E4;
    if (param_1->field_04E0 != 0) {
      param_1->field_0528 = 6;
    }

    thunk_FUN_004e40c0(param_1->field_0024);
  }
  return 0;
}

