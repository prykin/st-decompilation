
void FUN_004e5dc0(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)((int)&DAT_007f511f + ((int)(param_2 ^ 7) >> 3) + param_1 * 0xa62);
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

