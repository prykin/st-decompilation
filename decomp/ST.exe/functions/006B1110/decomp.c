
void __cdecl FUN_006b1110(uint *param_1,int param_2,int param_3)

{
  uint local_14 [4];

  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    local_14[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] =
         local_14[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  param_1[3] = local_14[3];
  return;
}

