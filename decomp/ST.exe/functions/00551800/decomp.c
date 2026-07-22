
void __fastcall FUN_00551800(AnonShape_00551800_EBA95FA4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar1 = param_1->field_01C8;
  if ((&param_1->field_01BC)[(byte)param_1->field_01D0] == 0) {
    if (iVar1 != 0) {
      param_1->field_0028 = 0x21;
      FUN_006e6080(param_1,2,iVar1,(undefined4 *)&param_1->field_0x18);
      if (param_1->field_002C != 0) {
        param_1->field_0028 = 0x20;
        param_1->field_002C = 0;
        FUN_006e6080(param_1,2,param_1->field_01C8,(undefined4 *)&param_1->field_0x18);
      }
    }
    if (param_1->field_01CC == 0) {
      return;
    }
    param_1->field_0028 = 0x21;
    FUN_006e6080(param_1,2,param_1->field_01CC,(undefined4 *)&param_1->field_0x18);
    if (param_1->field_002C == 0) {
      return;
    }
    param_1->field_0028 = 0x20;
    param_1->field_002C = 0;
    goto LAB_00551a54;
  }
  if ((iVar1 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) goto LAB_005519bc;
  param_1->field_0028 = 0x21;
  FUN_006e6080(param_1,2,iVar1,(undefined4 *)&param_1->field_0x18);
  iVar1 = param_1->field_002C;
  if (param_1->field_01BB == '\0') {
    if ((DAT_0080874e == '\x03') && (param_1->field_01D0 == '\0')) {
      if (param_1->field_01AD == 0) goto LAB_0055198e;
      iVar3 = (uint)param_1->field_01BC * (uint)param_1->field_01AD;
LAB_0055194f:
      if (iVar3 < 1) goto LAB_0055198e;
      if (DAT_0080874e == '\x03') {
        iVar2 = thunk_FUN_004e41c0((uint)DAT_0080874d);
      }
      else {
        iVar2 = thunk_FUN_004d8870(DAT_0080874d);
      }
      if (iVar2 < iVar3) goto LAB_0055198e;
      iVar3 = 1;
    }
    else {
      if ((&param_1->field_01AD)[(uint)(byte)param_1->field_01D0 * 4] != 0) {
        iVar3 = (int)((ulonglong)(&param_1->field_01BC)[(byte)param_1->field_01D0] /
                     (ulonglong)
                     (longlong)
                     (int)(uint)(&param_1->field_01AD)[(uint)(byte)param_1->field_01D0 * 4]);
        goto LAB_0055194f;
      }
LAB_0055198e:
      iVar3 = 0;
    }
    param_1->field_002C = iVar3;
    if (iVar3 == 0) {
      if (iVar1 != 0) {
LAB_005519a4:
        uVar5 = param_1->field_01C8;
        param_1->field_0028 = 0x20;
        goto LAB_005519b3;
      }
    }
    else if (iVar1 == 0) goto LAB_005519a4;
  }
  else {
    if (iVar1 != 0) goto LAB_005519bc;
    uVar5 = param_1->field_01C8;
    param_1->field_0028 = 0x20;
    param_1->field_002C = 1;
LAB_005519b3:
    FUN_006e6080(param_1,2,uVar5,(undefined4 *)&param_1->field_0x18);
  }
LAB_005519bc:
  if (param_1->field_01CC == 0) {
    return;
  }
  if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
    return;
  }
  param_1->field_0028 = 0x21;
  FUN_006e6080(param_1,2,param_1->field_01CC,(undefined4 *)&param_1->field_0x18);
  iVar1 = param_1->field_002C;
  if (param_1->field_01D0 == '\0') {
    iVar3 = thunk_FUN_004d89b0(DAT_0080874d);
  }
  else {
    iVar3 = thunk_FUN_004d8af0(DAT_0080874d);
  }
  uVar4 = (uint)((int)(uint)(&param_1->field_01BC)[(byte)param_1->field_01D0] <= iVar3);
  param_1->field_002C = uVar4;
  if (uVar4 == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  param_1->field_0028 = 0x20;
LAB_00551a54:
  FUN_006e6080(param_1,2,param_1->field_01CC,(undefined4 *)&param_1->field_0x18);
  return;
}

