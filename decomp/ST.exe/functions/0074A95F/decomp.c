
undefined4 * __thiscall FUN_0074a95f(void *this,int param_1,undefined4 param_2,short *param_3)

{
  FUN_0074857e(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  *(int *)((int)this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_FUN_007a1510;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a14c8;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a14b0;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_007a1488;
  return this;
}

