
undefined4 __thiscall FUN_00618900(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x62);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar2)) &&
     (uVar4 = 0, 0 < (int)uVar2)) {
    bVar5 = uVar2 != 0;
    while (((!bVar5 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            piVar3 == (int *)0x0)) || (*piVar3 != param_1))) {
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return 0;
      }
    }
    if (param_2 != 0) {
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
      return 1;
    }
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    if (*(short *)((int)piVar3 + 6) < 1) {
      FUN_006b0c70(*(int *)((int)this + 0x62),uVar4);
    }
    return 1;
  }
  return 0;
}

