
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (4), none consume AL/AX, and every RET path defines full EAX; sites=004F80A0 @ 004F8691
   -> TEST TEST EAX,EAX | 004FB060 @ 004FB900 -> TEST TEST EAX,EAX | 00543C90 @ 00543CBC -> XOR XOR
   EAX,EAX | 006B3120 @ 006B3221 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F80A0 -> 006B33F0 @ 004F8691 | 004FB060 -> 006B33F0 @ 004FB900 */

int FUN_006b33f0(AnonShape_006B1B10_121F236C *param_1,uint param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_2 < param_1->field_01A0) {
    uVar1 = (uint)((**(uint **)(param_1->field_01B0 + param_2 * 4) & 0x8020) == 0x8020);
  }
  return uVar1;
}

