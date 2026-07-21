
void __thiscall FUN_006d7060(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(*(int *)((int)this + 0xe0) + 0xa0);
  uVar2 = *(uint *)(iVar1 + 4);
  if ((uVar2 & 0x1000000) != 0) {
    *(uint *)(iVar1 + 4) = uVar2 | 0x800000;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0xe0) + 0xa0);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1000000;
  FUN_0074c434(this,param_1);
  return;
}

