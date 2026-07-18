
void __thiscall FUN_00490e00(void *this,int param_1)

{
  if (param_1 == 1) {
    *(undefined4 *)((int)this + 0x73e) = 1;
    return;
  }
  if (*(int *)((int)this + 0x73e) == 1) {
    *(int *)((int)this + 0x73e) = param_1;
    if (*(int *)((int)this + 0x45d) == 5) {
      thunk_FUN_00446520(CONCAT31((int3)((uint)this >> 8),*(undefined1 *)((int)this + 0x24)),
                         *(short *)((int)this + 0x32),1);
    }
  }
  return;
}

