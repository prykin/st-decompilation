
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ec400(AnonShape_004EC400_367D4575 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1->field_04D0 == 4) {
    if (param_1->field_0514 + 1 <= (uint)PTR_00802a38->field_00E4) {
      iVar3 = param_1->field_0504 + 3;
      param_1->field_0514 = PTR_00802a38->field_00E4;
      param_1->field_0510 = param_1->field_0510 + 1;
      param_1->field_0504 = iVar3;
      thunk_FUN_004ad3c0(param_1->field_05FF,
                         (float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
                         (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
                         (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  if ((param_1->field_04D0 == 6) && (param_1->field_0514 + 1 <= (uint)PTR_00802a38->field_00E4)) {
    param_1->field_0514 = PTR_00802a38->field_00E4;
    param_1->field_0510 = param_1->field_0510 + 1;
    iVar1 = param_1->field_04FC;
    iVar2 = param_1->field_05B0 * 0xc9;
    iVar3 = iVar2 + 0xdc;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 0xdc) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_04FC = iVar1 + iVar2;
    }
    iVar2 = param_1->field_05B4 * 0xc9;
    iVar1 = param_1->field_0500;
    iVar3 = iVar2 + 100;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 100) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_0500 = iVar1 + iVar2;
    }
    iVar2 = param_1->field_05B8 * 0xc9;
    iVar1 = param_1->field_0504;
    iVar3 = iVar2 + -0x28;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + -0x28) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_0504 = iVar1 + iVar2;
    }
    thunk_FUN_004ad3c0(param_1->field_05FF,
                       (float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
                       (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
                       (float)param_1->field_0504 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  }
  return 0;
}

