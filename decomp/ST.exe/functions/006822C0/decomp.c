
/* [STPrototypeApplier] Propagated return.
   Evidence: 006822C0 returns return of FUN_0067f4b0 @ 006822E0 */

int FUN_006822c0(char *param_1)

{
  int iVar1;

  if (*param_1 == '\x01') {
    return *(int *)(param_1 + 1);
  }

  iVar1 = thunk_FUN_0067f4b0((int)*(short *)(param_1 + 1));
  return iVar1;
}

