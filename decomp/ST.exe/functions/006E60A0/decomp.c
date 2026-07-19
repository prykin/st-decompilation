
void __thiscall FUN_006e60a0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[1] = 2;
  SystemClassTy::PostMessage(*(SystemClassTy **)((int)this + 0xc),param_1);
  return;
}

