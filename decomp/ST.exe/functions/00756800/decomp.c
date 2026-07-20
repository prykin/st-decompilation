
undefined4 FUN_00756800(AnonShape_00756800_BE569F2C *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1->field_000C != 0xcc) {
    (**(code **)param_1->field_0192)(param_1);
    param_1->field_0084 = 0;
    param_1->field_000C = 0xcc;
  }
  if (*(int *)(param_1->field_0192 + 8) != 0) {
    puVar1 = &param_1->field_0084;
    do {
      uVar3 = *puVar1;
      if (uVar3 < (uint)param_1->field_006C) {
        do {
          if (param_1->field_0004 != 0) {
            *(uint *)(param_1->field_0004 + 4) = uVar3;
            *(undefined4 *)(param_1->field_0004 + 8) = param_1->field_006C;
            (**(code **)param_1->field_0004)(param_1);
          }
          uVar2 = *puVar1;
          (**(code **)(param_1->field_0196 + 4))(param_1,0,puVar1,0);
          uVar3 = *puVar1;
          if (uVar3 == uVar2) {
            return 0;
          }
        } while (uVar3 < (uint)param_1->field_006C);
      }
      (**(code **)(param_1->field_0192 + 4))(param_1);
      (**(code **)param_1->field_0192)(param_1);
      *puVar1 = 0;
    } while (*(int *)(param_1->field_0192 + 8) != 0);
  }
  param_1->field_000C = (param_1->field_003C != 0) + 0xcd;
  return 1;
}

