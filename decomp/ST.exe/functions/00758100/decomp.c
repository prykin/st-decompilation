
undefined4 FUN_00758100(AnonShape_00758100_FF0E5C9C *param_1)

{
  byte bVar1;
  byte bVar2;
  AnonNested_00758100_0010_55B841DF *pAVar3;
  int iVar4;
  byte *pbVar5;
  
  pAVar3 = param_1->field_0010;
  iVar4 = pAVar3->field_0004;
  pbVar5 = (byte *)pAVar3->field_0000;
  if (iVar4 == 0) {
    iVar4 = (*(code *)pAVar3->field_000C)(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)pAVar3->field_0000;
    iVar4 = pAVar3->field_0004;
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)pAVar3->field_000C)(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)pAVar3->field_0000;
    iVar4 = pAVar3->field_0004;
  }
  bVar2 = *pbVar5;
  pAVar3->field_0000 = pbVar5 + 1;
  pAVar3->field_0004 = iVar4 + -1;
  (*(code *)param_1->field_0010->field_0010)(param_1,(uint)bVar1 * 0x100 + (uint)bVar2 + -2);
  return 1;
}

