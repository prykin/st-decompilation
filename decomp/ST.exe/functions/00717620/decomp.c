
byte * FUN_00717620(byte *param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = param_2 * param_3;
  pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(uVar4);
  pbVar3 = pbVar1;
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pbVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pbVar3 = pbVar3 + 4;
  }
  for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  pbVar3 = pbVar1;
  if (-1 < (int)(uVar4 - 1)) {
    do {
      if (*pbVar3 < param_5) {
        *pbVar3 = param_5;
      }
      else if (param_4 < *pbVar3) {
        *pbVar3 = param_4;
      }
      uVar4 = uVar4 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 != 0);
  }
  return pbVar1;
}

