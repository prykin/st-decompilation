
void __cdecl FUN_006b0dc0(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    param_1[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] =
         param_1[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

