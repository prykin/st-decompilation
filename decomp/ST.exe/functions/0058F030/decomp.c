
undefined4 __fastcall FUN_0058f030(AnonShape_0058F030_ED0F322F *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  uVar1 = FUN_006db910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0231,
                       (int)param_1->field_0233);
  uVar2 = FUN_006db990(uVar1,8);
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  uVar1 = uVar1 >> 0x10;
  piVar9 = (int *)local_8;
  piVar8 = (int *)local_c;
  iVar5 = (int)param_1->field_0049;
  iVar6 = (int)param_1->field_0047;
  piVar7 = (int *)local_10;
  iVar3 = (int)param_1->field_004B;
  iVar4 = FUN_006acf90(iVar6,iVar5,(int)param_1->field_0231,(int)param_1->field_0233);
  iVar3 = thunk_FUN_005845b0(uVar2,(int)param_1->field_0235 - (int)param_1->field_004B,iVar4,iVar6,
                             iVar5,iVar3,piVar7,piVar8,piVar9,uVar1);
  if (iVar3 == 0) {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                      ((AnonReceiver_00417FF0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                      ((AnonReceiver_00417FF0 *)param_1,local_10[0],local_c[0],local_8[0]);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                      ((AnonReceiver_00417FF0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar3 == 0) {
      return 1;
    }
  }
  param_1->field_0253 = 0x1f;
  return 0;
}

