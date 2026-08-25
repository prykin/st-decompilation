#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00404B88
   Slots: 0xF0
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:60 calls=7
   caller_families=4 receiver_extent=690/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=4;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

undefined4 __thiscall STMineSetC::sub_00627A60(STMineSetC *this)

{
  STMineSetC_field_02AEState SVar1;

  SVar1 = this->field_02AE;
  if ((((SVar1 != CASE_2) && (SVar1 != CASE_3)) && (SVar1 != CASE_4)) && (SVar1 != CASE_5)) {
    return 1;
  }
  return 0;
}

