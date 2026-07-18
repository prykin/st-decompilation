
uint __thiscall FUN_00690550(void *this,short param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0xc9);
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) && (iVar4 = *(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c), iVar4 != 0)) &&
         (param_1 == *(short *)(iVar4 + 2))) {
        if (param_2 == -1) {
          return uVar3;
        }
        if (param_2 == *(short *)(iVar4 + 4)) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

