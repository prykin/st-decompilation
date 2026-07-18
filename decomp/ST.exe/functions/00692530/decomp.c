
undefined4 __thiscall FUN_00692530(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  return *(undefined4 *)((int)this + ((param_1 - 1U & 0xffff) + (param_3 + param_2 * 6) * 0x1e) * 4)
  ;
}

