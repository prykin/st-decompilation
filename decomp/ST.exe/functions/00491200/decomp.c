#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401DDE
   Slots: 0xAC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1446/2106; unique_owner_for_target */

undefined4 __thiscall STBoatC::vfunc_AC(STBoatC *this,int param_1)

{
  uint uVar1;
  uVar1 = 0;
  if ((this->field_045D == CASE_14) &&
     (this->field_05A2 == (RecoveredRecordView_005EFAE0_855D930D *)param_1)) {
    this->field_05A2 = nullptr;
    uVar1 = 1;
  }
  return uVar1;
}

