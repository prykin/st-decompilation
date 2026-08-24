
/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

uint FUN_004e42e0(int param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = thunk_FUN_004e4180(param_1);
  uVar2 = thunk_FUN_004e41c0(param_1);
  if (iVar1 < (int)uVar2) {
    thunk_FUN_004e41f0(param_1,iVar1);
  }
  uVar2 = thunk_FUN_004e41c0(param_1);
  return uVar2;
}

