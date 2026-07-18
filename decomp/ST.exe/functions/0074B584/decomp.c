
int FUN_0074b584(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 < 0x40000001) {
    if (1 < param_1) {
      do {
        iVar1 = iVar1 * 2;
      } while (iVar1 * iVar1 < param_1);
    }
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
      if ((-1 < iVar1) && (iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2), -1 < iVar1)) {
        iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
      }
    }
  }
  else {
    iVar1 = 0x8000;
  }
  return iVar1;
}

