
int __thiscall
FUN_0074f158(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0074b7b8((void *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0x3fffffff;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x30) = 0x37;
  *(undefined8 *)((int)this + 0x28) = 0x3ff0000000000000;
  return (int)this;
}

