#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 0040289C
   Slots: 0xF8
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007905A0:62 calls=16
   caller_families=2 receiver_extent=1113/2106; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=16; caller_families=2;
   owner_type=/STBoatC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

undefined4 __thiscall STBoatC::sub_004838B0(STBoatC *this)

{
  uint uVar1;
  uVar1 = 1;
  if ((this->field_0455 == 1) || (this->field_02C0 == 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

