
undefined4 FUN_00748bca(AnonShape_00748BCA_3A4BA79D *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  if ((param_1->field_0004 & 0x100) == 0) {
    if ((param_1->field_0004 & 0x10) == 0) {
      uVar3 = 0x80040249;
    }
    else {
      *param_2 = param_1->field_0020;
      param_2[1] = param_1->field_0024;
      uVar1 = param_1->field_0020;
      iVar2 = param_1->field_0024;
      *param_3 = uVar1 + 1;
      param_3[1] = iVar2 + (uint)(0xfffffffe < uVar1);
      uVar3 = 0x40270;
    }
  }
  else {
    *param_2 = param_1->field_0020;
    param_2[1] = param_1->field_0024;
    *param_3 = param_1->field_0028;
    param_3[1] = param_1->field_002C;
    uVar3 = 0;
  }
  return uVar3;
}

