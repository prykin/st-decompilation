
void FUN_007175d0(byte *param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = param_2 * param_3;
  pbVar1 = (byte *)FUN_006aac70(uVar3);
  pbVar4 = pbVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (-1 < (int)(uVar3 - 1)) {
    do {
      if (param_4 < *pbVar1) {
        *pbVar1 = param_4;
      }
      pbVar1 = pbVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

