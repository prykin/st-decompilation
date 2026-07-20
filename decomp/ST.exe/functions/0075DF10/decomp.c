
void FUN_0075df10(AnonShape_0075DF10_BA4C6604 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  pAVar1 = param_1->field_01B2;
  uVar2 = (*(code *)**(undefined4 **)param_1)(param_1,1,0x400);
  pAVar1->field_0010 = uVar2;
  uVar2 = (*(code *)**(undefined4 **)param_1)(param_1,1,0x400);
  pAVar1->field_0014 = uVar2;
  uVar2 = (*(code *)**(undefined4 **)param_1)(param_1,1,0x400);
  pAVar1->field_0018 = uVar2;
  uVar2 = (*(code *)**(undefined4 **)param_1)(param_1,1,0x400);
  pAVar1->field_001C = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  param_1 = (AnonShape_0075DF10_BA4C6604 *)0xff1daf00;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(pAVar1->field_0010 + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(pAVar1->field_0014 + iVar3) = (int)param_1 >> 0x10;
    *(int *)(pAVar1->field_0018 + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(pAVar1->field_001C + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1 = (AnonShape_0075DF10_BA4C6604 *)&param_1[0x107].field_0x19a;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

