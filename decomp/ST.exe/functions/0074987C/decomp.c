
void FUN_0074987c(undefined4 *param_1,AnonShape_0074987C_9BF4FFD0 *param_2)

{
  undefined4 *puVar1;
  
  if ((param_2->field_0010 == 0) ||
     (((param_2->field_0028 == DAT_007a1240 && (param_2->field_002C == DAT_007a1244)) &&
      (param_2->field_0030 == DAT_007a1248)))) {
    puVar1 = &DAT_007a16f0;
  }
  else if (((param_2->field_0028 != DAT_007a1250) || (param_2->field_002C != DAT_007a1254)) ||
          (puVar1 = &DAT_007a1700, param_2->field_0030 != DAT_007a1258)) {
    puVar1 = &DAT_0079e368;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}

