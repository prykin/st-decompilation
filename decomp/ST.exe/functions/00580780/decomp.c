#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00403021
   Slots: 0x34
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:13 calls=7
   caller_families=2 receiver_extent=605/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STDcResourcC::sub_00580780(STDcResourcC *this,AnonShape_00580780_266862D6 *param_1)

{
  byte bVar1;
  dword dVar2;

  /* ST_CALLSITE[00580789]: CALL dword ptr [EAX + 0x2c] */
  dVar2 = this->slot_2C();
  *(dword *)param_1 = dVar2;
  /* ST_CALLSITE[0058079B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(this->field_0024);
  param_1->field_0x4 = bVar1;
  param_1->field_0005 = 4;
  param_1->field_0006 = 0;
  param_1->field_0007 = 1;
  param_1->field_0x8 = this->field_021D;
  /* ST_CALLSITE[005807BC]: CALL dword ptr [EAX + 0x2c] */
  dVar2 = this->slot_2C();
  switch(dVar2) {
  case 0xdc:
    param_1->field_0x1c = 2;
    param_1->field_001D = this->field_0259;
    return;
  case 0xdd:
    param_1->field_0x1c = 0;
    param_1->field_001D = this->field_0259;
    return;
  case 0xde:
    param_1->field_0x1c = 1;
    param_1->field_001D = this->field_0259;
    return;
  case 0xe0:
    param_1->field_0x1c = 4;
  }
  param_1->field_001D = this->field_0259;
  return;
}

