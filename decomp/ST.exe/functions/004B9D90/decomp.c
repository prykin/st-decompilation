#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=15,
   ignored=0, unknown=0 */

int __fastcall FUN_004b9d90(RecoveredRecordView_004B9D90_09AED060 *param_1)

{
  int iVar1;
  int iVar3;
  int iVar2;
  bool bVar4;

  iVar1 = param_1->field_0245;
  if (iVar1 == 1) {
    return 0;
  }
  if (iVar1 == 6) {
    return 0;
  }
  if (iVar1 == 4) {
    return 0;
  }
  iVar1 = param_1->field_05AC;
  switch(iVar1) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    iVar3 = param_1->field_04D0;
    if (iVar3 != 0) {
      if ((iVar3 != 1) && (iVar3 != 2)) {
        return 0;
      }
      if (iVar1 == 0x40) {
        return 0;
      }
      if (iVar1 == 0x49) {
        return 0;
      }
    }
    break;
  case 0x33:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04F8 != 0) {
      return 0;
    }
    break;
  case 0x37:
  case 0x6c:
    if (param_1->field_04D8 != 0xffff) {
      return 0;
    }
    if (iVar1 == 0x6c) {

      iVar2 = thunk_FUN_004e9930((RecoveredRecord_004E9930_E29CCD11 *)param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = param_1->field_061B;
      if (iVar1 == 0) {
        return 0;
      }
      if (STField<int>(iVar1,0x20) != 1000) {
        return 0;
      }
      if (STField<int>(iVar1,0x4D8) != 0xffff) {
        return 0;
      }
      if (g_worldGrid.sizeZ + -1 <= STField<int>(iVar1,0x5B8)) {
        return 0;
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04D8 != -1) {
      return 0;
    }
    break;
  case 0x45:
    bVar4 = param_1->field_04D0 == 3;
    goto LAB_004b9e45;
  case 0x4e:
  case 0x70:
  case 0x72:
    bVar4 = param_1->field_04D0 == 4;
LAB_004b9e45:
    if (bVar4) {
      return 0;
    }
    break;
  case 99:
    if ((param_1->field_04D0 == 0) && (param_1->field_04D4 == 0)) {
      return 0;
    }
  }
  return 1;
}

