
void FUN_006d07d0(int param_1,HPALETTE param_2,int param_3)

{
  UINT UVar1;
  
  UVar1 = GetNearestPaletteIndex
                    (param_2,(param_3 >> 3 & 0xfcU | (uint)(byte)((char)param_3 << 3) << 8) << 8 |
                             param_3 >> 8 & 0xf8U);
  *(char *)(param_1 + param_3) = (char)UVar1;
  return;
}

