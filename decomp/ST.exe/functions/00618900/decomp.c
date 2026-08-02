
undefined4 __thiscall FUN_00618900(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint index;
  bool bVar4;

  iVar1 = *(int *)((int)this + 0x62);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar2)) &&
     (index = 0, 0 < (int)uVar2)) {
    bVar4 = uVar2 != 0;
    while (((!bVar4 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * index + *(int *)(iVar1 + 0x1c)),
            piVar3 == nullptr)) || (*piVar3 != param_1))) {
      index = index + 1;
      bVar4 = index < uVar2;
      if ((int)uVar2 <= (int)index) {
        return 0;
      }
    }
    if (param_2 != 0) {
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
      return 1;
    }
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    if (*(short *)((int)piVar3 + 6) < 1) {
      DArrayRemoveAt(*(DArrayTy **)((int)this + 0x62),index);
    }
    return 1;
  }
  return 0;
}

