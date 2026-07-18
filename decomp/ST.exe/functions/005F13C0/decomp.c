
undefined4 __thiscall FUN_005f13c0(void *this,int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if ((((bVar5) &&
             (psVar3 = (short *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
             psVar3 != (short *)0x0)) && ((char)psVar3[3] == param_4)) &&
           (((*psVar3 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (((bVar5) &&
            (psVar3 = (short *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            psVar3 != (short *)0x0)) &&
           (((char)psVar3[3] == param_4 &&
            (((*psVar3 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))))) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 1;
}

