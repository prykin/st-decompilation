
undefined4 __thiscall FUN_006d5230(void *this,int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x78) == 0) {
    *(int *)((int)this + 0x78) = (int)this + 0x150;
  }
  return *(undefined4 *)((int)this + 0x78);
}

