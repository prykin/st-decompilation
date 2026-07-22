
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005E1330 -> 006B5570 @ 005E2BA4 | 005E1330 -> 006B5570 @ 005E2DD4 */

void FUN_006b5570(DArrayTy *param_1)

{
  uint uVar1;

  if (param_1 != (DArrayTy *)0x0) {
    uVar1 = 0;
    if (param_1->elementSize != 0) {
      do {
        FUN_006a5e90(*(short **)(param_1->growCapacity + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_1->elementSize);
    }
    FUN_006a5e90((short *)param_1->growCapacity);
    if ((param_1->flags & 8) != 0) {
      FUN_006a5e90((short *)param_1);
    }
  }
  return;
}

