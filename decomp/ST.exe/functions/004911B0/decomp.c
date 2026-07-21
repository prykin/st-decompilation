
undefined4 __thiscall FUN_004911b0(void *this,undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((*(int *)((int)this + 0x45d) == 0x14) && (*(int *)((int)this + 0x5c0) != 2)) &&
     (*(int *)((int)this + 0x5a2) == 0)) {
    *(undefined4 *)((int)this + 0x5a2) = param_1;
    uVar1 = 1;
  }
  return uVar1;
}

