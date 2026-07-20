
void __thiscall FUN_00492510(void *this,int param_1)

{
  if (*(int *)((int)this + 0x7ca) == param_1) {
    *(undefined4 *)((int)this + 0x7ca) = 0;
    *(undefined4 *)((int)this + 0x7c6) = 0;
    return;
  }
  STBoatC::sub_00492420(this);
  return;
}

