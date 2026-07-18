
undefined4 thunk_FUN_00496f00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  uVar4 = 0;
  uVar1 = *(uint *)(DAT_007fb270 + 0xc);
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    while( true ) {
      if (bVar5) {
        iVar3 = *(int *)(DAT_007fb270 + 8) * uVar4 + *(int *)(DAT_007fb270 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 8) == param_1) break;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

