
uint __thiscall FUN_0068e480(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)((int)this + 0xa5);
  uVar3 = 0xffffffff;
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
      iVar4 = *(int *)(iVar4 + 4);
      if (((iVar4 != 0) && (*(short *)(iVar4 + 0x7b) == param_1)) && (-1 < *(short *)(iVar4 + 0x7f))
         ) {
        uVar3 = uVar5;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return uVar3;
}

