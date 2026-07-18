
undefined4 __thiscall
thunk_FUN_00617a20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)((int)this + 0x5e);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar4 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar4) {
          iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 0x20) == param_1) {
          *(undefined4 *)(iVar2 + 0x18) = param_3;
          *(undefined4 *)(iVar2 + 0x1c) = param_2;
          uVar1 = 1;
        }
        iVar2 = *(int *)((int)this + 0x5e);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
    }
  }
  return uVar1;
}

