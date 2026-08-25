#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00402D42
   Slots: 0xF0
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:60 calls=7
   caller_families=4 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=4;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

uint __thiscall TLOBaseTy::sub_004BE1D0(TLOBaseTy *this)

{
  uint uVar1;

  uVar1 = thunk_FUN_0041f330(this);
  if ((uVar1 != 0) && (this->field_05AC == CASE_6C)) {
    uVar1 = 0;
  }
  return uVar1;
}

