
undefined4 FUN_00757ef0(AnonShape_00757EF0_9651DBEA *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_14 [16];
  
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
  if (0xd < iVar6) {
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
      local_14[iVar6] = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xe);
    iVar6 = iVar5 + -0x10;
    if ((((local_14[0] == 0x4a) && (local_14[1] == 'F')) && (local_14[2] == 'I')) &&
       ((local_14[3] == 'F' && (local_14[4] == '\0')))) {
      param_1->field_0110 = 1;
      param_1->field_0114 = local_14[7];
      param_1->field_0115 = (ushort)local_14[8] * 0x100 + (ushort)local_14[9];
      param_1->field_0117 = (ushort)local_14[10] * 0x100 + (ushort)local_14[0xb];
    }
  }
  *puVar2 = pbVar4;
  puVar2[1] = iVar3;
  if (0 < iVar6) {
    (**(code **)(param_1->field_0010 + 0x10))(param_1,iVar6);
  }
  return 1;
}

