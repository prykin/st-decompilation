
undefined4 * __thiscall
FUN_0074c38f(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_0074857e(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_007a17c8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a1780;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a1768;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_007a1740;
  return this;
}

