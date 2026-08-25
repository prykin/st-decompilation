#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00404D81
   Slots: 0x58
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:22 calls=5
   caller_families=2 receiver_extent=28/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=5; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STDcResourcC::sub_005808A0(STDcResourcC *this,undefined1 *param_1)

{
  dword dVar1;

  *param_1 = 4;
  param_1[1] = 0;
  /* ST_CALLSITE[005808B3]: CALL dword ptr [EAX + 0x2c] */
  dVar1 = this->slot_2C();
  *(dword *)(param_1 + 2) = dVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = this->field_0018;
  return;
}

