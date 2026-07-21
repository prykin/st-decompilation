
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0047C050 -> 004B7D00 @ 0047C971 */

undefined4 __thiscall FUN_004b7d00(void *this,STBoatC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((*(int *)((int)this + 0x245) == 0) && (*(int *)((int)this + 0x4d0) == 0)) &&
     (*(int *)((int)this + 0x4d4) == 0)) {
    uVar1 = 1;
    *(uint *)((int)this + 0x4d4) = param_1->field_0018;
  }
  return uVar1;
}

