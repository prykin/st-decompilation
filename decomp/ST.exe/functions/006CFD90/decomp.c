
undefined4 FUN_006cfd90(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 < 1) {
    pbVar1 = param_1 + (param_1[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    pbVar1 = FUN_006cfe10(param_1,param_3);
  }
  uVar2 = (uint)*pbVar1;
  pbVar1 = pbVar1 + 1;
  if (uVar2 != 0) {
    while( true ) {
      while ((uVar2 & 0x80) != 0) {
        uVar3 = uVar2 & 0x3f;
        param_2 = param_2 - uVar3;
        if (param_2 < 0) {
          return 1;
        }
        if ((uVar2 & 0x40) == 0) {
          uVar2 = (uint)pbVar1[uVar3];
          pbVar1 = pbVar1 + uVar3 + 1;
        }
        else {
          uVar2 = (uint)pbVar1[1];
          pbVar1 = pbVar1 + 2;
        }
      }
      param_2 = param_2 - (uVar2 & 0x7f);
      if (param_2 < 0) break;
      uVar2 = (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    }
  }
  return 0;
}

