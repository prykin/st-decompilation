
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
  *(VTable_007A1D10 **)this = &VTable_007A1D10;
  *(VTable_007A1CC8 **)((int)this + 4) = &VTable_007A1CC8;
  *(VTable_007A1CB8 **)((int)this + 8) = &VTable_007A1CB8;
  return this;
}

