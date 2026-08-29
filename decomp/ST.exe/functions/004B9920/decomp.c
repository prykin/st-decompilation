#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004b9920(RecoveredRecordView_004B9920_DBB1F4AD *param_1)

{
  int iVar1;

  iVar1 = param_1->field_05AC;
  if ((iVar1 == 0x34) || (iVar1 == 0x5b)) {

    thunk_FUN_004de030((RecoveredRecord_004DE030_FF2F073D *)param_1);
  }
  else if (iVar1 == 0x48) {

    thunk_FUN_004df950((RecoveredRecord_004DF950_B7AEE0F8 *)param_1);
  }
  else if (iVar1 == 100) {

    thunk_FUN_004e4480((RecoveredRecord_004E4480_A040BC9C *)param_1);
  }
  else if (iVar1 == 0x62) {

    thunk_FUN_004e28d0((RecoveredRecord_004E28D0_27E8535E *)param_1);
  }
  else if (iVar1 == 0x6e) {

    thunk_FUN_004dd2b0((RecoveredRecord_004DD2B0_72D0AD44 *)param_1);
  }
  else if (iVar1 == 0x4d) {

    thunk_FUN_004def50((RecoveredRecord_004DEF50_827A6EEF *)param_1);
  }
  else if (iVar1 == 0x43) {

    thunk_FUN_004df100((RecoveredRecord_004DF100_3B3D6BBD *)param_1);
  }
  else if (iVar1 == 0x73) {

    thunk_FUN_004ecac0((RecoveredRecord_004ECAC0_58E78526 *)param_1);
  }
  else if (iVar1 == 0x3a) {

    thunk_FUN_004d96b0();
  }
  else if (iVar1 == 0x65) {

    thunk_FUN_004e48f0((RecoveredRecord_004E48F0_57009E81 *)param_1);
  }
  else if ((iVar1 == 0x3b) || (iVar1 == 0x60)) {

    thunk_FUN_004dfe90((RecoveredRecord_004DFE90_BF94B3BE *)param_1);
  }
  if (param_1->field_05AC == 0x5c) {
    g_packedRecords_A62x8[param_1->field_0024].field1965_0x9ca = 1;
  }
  return 0;
}

