#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004011C7
   Slots: 0xC8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1822/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall STBoatC::vfunc_C8(STBoatC *this,int param_1)

{
  if (param_1 < 0) {
    this->field_071A = 0;
    return;
  }
  if (100 < param_1) {
    this->field_071A = 100;
    return;
  }
  this->field_071A = param_1;
  return;
}

