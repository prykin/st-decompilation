
undefined4 __cdecl FUN_00734990(int param_1)

{
  undefined4 local_c;
  uint local_8;
  
  if (DAT_007f148c < 2) {
    local_8 = *(ushort *)(PTR_DAT_007f1280 + param_1 * 2) & 0x107;
  }
  else {
    local_8 = FUN_00730610(param_1,0x107);
  }
  if ((local_8 == 0) && (param_1 != 0x5f)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

