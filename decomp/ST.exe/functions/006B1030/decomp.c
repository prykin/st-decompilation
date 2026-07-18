
undefined4 __cdecl FUN_006b1030(int param_1,int param_2,int param_3)

{
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    if ((*(uint *)(param_1 + ((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4) &
        1 << ((byte)param_2 & 0x1f)) == 0) {
      return 0;
    }
  }
  return 1;
}

