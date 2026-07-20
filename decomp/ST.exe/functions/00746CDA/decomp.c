
undefined4 FUN_00746cda(AnonShape_00746CDA_FC10F509 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    *param_2 = param_1->field_0014;
    param_2[1] = param_1->field_0018;
    param_2[2] = param_1->field_001C;
    param_2[3] = param_1->field_0020;
  }
  return uVar1;
}

