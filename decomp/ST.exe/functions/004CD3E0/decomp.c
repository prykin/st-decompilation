
undefined4 __thiscall FUN_004cd3e0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x45c) == 0) {
    *(undefined4 *)((int)this + 0x45c) = 1;
    *(undefined4 *)((int)this + 0x460) = param_1;
    *(undefined4 *)((int)this + 0x464) = param_2;
    *(uint *)((int)this + 0x468) = PTR_00802a38->field_00E4;
    thunk_FUN_004cc880(this,2);
  }
  return 0;
}

