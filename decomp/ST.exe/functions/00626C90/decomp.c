#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 004038B4
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=690/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall STMineSetC::sub_00626C90(STMineSetC *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  if (this->field_02AD == CASE_2) {
    *param_1 = ((this->field_0262 != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  else {
    *param_1 = '\x04';
  }
  cVar1 = (char)this->field_021D;
  param_1[2] = '\x01';
  param_1[1] = cVar1;
  /* ST_CALLSITE[00626CD7]: CALL dword ptr [EAX + 0x2c] */
  uVar3 = this->vfunc_2C();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_CALLSITE[00626CE7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte((char)this->field_0024);
  param_1[7] = bVar2;
  *(uint *)(param_1 + 8) = this->field_0018;
  Library::MSVCRT::_strncpy(param_1 + 0xc,&this->field_028E,0xe);
  param_1[0x1b] = 'd';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2e - this->field_004B] = '\x01';
  if (this->field_02AE != CASE_4) {
    param_1[0x1d] = '\x01';
  }
  return;
}

