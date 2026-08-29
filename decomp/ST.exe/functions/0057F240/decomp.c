
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0057F2E0 @ 0057F2F7 -> read as EAX on
   every CFG path | 0057F470 @ 0057F487 -> read as EAX on every CFG path | 0057F530 @ 0057F53F ->
   read as EAX; remaining paths kill EAX */

int FUN_0057f240(int param_1,int param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_1 == 0xdd) {
    if (param_2 < 0x1389) {
      return 2;
    }
    uVar1 = (uint)(param_2 < 0x2711);
  }
  else {
    if (param_1 == 0xde) {
      if (param_2 < 0x2711) {
        return 2;
      }
      return (uint)(param_2 < 0x9c41);
    }
    if (param_1 == 0xe0) {
      if (param_2 < 1) {
        return 2;
      }
      return (uint)(param_2 < 0x4e21);
    }
  }
  return uVar1;
}

