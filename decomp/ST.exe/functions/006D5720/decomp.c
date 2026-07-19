
undefined4 * __thiscall
FUN_006d5720(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            short *param_5)

{
  FUN_0074a95f(this,param_2,param_4,param_5);
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined4 *)((int)this + 0xe4) = param_3;
  *(undefined ***)this = &PTR_FUN_0079dcbc;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_0079dc74;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_0079dc60;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_0079dc3c;
  *(undefined4 *)((int)this + 0xe8) = 0;
  return this;
}

