
void FUN_00753ce0(AnonShape_00753CE0_1943F9C2 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((param_2 != 0) && (param_2 < (uint)param_1->field_0018)) {
    iVar2 = param_1->field_0034;
    puVar6 = (uint *)(iVar2 + -4 + param_2);
    uVar7 = *(uint *)(iVar2 + -4 + param_2) & 0xfffffffe;
    puVar1 = (uint *)(uVar7 + (int)puVar6);
    uVar3 = *(uint *)(iVar2 + 0xc);
    puVar4 = (uint *)(iVar2 + 8);
    while ((puVar5 = (uint *)(uVar3 + iVar2), puVar5 != (uint *)0x0 && (puVar5 < puVar1))) {
      puVar4 = puVar5;
      uVar3 = puVar5[1];
    }
    if ((puVar4 == (uint *)(iVar2 + 8)) || ((uint *)(*puVar4 + (int)puVar4) != puVar6)) {
      puVar4[1] = (int)puVar6 - iVar2;
      puVar6[1] = (int)puVar5 - param_1->field_0034;
    }
    else {
      uVar7 = uVar7 + *puVar4;
      puVar6 = puVar4;
    }
    if ((puVar5 != (uint *)0x0) && (puVar5 == puVar1)) {
      uVar7 = uVar7 + *puVar5;
      puVar6[1] = puVar5[1];
      if ((int)puVar5 + (8 - param_1->field_0034) == param_1->field_0018) {
        param_1->field_0018 = (int)puVar6 + (8 - param_1->field_0034);
      }
    }
    *puVar6 = uVar7;
  }
  return;
}

