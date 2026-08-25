#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 004014E2
   Slots: 0xC
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:3 calls=5
   caller_families=3 receiver_extent=574/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=5; caller_families=3;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

byte __thiscall TLOBaseTy::sub_004BE110(TLOBaseTy *this)

{
  byte bVar1;

  /* ST_CALLSITE[004BE11D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_023D);
  return bVar1;
}

