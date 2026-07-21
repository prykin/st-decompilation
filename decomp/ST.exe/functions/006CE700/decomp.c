
void FUN_006ce700(AnonShape_006CE700_6E2936C3 *param_1,AnonShape_006CE700_F21E5976 *param_2,
                 int param_3)

{
  undefined1 uVar1;
  AnonShape_006CE700_6E2936C3 AVar2;
  bool bVar3;
  char cVar4;

  while (bVar3 = 3 < param_3, param_3 = param_3 + -4, bVar3) {
    AVar2 = *param_1;
    *param_1 = *(AnonShape_006CE700_6E2936C3 *)param_2;
    *param_2 = (AnonShape_006CE700_F21E5976)AVar2;
    param_1 = param_1 + 1;
    param_2 = (AnonShape_006CE700_F21E5976 *)(param_2 + 1);
  }
  cVar4 = (char)param_3;
  if (-4 < cVar4) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    *(undefined1 *)param_2 = uVar1;
    if (-3 < cVar4) {
      uVar1 = param_1->field_0001;
      param_1->field_0001 = ((AnonShape_006CE700_6E2936C3 *)param_2)->field_0001;
      ((AnonShape_006CE700_6E2936C3 *)param_2)->field_0001 = uVar1;
      if (-2 < cVar4) {
        uVar1 = param_1->field_0002;
        param_1->field_0002 = ((AnonShape_006CE700_6E2936C3 *)param_2)->field_0002;
        ((AnonShape_006CE700_6E2936C3 *)param_2)->field_0002 = uVar1;
      }
    }
  }
  return;
}

