#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00402B0D
   Slots: 0x7C
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:31 calls=7
   caller_families=3 receiver_extent=581/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=3;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

int __thiscall TLOBaseTy::sub_004BE380(TLOBaseTy *this)

{
  byte bVar1;

  /* ST_CALLSITE[004BE390]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_023D);
  return (this->field_0241 * 100) /
         *(int *)(&DAT_007e417c + ((bVar1 - 1) + this->field_0235 * 3) * 4);
}

