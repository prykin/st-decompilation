#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401771
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall STBoatC::FUN_0045eee0(STBoatC *this)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(dword *)((int)this->field_06CB + 0x2c);
}

