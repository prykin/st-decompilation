
void FUN_006b40e0(AnonShape_006B40E0_1B946617 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1->field_01DC;
  param_1->field_01DC = param_2;
  if (iVar1 != param_2) {
    param_1->field_01B8 = 1;
    param_1->field_01B4 = 1;
  }
  return;
}

