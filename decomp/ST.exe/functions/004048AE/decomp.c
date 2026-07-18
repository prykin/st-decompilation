
uint __thiscall thunk_FUN_0062db50(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar4 = 0xffffffff;
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    uVar4 = 0;
    while (((!bVar5 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            piVar3 == (int *)0x0)) || (*piVar3 != param_2))) {
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return 0xffffffff;
      }
    }
  }
  return uVar4;
}

