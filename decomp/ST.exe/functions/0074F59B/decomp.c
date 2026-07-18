
void * __thiscall
FUN_0074f59b(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0074e684(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x30) = 0x3ff0000000000000;
  return this;
}

