
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=004B31C0 @ 004B31DA
   -> TEST TEST EAX,EAX | 004BEA70 @ 004C108D -> TEST TEST EAX,EAX | 004D6930 @ 004D6AB2 -> TEST
   TEST EAX,EAX */

int FUN_0044e1b0(int param_1)

{
  return (uint)(*(ushort *)&g_playerRuntime[param_1].field_0xd < DAT_00808a97);
}

