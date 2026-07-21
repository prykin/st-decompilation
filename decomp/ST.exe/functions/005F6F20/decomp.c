
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005F5F20 @ 005F6322
   -> TEST TEST EAX,EAX */

int __thiscall FUN_005f6f20(void *this,int param_1)

{
  int iVar1;

  iVar1 = *(int *)((int)this + 0x269) - param_1;
  *(int *)((int)this + 0x269) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)((int)this + 0x269) = 0;
  }
  return (uint)(iVar1 < 1);
}

