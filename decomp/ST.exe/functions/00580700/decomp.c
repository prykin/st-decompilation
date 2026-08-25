#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 0040437C
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=593/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STDcResourcC::sub_00580700(STDcResourcC *this,undefined1 *param_1)

{
  byte uVar1;
  byte bVar2;
  dword dVar3;

  *param_1 = 4;
  uVar1 = this->field_021D;
  param_1[2] = 0;
  param_1[1] = uVar1;
  /* ST_CALLSITE[0058071C]: CALL dword ptr [EDX + 0x2c] */
  dVar3 = this->slot_2C();
  *(dword *)(param_1 + 3) = dVar3;
  /* ST_CALLSITE[0058072C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(this->field_0024);
  param_1[7] = bVar2;
  *(undefined4 *)(param_1 + 8) = this->field_0018;
  param_1[0x2e - this->field_024D] = 1;
  param_1[0x1b] = 100;
  param_1[0x1d] = 1;
  return;
}

