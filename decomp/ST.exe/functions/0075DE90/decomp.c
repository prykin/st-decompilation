
void FUN_0075de90(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x30);
  *(undefined4 **)((int)param_1 + 0x1b2) = puVar1;
  *puVar1 = FUN_0075dfe0;
  puVar1[2] = 0;
  puVar1[10] = param_1[0x1c] * param_1[0x1a];
  if (*(int *)((int)param_1 + 0x126) == 2) {
    puVar1[1] = FUN_0075e000;
    puVar1[3] = FUN_0075e260;
    uVar2 = (**(code **)(*param_1 + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
    FUN_0075df10(param_1);
    return;
  }
  puVar1[1] = FUN_0075e0c0;
  puVar1[3] = FUN_0075e100;
  puVar1[8] = 0;
  FUN_0075df10(param_1);
  return;
}

