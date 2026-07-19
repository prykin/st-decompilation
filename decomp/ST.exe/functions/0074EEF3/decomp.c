
undefined4 * __thiscall
FUN_0074eef3(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  FUN_0074e7b1(this,param_1,param_2,param_3,param_4);
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x48) = 1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined ***)this = &PTR_FUN_007a1d10;
  *(undefined ***)((int)this + 4) = &PTR_FUN_007a1cc8;
  *(undefined ***)((int)this + 8) = &PTR_FUN_007a1cb8;
  return this;
}

