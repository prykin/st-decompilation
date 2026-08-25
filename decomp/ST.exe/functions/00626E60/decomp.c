#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00403CC9
   Slots: 0x64
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:25 calls=3
   caller_families=2 receiver_extent=838/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STMineSetC::sub_00626E60(STMineSetC *this,int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 1;
  iVar1 = 0;
  do {
    *(bool *)(iVar1 + param_1) = (this->field_0342 & uVar2) != 0;
    uVar2 = uVar2 << 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

