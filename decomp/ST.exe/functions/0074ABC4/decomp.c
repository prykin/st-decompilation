
undefined4 * __thiscall FUN_0074abc4(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00749a93(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined ***)this = &PTR_FUN_007a15e8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a15a8;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a1590;
  *(undefined ***)((int)this + 200) = &PTR_FUN_007a1568;
  *(undefined ***)((int)this + 0xcc) = &PTR_FUN_007a1550;
  FUN_0074ac6e(this);
  return this;
}

