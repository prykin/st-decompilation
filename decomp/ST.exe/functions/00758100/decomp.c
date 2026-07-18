
undefined4 FUN_00758100(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  iVar4 = puVar3[1];
  pbVar5 = (byte *)*puVar3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar5;
  *puVar3 = pbVar5 + 1;
  puVar3[1] = iVar4 + -1;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10))(param_1,(uint)bVar1 * 0x100 + (uint)bVar2 + -2);
  return 1;
}

