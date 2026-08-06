#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0058f030(AnonShape_0058F030_ED0F322F *param_1)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  uVar1 = FUN_006db910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0231,
                       (int)param_1->field_0233);
  uVar2 = FUN_006db990(uVar1,8);
  uVar3 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar3;
  uVar3 = uVar3 >> 0x10;
  piVar10 = (int *)local_8;
  piVar9 = (int *)local_c;
  iVar6 = (int)param_1->field_0049;
  iVar7 = (int)param_1->field_0047;
  piVar8 = (int *)local_10;
  iVar4 = (int)param_1->field_004B;
  iVar5 = FUN_006acf90(iVar7,iVar6,(int)param_1->field_0231,(int)param_1->field_0233);
  iVar4 = thunk_FUN_005845b0(uVar2,(int)param_1->field_0235 - (int)param_1->field_004B,iVar5,iVar7,
                             iVar6,iVar4,piVar8,piVar9,piVar10,uVar3);
  if (iVar4 == 0) {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar4 == 0) {
      return 1;
    }
  }
  else {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                      ((AnonReceiver_004167A0 *)param_1,local_10[0],local_c[0],local_8[0]);
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar4 == 0) {
      return 1;
    }
  }
  param_1->field_0253 = 0x1f;
  return 0;
}

