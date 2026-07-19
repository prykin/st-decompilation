
void __thiscall FUN_006e6020(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[1] = 2;
  AppClassTy::PostMessage(*(AppClassTy **)((int)this + 0x10),param_1);
  return;
}

