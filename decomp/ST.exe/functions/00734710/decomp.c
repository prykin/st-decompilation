
uint __cdecl FUN_00734710(int param_1)

{
  uint local_8;
  
  if (DAT_007f148c < 2) {
    local_8 = *(ushort *)(PTR_DAT_007f1280 + param_1 * 2) & 0x80;
  }
  else {
    local_8 = FUN_00730610(param_1,0x80);
  }
  return local_8;
}

