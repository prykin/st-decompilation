
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00544ED6
   -> TEST TEST EAX,EAX */

int FUN_0054bdf0(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5;
  if (iVar1 < param_1) {
    *param_5 = param_1;
  }
  uVar2 = (uint)(iVar1 < param_1);
  iVar1 = param_1 + -1 + param_3;
  if (iVar1 < *param_5) {
    *param_5 = iVar1;
    uVar2 = 1;
  }
  if (*param_6 < param_2) {
    *param_6 = param_2;
    uVar2 = 1;
  }
  iVar1 = param_2 + -1 + param_4;
  if (iVar1 < *param_6) {
    *param_6 = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

