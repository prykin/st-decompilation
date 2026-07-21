
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0046F5C0 @ 0046FEDC
   -> XOR XOR EAX,EAX */

int __thiscall FUN_004e2000(void *this,int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;

  piVar1 = (int *)((int)this + param_1 * 0x28 + 0x4d0);
  bVar2 = *piVar1 == param_2;
  if (bVar2) {
    *piVar1 = 0;
  }
  return (uint)bVar2;
}

