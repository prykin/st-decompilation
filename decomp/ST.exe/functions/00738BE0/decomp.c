
byte * __cdecl FUN_00738be0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *local_8;
  
  if (param_1 < param_2) {
    if (DAT_0085a36c == 0) {
      pbVar1 = param_2 + -1;
    }
    else {
      local_8 = param_2 + -1;
      if (((&DAT_0085a481)[*local_8] & 4) == 0) {
        do {
          local_8 = local_8 + -1;
          if (local_8 < param_1) break;
        } while (((&DAT_0085a481)[*local_8] & 4) != 0);
        pbVar1 = param_2 + (-1 - ((int)param_2 - (int)local_8 & 1U));
      }
      else {
        pbVar1 = param_2 + -2;
      }
    }
  }
  else {
    pbVar1 = (byte *)0x0;
  }
  return pbVar1;
}

