
undefined4 __thiscall thunk_FUN_004e15f0(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
    iVar1 = *(int *)((int)this + 0x235);
    uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x4d8) != -1) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x4d8) = param_1;
  return 1;
}

