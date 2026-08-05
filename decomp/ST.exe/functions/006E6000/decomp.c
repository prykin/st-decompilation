
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6000 returns return of FUN_006e5fe0 @ 006E6019 */

int __thiscall FUN_006e6000(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  param_3[2] = param_2;
  param_3[3] = param_1;
  iVar1 = FUN_006e5fe0(this,param_3);
  return iVar1;
}

