
int __thiscall FUN_0068e850(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)((int)this + 0xbd);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (((uint)piVar4[0xb] < 3) && (*piVar4 == param_1)) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

