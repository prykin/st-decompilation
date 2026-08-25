#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C9B0
   Entries: 004055DD
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=882/943; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/STDestC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall STDestC::sub_006033D0(STDestC *this,undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  if (this->field_036E != CASE_0) {
    *param_1 = 4;
    param_1[1] = this->field_021D;
    param_1[2] = 1;
    /* ST_CALLSITE[006033F6]: CALL dword ptr [EDX + 0x2c] */
    uVar2 = this->vfunc_2C();
    *(undefined4 *)(param_1 + 3) = uVar2;
    /* ST_CALLSITE[00603406]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(this->field_0024);
    param_1[7] = bVar1;
    *(int **)(param_1 + 8) = this->field_0018;
  }
  Library::MSVCRT::_strncpy(param_1 + 0xc,&this->field_025B,0xe);
  param_1[0x1b] = 100;
  if (this->field_036E != CASE_0) {
    param_1[0x1d] = 1;
  }
  return;
}

