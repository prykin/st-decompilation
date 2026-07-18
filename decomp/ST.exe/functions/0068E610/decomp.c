
int __thiscall FUN_0068e610(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = 0;
  uVar4 = 0;
  iVar1 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar5 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (bVar5) {
        iVar1 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = 0;
      }
      if (*(void **)(iVar1 + 4) != (void *)0x0) {
        uVar2 = thunk_FUN_0065da50(*(void **)(iVar1 + 4),param_1,-1);
        iVar3 = iVar3 + uVar2;
      }
      iVar1 = *(int *)((int)this + 0xa5);
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar1 + 0xc));
  }
  return iVar3;
}

