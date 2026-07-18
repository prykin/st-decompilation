
int __thiscall thunk_FUN_006904d0(void *this,undefined *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if ((((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0))
          && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) &&
         (iVar1 = (*(code *)param_1)(iVar1,param_2), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = *(int *)((int)this + 0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
  }
  return 0;
}

