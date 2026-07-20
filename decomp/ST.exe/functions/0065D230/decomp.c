
undefined4 * __fastcall FUN_0065d230(STGroupBoatC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0(param_1);
  param_1->vtable = (STGroupBoatCVTable *)&PTR_LAB_0079d6bc;
  if (param_1 == (STGroupBoatC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &param_1->field_0020;
  }
  for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1->field_0284 = 0;
  param_1->field_0020 = 900;
  *(undefined2 *)&param_1->field_0x7d = 0xfffe;
  *(undefined4 *)&param_1->field_0x97 = 0xff;
  return &param_1->vtable;
}

