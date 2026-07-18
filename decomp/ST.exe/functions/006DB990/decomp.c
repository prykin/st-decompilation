
uint FUN_006db990(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    param_1 = param_1 + ((0x167 - param_1) / 0x168) * 0x168;
  }
  if (0x167 < (int)param_1) {
    param_1 = param_1 % 0x168;
  }
  uVar1 = (int)(((int)(0xb40000 / (longlong)param_2) + param_1 * 0x10000) * param_2) / 0x168 >> 0x10
  ;
  return (param_2 <= (int)uVar1) - 1 & uVar1;
}

