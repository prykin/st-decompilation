
void __fastcall FUN_0058eeb0(AnonShape_0058EEB0_904026FD *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SHORT_007fb240 + -1;
  iVar2 = SHORT_007fb242 + -1;
  if (((((int)param_1->field_027F < 0) || (param_1->field_0287 < 0)) ||
      ((int)param_1->field_0283 < 0)) ||
     (((param_1->field_028B < 0 || (iVar1 < (int)param_1->field_027F)) ||
      ((iVar1 < param_1->field_0287 ||
       ((iVar2 < (int)param_1->field_0283 || (iVar2 < param_1->field_028B)))))))) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if (param_1->field_0287 <= (int)param_1->field_027F) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
  }
  if (param_1->field_028B <= (int)param_1->field_0283) {
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if ((((iVar1 < param_1->field_026F) || (param_1->field_026F < 0)) || (iVar2 < param_1->field_0273)
      ) || (param_1->field_0273 < 0)) {
    param_1->field_026F = iVar1 >> 1;
    param_1->field_0273 = iVar2 >> 1;
  }
  if (((int)param_1->field_0277 < 0) || (4 < (int)param_1->field_0277)) {
    param_1->field_0277 = 2;
  }
  return;
}

