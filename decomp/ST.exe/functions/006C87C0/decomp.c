
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00652810 -> 006C87C0 @ 00654381

   [STPrototypeApplier] Propagated return.
   Evidence: 006C87C0 returns zeroed full register at 006C87DF @ 006C87E2 */

uint FUN_006c87c0(DArrayTy *param_1,uint param_2)

{
  void **value;

  if (param_2 < param_1->elementSize) {
    value = (void **)(param_1->growCapacity + param_2 * 4);
    if (*value != nullptr) {
      FreeAndNull(value);
    }
    return 0;
  }
  return 0xfffffffc;
}

