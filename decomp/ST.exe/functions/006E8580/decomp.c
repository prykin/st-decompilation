
void __thiscall FUN_006e8580(void *this,int *param_1)

{
  *(int **)this = param_1;
  param_1[0x8a] = (int)FUN_006eb4b0;
  *(code **)(*(int *)this + 0x230) = FUN_006eb540;
  *(code **)(*(int *)this + 0x22c) = FUN_006eb570;
  *(void **)(*(int *)this + 0x234) = this;
  if (DAT_007ee1ac < 0) {
    FUN_006cff10(param_1,(uint *)&DAT_007ee1ac,0,0,*(int *)(*(int *)((int)this + 4) + 0x1c) - 0xd,
                 0xfa,0x10,0xffffff,0xffffffff);
  }
  if (DAT_007ee1b0 < 0) {
    FUN_006cff10(param_1,(uint *)&DAT_007ee1b0,0,*(int *)(*(int *)((int)this + 4) + 0x18) - 0xfa,
                 *(int *)(*(int *)((int)this + 4) + 0x1c) - 0xd,0xfa,0x10,0xffffff,0xffffffff);
  }
  return;
}

