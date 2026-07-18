
undefined4 * __thiscall FUN_0074b929(void *this,undefined4 *param_1)

{
  FUN_0074bb83(this);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return this;
}

