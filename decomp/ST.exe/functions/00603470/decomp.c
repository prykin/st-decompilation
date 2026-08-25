#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C9B0
   Entries: 00403DC3
   Slots: 0x34
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:13 calls=7
   caller_families=2 receiver_extent=882/943; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=2;
   owner_type=/STDestC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STDestC::sub_00603470(STDestC *this,AnonShape_00603470_D413D02D *param_1)

{
  byte uVar1;
  byte bVar2;
  uint uVar3;
  /* ST_CALLSITE[00603479]: CALL dword ptr [EAX + 0x2c] */
  uVar3 = this->vfunc_2C();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[0060348B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(this->field_0024);
  param_1->field_0x4 = bVar2;
  param_1->field_0005 = 4;
  uVar1 = this->field_021D;
  param_1->field_0006 = 0;
  ((undefined1 *)param_1)[1] = uVar1;
  if (this->field_036E != CASE_0) {
    param_1->field_0007 = 1;
  }
  return;
}

