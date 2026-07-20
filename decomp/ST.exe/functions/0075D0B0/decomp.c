
void FUN_0075d0b0(AnonShape_0075D0B0_63617DB8 *param_1)

{
  AnonNested_0075D0B0_019E_9C9AA260 *pAVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  
  pAVar1 = param_1->field_019E;
  if (pAVar1->field_0018 == 0) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x1c))
                      (param_1,pAVar1->field_0008,pAVar1->field_0014,pAVar1->field_0010,0);
    pAVar1->field_000C = uVar2;
  }
  uVar4 = pAVar1->field_0010 - pAVar1->field_0018;
  uVar3 = in_stack_0000001c - *in_stack_00000018;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = *(int *)&param_1->field_0x6c - pAVar1->field_0014;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(param_1->field_01BA + 4))
            (param_1,pAVar1->field_000C + pAVar1->field_0018 * 4,
             in_stack_00000014 + *in_stack_00000018 * 4,uVar4);
  *in_stack_00000018 = *in_stack_00000018 + uVar4;
  uVar4 = pAVar1->field_0018 + uVar4;
  pAVar1->field_0018 = uVar4;
  if ((uint)pAVar1->field_0010 <= uVar4) {
    pAVar1->field_0018 = 0;
    pAVar1->field_0014 = pAVar1->field_0014 + pAVar1->field_0010;
  }
  return;
}

