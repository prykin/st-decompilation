
/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00556760 -> 006EA270 @ 00556B06 | 006377B0 -> 006EA270 @ 00637831 | 00637930 ->
   006EA270 @ 006379CD */

void __thiscall FUN_006ea270(void *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if (puVar1[0x28] != 0) {
      if (param_2 < puVar1[0x25]) {
        FUN_006e9a10(puVar1,param_2,param_3);
        return;
      }
      FUN_006e91a0();
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

