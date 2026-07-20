
undefined4 __fastcall FUN_0074837c(AnonShape_0074837C_3396F25D *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0098;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_0098 = 0;
  }
  piVar1 = (int *)param_1->field_009C;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_009C = 0;
  }
  return 0;
}

