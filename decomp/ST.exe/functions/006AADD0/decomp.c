
int FUN_006aadd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = param_4 - param_1 >> 0x1f;
  iVar2 = (param_4 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_5 - param_2 >> 0x1f;
  iVar4 = (param_5 - param_2 ^ uVar3) - uVar3;
  uVar3 = param_6 - param_3 >> 0x1f;
  iVar1 = (param_6 - param_3 ^ uVar3) - uVar3;
  if (iVar4 < iVar1) {
    if (iVar2 < iVar1) {
      iVar4 = iVar4 + iVar1 * 3 + iVar2;
    }
    else {
      iVar4 = iVar1 + iVar2 * 3 + iVar4;
    }
  }
  else if (iVar2 < iVar4) {
    if (iVar2 < iVar1) {
      iVar4 = iVar1 + iVar4 * 3 + iVar2;
    }
    else {
      iVar4 = iVar1 + iVar4 * 3 + iVar2;
    }
  }
  else {
    iVar4 = iVar1 + iVar2 * 3 + iVar4;
  }
  return iVar4 / 3;
}

