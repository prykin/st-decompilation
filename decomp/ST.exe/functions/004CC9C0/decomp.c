#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404EFD
   Slots: 0x108
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:66 calls=6
   caller_families=2 receiver_extent=585/1571; unique_owner_for_target */

undefined4 __thiscall TLOBaseTy::sub_004CC9C0(TLOBaseTy *this,int param_1)

{
  if (((byte *)param_1 != this->field_0024) &&
     ((this->field_0245 == CASE_0 || (this->field_0245 == CASE_5)))) {
    return 1;
  }
  return 0;
}

