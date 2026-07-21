
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00727DA0 @ 00728139
   -> TEST TEST EAX,EAX | 00727DA0 @ 00728148 -> TEST TEST EAX,EAX */

int FUN_00727d50(int *param_1)

{
  int iVar1;

  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    iVar1 = FUN_00727c80(param_1,param_1[2]);
    return (uint)(iVar1 != 0);
  }
  param_1[9] = param_1[9] + param_1[10];
  param_1[7] = param_1[7] + param_1[8];
  return 1;
}

