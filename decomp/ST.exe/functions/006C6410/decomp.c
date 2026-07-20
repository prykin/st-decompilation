
undefined4 FUN_006c6410(AnonShape_006C6410_3502CDE7 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = param_1->field_04A0;
  uVar2 = param_1->field_049C & 0xfffffffe;
  param_1->field_04A0 = param_2;
  param_1->field_049C = uVar2;
  if (param_2 != -1) {
    param_1->field_049C = uVar2 | 1;
  }
  return uVar1;
}

