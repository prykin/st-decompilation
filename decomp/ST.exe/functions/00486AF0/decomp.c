
void __thiscall FUN_00486af0(void *this,int param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x716) = 1;
    return;
  }
  if (*(int *)((int)this + 0x712) < param_1) {
    *(int *)((int)this + 0x716) = *(int *)((int)this + 0x712);
    return;
  }
  *(int *)((int)this + 0x716) = param_1;
  return;
}

