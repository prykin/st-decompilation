
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00652810 -> 006C87C0 @ 00654381 */

undefined4 FUN_006c87c0(AnonShape_GLOBAL_0080C4CB_D58160AA *param_1,uint param_2)

{
  void **value;

  if (param_2 < (uint)param_1->field_0008) {
    value = (void **)(param_1->field_0014 + param_2 * 4);
    if (*value != (void *)0x0) {
      FreeAndNull(value);
    }
    return 0;
  }
  return 0xfffffffc;
}

