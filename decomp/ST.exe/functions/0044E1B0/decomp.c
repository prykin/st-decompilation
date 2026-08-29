
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=004B31C0 @ 004B31DA
   -> TEST TEST EAX,EAX | 004BEA70 @ 004C108D -> TEST TEST EAX,EAX | 004D6930 @ 004D6AB2 -> TEST
   TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B31C0 -> 0044E1B0 @ 004B31DA; FUN_004b31c0 parameter param_1 */

int FUN_0044e1b0(RecoveredRecord_004B31C0_F3AB8C37 *param_1)

{
  return (uint)((ushort)g_packedRecords_A62x8[(int)param_1].field4_0xd < DAT_00808a97);
}

