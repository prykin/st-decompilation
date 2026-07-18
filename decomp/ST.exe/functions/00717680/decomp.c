
byte * FUN_00717680(int param_1,byte *param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  
  uVar6 = param_3 * param_4;
  pbVar2 = (byte *)FUN_006aac70(uVar6);
  pbVar4 = pbVar2;
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (-1 < (int)(uVar6 - 1)) {
    pbVar4 = pbVar2;
    do {
      bVar1 = pbVar4[param_1 - (int)pbVar2];
      if (param_5 < bVar1) {
        *pbVar4 = param_5;
      }
      else {
        bVar5 = *pbVar4;
        if (param_6 < *pbVar4) {
          *pbVar4 = param_6;
          bVar5 = param_6;
        }
        if (bVar5 < bVar1) {
          *pbVar4 = bVar1;
        }
      }
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return pbVar2;
}

