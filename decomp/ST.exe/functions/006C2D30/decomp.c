
void FUN_006c2d30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || ((param_1[2] & 0x40000000U) == 0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7ede64,0xf2);
  }
  param_1[3] = param_2;
  param_1[4] = param_3;
  if ((param_1[2] & 2U) == 0) {
    param_1[5] = param_4;
    param_1[6] = param_5;
  }
  param_1[2] = param_1[2] | 0x4000000;
  return;
}

