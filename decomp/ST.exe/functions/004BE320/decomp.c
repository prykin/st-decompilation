#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00403008
   Slots: 0x88
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:34 calls=6
   caller_families=2 receiver_extent=1252/1571; unique_owner_for_target */

uint __thiscall TLOBaseTy::sub_004BE320(TLOBaseTy *this,undefined4 *param_1)

{
  if (param_1 != nullptr) {
    *param_1 = this->field_04DC;
  }
  return this->field_04E0[0];
}

