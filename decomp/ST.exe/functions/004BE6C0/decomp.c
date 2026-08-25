#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00402734
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=1480/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

void __thiscall TLOBaseTy::sub_004BE6C0(TLOBaseTy *this,undefined4 *param_1)

{
  short sVar1;
  byte bVar2;
  byte uVar3;
  uint uVar5;
  dword dVar6;
  int uVar4;
  int local_EAX_571;
  int iVar7;
  byte *pbVar9;

  memset(param_1, 0, 0x36); /* compiler bulk-zero initialization */
  *(undefined1 *)param_1 = 1;
  STField<undefined1>(param_1,1) = *(undefined1 *)&this->field_021D;
  /* ST_CALLSITE[004BE6F1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte((char)this->field_023D);
  STField<byte>(param_1,7) = bVar2;
  if (((this->field_01D1 & 4) == 0) && (this->field_0420 == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  STField<undefined1>(param_1,0x1d) = uVar3;
  switch(this->field_0245) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_5:
  case CASE_6:
    STField<undefined1>(param_1,2) = 0;
    break;
  case CASE_3:
  case CASE_4:
    STField<undefined1>(param_1,2) = 1;
  }
  /* ST_CALLSITE[004BE739]: CALL dword ptr [EDX + 0x7c] */
  uVar5 = this->sub_004BE380();
  STField<char>(param_1,0x1b) = (char)uVar5;
  /* ST_CALLSITE[004BE743]: CALL dword ptr [EAX + 0xc4] */
  dVar6 = this->sub_004BE160();
  ((char *)param_1)[7] = (char)dVar6;
  STField<TLOBaseTy_field_05ACState>(param_1,3) = this->field_05AC;
  param_1[2] = this->field_0018;
  Library::MSVCRT::_strncpy((char *)(param_1 + 3),&this->field_05C4,0xe);
  if (*(int *)(&DAT_00792778 + this->field_0235 * 4) == 0) {
    STField<undefined2>(param_1,0x1e) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    STField<undefined2>(param_1,0x26) = 0xffff;
    goto LAB_004be96f;
  }
  sVar1 = *(short *)(&DAT_00792ca0 + this->field_0235 * 6);
  STField<short>(param_1,0x1e) = sVar1;
  if (sVar1 == 0xa0) {
    STField<undefined2>(param_1,0x1e) = 0x9f;
  }
  iVar7 = (&DAT_00792ca0)[this->field_0235 * 6];
  if (((iVar7 == 0x96) || (iVar7 == 0x97)) || (iVar7 == 0x98)) {
    /* ST_CALLSITE[004BE7DA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar4 = LookupRecordByte(*(char *)&this->field_0024);
    uVar4 = (int)(byte)uVar4;
    if (uVar4 == 1) {
      iVar7 = 6;
      goto LAB_004be7f7;
    }
    if (uVar4 != 2) goto LAB_004be80a;
    pbVar9 = this->field_0024;
    iVar7 = 0x83;
LAB_004be7fb:
    uVar5 = thunk_FUN_004e60d0((int)pbVar9,iVar7);
    STField<short>(param_1,0x22) = (short)uVar5;
  }
  else if (iVar7 == 0xa0) {
    iVar7 = 0xb;
LAB_004be7f7:
    pbVar9 = this->field_0024;
    goto LAB_004be7fb;
  }
LAB_004be80a:
  if (*(int *)(&DAT_00793e28 + this->field_0235 * 8) == 0) {
    STField<undefined2>(param_1,0x26) = 0xffff;
  }
  else {
    STField<undefined2>(param_1,0x26) = *(undefined2 *)&this->field_0x2c5;
  }
  if (((STField<short>(param_1,0x1e) == 0xa8) && (this->field_05AC == CASE_45)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, this->field_04D0 == CASE_0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  if ((STField<short>(param_1,0x1e) == 0xa3) && (this->field_05AC == CASE_4E)) {
    STField<undefined2>(param_1,0x26) = 0xffff;
    if ((this->field_04D0 != CASE_1) && (this->field_04D0 != CASE_4)) {
      STField<undefined2>(param_1,0x1e) = 0;
    }
  }
  if (((STField<short>(param_1,0x1e) == 0xb2) && (this->field_05AC == CASE_70)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, this->field_04E0[4] == 0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  sVar1 = *(short *)(&DAT_00792cac + this->field_0235 * 6);
  *(short *)(param_1 + 8) = sVar1;
  if (sVar1 == 0xa0) {
    *(undefined2 *)(param_1 + 8) = 0x9f;
  }
  iVar7 = (&DAT_00792cac)[this->field_0235 * 6];
  if (((iVar7 == 0x96) || (iVar7 == 0x97)) || (iVar7 == 0x98)) {
    /* ST_CALLSITE[004BE8FB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_571 = LookupRecordByte(*(char *)&this->field_0024);
    local_EAX_571 = (int)(byte)local_EAX_571;
    if (local_EAX_571 == 1) {
      iVar7 = 6;
      goto LAB_004be918;
    }
    if (local_EAX_571 != 2) goto LAB_004be92b;
    pbVar9 = this->field_0024;
    iVar7 = 0x83;
LAB_004be91c:
    uVar5 = thunk_FUN_004e60d0((int)pbVar9,iVar7);
    *(short *)(param_1 + 9) = (short)uVar5;
  }
  else if (iVar7 == 0xa0) {
    iVar7 = 0xb;
LAB_004be918:
    pbVar9 = this->field_0024;
    goto LAB_004be91c;
  }
LAB_004be92b:
  if (*(int *)(&DAT_00793e2c + this->field_0235 * 8) != 0) {
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)&this->field_0x345;
    *(undefined1 *)((int)param_1 + (0x2e - this->field_05B8)) = 1;
    return;
  }
LAB_004be96f:
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - this->field_05B8)) = 1;
  return;
}

