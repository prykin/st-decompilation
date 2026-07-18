
void __thiscall
thunk_FUN_005b6350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 0x1a5a) = 0xc;
  *(undefined4 *)((int)this + 0x188d) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xcd + (int)this) = 2;
  *(undefined4 *)((uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xd1 + (int)this) = param_1;
  *(undefined4 *)((uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xd5 + (int)this) = param_2;
  *(undefined4 *)((uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xd9 + (int)this) = param_3;
  return;
}

