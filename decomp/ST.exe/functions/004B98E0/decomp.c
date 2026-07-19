
undefined4 __thiscall FUN_004b98e0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x255) != 0) {
    *(undefined4 *)((int)this + 0x259) = param_1;
    TLOBaseTy::RotateSpr(this,1);
  }
  return 0;
}

