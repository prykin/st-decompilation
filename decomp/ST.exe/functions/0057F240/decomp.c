
undefined1 FUN_0057f240(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xdd) {
    if (param_2 < 0x1389) {
      return 2;
    }
    bVar1 = param_2 < 0x2711;
  }
  else {
    if (param_1 == 0xde) {
      if (param_2 < 0x2711) {
        return 2;
      }
      return param_2 < 0x9c41;
    }
    if (param_1 == 0xe0) {
      if (param_2 < 1) {
        return 2;
      }
      return param_2 < 0x4e21;
    }
  }
  return bVar1;
}

