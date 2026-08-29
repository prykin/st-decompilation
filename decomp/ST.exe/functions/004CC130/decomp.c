#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004cc130(RecoveredRecordView_004CC130_E53952B7 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_05AC) {

  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    uVar1 = thunk_FUN_004d0900();
    return uVar1;
  case 0x45:

    uVar1 = thunk_FUN_004eaf90((RecoveredRecordView_004EAF90_6FAC7F27 *)param_1);
    return uVar1;
  case 0x4e:

    uVar1 = thunk_FUN_004da2b0((RecoveredRecord_004DA2B0_CDACE95B *)param_1);
    return uVar1;

  case 0x52:
  case 0x5f:
    uVar1 = thunk_FUN_004ec6e0();
    return uVar1;
  case 0x69:

    uVar1 = thunk_FUN_004dd260((RecoveredRecordView_004DD260_80F87573 *)param_1);
    break;
  case 0x70:

    uVar1 = thunk_FUN_004d9620((RecoveredRecord_004D9620_0A743BB7 *)param_1);
    return uVar1;
  case 0x72:

    uVar1 = thunk_FUN_004ed4b0((RecoveredRecord_004ED4B0_7C418538 *)param_1);
    return uVar1;
  }
  return uVar1;
}

