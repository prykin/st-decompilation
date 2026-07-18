
void __thiscall FUN_0053f510(void *this,uint param_1,uint param_2)

{
  if (param_1 < 5) {
    *(undefined4 *)((int)this + 0x199) = 0;
  }
  if (param_1 - 5 < *(uint *)((int)this + 0x199)) {
    *(uint *)((int)this + 0x199) = ~-(uint)(param_1 < 5) & param_1 - 5;
  }
  if (param_1 < 5) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x28) = 0x20;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  if (param_2 < 5) {
    *(undefined4 *)((int)this + 0x28) = 0x20;
    *(undefined4 *)((int)this + 0x2c) = 1;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19d),(undefined4 *)((int)this + 0x18));
  }
  if (param_2 != param_1) {
    *(uint *)((int)this + 0x2c) = param_1 - 4;
    *(undefined4 *)((int)this + 0x28) = 0x28;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19d),(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x28) = 0x22;
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x199);
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  *(undefined4 *)((int)this + 0x28) = 5;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19d),(undefined4 *)((int)this + 0x18));
  return;
}

