
undefined4 __thiscall thunk_FUN_004e9bb0(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x4f8) == *(int *)(param_1 + 0x18)) &&
     (*(int *)((int)this + 0x4fc) != 0)) {
    *(undefined4 *)((int)this + 0x4f8) = 0;
    *(undefined4 *)((int)this + 0x4fc) = 0;
    *(undefined4 *)((int)this + 0x61b) = 0;
  }
  return 0;
}

