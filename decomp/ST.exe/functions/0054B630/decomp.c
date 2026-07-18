
void __thiscall FUN_0054b630(void *this,undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_0054a8d0(this);
  thunk_FUN_0054b540(this);
  *(undefined4 *)((int)this + 0x4a2) = param_1;
  *(undefined4 *)((int)this + 0x4aa) = param_2;
  if ((*(int *)((int)this + 0x4b2) <= *(int *)((int)this + 0xc5)) &&
     (*(int *)((int)this + 0xc5) < *(int *)((int)this + 0x4ba) + *(int *)((int)this + 0x4b2))) {
    if ((*(int *)((int)this + 0x4b6) <= *(int *)((int)this + 0xc9)) &&
       (*(int *)((int)this + 0xc9) < *(int *)((int)this + 0x4be) + *(int *)((int)this + 0x4b6))) {
      *(undefined4 *)((int)this + 0x496) = 1;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x496) = 0;
  return;
}

