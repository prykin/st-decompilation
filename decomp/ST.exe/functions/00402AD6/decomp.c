
undefined4 __thiscall thunk_FUN_004cd3e0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x45c) == 0) {
    *(undefined4 *)((int)this + 0x45c) = 1;
    *(undefined4 *)((int)this + 0x460) = param_1;
    *(undefined4 *)((int)this + 0x464) = param_2;
    *(undefined4 *)((int)this + 0x468) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    thunk_FUN_004cc880(this,2);
  }
  return 0;
}

