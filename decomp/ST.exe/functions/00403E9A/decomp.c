
undefined4 __thiscall thunk_FUN_005f09b0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0x24f) == '\0') && (param_1 != 0)) {
    *(undefined4 *)((int)this + 0x2a7) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)((int)this + 0x2ab) = *(undefined2 *)(param_1 + 0x32);
    *(undefined4 *)((int)this + 0x2a3) = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 1;
    *(undefined1 *)((int)this + 0x24f) = 1;
    if (*(char *)((int)this + 800) != '\0') {
      *(undefined1 *)((int)this + 800) = 0;
    }
  }
  return uVar1;
}

