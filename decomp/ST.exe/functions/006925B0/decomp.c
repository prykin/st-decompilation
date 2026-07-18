
undefined4 __thiscall FUN_006925b0(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    param_4 = param_4 + -1;
  }
  return *(undefined4 *)
          ((int)this +
          ((param_4 + (param_1 & 0xffff) + (param_3 * 3 + 0x90) * 2) * 5 + (param_2 - 1U & 0xffff))
          * 4);
}

