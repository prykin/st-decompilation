
undefined4 FUN_00757d90(AnonShape_00757D90_5427B306 *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  puVar3 = param_1->field_0010;
  pbVar5 = (byte *)*puVar3;
  iVar4 = puVar3[1];
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar3[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)*puVar3;
      iVar4 = puVar3[1];
    }
    bVar2 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar2 == 0xff) break;
      piVar1 = (int *)(param_1->field_01A6 + 0x5c);
      *piVar1 = *piVar1 + 1;
      *puVar3 = pbVar5;
      puVar3[1] = iVar4;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      bVar2 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    piVar1 = (int *)(param_1->field_01A6 + 0x5c);
    *piVar1 = *piVar1 + 2;
    *puVar3 = pbVar5;
    puVar3[1] = iVar4;
  }
  if (*(int *)(param_1->field_01A6 + 0x5c) != 0) {
    *(undefined4 *)(param_1->field_01A6 + 0x5c) = 0;
  }
  param_1->field_018E = uVar6;
  *puVar3 = pbVar5;
  puVar3[1] = iVar4;
  return 1;
}

