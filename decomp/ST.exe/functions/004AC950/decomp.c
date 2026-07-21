
int __thiscall FUN_004ac950(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = *(int *)((int)this + 0x20);
  iVar3 = *(int *)(iVar2 + 0x10 + param_1 * 0x24);
  iVar4 = *(int *)(iVar2 + 0x14 + param_1 * 0x24);
  iVar1 = iVar2 + param_1 * 0x24;
  iVar5 = *(int *)(iVar1 + 0x18);
  iVar2 = **(int **)(iVar2 + param_1 * 0x24);
  if (iVar3 != iVar4) {
    if (iVar5 == iVar4) {
      return iVar3;
    }
    if ((*(byte *)(iVar1 + 0xf) & 2) == 0) {
      if (iVar3 < iVar4) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + -1;
    }
    else if (iVar3 < iVar4) {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return iVar2 + -1;
      }
    }
    else {
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar2) {
        return 0;
      }
    }
  }
  return iVar5;
}

