
undefined4 __thiscall FUN_0063ca50(void *this,undefined4 param_1)

{
  int iVar1;

  iVar1 = *(int *)((int)this + 0x29a);
  if (iVar1 == 1) {
    *(undefined4 *)((int)this + 0x292) = 10;
    *(undefined4 *)((int)this + 0x28e) = param_1;
    *(undefined4 *)((int)this + 0x296) = 1;
    *(undefined4 *)((int)this + 0x29a) = 2;
    *(int *)((int)this + 0x282) = *(short *)((int)this + 599) + 0x19;
    *(undefined4 *)((int)this + 0x27e) = *(undefined4 *)((int)this + 0x26e);
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)((int)this + 0x292) = 6;
      *(undefined4 *)((int)this + 0x28e) = param_1;
      *(undefined4 *)((int)this + 0x27e) = *(undefined4 *)((int)this + 0x26e);
      *(undefined4 *)((int)this + 0x296) = 1;
      *(int *)((int)this + 0x282) = (int)*(short *)((int)this + 599);
      *(undefined4 *)((int)this + 0x29a) = 3;
      return 0;
    }
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}

