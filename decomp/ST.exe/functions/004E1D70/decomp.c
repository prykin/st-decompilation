
void __thiscall FUN_004e1d70(void *this,int param_1,int param_2)

{
  *(int *)((int)this + 0x4dc) = param_1;
  if (param_1 == 0xdc) {
    thunk_FUN_004d87b0(*(char *)((int)this + 0x24),param_2);
  }
  else if (param_1 == 0xdd) {
    thunk_FUN_004d88f0(*(char *)((int)this + 0x24),param_2);
  }
  else if (param_1 == 0xde) {
    thunk_FUN_004d8a30(*(char *)((int)this + 0x24),param_2);
  }
  thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
  if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
  }
  return;
}

