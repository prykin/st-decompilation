
void __thiscall FUN_00486aa0(void *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 1;
  }
  else if (100 < param_1) {
    param_1 = 100;
  }
  *(int *)((int)this + 0x716) = (*(int *)((int)this + 0x712) * param_1) / 100;
  return;
}

