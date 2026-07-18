
void __thiscall FUN_0067b210(void *this,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    thunk_FUN_0067b260((int)this);
    *(undefined1 *)((int)this + 0x662) = 1;
    *(short *)((int)this + 0x660) = (short)param_1;
    if (param_2 < 1) {
      param_2 = 1;
    }
    *(short *)((int)this + 0x663) = (short)param_2;
  }
  return;
}

