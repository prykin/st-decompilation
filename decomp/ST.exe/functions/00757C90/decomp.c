
void FUN_00757c90(AnonShape_00757C90_A505B8DD *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1->field_01A2;
  *puVar1 = Library::DKW::JPG::FUN_007579c0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (*(code *)*param_1->field_01A6)(param_1);
  param_1->field_0098 = 0;
  return;
}

