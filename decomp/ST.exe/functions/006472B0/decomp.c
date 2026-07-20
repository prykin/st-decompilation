
undefined4 __fastcall FUN_006472b0(AnonShape_006472B0_8CB9F6B2 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1->field_0050 + 1;
  param_1->field_0050 = iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    param_1->field_003C = (param_1->field_0030 + 2) * 0xc9;
    param_1->field_0040 = (param_1->field_0034 + 2) * 0xc9;
    param_1->field_0044 = param_1->field_0038 * 200 + 0x78;
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    param_1->field_003C = (param_1->field_0030 + 2) * 0xc9;
    param_1->field_0040 = (param_1->field_0034 + 2) * 0xc9;
    param_1->field_0044 = param_1->field_0038 * 200 + 0xde;
    return 1;
  }
  return uVar1;
}

