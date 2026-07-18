
void __thiscall FUN_004ad3c0(void *this,float param_1,float param_2,float param_3)

{
  *(float *)((int)this + 0x24) = param_1;
  *(float *)((int)this + 0x28) = param_2;
  *(float *)((int)this + 0x2c) = param_3;
  FUN_006ea960(*(void **)((int)this + 0x3c),*(uint *)((int)this + 0x18),param_1,param_2,param_3);
  return;
}

