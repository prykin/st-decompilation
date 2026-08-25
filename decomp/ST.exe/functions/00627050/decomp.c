#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 0040529A
   Slots: 0x58
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:22 calls=5
   caller_families=2 receiver_extent=690/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=5; caller_families=2;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall STMineSetC::sub_00627050(STMineSetC *this,char *param_1)

{
  byte bVar1;
  uint uVar2;
  if (this->field_02AE == CASE_4) {
    *param_1 = '\x04';
  }
  else {
    *param_1 = ((this->field_0262 != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  param_1[1] = '\x01';
  /* ST_CALLSITE[0062708E]: CALL dword ptr [EDX + 0x2c] */
  uVar2 = this->vfunc_2C();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_CALLSITE[0062709E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_0024);
  param_1[6] = bVar1;
  *(uint *)(param_1 + 7) = this->field_0018;
  return;
}

