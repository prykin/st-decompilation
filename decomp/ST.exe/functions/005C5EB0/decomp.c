
void __fastcall FUN_005c5eb0(AnonShape_005C5EB0_D4E7C108 *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = 7;
  param_1->field_1C63 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  param_1->field_0031 = 0;
  piVar2 = (int *)&param_1->field_0x1f60;
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1->field_215D != 0) {
    param_1->field_0025 = param_1->field_215D;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  piVar2 = (int *)&param_1->field_0x2125;
  iVar1 = 0xe;
  do {
    if (*piVar2 != 0) {
      param_1->field_0025 = *piVar2;
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)&param_1->field_0x1f8c;
  local_8 = 10;
  do {
    iVar1 = 8;
    do {
      if (*piVar2 != 0) {
        param_1->field_0025 = *piVar2;
        (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0025 = param_1->field_211D;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_0389 != 0) {
    param_1->field_0025 = PTR_0081176c->field_0389;
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

