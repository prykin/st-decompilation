#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00488EE0 returns return of FUN_004e8030 @ 00488F18

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00402586
   Slots: 0x58
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1787/2106; unique_owner_for_target */

int __thiscall STBoatC::vfunc_58(STBoatC *this,RecoveredRecord_00488EE0_F969607B *param_1)

{
  int iVar1;

  *(undefined1 *)param_1 = 1;
  param_1->field_0x1 = 1;
  param_1->field_0002 = this->field_06F7;

  iVar1 = thunk_FUN_004e8030(this->field_06F7);
  param_1->field_0x6 = (char)iVar1;
  param_1->field_0007 = this->field_0018;
  return iVar1;
}

