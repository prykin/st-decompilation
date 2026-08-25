#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C260
   Entries: 0040306C
   Slots: 0x124
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:73 calls=4
   caller_families=2 receiver_extent=578/1143; unique_owner_for_target */

bool __thiscall STArtiafactC::sub_005EBD00(STArtiafactC *this,int param_1)

{
  int iVar1;

  iVar1 = this->field_023E - param_1;
  this->field_023E = iVar1;
  if (iVar1 < 1) {
    this->field_023E = 0;
  }
  return this->field_023E == 0;
}

