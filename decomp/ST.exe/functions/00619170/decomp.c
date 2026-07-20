
undefined4 * __fastcall FUN_00619170(STGroupBoatC *param_1)

{
  STGroupBoatC::sub_006E60E0(param_1);
  param_1->vtable = (STGroupBoatCVTable *)&PTR_LAB_0079ced0;
  *(undefined4 *)&param_1->field_0x97 = 0xffffffff;
  return &param_1->vtable;
}

