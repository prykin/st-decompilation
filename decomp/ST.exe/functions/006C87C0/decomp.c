
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00652810 -> 006C87C0 @ 00654381 */

undefined4 FUN_006c87c0(DArrayTy *param_1,uint param_2)

{
  void **value;

  if (param_2 < param_1->elementSize) {
    value = (void **)(param_1->growCapacity + param_2 * 4);
    if (*value != (void *)0x0) {
      FreeAndNull(value);
    }
    return 0;
  }
  return 0xfffffffc;
}

