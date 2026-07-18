
void __thiscall FUN_004ad380(void *this,uint param_1,uint param_2)

{
  *(uint *)((int)this + 4) = param_1;
  *(uint *)((int)this + 8) = param_2;
  FUN_006e9830(*(void **)((int)this + 0x3c),*(uint *)((int)this + 0x18),param_1,param_2);
  return;
}

