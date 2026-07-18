
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_0062e640(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = thunk_FUN_0062db50(this,param_1,param_2);
  if ((int)uVar2 < 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    return *(undefined4 *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c) + 0xc);
  }
  return _DAT_0000000c;
}

