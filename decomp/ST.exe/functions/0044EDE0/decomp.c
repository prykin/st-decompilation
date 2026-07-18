
void __thiscall FUN_0044ede0(void *this,int param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x71a) = 0;
    return;
  }
  if (100 < param_1) {
    *(undefined4 *)((int)this + 0x71a) = 100;
    return;
  }
  *(int *)((int)this + 0x71a) = param_1;
  return;
}

