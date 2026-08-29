#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00678950 returns return of FUN_006e6000 @ 00678968

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079D6D4
   Entries: 00404C50
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/1794; unique_owner_for_target */

int __thiscall
AiPlrClassTy::vfunc_30(AiPlrClassTy *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_006e6000(&this[-1].field_0x6e6,param_1,param_2,param_3);
  return iVar1;
}

