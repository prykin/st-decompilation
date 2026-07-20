
void __thiscall FUN_005f5e30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x9f) = *(undefined4 *)((int)this + 0x93);
  *(undefined4 *)((int)this + 0xa3) = *(undefined4 *)((int)this + 0x97);
  *(undefined4 *)((int)this + 0x93) = param_1;
  *(undefined4 *)((int)this + 0x97) = param_2;
  *(undefined4 *)((int)this + 0xa7) = *(undefined4 *)((int)this + 0x9b);
  *(undefined4 *)((int)this + 0x87) = 3;
  *(undefined4 *)((int)this + 0x9b) = param_3;
  *(undefined4 *)((int)this + 0xaf) = 0x1e;
  *(undefined4 *)((int)this + 0xb3) = 0xb;
  *(undefined4 *)((int)this + 0xbc) = 0x14;
  *(undefined4 *)((int)this + 0xb7) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xab) = 0;
  if (*(char *)((int)this + 0x103) != '\0') {
    thunk_FUN_005f35f0(this);
  }
  thunk_FUN_005f5c40(this,*(int *)((int)this + 0x93),*(int *)((int)this + 0x97),0x48a);
  return;
}

