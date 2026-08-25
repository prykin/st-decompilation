#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00405092
   Slots: 0x34
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:13 calls=7
   caller_families=2 receiver_extent=880/884; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=7; caller_families=2;
   owner_type=/TLOEmbryoTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
TLOEmbryoTy::sub_004D6930(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D6930 *param_1)

{
  byte *puVar1;
  byte *puVar2;
  byte uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  short sVar7;

  *(int *)param_1 = this->field_0259;
  param_1->field_0006 = 2;
  param_1->field_0005 =
       ((this->field_0024 != (uint)(byte)this->field_0010->field_112D) - 1U & 0xfe) + 3;
  /* ST_CALLSITE[004D696D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte((char)this->field_0024);
  param_1->field_0x4 = bVar4;
  puVar1 = &param_1->field_0x9;
  param_1->field_0007 = ~(byte)(this->field_01D1 >> 2) & 1;
  *(undefined4 *)puVar1 = 0;
  param_1->field_000D = 0;
  puVar2 = &param_1->field_0xf;
  *(undefined4 *)puVar2 = 0;
  param_1->field_0013 = 0;
  if (this->field_02A4 == 0) {
    *puVar1 = 0x50;
    if (((this->field_02EC == 2) && (0 < this->field_02A8)) && (this->field_02A8 < 0x65)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *puVar2 = uVar3;
  }
  else {
    *puVar1 = 0x51;
    *puVar2 = 1;
  }
  param_1->field_001D = this->field_0259;
  /* ST_CALLSITE[004D69F2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte((char)this->field_0024);
  if (bVar4 == 3) {
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e3160 + (this->field_0368 * 3 + (int)this->field_036C) * 4);
    sVar7 = (short)this->field_02D8;
  }
  else {
    sVar7 = (short)this->field_02D4;
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e24fc + (this->field_0368 * 3 + (int)this->field_036C) * 4);
  }
  param_1->field_0027 = sVar5 - sVar7;
  param_1->field_002B =
       *(short *)(&DAT_007e1c50 + (this->field_0368 * 3 + (int)this->field_036C) * 4) -
       (short)this->field_02D0;
  param_1->field_002F = (char)this->field_02A8;
  /* ST_CALLSITE[004D6A70]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte((char)this->field_0024);
  param_1->field_0025 = bVar4;
  if (this->field_02A4 != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbde;
    return;
  }
  if (this->field_02B8 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbb9;
    return;
  }
  iVar6 = thunk_FUN_0044e1b0(this->field_0024);
  if (iVar6 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbdf;
    return;
  }
  if (this->field_02B4 != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 3000;
    return;
  }
  if (this->field_02BC == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbba;
    return;
  }
  if (this->field_02C0 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbb;
    return;
  }
  if (this->field_02C4 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbc;
    return;
  }
  if (this->field_02C8 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbd3;
  }
  return;
}

