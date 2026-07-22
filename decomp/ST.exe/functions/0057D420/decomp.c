
undefined4 __fastcall FUN_0057d420(AnonShape_0057D420_ACBACC73 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  cVar7 = '\x06';
  iVar3 = param_1->field_0267;
  if ((iVar3 == 0xe7) || (iVar3 == 0xe8)) {
    cVar7 = '\x03';
  }
  else if (iVar3 == 0xe9) {
    cVar7 = '\x04';
  }
  uVar1 = FUN_006db910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0235,
                       (int)param_1->field_0237);
  uVar2 = FUN_006db990(uVar1,8);
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  uVar1 = uVar1 >> 0x10;
  piVar10 = (int *)local_8;
  piVar9 = (int *)local_c;
  iVar5 = (int)param_1->field_0049;
  iVar6 = (int)param_1->field_0047;
  piVar8 = (int *)local_10;
  iVar3 = (int)param_1->field_004B;
  iVar4 = FUN_006acf90(iVar6,iVar5,(int)param_1->field_0235,(int)param_1->field_0237);
  iVar3 = thunk_FUN_005845b0(uVar2,(int)param_1->field_0239 - (int)param_1->field_004B,iVar4,iVar6,
                             iVar5,iVar3,piVar8,piVar9,piVar10,uVar1);
  if (iVar3 == 0) {
    thunk_FUN_00417ff0(param_1,cVar7);
    thunk_FUN_00418010(param_1,cVar7 + -1);
    iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                       param_1->field_0239);
    if (iVar3 != 0) {
      param_1->field_023F = 0x10;
      return 0;
    }
    return 1;
  }
  thunk_FUN_00417ff0(param_1,cVar7);
  thunk_FUN_00418010(param_1,cVar7 + -1);
  iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                    ((AnonReceiver_004167A0 *)param_1,local_10[0],local_c[0],local_8[0]);
  if ((iVar3 != 0) &&
     (iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                        ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                         param_1->field_0239), iVar3 != 0)) {
    return 0;
  }
  return 1;
}

