
undefined4 __thiscall
FUN_006924c0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_3 == 0) {
    param_4 = param_4 + -1;
  }
  return *(undefined4 *)
          (*(int *)((int)this + (param_4 + param_3 * 6 + param_5 * 0x92 + param_1) * 4 + 0x1b08) +
           0x2d + param_2 * 4);
}

