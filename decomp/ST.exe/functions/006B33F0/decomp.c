
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (4), none consume AL/AX, and every RET path defines full EAX; sites=004F80A0 @ 004F8691
   -> TEST TEST EAX,EAX | 004FB060 @ 004FB900 -> TEST TEST EAX,EAX | 00543C90 @ 00543CBC -> XOR XOR
   EAX,EAX | 006B3120 @ 006B3221 -> TEST TEST EAX,EAX

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F80A0 -> 006B33F0 @ 004F8691; data at 008075A8 | 004FB060 -> 006B33F0 @ 004FB900;
   data at 008075A8 */

int FUN_006b33f0(DDXContext_008075A8 *param_1,uint param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_2 < param_1->entryCount) {
    uVar1 = (uint)((param_1->entries[param_2]->flags & 0x8020) == 0x8020);
  }
  return uVar1;
}

