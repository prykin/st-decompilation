
undefined4 __thiscall thunk_FUN_004debd0(void *this,int param_1)

{
  *(int *)((int)this + 0x4d4) = param_1;
  if ((param_1 < 1) && (*(int *)((int)this + 0x4d0) == 1)) {
    *(undefined4 *)((int)this + 0x4d4) = 0;
  }
  return 0;
}

