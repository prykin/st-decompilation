
undefined4 * __thiscall
FUN_0074c658(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(int *)((int)this + 0xa0) = param_2;
  *(undefined ***)this = &PTR_FUN_007a1868;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a1820;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a1808;
  return this;
}

