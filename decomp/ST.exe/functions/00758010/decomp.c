
undefined4 FUN_00758010(AnonShape_00758010_64471088 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_10 [12];
  
  puVar2 = (undefined4 *)param_1->field_0010;
  iVar3 = puVar2[1];
  pbVar4 = (byte *)*puVar2;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar3 = puVar2[1];
  }
  iVar3 = iVar3 + -1;
  bVar1 = *pbVar4;
  pbVar4 = pbVar4 + 1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar3 = puVar2[1];
  }
  iVar3 = iVar3 + -1;
  iVar5 = (uint)bVar1 * 0x100 + (uint)*pbVar4;
  pbVar4 = pbVar4 + 1;
  iVar6 = iVar5 + -2;
  if (0xb < iVar6) {
    iVar6 = 0;
    do {
      if (iVar3 == 0) {
        iVar3 = (*(code *)puVar2[3])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        pbVar4 = (byte *)*puVar2;
        iVar3 = puVar2[1];
      }
      iVar3 = iVar3 + -1;
      local_10[iVar6] = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xc);
    iVar6 = iVar5 + -0xe;
    if ((((local_10[0] == 0x41) && (local_10[1] == 'd')) && (local_10[2] == 'o')) &&
       ((local_10[3] == 'b' && (local_10[4] == 'e')))) {
      param_1->field_0119 = 1;
      param_1->field_011D = local_10[0xb];
    }
  }
  *puVar2 = pbVar4;
  puVar2[1] = iVar3;
  if (0 < iVar6) {
    (**(code **)(param_1->field_0010 + 0x10))(param_1,iVar6);
  }
  return 1;
}

