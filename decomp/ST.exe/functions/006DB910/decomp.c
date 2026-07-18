
int FUN_006db910(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_3 - param_1;
  uVar3 = param_2 - param_4;
  if (uVar3 == 0) {
    return (((int)uVar2 < 0) - 1 & 0xffffff4c) + 0xb4;
  }
  if ((int)(((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * 100) <=
      (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    return (((int)uVar3 < 0) - 1 & 0xffffff4c) + 0x10e;
  }
  iVar1 = FUN_006db630(uVar3,0x10000,uVar2);
  iVar1 = FUN_006db820(iVar1);
  if ((int)uVar3 < 0) {
    iVar1 = iVar1 + 0xb4;
  }
  return iVar1;
}

