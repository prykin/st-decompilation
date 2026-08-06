
int FUN_006db910(int param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  int iVar1;
  uint uVar3;
  uint uVar4;

  uVar3 = param_3 - param_1;
  uVar4 = param_2 - param_4;
  if (uVar4 == 0) {
    return (((int)uVar3 < 0) - 1 & 0xffffff4c) + 0xb4;
  }
  if ((int)(((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) * 100) <=
      (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    return (((int)uVar4 < 0) - 1 & 0xffffff4c) + 0x10e;
  }
  iVar2 = FUN_006db630(uVar4,0x10000,uVar3);
  iVar1 = FUN_006db820(iVar2);
  if ((int)uVar4 < 0) {
    iVar1 = iVar1 + 0xb4;
  }
  return iVar1;
}

