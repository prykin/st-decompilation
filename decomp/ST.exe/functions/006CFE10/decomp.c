
byte * FUN_006cfe10(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar2 = (int)*(short *)(param_1 + 0x12);
  uVar4 = (param_1[0xd] & 0x1c) >> 2;
  uVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  pbVar7 = param_1 + uVar4 * 2 + 0x16;
  if ((0 < (int)uVar3) && (uVar4 != 0)) {
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    param_2 = param_2 + uVar3 * -0x10;
    pbVar7 = param_1 + *(ushort *)(param_1 + uVar3 * 2 + 0x14) + 0x16;
  }
  param_1 = pbVar7;
  uVar3 = 0;
  iVar6 = param_2 * iVar2;
  do {
    while( true ) {
      pbVar7 = param_1;
      iVar5 = iVar6 - uVar3;
      if (iVar5 == 0 || iVar6 < (int)uVar3) {
        return pbVar7;
      }
      bVar1 = *pbVar7;
      uVar3 = (uint)bVar1;
      param_1 = pbVar7 + 1;
      if (uVar3 == 0) break;
      iVar6 = iVar5;
      if ((bVar1 & 0x80) != 0) {
        if ((bVar1 & 0x40) == 0) {
          uVar3 = bVar1 & 0xffffff3f;
          param_1 = param_1 + uVar3;
        }
        else {
          uVar3 = bVar1 & 0xffffff3f;
          param_1 = pbVar7 + 2;
        }
      }
    }
    iVar6 = iVar5 - iVar2;
  } while (iVar6 != 0 && iVar2 <= iVar5);
  return param_1;
}

