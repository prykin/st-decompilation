
void __thiscall FUN_0074e2d9(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 4) < *(int *)this) {
    param_1[1] = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(undefined4 **)((int)this + 8) = param_1;
  }
  else {
    FUN_0072e2b0(param_1);
  }
  return;
}

