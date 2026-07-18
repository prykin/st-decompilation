
undefined4 __thiscall FUN_004ddc30(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0x4d0);
  iVar3 = (int)this + 0x4d0;
  iVar4 = 0;
  if (-1 < iVar2) {
    while (iVar2 != param_1) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 + 1;
      if (iVar2 < 0) {
        thunk_FUN_004ddcc0((int)this);
        return 0;
      }
    }
    piVar1 = (int *)((int)this + iVar4 * 0x14 + 0x4d4);
    iVar3 = *(int *)((int)this + iVar4 * 0x14 + 0x4d4) - param_2;
    *piVar1 = iVar3;
    if (iVar3 < 0) {
      *piVar1 = 0;
    }
  }
  thunk_FUN_004ddcc0((int)this);
  return 0;
}

