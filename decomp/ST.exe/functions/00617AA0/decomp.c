
void __thiscall FUN_00617aa0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)((int)this + 0x5e);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar4 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar4) {
          iVar1 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0x1c) == param_1) {
          FUN_006b0c70(iVar2,uVar3);
        }
        iVar2 = *(int *)((int)this + 0x5e);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
    }
  }
  return;
}

