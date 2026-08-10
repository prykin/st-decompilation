
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=0, unknown=0 */

int FUN_006b73e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    do {
    } while (*(int *)(param_1 + 4) != param_2);
  }
  return param_1;
}

