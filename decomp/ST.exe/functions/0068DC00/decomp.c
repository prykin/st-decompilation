
undefined4 * __fastcall FUN_0068dc00(STGroupBoatC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0(param_1);
  param_1->vtable = (STGroupBoatCVTable *)&PTR_LAB_0079d76c;
  if (param_1 == (STGroupBoatC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &param_1->field_0020;
  }
  for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1->field_0020 = 0x38e;
  *(undefined4 *)&param_1->field_0x9d = 0xff;
  *(undefined4 *)((int)&param_1->field_012F + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0133 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0137 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_013B + 1) = 0;
  *(undefined4 *)((int)&param_1->field_013D + 3) = 0;
  return &param_1->vtable;
}

