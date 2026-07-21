
void __thiscall FUN_00618b40(void *this,undefined4 param_1,undefined2 param_2)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  iVar1 = *(int *)((int)this + 0x5e);
  if (iVar1 == 0) {
    *(undefined2 *)((int)this + 0x58) = param_2;
    *(undefined4 *)((int)this + 0x20) = param_1;
    return;
  }
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0)) &&
         (this_00 = *(void **)(iVar1 + 0x18), this_00 != (void *)0x0)) {
        thunk_FUN_0061d080(this_00,param_1,param_2);
      }
      iVar1 = *(int *)((int)this + 0x5e);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    *(undefined2 *)((int)this + 0x58) = param_2;
    *(undefined4 *)((int)this + 0x20) = param_1;
    return;
  }
  *(undefined2 *)((int)this + 0x58) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_1;
  return;
}

