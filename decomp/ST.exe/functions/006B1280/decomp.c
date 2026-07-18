
int __cdecl FUN_006b1280(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 / (int)DAT_007eda8c;
  uVar2 = param_1 % (int)DAT_007eda8c;
  if ((int)uVar2 < 0) {
    if ((int)uVar2 <= (int)-(DAT_007eda8c >> 1)) {
      iVar1 = iVar1 + -1;
    }
  }
  else if (DAT_007eda8c >> 1 <= uVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

