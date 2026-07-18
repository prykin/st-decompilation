
undefined4 __thiscall thunk_FUN_004cdeb0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x524) < 0x14) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x524) * 4 + 0x4d0) = param_1;
    *(int *)((int)this + 0x524) = *(int *)((int)this + 0x524) + 1;
  }
  return 0;
}

