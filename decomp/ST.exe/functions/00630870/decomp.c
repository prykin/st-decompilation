
undefined4 * __fastcall FUN_00630870(STGroupBoatC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0(param_1);
  param_1->vtable = (STGroupBoatCVTable *)&PTR_LAB_0079d19c;
  if (param_1 == (STGroupBoatC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &param_1->field_001C;
  }
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  param_1->field_0061 = 0xffffffff;
  return &param_1->vtable;
}

