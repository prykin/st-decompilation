
void __thiscall FUN_007109f0(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x44) = *param_1;
    *(undefined4 *)((int)this + 0x48) = param_1[1];
    *(undefined4 *)((int)this + 0x4c) = param_1[2];
    *(undefined4 *)((int)this + 0x50) = param_1[3];
    *(undefined4 *)((int)this + 0x54) = param_1[4];
    *(undefined4 *)((int)this + 0x58) = param_1[5];
    *(undefined4 *)((int)this + 0x5c) = param_1[6];
    *(undefined4 *)((int)this + 0x60) = param_1[7];
    *(undefined4 *)((int)this + 100) = param_1[8];
    *(undefined4 *)((int)this + 0x68) = param_1[9];
    *(undefined4 *)((int)this + 0x6c) = param_1[10];
    *(undefined2 *)((int)this + 0x70) = *(undefined2 *)(param_1 + 0xb);
    *(undefined4 *)((int)this + 0x72) = *(undefined4 *)((int)param_1 + 0x2e);
    *(undefined4 *)((int)this + 0x76) = *(undefined4 *)((int)param_1 + 0x32);
    *(undefined4 *)((int)this + 0x7a) = *(undefined4 *)((int)param_1 + 0x36);
    *(undefined4 *)((int)this + 0x7e) = *(undefined4 *)((int)param_1 + 0x3a);
    *(undefined2 *)((int)this + 0x9e) = *(undefined2 *)((int)param_1 + 0x3e);
    *(undefined4 *)((int)this + 0x82) = param_1[0x10];
    *(undefined4 *)((int)this + 0x96) = param_1[0x11];
  }
  return;
}

