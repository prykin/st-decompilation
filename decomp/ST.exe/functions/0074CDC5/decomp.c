
undefined4 * __thiscall
FUN_0074cdc5(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_0074c38f(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_007a1950;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a1908;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a18f0;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_007a18c8;
  return this;
}

