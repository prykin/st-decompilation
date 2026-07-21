
undefined4 __thiscall FUN_004ddb30(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = *(int *)((int)this + 0x4d0);
  iVar3 = (int)this + 0x4d0;
  uVar1 = 0;
  iVar4 = 0;
  if (-1 < iVar2) {
    while (iVar2 != param_1) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 + 1;
      if (iVar2 < 0) {
        return uVar1;
      }
    }
    uVar1 = *(undefined4 *)((int)this + iVar4 * 0x14 + 0x4d4);
  }
  return uVar1;
}

