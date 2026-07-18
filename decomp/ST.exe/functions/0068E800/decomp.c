
int __thiscall FUN_0068e800(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
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
        iVar4 = *(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      if (*(short *)(iVar4 + 0xc) == param_1) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

