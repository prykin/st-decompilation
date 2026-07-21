
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0047CF20 -> 004B7D50 @ 0047CFB6 */

bool __thiscall FUN_004b7d50(void *this,STBoatC *param_1)

{
  bool bVar1;

  bVar1 = *(uint *)((int)this + 0x4d4) == param_1->field_0018;
  if (bVar1) {
    *(undefined4 *)((int)this + 0x4d4) = 0;
  }
  return bVar1;
}

