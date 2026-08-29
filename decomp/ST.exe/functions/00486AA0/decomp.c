#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405BAF
   Slots: 0x84
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1818/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall STBoatC::vfunc_84(STBoatC *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 1;
  }
  else if (100 < param_1) {
    param_1 = 100;
  }
  this->field_0716 = (this->field_0712 * param_1) / 100;
  return;
}

