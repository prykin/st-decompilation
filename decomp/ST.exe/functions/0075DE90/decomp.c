
void FUN_0075de90(AnonShape_0075DF10_BA4C6604 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  undefined4 uVar2;
  
  pAVar1 = (AnonNested_0075DF10_01B2_1F0F9C79 *)(*(code *)**(undefined4 **)param_1)(param_1,1,0x30);
  param_1->field_01B2 = pAVar1;
  *(code **)pAVar1 = FUN_0075dfe0;
  *(undefined4 *)&pAVar1->field_0x8 = 0;
  *(int *)&pAVar1[1].field_0x8 = *(int *)&param_1->field_0x70 * *(int *)&param_1->field_0x68;
  if (*(int *)&param_1->field_0x126 == 2) {
    uVar2 = *(undefined4 *)&pAVar1[1].field_0x8;
    *(code **)&pAVar1->field_0x4 = FUN_0075e000;
    *(code **)&pAVar1->field_0xc = FUN_0075e260;
    uVar2 = (**(code **)(*(int *)param_1 + 4))(param_1,1,uVar2);
    *(undefined4 *)(pAVar1 + 1) = uVar2;
    FUN_0075df10(param_1);
    return;
  }
  *(code **)&pAVar1->field_0x4 = FUN_0075e0c0;
  *(code **)&pAVar1->field_0xc = FUN_0075e100;
  *(undefined4 *)(pAVar1 + 1) = 0;
  FUN_0075df10(param_1);
  return;
}

