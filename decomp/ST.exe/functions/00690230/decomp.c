
void __thiscall FUN_00690230(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0)) &&
         (*(int *)(iVar1 + 4) != 0)) {
        thunk_FUN_00662240(param_1);
      }
      iVar1 = *(int *)((int)this + 0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
  }
  return;
}

