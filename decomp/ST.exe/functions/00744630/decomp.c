
undefined4 __cdecl FUN_00744630(uint param_1,uint param_2,byte param_3)

{
  uint local_8;
  
  if (((&DAT_0085a481)[param_1 & 0xff] & param_3) == 0) {
    if (param_2 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(ushort *)(&DAT_007f128a + (param_1 & 0xff) * 2) & param_2;
    }
    if (local_8 == 0) {
      return 0;
    }
  }
  return 1;
}

