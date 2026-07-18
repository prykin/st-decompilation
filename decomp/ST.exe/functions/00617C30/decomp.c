
undefined4 __thiscall FUN_00617c30(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x5e);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (bVar5) {
          iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if ((*(short *)(iVar3 + 10) == param_1) && (*(short *)(iVar3 + 0xc) == param_2)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 1;
}

