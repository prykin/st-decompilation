
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CE3 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CDA establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CD3 establishes signed source width 2 */

void __thiscall FUN_00613280(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)((int)this + 0x22b) = param_1;
  *(int *)((int)this + 0x22f) = param_2;
  *(undefined4 *)((int)this + 0x223) = 1;
  *(undefined4 *)((int)this + 0x227) = param_4;
  *(int *)((int)this + 0x233) = param_3;
  *(undefined4 *)((int)this + 0x237) = param_4;
  *(undefined4 *)((int)this + 0x23b) = 0x30;
  *(undefined4 *)((int)this + 0x248) = 0xffffffff;
  return;
}

