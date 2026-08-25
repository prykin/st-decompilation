#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 004042E1
   Slots: 0x7C
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:31 calls=7
   caller_families=3 receiver_extent=690/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=3;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

undefined4 __thiscall STMineSetC::sub_00627E80(STMineSetC *this)

{
  if ((this->field_02AE != CASE_0) && (this->field_02AE != CASE_1)) {
    return 0;
  }
  return 100;
}

