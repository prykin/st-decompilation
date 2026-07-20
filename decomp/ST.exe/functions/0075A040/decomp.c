
void FUN_0075a040(AnonShape_0075A040_811C231E *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = param_1->field_0196;
  iVar2 = param_1->field_012A;
  iVar3 = (*(code *)**(undefined4 **)param_1)(param_1,1,*(int *)&param_1->field_0x1c << 3);
  *(int *)(iVar1 + 0x38) = iVar3;
  *(int *)(iVar1 + 0x3c) = iVar3 + *(int *)&param_1->field_0x1c * 4;
  iVar3 = 0;
  if (0 < *(int *)&param_1->field_0x1c) {
    piVar6 = (int *)(*(int *)&param_1->field_0xd0 + 0xc);
    do {
      iVar4 = (piVar6[6] * *piVar6) / param_1->field_012A;
      iVar7 = (iVar2 + 4) * iVar4;
      iVar5 = (*(code *)**(undefined4 **)param_1)(param_1,1,iVar7 * 8);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + iVar4 * 4;
      *(int *)(*(int *)(iVar1 + 0x38) + -4 + iVar3 * 4) = iVar5;
      *(int *)(*(int *)(iVar1 + 0x3c) + -4 + iVar3 * 4) = iVar5 + iVar7 * 4;
      piVar6 = piVar6 + 0x15;
    } while (iVar3 < *(int *)&param_1->field_0x1c);
  }
  return;
}

