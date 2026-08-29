#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00647D90 returns return of FUN_006e6000 @ 00647DA8

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079D618
   Entries: 0040489F
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/1628; unique_owner_for_target */

int __thiscall
AiBossClassTy::vfunc_30
          (AiBossClassTy *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_006e6000(&this[-1].field_0x640,param_1,param_2,param_3);
  return iVar1;
}

