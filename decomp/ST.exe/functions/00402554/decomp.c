
void thunk_FUN_00496e40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_00496a90(param_1,param_2,0,param_3,param_4,&param_4);
  if (-1 < (int)uVar1) {
    if (uVar1 < *(uint *)(DAT_007fb270 + 0xc)) {
      iVar3 = *(int *)(DAT_007fb270 + 8) * uVar1 + *(int *)(DAT_007fb270 + 0x1c);
    }
    else {
      iVar3 = 0;
    }
    thunk_FUN_00496b30(uVar1,*(int *)(iVar3 + 8),0);
    iVar3 = *(int *)(iVar3 + 8);
    FUN_006b0c70(DAT_007fb270,uVar1);
    iVar2 = thunk_FUN_00496f00(iVar3);
    if (iVar2 == 0) {
      FUN_006ab060(&DAT_007fb24c + iVar3);
    }
  }
  return;
}

