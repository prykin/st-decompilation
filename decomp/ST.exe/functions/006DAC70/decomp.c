
void FUN_006dac70(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte param_5,int param_6
                 ,int param_7,undefined1 param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;

  iVar1 = param_4 + 7;
  if (0 < param_7) {
    do {
      uVar3 = 0x80 >> (param_5 & 7) & 0xff;
      if (0 < param_6) {
        param_4 = param_6;
        pbVar4 = param_3;
        do {
          if ((*pbVar4 & (byte)uVar3) != 0) {
            *param_1 = param_8;
          }
          bVar2 = (byte)uVar3 >> 1;
          uVar3 = (uint)bVar2;
          if (bVar2 == 0) {
            uVar3 = 0x80;
            pbVar4 = pbVar4 + 1;
          }
          param_1 = param_1 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      param_3 = param_3 + ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3);
      param_1 = param_1 + (param_2 - param_6);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

