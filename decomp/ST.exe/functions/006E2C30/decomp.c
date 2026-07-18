
void __thiscall FUN_006e2c30(void *this,int *param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *param_1 = (int)lVar1 + *(int *)((int)this + 0x30) * 0x10000;
  lVar1 = __ftol();
  param_1[1] = *(int *)((int)this + 0x3c) * 0x10000 - (int)lVar1;
  lVar1 = __ftol();
  param_1[2] = (int)lVar1;
  return;
}

