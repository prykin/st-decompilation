
uint __thiscall FUN_0068e8c0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0xbd);
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (*piVar4 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

