
int __cdecl FUN_006f0e30(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  sVar1 = *(short *)(param_1 + 0x16);
  if (sVar1 != *(short *)(param_2 + 0x16)) {
    return (int)sVar1 - (int)*(short *)(param_2 + 0x16);
  }
  iVar3 = (int)sVar1;
  bVar6 = false;
  iVar2 = 0;
  bVar7 = true;
  pbVar4 = param_1 + 0x18;
  pbVar5 = param_2 + 0x18;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (iVar2 == 0) {
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
  }
  return iVar2;
}

