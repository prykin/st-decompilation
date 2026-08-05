
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60C0 returns return of SystemClassTy::PostNextMessage @ 006E60DC */

int __thiscall FUN_006e60c0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[1] = 2;
  iVar1 = SystemClassTy::PostNextMessage(*(SystemClassTy **)((int)this + 0xc),param_1);
  return iVar1;
}

