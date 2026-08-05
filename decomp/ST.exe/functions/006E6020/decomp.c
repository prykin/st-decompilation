
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6020 returns return of AppClassTy::PostMessage @ 006E603C */

int __thiscall FUN_006e6020(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[1] = 2;
  iVar1 = AppClassTy::PostMessage(*(AppClassTy **)((int)this + 0x10),param_1);
  return iVar1;
}

