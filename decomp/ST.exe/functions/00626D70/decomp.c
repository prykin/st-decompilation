#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00403DFA
   Slots: 0x34
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:13 calls=7
   caller_families=2 receiver_extent=867/1456; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=2;
   owner_type=/STMineSetC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall
STMineSetC::sub_00626D70(STMineSetC *this,RecoveredRecord_STMineSetC_00626D70 *param_1)

{
  byte uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;

  /* ST_CALLSITE[00626D79]: CALL dword ptr [EAX + 0x2c] */
  uVar3 = this->vfunc_2C();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[00626D8B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte((char)this->field_0024);
  param_1->field_0x4 = bVar2;
  if (this->field_02AD == CASE_2) {
    if (this->field_0262 == (uint)DAT_0080874d) {
      param_1->field_0005 = 1;
    }
    else {
      param_1->field_0005 = 3;
    }
    param_1->field_0009 = 0x4c;
    param_1->field_000F = this->field_02AE != CASE_4;
  }
  else {
    param_1->field_0005 = 4;
  }
  if (this->field_02AD == CASE_3) {
    iVar4 = ((this->field_035F - g_playSystem_00802A38->field_00E4) + 0x1194) * 0x28;
    param_1[3].field_0x4 =
         ((char)(iVar4 / 0x1194) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x7482296b >> 0x3f);
  }
  uVar1 = *(undefined1 *)&this->field_021D;
  param_1->field_0006 = 1;
  param_1->field_0x8 = uVar1;
  if (this->field_02AE != CASE_4) {
    param_1->field_0007 = 1;
  }
  return;
}

