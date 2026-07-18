
uint __thiscall thunk_FUN_00618a50(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)((int)this + 0x62);
  uVar3 = 0xffffffff;
  uVar5 = uVar3;
  if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar2)) && (0 < (int)uVar2)) {
    bVar6 = uVar2 != 0;
    uVar5 = 0;
    while (((!bVar6 ||
            (piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c)),
            piVar4 == (int *)0x0)) || (*piVar4 != param_1))) {
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
      if ((int)uVar2 <= (int)uVar5) {
        return uVar3;
      }
    }
    *param_2 = (int)*(short *)((int)piVar4 + 6);
  }
  return uVar5;
}

