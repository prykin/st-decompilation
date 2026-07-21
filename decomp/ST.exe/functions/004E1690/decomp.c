
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00468890
   -> XOR XOR EAX,EAX | 0046D450 @ 0046DCB4 -> XOR XOR EAX,EAX */

int __thiscall FUN_004e1690(void *this,int param_1)

{
  bool bVar1;

  bVar1 = *(int *)((int)this + 0x4d8) == param_1;
  if (bVar1) {
    *(undefined4 *)((int)this + 0x4d8) = 0xffffffff;
  }
  return (uint)bVar1;
}

