
undefined4 __thiscall FUN_005efb80(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0x24f) != '\0') && (*(int *)((int)this + 0x2a7) == param_1)) {
    *(undefined4 *)((int)this + 0x2a7) = 0;
    *(undefined2 *)((int)this + 0x2ab) = 0;
    *(undefined1 *)((int)this + 0x24f) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

