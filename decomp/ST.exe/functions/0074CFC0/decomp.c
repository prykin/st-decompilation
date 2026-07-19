
undefined4 * __thiscall
FUN_0074cfc0(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_0074c658(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_007a19f0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a19a8;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a1990;
  return this;
}

