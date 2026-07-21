
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (4), none consume AL/AX, and every RET path defines full EAX; sites=004F80A0 @ 004F8691
   -> TEST TEST EAX,EAX | 004FB060 @ 004FB900 -> TEST TEST EAX,EAX | 00543C90 @ 00543CBC -> XOR XOR
   EAX,EAX | 006B3120 @ 006B3221 -> TEST TEST EAX,EAX */

int FUN_006b33f0(int param_1,uint param_2)

{
  uint uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = (uint)((**(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4) & 0x8020) == 0x8020);
  }
  return uVar1;
}

