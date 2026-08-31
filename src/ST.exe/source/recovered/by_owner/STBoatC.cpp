#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STBoatC.cpp

// 004176C0 STBoatC::sub_004176C0
#line 4 "decomp/ST.exe/functions/004176C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=8 */

uint __thiscall st::fn_004176C0(STBoatC *this,short param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  int iVar6;
  uint uVar7;
  int iVar8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar6 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(unaff_ESI)), (uint16_t)(this->field_0086));
  iVar8 = (int)param_1;
  uVar3 = (iVar8 / (int)this->field_0086) * iVar6;
  uVar7 = iVar6 + uVar3;
  uVar1 = iVar8 - (short)uVar7;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar2 = iVar8 - (short)uVar3;
  uVar5 = (int)uVar2 >> 0x1f;
  if (st::storage_bit_cast<int>(static_cast<uint32_t>((uVar1 ^ uVar4) - uVar4)) <= st::storage_bit_cast<int>(static_cast<uint32_t>((uVar2 ^ uVar5) - uVar5))) {
    uVar3 = uVar7;
  }
  return -st::storage_bit_cast<uint>(static_cast<uint32_t>((short)uVar3 != 0x168)) & uVar3;
}

// 00417910 STBoatC::sub_00417910
#line 4 "decomp/ST.exe/functions/00417910/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=8;
   incoming_edx_uses=5 */

uint __thiscall st::fn_00417910(STBoatC *this,short param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar3 = (uint)this->field_0086;
  iVar4 = (int)param_1;
  if ((int)(param_1 / this->field_0086) * uVar3 - iVar4 != 0) {
    return 0xffffffff;
  }
  sVar1 = this->field_006C;
  if (sVar1 == param_1) {
    return 0;
  }
  uVar2 = (int)uVar3 >> 0x1f;
  if (param_1 < sVar1) {
    if (0xb3 < sVar1 - iVar4) {
      iVar4 = (uVar3 ^ uVar2) - uVar2;
      sVar1 = (short)iVar4;
      goto cf_common_exit_00417989;
    }
  }
  else if (iVar4 - sVar1 < 0xb4) {
    iVar4 = (uVar3 ^ uVar2) - uVar2;
    sVar1 = (short)iVar4;
    goto cf_common_exit_00417989;
  }
  iVar4 = (uVar3 ^ uVar2) - uVar2;
  sVar1 = -(short)iVar4;
cf_common_exit_00417989:
  this->field_006C = this->field_006C + sVar1;
  if (0x168 - iVar4 < (int)this->field_006C) {
    this->field_006C = 0;
  }
  if (this->field_006C < 0) {
    this->field_006C = 0x168 - (short)iVar4;
  }
  return -(uint)(this->field_006C != param_1) & 2;
}

// 0044E690 STBoatC::STBoatC
#line 4 "decomp/ST.exe/functions/0044E690/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007905A0 (store 0044E6B9)
   Evidence: final_vptr=007905A0; returns_this=true; calls_before=2; field_writes_after=40;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0044E690 returns STBoatC::STBoatC this @ 0044E8C3

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

STBoatC * __thiscall st::fn_0044E690(STBoatC *this)

{
  int iVar1;
  uint *puVar2;
  short *psVar3;
  STBoatC_field_06F3State *pSVar4;

  /* ST_CALLSITE[0044E694]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933(reinterpret_cast<STGameObjC *>(this));
  /* ST_CALLSITE[0044E6A1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316(reinterpret_cast<STT3DSprC *>(&this->field_01D5));
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_00790700);
  this->vtable = &st_global_007905A0;
  puVar2 = reinterpret_cast<uint *>(&this->field_0x231);
  memset(puVar2, 0, 0x8f); /* compiler bulk-zero initialization */
  puVar2 = reinterpret_cast<uint *>(((byte *)puVar2 + 0x8c));
  iVar1 = 0;
  memset(&this->field_02C0, 0, 0x195); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_0455 = 0;
  this->field_0459 = 0;
  this->field_045D = 0;
  this->field_0461 = 0;
  this->field_0465 = nullptr;
  psVar3 = &this->field_0469;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  this->field_048F = 0;
  this->field_0493 = 0;
  this->field_0497 = 0;
  psVar3 = &this->field_049B;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  psVar3 = &this->field_04DD;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  ((undefined1 *)psVar3)[1] = 0;
  memset(&this->field_0510, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_052C;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  psVar3 = &this->field_0588;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  memset(&this->field_05A0, 0, 0x2a); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_05CA = 0;
  this->field_05CC = 0;
  this->field_05CE = 0;
  this->field_05D0 = 0;
  this->field_05D2 = 0;
  this->field_05D4 = 0;
  this->field_05D6 = 0;
  this->field_05DA = 0;
  this->field_05DC = 0;
  this->field_05DE = 0;
  this->field_05E0 = 0;
  this->field_05E2 = 0;
  this->field_05E4 = 0;
  this->field_05E6 = 0;
  this->field_05E8 = 0;
  this->field_05EC = 0;
  this->field_05EE = 0;
  this->field_05F0 = 0;
  this->field_05F2 = 0;
  this->field_05F4 = 0;
  this->field_05F6 = 0;
  this->field_05F8 = 0;
  memset(&this->field_05FC, 0, 0x1d); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0619, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0635, 0, 0x36); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_066B, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_068B;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  psVar3 = &this->field_06A9;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  psVar3 = &this->field_06CB;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *(undefined4 *)&this->field_0x6eb = 0;
  this->field_06EF = 0;
  this->field_045D = CASE_3;
  pSVar4 = &this->field_06F3;
  for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar4 = CASE_0;
    pSVar4 = pSVar4 + 1;
  }
  *(undefined2 *)pSVar4 = CASE_0;
  STField<byte>(pSVar4,2) = 0;
  this->field_0716 = 100;
  this->field_0712 = 100;
  this->field_071A = 100;
  this->field_073E = 1;
  this->field_0776 = 1;
  this->field_074A = -1;
  this->field_076E = -1;
  this->field_07F2 = 0xffff;
  this->field_07AA = 200;
  this->field_07A6 = 200;
  this->field_080C = 0x324;
  this->field_0810 = 0xc9;
  this->field_0816 = 5;
  this->field_0814 = 0x3ed;
  this->field_081C = 0xffff;
  this->field_0826 = 0xfe;
  return this;
}

// 0044E960 STBoatC::vfunc_4
#line 4 "decomp/ST.exe/functions/0044E960/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004034B3
   Slots: 0x4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0044E960(STBoatC *this)

{
  return (dword)this;
}

// 0044EDC0 STBoatC::vfunc_C4
#line 4 "decomp/ST.exe/functions/0044EDC0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00404B33
   Slots: 0xC4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0044EDC0(STBoatC *this)

{
  return this->field_071A;
}

// 0044EDE0 STBoatC::vfunc_C8
#line 4 "decomp/ST.exe/functions/0044EDE0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004011C7
   Slots: 0xC8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1822/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_0044EDE0(STBoatC *this,int param_1)

{
  if (param_1 < 0) {
    this->field_071A = 0;
    return;
  }
  if (100 < param_1) {
    this->field_071A = 100;
    return;
  }
  this->field_071A = param_1;
  return;
}

// 0045EEE0 STBoatC::sub_0045EEE0
#line 4 "decomp/ST.exe/functions/0045EEE0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401771
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0045EEE0(STBoatC *this)

{
  return this->field_06F7;
}

// 0045F6C0 STBoatC::sub_0045F6C0
#line 4 "decomp/ST.exe/functions/0045F6C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_0045F6C0(STBoatC *this)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  int uVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int arg_6;
  uint uVar11;
  short arg_5;
  short arg_4;
  int iVar12;
  int iVar13;

  iVar12 = 0;
  /* ST_CALLSITE[0045F6D7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar6 = st::fn_004049B7((char)this->field_0024);
  uVar6 = (int)(byte)uVar6;
  if (uVar6 == 1) {
    iVar12 = this->field_0024;
    iVar13 = 5;
  }
  else if (uVar6 == 2) {
    iVar12 = this->field_0024;
    iVar13 = 0x82;
  }
  else {
    if (uVar6 != 3) goto LAB_0045f710;
    iVar12 = this->field_0024;
    iVar13 = 0x6d;
  }

  iVar12 = st::fn_0040186B(iVar12,iVar13);
LAB_0045f710:
  bVar4 = st::fn_004025AE(this->field_06F7);
  if (iVar12 == 1) {
    bVar4 = bVar4 + 2;
  }
  else if (iVar12 == 2) {
    bVar4 = bVar4 + 6;
  }
  else if (iVar12 == 3) {
    bVar4 = bVar4 + 8;
  }
  this->field_0061 = bVar4;
  this->field_00E3 = '\x01';
  this->field_0062 = bVar4 >> 1;
  puVar1 = this->field_0097;
  this->field_00D3 = 1;
  arg_4 = puVar1[4] * 0xc9 + 100;
  uVar8 = (int)arg_4 - (int)this->field_0041;
  arg_5 = puVar1[5] * 0xc9 + 100;
  uVar11 = (int)uVar8 >> 0x1f;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  arg_6 = CONCAT22(extraout_var,puVar1[6] * 200) + 100;
  iVar12 = (uVar8 ^ uVar11) - uVar11;
  uVar8 = (int)arg_5 - (int)this->field_0043;
  uVar11 = (int)uVar8 >> 0x1f;
  iVar13 = (uVar8 ^ uVar11) - uVar11;
  sVar5 = (short)arg_6;
  uVar8 = (int)sVar5 - (int)this->field_0045;
  uVar11 = (int)uVar8 >> 0x1f;
  iVar9 = (uVar8 ^ uVar11) - uVar11;
  if (((iVar9 != 0) && (iVar12 == 0 || 2 < iVar9 / iVar12)) && (iVar13 == 0 || 2 < iVar9 / iVar13))
  {
    bVar4 = bVar4 >> 1;
  }
  /* ST_CALLSITE[0045F827]: CALL 0x00402455; direct=00402455 sub_00415B30 */
  iVar10 = st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,arg_4,arg_5,sVar5,
                        bVar4);
  if (iVar10 != 0) {
    return 0xffffffff;
  }
  if ((this->field_008C != 1) && ((this->field_0041 != arg_4 || (this->field_0043 != arg_5)))) {
    bVar3 = false;
    bVar2 = false;
    if ((iVar12 != 0) && (0x23a < (iVar9 * 100) / iVar12)) {
      bVar2 = true;
    }
    if ((iVar13 != 0) && (0x23a < (iVar9 * 100) / iVar13)) {
      bVar3 = true;
    }
    if ((!bVar2) || (!bVar3)) {
      /* ST_CALLSITE[0045F8C9]: CALL dword ptr [EDX + 0x10] */
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar13)), (uint16_t)(this->field_0045)),arg_4,arg_5,arg_6);
      /* ST_CALLSITE[0045F8CF]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar7 = st::fn_004030B2(this,sVar5);
      if ((short)uVar7 != this->field_006C) {

        st::fn_004021E9(this,this->field_006C,(short)uVar7);
      }
    }
  }
  return 0;
}

// 0045FF50 STBoatC::sub_0045FF50
#line 4 "decomp/ST.exe/functions/0045FF50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=4; incoming_this_accesses=5;
   incoming_edx_uses=0
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (42), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004601F0 @ 00460206 -> read as EAX on
   every CFG path | 00460260 @ 00460276 -> read as EAX on every CFG path | 004602E0 @ 00460334 ->
   unknown: terminal before explicit accumulator kill | 004603B0 @ 00460516 -> read as EAX on every
   CFG path | 004603B0 @ 004605C2 -> read as EAX on every CFG path | 004603B0 @ 0046072D -> read as
   EAX on every CFG path | 004603B0 @ 0046076D -> read as EAX on every CFG path | 004608B0 @
   00460B95 -> read as EAX on every CFG path | 004608B0 @ 00460C2F -> read as EAX on every CFG path
   | 004608B0 @ 00460CEC -> read as EAX on every CFG path | 004608B0 @ 00460D7B -> read as EAX on
   every CFG path | 004608B0 @ 00461299 -> read as EAX on every CFG path | 004608B0 @ 004615C3 ->
   read as EAX on every CFG path | 004608B0 @ 0046187B -> read as EAX on every CFG path | 0046B100 @
   0046B258 -> read as EAX on every CFG path | 0046B100 @ 0046B278 -> read as EAX on every CFG path
   | 0046B100 @ 0046B633 -> read as EAX on every CFG path | 0046B100 @ 0046BF9E -> read as EAX on
   every CFG path | 0046B100 @ 0046C310 -> read as EAX on every CFG path | 0046B100 @ 0046C384 ->
   read as EAX on every CFG path | 0046B100 @ 0046C3C0 -> killed on every CFG path | 0046CF20 @
   0046D17F -> read as EAX on every CFG path | 0046CF20 @ 0046D215 -> read as EAX on every CFG path
   | 00471AC0 @ 00471DE4 -> read as EAX on every CFG path */

int __thiscall st::fn_0045FF50(STBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar1;
  uint uVar1;
  int iVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0) {
    this_00 = st::fn_00405CF9((char)this->field_0024,this->field_0030);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[0045FF8B]: CALL 0x00402b26; direct=00402B26 STGroupBoatC::sub_0040AE40 */
      st::fn_00402B26(this_00,(uint)(ushort)this->field_0032,'\0');

      iVar1 = st::fn_0040230B(reinterpret_cast<AnonShape_0040D540_1BB7A4CF *>(this_00),
                                 (uint)(ushort)this->field_0032);
      switch(iVar1) {
      case 0:
        this->field_00FD = 1;
        /* ST_CALLSITE[0045FFF0]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
        st::fn_00404FF2(this_00,(uint)(ushort)this->field_0032);
        break;
      case 1:
        this->field_00FA = 0;
        /* ST_CALLSITE[0045FFBB]: CALL 0x00403927; direct=00403927 STBoatC::sub_0045F6C0 */
        st::fn_00403927(this);
        return 2;
      case -6:
      case 2:
        this->field_00FA = this->field_00FA + 1;
        return 2;
      default:
        return 2;
      }
switchD_00460024_caseD_1:
      return 0;
    }
  }
  else {
    /* ST_CALLSITE[00460001]: CALL dword ptr [EDX + 0x1c] */
    uVar1 = this->vfunc_1C();
    /* ST_CALLSITE[0046000A]: CALL dword ptr [EAX + 0xd8] */
    iVar2 = this->vfunc_D8();
    if (iVar2 == 0) {
      switch(uVar1) {
      case 0:
        if ((this->field_06F7 != CASE_B) && (this->field_06F7 != CASE_23)) {
          return 2;
        }
        if (this->field_021D != 1) {
          return 2;
        }
        if (this->field_0024 != (uint)DAT_0080874d) {
          return 2;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_006E6780
                  (this->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                            (short)this->field_0018));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_006E6710
                  (this->field_0211,(float)(int)this->field_0041 * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                   (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                   CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                            (short)this->field_0018));
        return 2;
      case 1:
        goto switchD_00460024_caseD_1;
      case 2:
        /* ST_CALLSITE[00460106]: CALL dword ptr [EDX + 0x20] */
        this->StopMove();
        return 3;
      }
    }
  }
  return -1;
}

// 004601F0 STBoatC::sub_004601F0
#line 4 "decomp/ST.exe/functions/004601F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=9; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall st::fn_004601F0(STBoatC *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    this->field_00F4 = 0;
  }
  /* ST_CALLSITE[00460206]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
  iVar1 = st::fn_00403B34(this,param_1);
  if ((iVar1 == 2) && (this->field_00F4 == 1)) {
    /* ST_CALLSITE[0046021D]: CALL dword ptr [EAX + 0x20] */
    this->StopMove();
    this->field_00F4 = 0;
    iVar1 = 0;
  }
  return iVar1;
}

// 00460260 STBoatC::sub_00460260
#line 4 "decomp/ST.exe/functions/00460260/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

int __thiscall st::fn_00460260(STBoatC *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    this->field_00F4 = 0;
  }
  /* ST_CALLSITE[00460276]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
  iVar1 = st::fn_00403B34(this,param_1);
  if ((iVar1 == 2) && (this->field_00F4 == 1)) {
    iVar1 = 1;
  }
  return iVar1;
}

// 004602B0 STBoatC::sub_004602B0
#line 4 "decomp/ST.exe/functions/004602B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=59, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004602B0(STBoatC *this)

{
  /* ST_CALLSITE[004602B5]: CALL dword ptr [EAX + 0x20] */
  this->StopMove();
  this->field_00F4 = 0;
  return;
}

// 00460360 STBoatC::sub_00460360
#line 4 "decomp/ST.exe/functions/00460360/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

int __thiscall st::fn_00460360(STBoatC *this)

{
  int iVar1;
  int iVar2;

  /* ST_CALLSITE[00460366]: CALL dword ptr [EAX + 0x20] */
  iVar1 = this->StopMove();
  /* ST_CALLSITE[0046036F]: CALL dword ptr [EDX + 0xd8] */
  iVar2 = this->vfunc_D8();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    if (iVar1 != 0) {
      return -(uint)(iVar1 != 1);
    }
    return 2;
  }
  return -1;
}

// 004620F0 STBoatC::sub_004620F0
#line 4 "decomp/ST.exe/functions/004620F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=7; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_082E uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_082EState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_FFFFFFFF=4294967295 */

int __fastcall st::fn_004620F0(STBoatC *param_1)

{
  STBoatC_field_082EState SVar1;
  int iVar1;
  int iVar2;

  if (param_1->field_047B != nullptr) {
    st::fn_006AE110(param_1->field_047B);
    param_1->field_047B = nullptr;
  }
  SVar1 = param_1->field_082E;
  if (((SVar1 != CASE_FFFFFFFF) && (SVar1 != ~CASE_FFFFFFFF)) && (SVar1 != CASE_2)) {
    /* ST_CALLSITE[0046212A]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    iVar1 = st::fn_00403DF0(param_1);
    return iVar1;
  }
  /* ST_CALLSITE[00462138]: CALL dword ptr [EDX + 0xd8] */
  iVar2 = param_1->vfunc_D8();
  if (iVar2 != 0) {
    return -1;
  }
  return 0;
}

// 004803D0 STBoatC::FUN_004803d0
#line 4 "decomp/ST.exe/functions/004803D0/decomp.c"
int __thiscall st::fn_004803D0(STBoatC *this,RecoveredRecordView_004803D0_06C5639A *param_1)

{
  int local_EAX_141;
  int iVar2_mg3;
  int local_EAX_344;
  int iVar1;
  int iVar2;

  if ((param_1 == nullptr) ||
     (st::machine_word_boundary_cast<uint>(param_1) == st::machine_word_boundary_cast<uint>((RecoveredRecordView_004803D0_06C5639A *)0x1))) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      return 0;
    }
    this->field_03BA = this->field_044B;
    *(undefined2 *)&this->field_0x3be = *(undefined2 *)&this->field_0x44f;
    this->field_03BC = this->field_044D;
    *(undefined4 *)&this->field_0x3c0 = *(undefined4 *)&this->field_0x451;
    *(undefined4 *)&this->field_0x6eb = *(undefined4 *)&this->field_0x451;
    this->field_06EF = 0;
  }
  iVar2 = this->field_06EF;
  if (iVar2 == 0) {
    /* ST_CALLSITE[0048045D]: CALL 0x00404e1c; direct=00404E1C STBoatC::LoadObj */
    local_EAX_141 = st::fn_00404E1C(this,reinterpret_cast<RecoveredRecordView_005EFAE0_855D930D *>(param_1));
    if (local_EAX_141 == -1) {
      return -1;
    }
    if (local_EAX_141 != 0) {
      return local_EAX_141;
    }
    if (this->field_07CA == nullptr) {
      return 0;
    }
    this->field_06EF = 1;
    this->field_07CE = 1;
  }
  else if (iVar2 == 1) {
    /* ST_CALLSITE[004804A6]: CALL dword ptr [EDX + 0xd8] */
    iVar2 = this->vfunc_D8();
    if (iVar2 != 0) {
      return -1;
    }
    if (g_playSystem_00802A38->field_00E4 % 0x25 == 0) {

      iVar2_mg3 = st::fn_006E62D0
                            (g_playSystem_00802A38,this->field_07CA,reinterpret_cast<int *>(&param_1));
      if (iVar2_mg3 == -4) {
        return 0;
      }
      if (param_1->field_0716 == param_1->field_0712) {
        this->field_03D2 = 0xffff;
        this->field_03D0 = 0xffff;
        this->field_03CE = 0xffff;
        this->field_06EF = 2;
        /* ST_CALLSITE[00480528]: CALL 0x004011ae; direct=004011AE STBoatC::UnLoadObj */
        local_EAX_344 = st::fn_004011AE(this,1);
        return local_EAX_344;
      }
    }
  }
  else if (iVar2 == 2) {
    /* ST_CALLSITE[0048053F]: CALL 0x004011ae; direct=004011AE STBoatC::UnLoadObj */
    iVar1 = st::fn_004011AE(this,2);
    return iVar1;
  }
  return 2;
}

// 00481520 STBoatC::sub_00481520
#line 4 "decomp/ST.exe/functions/00481520/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004603B0 -> 00481520 @ 00460725; MOVSX at 0046071E establishes signed source width 2 |
   004608B0 -> 00481520 @ 00460B81; /STBoatC+0x47; MOVSX at 00460B7A establishes signed source width
   2 | 004608B0 -> 00481520 @ 00460C1B; /STBoatC+0x47; MOVSX at 00460C16 establishes signed source
   width 2 | 004608B0 -> 00481520 @ 00460CD8; /STBoatC+0x47; MOVSX at 00460CD1 establishes signed
   source width 2 | 004608B0 -> 00481520 @ 00460D67; /STBoatC+0x47; MOVSX at 00460D60 establishes
   signed source width 2 | 004608B0 -> 00481520 @ 00460F6F; /STBoatC+0x475; MOVSX at 00460F63
   establishes signed source width 2 | 004608B0 -> 00481520 @ 00460FBD; MOVSX at 00460FB4
   establishes signed source width 2 | 004608B0 -> 00481520 @ 004615AF; /STBoatC+0x47; MOVSX at
   004615A8 establishes signed source width 2 | 00462180 -> 00481520 @ 0046241D; MOVSX at 0046240A
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462492; MOVSX at 00462486
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462881; MOVSX at 00462865
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462CAD; MOVSX at 00462CA6
   establishes signed source width 2 | 00462180 -> 00481520 @ 00463118; MOVSX at 00463111
   establishes signed source width 2 | 00462180 -> 00481520 @ 004632B9; MOVSX at 00463297
   establishes signed source width 2 | 00462180 -> 00481520 @ 004634F4; MOVSX at 004634D2
   establishes signed source width 2 | 00462180 -> 00481520 @ 004638AF; MOVSX at 004638A3
   establishes signed source width 2 | 00462180 -> 00481520 @ 00463E42; MOVSX at 00463E3B
   establishes signed source width 2 | 00462180 -> 00481520 @ 004642BE; MOVSX at 004642B7
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00466222; /STBoatC+0x4af; MOVSX at
   00466202 establishes signed source width 2 | 00465C60 -> 00481520 @ 00466738; /STBoatC+0x49b;
   MOVSX at 00466717 establishes signed source width 2 | 00465C60 -> 00481520 @ 0046682E;
   /STBoatC+0x49b; MOVSX at 0046680D establishes signed source width 2 | 00465C60 -> 00481520 @
   00466B6E; /STBoatC+0x49b; MOVSX at 00466B4D establishes signed source width 2 | 00465C60 ->
   00481520 @ 00466E04; /STBoatC+0x49b; MOVSX at 00466DF7 establishes signed source width 2 |
   00465C60 -> 00481520 @ 00467033; /STBoatC+0x49b; MOVSX at 00467026 establishes signed source
   width 2 | 00465C60 -> 00481520 @ 0046748C; /STBoatC+0x4a5; MOVSX at 00467461 establishes signed
   source width 2 | 00465C60 -> 00481520 @ 004675B7; /STBoatC+0x4a5; MOVSX at 004675A0 establishes
   signed source width 2 | 00465C60 -> 00481520 @ 004675F0; /STBoatC+0x49b; MOVSX at 004675E4
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467A93; /STBoatC+0x4af; MOVSX at
   00467A73 establishes signed source width 2 | 00465C60 -> 00481520 @ 00467AC9; /STBoatC+0x4a5;
   MOVSX at 00467ABC establishes signed source width 2 | 00465C60 -> 00481520 @ 00467CC7;
   /STBoatC+0x4a5; MOVSX at 00467CBA establishes signed source width 2 | 00465C60 -> 00481520 @
   00467CFF; /STBoatC+0x49b; MOVSX at 00467CE8 establishes signed source width 2 | 00465C60 ->
   00481520 @ 00467DCE; /STBoatC+0x4af; MOVSX at 00467DC2 establishes signed source width 2 |
   00465C60 -> 00481520 @ 00467E62; /STBoatC+0x4af; MOVSX at 00467E56 establishes signed source
   width 2 | 00465C60 -> 00481520 @ 0046806C; /STBoatC+0x49b; MOVSX at 0046804B establishes signed
   source width 2 | 00465C60 -> 00481520 @ 00468172; /STBoatC+0x4c5; MOVSX at 00468152 establishes
   signed source width 2 | 00465C60 -> 00481520 @ 004681B4; /STBoatC+0x4a5; MOVSX at 00468193
   establishes signed source width 2 | 00465C60 -> 00481520 @ 0046850C; /STBoatC+0x4a5; MOVSX at
   004684EB establishes signed source width 2 | 00465C60 -> 00481520 @ 00468543; /STBoatC+0x49b;
   MOVSX at 00468526 establishes signed source width 2 | 00465C60 -> 00481520 @ 00468930;
   /STBoatC+0x4c5; MOVSX at 00468924 establishes signed source width 2 | 00465C60 -> 00481520 @
   00468B5D; /STBoatC+0x4a5; MOVSX at 00468B50 establishes signed source width 2 | 00465C60 ->
   00481520 @ 00468BFE; /STBoatC+0x4c5; MOVSX at 00468BF2 establishes signed source width 2 |
   0046B100 -> 00481520 @ 0046B250; /STBoatC+0x4fc; MOVSX at 0046B238 establishes signed source
   width 2 | 0046B100 -> 00481520 @ 0046B39C; /STBoatC+0x4fc; MOVSX at 0046B390 establishes signed
   source width 2 | 0046B100 -> 00481520 @ 0046B62B; /STBoatC+0x4fc; MOVSX at 0046B61F establishes
   signed source width 2 | 0046B100 -> 00481520 @ 0046BF96; /STBoatC+0x4fc; MOVSX at 0046BF8A
   establishes signed source width 2 | 0046B100 -> 00481520 @ 0046C307; /STBoatC+0x4fc; MOVSX at
   0046C2FB establishes signed source width 2 | 0046B100 -> 00481520 @ 0046C3B7; /STBoatC+0x4fc;
   MOVSX at 0046C3AB establishes signed source width 2 | 0046CF20 -> 00481520 @ 0046D176; MOVSX at
   0046D16D establishes signed source width 2 | 0046D450 -> 00481520 @ 0046DB34; /STBoatC+0x53c;
   MOVSX at 0046DB12 establishes signed source width 2 | 0046D450 -> 00481520 @ 0046DDDF;
   /STBoatC+0x53c; MOVSX at 0046DDD3 establishes signed source width 2 | 0046D450 -> 00481520 @
   0046E73D; /STBoatC+0x536; MOVSX at 0046E731 establishes signed source width 2 | 0046D450 ->
   00481520 @ 0046E9E6; unproven partial register write at 0046E99F; MOVSX at 0046E9C3 establishes
   signed source width 2 | 0046F5C0 -> 00481520 @ 0046FA13; MOVSX at 0046FA07 establishes signed
   source width 2 | 0046F5C0 -> 00481520 @ 0046FA65; /STBoatC+0x554; MOVSX at 0046FA48 establishes
   signed source width 2 | 0046F5C0 -> 00481520 @ 0047009A; /STBoatC+0x56c; MOVSX at 0047008E
   establishes signed source width 2 | 0046F5C0 -> 00481520 @ 00470B60; MOVSX at 00470B54
   establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471DD0; /STBoatC+0x47; MOVSX at
   00471DCB establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471E84; /STBoatC+0x47;
   MOVSX at 00471E7D establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471F00;
   /STBoatC+0x47; MOVSX at 00471EF9 establishes signed source width 2 | 00471AC0 -> 00481520 @
   00471F94; /STBoatC+0x475; MOVSX at 00471F7E establishes signed source width 2 | 00471AC0 ->
   00481520 @ 0047208F; MOVSX at 00472086 establishes signed source width 2 | 00471AC0 -> 00481520 @
   00472311; /STBoatC+0x475; MOVSX at 004722FB establishes signed source width 2 | 00471AC0 ->
   00481520 @ 004723E1; /STBoatC+0x475; MOVSX at 004723CB establishes signed source width 2 |
   00471AC0 -> 00481520 @ 0047272D; /STBoatC+0x47; MOVSX at 00472726 establishes signed source width
   2 | 00471AC0 -> 00481520 @ 00472D16; /STBoatC+0x475; MOVSX at 00472D0A establishes signed source
   width 2 | 004749C0 -> 00481520 @ 00474B42; /STBoatC+0x5b; MOVSX at 00474B39 establishes signed
   source width 2 | 004758E0 -> 00481520 @ 00475990; MOVSX at 00475984 establishes signed source
   width 2 | 004758E0 -> 00481520 @ 00475F3D; MOVSX at 00475F27 establishes signed source width 2 |
   004761B0 -> 00481520 @ 00476584; MOVSX at 00476578 establishes signed source width 2 | 004761B0
   -> 00481520 @ 00476804; MOVSX at 004767EE establishes signed source width 2 | 00476CE0 ->
   00481520 @ 00477678; /STBoatC+0x609; MOVSX at 0047766C establishes signed source width 2 |
   00476CE0 -> 00481520 @ 00477A75; /STBoatC+0x609; MOVSX at 00477A69 establishes signed source
   width 2 | 00476CE0 -> 00481520 @ 00477B20; /STBoatC+0x609; MOVSX at 00477B14 establishes signed
   source width 2 | 00478640 -> 00481520 @ 0047888F; /STBoatC+0x61d; MOVSX at 00478883 establishes
   signed source width 2 | 00478640 -> 00481520 @ 00478FE4; MOVSX at 00478FCE establishes signed
   source width 2 | 00478640 -> 00481520 @ 00479259; /STBoatC+0x61d; MOVSX at 00479239 establishes
   signed source width 2 | 00479600 -> 00481520 @ 0047B22F; MOVSX at 0047B223 establishes signed
   source width 2 | 00479600 -> 00481520 @ 0047B6E6; /STBoatC+0x639; MOVSX at 0047B6D9 establishes
   signed source width 2 | 0047C050 -> 00481520 @ 0047C211; /STBoatC+0x66f; MOVSX at 0047C204
   establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047E2D9; /STBoatC+0x6b3; MOVSX at
   0047E2CD establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047ECEC; /STBoatC+0x6b3;
   MOVSX at 0047ECE0 establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047F094;
   /STBoatC+0x6b3; MOVSX at 0047F088 establishes signed source width 2 | 0047DF00 -> 00481520 @
   0047F18C; /STBoatC+0x6b3; MOVSX at 0047F180 establishes signed source width 2 | 0047DF00 ->
   00481520 @ 0047F4F1; MOVSX at 0047F4EA establishes signed source width 2 | 0047FE10 -> 00481520 @
   0047FFFF; MOVSX at 0047FFE3 establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480106;
   MOVSX at 004800FA establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480249;
   zero-filled partial register load at 004801EA; MOVSX at 00480228 establishes signed source width
   2 | 00491240 -> 00481520 @ 0049146E; MOVSX at 00491458 establishes signed source width 2 |
   0049B4C0 -> 00481520 @ 0049B5AF; MOVSX at 0049B5A6 establishes signed source width 2 | 004A0FA0
   -> 00481520 @ 004A14D3; MOVSX at 004A14CA establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004603B0 -> 00481520 @ 00460725; MOVSX at 0046070C establishes signed source width 2 |
   004608B0 -> 00481520 @ 00460B81; /STBoatC+0x49; MOVSX at 00460B72 establishes signed source width
   2 | 004608B0 -> 00481520 @ 00460C1B; /STBoatC+0x49; MOVSX at 00460C0C establishes signed source
   width 2 | 004608B0 -> 00481520 @ 00460CD8; /STBoatC+0x49; MOVSX at 00460CC9 establishes signed
   source width 2 | 004608B0 -> 00481520 @ 00460D67; /STBoatC+0x49; MOVSX at 00460D58 establishes
   signed source width 2 | 004608B0 -> 00481520 @ 00460F6F; /STBoatC+0x477; MOVSX at 00460F5C
   establishes signed source width 2 | 004608B0 -> 00481520 @ 00460FBD; MOVSX at 00460FB0
   establishes signed source width 2 | 004608B0 -> 00481520 @ 004615AF; /STBoatC+0x49; MOVSX at
   004615A0 establishes signed source width 2 | 00462180 -> 00481520 @ 0046241D; MOVSX at 00462406
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462492; MOVSX at 0046247F
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462881; MOVSX at 0046285E
   establishes signed source width 2 | 00462180 -> 00481520 @ 00462CAD; MOVSX at 00462CA3
   establishes signed source width 2 | 00462180 -> 00481520 @ 00463118; MOVSX at 0046310E
   establishes signed source width 2 | 00462180 -> 00481520 @ 004632B9; MOVSX at 00463294
   establishes signed source width 2 | 00462180 -> 00481520 @ 004634F4; MOVSX at 004634CF
   establishes signed source width 2 | 00462180 -> 00481520 @ 004638AF; MOVSX at 0046389C
   establishes signed source width 2 | 00462180 -> 00481520 @ 00463E42; MOVSX at 00463E38
   establishes signed source width 2 | 00462180 -> 00481520 @ 004642BE; MOVSX at 004642B4
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00466222; MOVSX at 004661FF
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00466738; /STBoatC+0x49d; MOVSX at
   00466710 establishes signed source width 2 | 00465C60 -> 00481520 @ 0046682E; /STBoatC+0x49d;
   MOVSX at 00466806 establishes signed source width 2 | 00465C60 -> 00481520 @ 00466B6E;
   /STBoatC+0x49d; MOVSX at 00466B46 establishes signed source width 2 | 00465C60 -> 00481520 @
   00466E04; /STBoatC+0x49d; MOVSX at 00466DF0 establishes signed source width 2 | 00465C60 ->
   00481520 @ 00467033; /STBoatC+0x49d; MOVSX at 0046701F establishes signed source width 2 |
   00465C60 -> 00481520 @ 0046748C; /STBoatC+0x4a7; MOVSX at 0046745A establishes signed source
   width 2 | 00465C60 -> 00481520 @ 004675B7; /STBoatC+0x4a7; MOVSX at 00467599 establishes signed
   source width 2 | 00465C60 -> 00481520 @ 004675F0; /STBoatC+0x49d; MOVSX at 004675D6 establishes
   signed source width 2 | 00465C60 -> 00481520 @ 00467A93; MOVSX at 00467A70 establishes signed
   source width 2 | 00465C60 -> 00481520 @ 00467AC9; /STBoatC+0x4a7; MOVSX at 00467AB5 establishes
   signed source width 2 | 00465C60 -> 00481520 @ 00467CC7; /STBoatC+0x4a7; MOVSX at 00467CB3
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467CFF; /STBoatC+0x49d; MOVSX at
   00467CE1 establishes signed source width 2 | 00465C60 -> 00481520 @ 00467DCE; MOVSX at 00467DBF
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467E62; /STBoatC+0x4b1; MOVSX at
   00467E4F establishes signed source width 2 | 00465C60 -> 00481520 @ 0046806C; /STBoatC+0x49d;
   MOVSX at 00468044 establishes signed source width 2 | 00465C60 -> 00481520 @ 00468172;
   /STBoatC+0x4c7; MOVSX at 0046814B establishes signed source width 2 | 00465C60 -> 00481520 @
   004681B4; /STBoatC+0x4a7; MOVSX at 0046818C establishes signed source width 2 | 00465C60 ->
   00481520 @ 0046850C; /STBoatC+0x4a7; MOVSX at 004684E4 establishes signed source width 2 |
   00465C60 -> 00481520 @ 00468543; /STBoatC+0x49d; MOVSX at 0046851F establishes signed source
   width 2 | 00465C60 -> 00481520 @ 00468930; /STBoatC+0x4c7; MOVSX at 0046891D establishes signed
   source width 2 | 00465C60 -> 00481520 @ 00468B5D; /STBoatC+0x4a7; MOVSX at 00468B49 establishes
   signed source width 2 | 00465C60 -> 00481520 @ 00468BFE; /STBoatC+0x4c7; MOVSX at 00468BEB
   establishes signed source width 2 | 0046B100 -> 00481520 @ 0046B250; /STBoatC+0x4fe; MOVSX at
   0046B231 establishes signed source width 2 | 0046B100 -> 00481520 @ 0046B39C; /STBoatC+0x4fe;
   MOVSX at 0046B389 establishes signed source width 2 | 0046B100 -> 00481520 @ 0046B62B;
   /STBoatC+0x4fe; MOVSX at 0046B618 establishes signed source width 2 | 0046B100 -> 00481520 @
   0046BF96; /STBoatC+0x4fe; MOVSX at 0046BF83 establishes signed source width 2 | 0046B100 ->
   00481520 @ 0046C307; /STBoatC+0x4fe; MOVSX at 0046C2F4 establishes signed source width 2 |
   0046B100 -> 00481520 @ 0046C3B7; /STBoatC+0x4fe; MOVSX at 0046C3A4 establishes signed source
   width 2 | 0046CF20 -> 00481520 @ 0046D176; MOVSX at 0046D169 establishes signed source width 2 |
   0046D450 -> 00481520 @ 0046DB34; /STBoatC+0x53e; MOVSX at 0046DB0B establishes signed source
   width 2 | 0046D450 -> 00481520 @ 0046DDDF; /STBoatC+0x53e; MOVSX at 0046DDCC establishes signed
   source width 2 | 0046D450 -> 00481520 @ 0046E73D; MOVSX at 0046E72E establishes signed source
   width 2 | 0046D450 -> 00481520 @ 0046E9E6; unproven partial register write at 0046E998; MOVSX at
   0046E9C0 establishes signed source width 2 | 0046F5C0 -> 00481520 @ 0046FA13; MOVSX at 0046FA00
   establishes signed source width 2 | 0046F5C0 -> 00481520 @ 0046FA65; /STBoatC+0x556; MOVSX at
   0046FA41 establishes signed source width 2 | 0046F5C0 -> 00481520 @ 0047009A; /STBoatC+0x56e;
   MOVSX at 00470087 establishes signed source width 2 | 0046F5C0 -> 00481520 @ 00470B60; MOVSX at
   00470B51 establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471DD0; /STBoatC+0x49;
   MOVSX at 00471DC1 establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471E84;
   /STBoatC+0x49; MOVSX at 00471E75 establishes signed source width 2 | 00471AC0 -> 00481520 @
   00471F00; /STBoatC+0x49; MOVSX at 00471EF1 establishes signed source width 2 | 00471AC0 ->
   00481520 @ 00471F94; /STBoatC+0x477; MOVSX at 00471F77 establishes signed source width 2 |
   00471AC0 -> 00481520 @ 0047208F; MOVSX at 00472082 establishes signed source width 2 | 00471AC0
   -> 00481520 @ 00472311; /STBoatC+0x477; MOVSX at 004722F4 establishes signed source width 2 |
   00471AC0 -> 00481520 @ 004723E1; /STBoatC+0x477; MOVSX at 004723C4 establishes signed source
   width 2 | 00471AC0 -> 00481520 @ 0047272D; /STBoatC+0x49; MOVSX at 0047271E establishes signed
   source width 2 | 00471AC0 -> 00481520 @ 00472D16; /STBoatC+0x477; MOVSX at 00472D03 establishes
   signed source width 2 | 004749C0 -> 00481520 @ 00474B42; /STBoatC+0x5d; MOVSX at 00474B2D
   establishes signed source width 2 | 004758E0 -> 00481520 @ 00475990; MOVSX at 00475981
   establishes signed source width 2 | 004758E0 -> 00481520 @ 00475F3D; MOVSX at 00475F24
   establishes signed source width 2 | 004761B0 -> 00481520 @ 00476584; MOVSX at 00476571
   establishes signed source width 2 | 004761B0 -> 00481520 @ 00476804; MOVSX at 004767E7
   establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477678; /STBoatC+0x60b; MOVSX at
   00477665 establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477A75; /STBoatC+0x60b;
   MOVSX at 00477A62 establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477B20;
   /STBoatC+0x60b; MOVSX at 00477B0D establishes signed source width 2 | 00478640 -> 00481520 @
   0047888F; /STBoatC+0x61f; MOVSX at 0047887C establishes signed source width 2 | 00478640 ->
   00481520 @ 00478FE4; MOVSX at 00478FC7 establishes signed source width 2 | 00478640 -> 00481520 @
   00479259; /STBoatC+0x61f; MOVSX at 00479232 establishes signed source width 2 | 00479600 ->
   00481520 @ 0047B22F; MOVSX at 0047B220 establishes signed source width 2 | 00479600 -> 00481520 @
   0047B6E6; /STBoatC+0x63b; MOVSX at 0047B6D2 establishes signed source width 2 | 0047C050 ->
   00481520 @ 0047C211; /STBoatC+0x671; MOVSX at 0047C1FD establishes signed source width 2 |
   0047DF00 -> 00481520 @ 0047E2D9; MOVSX at 0047E2CA establishes signed source width 2 | 0047DF00
   -> 00481520 @ 0047ECEC; MOVSX at 0047ECDD establishes signed source width 2 | 0047DF00 ->
   00481520 @ 0047F094; MOVSX at 0047F085 establishes signed source width 2 | 0047DF00 -> 00481520 @
   0047F18C; MOVSX at 0047F17D establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047F4F1;
   MOVSX at 0047F4E7 establishes signed source width 2 | 0047FE10 -> 00481520 @ 0047FFFF; MOVSX at
   0047FFDC establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480106; MOVSX at 004800F3
   establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480249; unproven partial register
   write at 004801DC; MOVSX at 00480225 establishes signed source width 2 | 00491240 -> 00481520 @
   0049146E; STBoatC::PrepareForLoading parameter param_3; MOVSX at 00491451 establishes signed
   source width 2 | 0049B4C0 -> 00481520 @ 0049B5AF; MOVSX at 0049B59C establishes signed source
   width 2 | 004A0FA0 -> 00481520 @ 004A14D3; MOVSX at 004A14C0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004608B0 -> 00481520 @ 00460F6F; /STBoatC+0x479; MOVSX at 00460F55 establishes signed
   source width 2 | 004608B0 -> 00481520 @ 00460FBD; MOVSX at 00460FAC establishes signed source
   width 2 | 00462180 -> 00481520 @ 0046241D; MOVSX at 00462402 establishes signed source width 2 |
   00462180 -> 00481520 @ 00462492; MOVSX at 00462478 establishes signed source width 2 | 00462180
   -> 00481520 @ 00462881; MOVSX at 00462857 establishes signed source width 2 | 00462180 ->
   00481520 @ 00462CAD; MOVSX at 00462C9C establishes signed source width 2 | 00462180 -> 00481520 @
   00463118; MOVSX at 00463107 establishes signed source width 2 | 00462180 -> 00481520 @ 004632B9;
   MOVSX at 00463289 establishes signed source width 2 | 00462180 -> 00481520 @ 004634F4; MOVSX at
   004634C4 establishes signed source width 2 | 00462180 -> 00481520 @ 004638AF; MOVSX at 00463895
   establishes signed source width 2 | 00462180 -> 00481520 @ 00463E42; MOVSX at 00463E31
   establishes signed source width 2 | 00462180 -> 00481520 @ 004642BE; MOVSX at 004642AD
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00466222; MOVSX at 004661FC
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467A93; MOVSX at 00467A6D
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467DCE; MOVSX at 00467DBC
   establishes signed source width 2 | 00465C60 -> 00481520 @ 00467E62; /STBoatC+0x4b3; MOVSX at
   00467E48 establishes signed source width 2 | 00465C60 -> 00481520 @ 00468172; /STBoatC+0x4c9;
   MOVSX at 00468144 establishes signed source width 2 | 00465C60 -> 00481520 @ 00468930;
   /STBoatC+0x4c9; MOVSX at 00468916 establishes signed source width 2 | 00465C60 -> 00481520 @
   00468BFE; /STBoatC+0x4c9; MOVSX at 00468BE4 establishes signed source width 2 | 0046B100 ->
   00481520 @ 0046B250; /STBoatC+0x500; MOVSX at 0046B22A establishes signed source width 2 |
   0046B100 -> 00481520 @ 0046B39C; /STBoatC+0x500; MOVSX at 0046B382 establishes signed source
   width 2 | 0046B100 -> 00481520 @ 0046B62B; /STBoatC+0x500; MOVSX at 0046B611 establishes signed
   source width 2 | 0046B100 -> 00481520 @ 0046BF96; /STBoatC+0x500; MOVSX at 0046BF7C establishes
   signed source width 2 | 0046B100 -> 00481520 @ 0046C307; /STBoatC+0x500; MOVSX at 0046C2ED
   establishes signed source width 2 | 0046B100 -> 00481520 @ 0046C3B7; /STBoatC+0x500; MOVSX at
   0046C39D establishes signed source width 2 | 0046CF20 -> 00481520 @ 0046D176; MOVSX at 0046D165
   establishes signed source width 2 | 0046D450 -> 00481520 @ 0046DB34; /STBoatC+0x540; MOVSX at
   0046DB04 establishes signed source width 2 | 0046D450 -> 00481520 @ 0046DDDF; /STBoatC+0x540;
   MOVSX at 0046DDC5 establishes signed source width 2 | 0046D450 -> 00481520 @ 0046E73D; MOVSX at
   0046E72B establishes signed source width 2 | 0046F5C0 -> 00481520 @ 0046FA13; MOVSX at 0046F9F9
   establishes signed source width 2 | 0046F5C0 -> 00481520 @ 0047009A; /STBoatC+0x570; MOVSX at
   00470080 establishes signed source width 2 | 0046F5C0 -> 00481520 @ 00470B60; MOVSX at 00470B4E
   establishes signed source width 2 | 00471AC0 -> 00481520 @ 00471F94; /STBoatC+0x479; MOVSX at
   00471F70 establishes signed source width 2 | 00471AC0 -> 00481520 @ 0047208F; MOVSX at 0047207E
   establishes signed source width 2 | 00471AC0 -> 00481520 @ 00472311; /STBoatC+0x479; MOVSX at
   004722ED establishes signed source width 2 | 00471AC0 -> 00481520 @ 004723E1; /STBoatC+0x479;
   MOVSX at 004723BD establishes signed source width 2 | 00471AC0 -> 00481520 @ 00472D16;
   /STBoatC+0x479; MOVSX at 00472CFC establishes signed source width 2 | 004749C0 -> 00481520 @
   00474B42; MOVSX at 00474B31 establishes signed source width 2 | 004758E0 -> 00481520 @ 00475990;
   MOVSX at 0047597E establishes signed source width 2 | 004758E0 -> 00481520 @ 00475F3D; MOVSX at
   00475F21 establishes signed source width 2 | 004761B0 -> 00481520 @ 00476584; MOVSX at 0047656A
   establishes signed source width 2 | 004761B0 -> 00481520 @ 00476804; MOVSX at 004767E0
   establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477678; /STBoatC+0x60d; MOVSX at
   0047765E establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477A75; /STBoatC+0x60d;
   MOVSX at 00477A5B establishes signed source width 2 | 00476CE0 -> 00481520 @ 00477B20;
   /STBoatC+0x60d; MOVSX at 00477B06 establishes signed source width 2 | 00478640 -> 00481520 @
   0047888F; /STBoatC+0x621; MOVSX at 00478875 establishes signed source width 2 | 00478640 ->
   00481520 @ 00478FE4; MOVSX at 00478FC4 establishes signed source width 2 | 00478640 -> 00481520 @
   00479259; MOVSX at 0047922F establishes signed source width 2 | 00479600 -> 00481520 @ 0047B22F;
   MOVSX at 0047B21D establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047E2D9; MOVSX at
   0047E2C7 establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047ECEC; MOVSX at 0047ECDA
   establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047F094; MOVSX at 0047F082
   establishes signed source width 2 | 0047DF00 -> 00481520 @ 0047F18C; MOVSX at 0047F17A
   establishes signed source width 2 | 0047FE10 -> 00481520 @ 0047FFFF; MOVSX at 0047FFD5
   establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480106; MOVSX at 004800EC
   establishes signed source width 2 | 0047FE10 -> 00481520 @ 00480249; unproven partial register
   write at 004801D5; MOVSX at 004801FF establishes signed source width 2 | 00491240 -> 00481520 @
   0049146E; MOVSX at 00491455 establishes signed source width 2 */

void __thiscall st::fn_00481520(STBoatC *this,int param_1,int param_2,int param_3)

{
  this->field_00BB = param_1;
  this->field_00BF = param_2;
  this->field_00C3 = param_3;
  this->field_00FD = 0;
  return;
}

// 00481560 STBoatC::vfunc_DC
#line 4 "decomp/ST.exe/functions/00481560/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004028B0
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1862/2106; unique_owner_for_target */

uint __thiscall
st::fn_00481560(STBoatC *this,short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6)

{
  uint32_t _local_2c;

  longlong lVar1;
  STBoatC *pSVar2;
  int uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar10;
  int local_EAX_2975;
  int iVar9;
  int iVar11;
  int iVar12;
  longlong local_EDXEAX_506;
  longlong local_EDXEAX_521;
  longlong local_EDXEAX_595;
  longlong local_EDXEAX_626;
  longlong local_EDXEAX_706;
  longlong local_EDXEAX_725;
  longlong local_EDXEAX_751;
  longlong local_EDXEAX_776;
  longlong local_EDXEAX_791;
  longlong local_EDXEAX_810;
  longlong local_EDXEAX_821;
  longlong local_EDXEAX_840;
  longlong local_EDXEAX_897;
  ulonglong uVar13;
  longlong local_EDXEAX_939;
  longlong local_EDXEAX_1141;
  longlong local_EDXEAX_1168;
  longlong local_EDXEAX_1329;
  longlong local_EDXEAX_1351;
  longlong local_EDXEAX_1516;
  longlong local_EDXEAX_1540;
  longlong lVar13;
  longlong lVar14;
  longlong local_EDXEAX_1689;
  longlong local_EDXEAX_1743;
  longlong local_EDXEAX_1768;
  longlong local_EDXEAX_1787;
  longlong local_EDXEAX_1814;
  longlong local_EDXEAX_1851;
  longlong lVar15;
  longlong lVar12;
  longlong local_EDXEAX_1914;
  longlong local_EDXEAX_1925;
  longlong local_EDXEAX_1941;
  longlong local_EDXEAX_1998;
  longlong local_EDXEAX_2040;
  longlong local_EDXEAX_2081;
  longlong local_EDXEAX_2281;
  longlong local_EDXEAX_2311;
  longlong local_EDXEAX_2353;
  longlong local_EDXEAX_2517;
  longlong local_EDXEAX_2551;
  longlong local_EDXEAX_2595;
  uint local_104 [2];
  int local_fc;
  int iStack_f8;
  longlong local_f4;
  int local_ec;
  int iStack_e8;
  longlong local_e4;
  uint local_dc;
  int local_d8;
  longlong local_d4;
  ulonglong local_cc;
  uint local_c4;
  int local_c0;
  ulonglong local_bc;
  uint local_b4;
  int local_b0;
  double local_ac;
  undefined2 *local_a4;
  ulonglong local_a0;
  double local_98;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  STBoatC *local_60;
  ulonglong local_5c;
  ulonglong local_54;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  short local_2c;
  short sStack_2a;
  short local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_8;

  local_90 = (uint)*(short *)&this->field_0x237;
  iVar11 = (int)local_90 >> 0x1f;
  STPiece<0,2>(local_c) = 0;
  STPiece<2,2>(local_c) = 0;
  local_8 = 0;
  if ((this->field_0455 != 1) && (this->field_0742 != 1)) {
    local_60 = this;
    uVar2 = st::fn_006ACF0D((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,
                         (int)param_1,(int)param_2,(int)param_3);
    if ((uVar2 >> 0x1f < iVar11) || ((uVar2 >> 0x1f <= iVar11 && ((uint)uVar2 <= local_90)))) {
      uVar3 = (int)param_4 - (int)param_1;
      iVar11 = 0;
      local_20 = (int)uVar3 >> 0x1f;
      local_14 = (int)param_5 - (int)param_2;
      local_10 = (int)local_14 >> 0x1f;
      uVar4 = (int)param_6 - (int)param_3;
      local_38 = (int)uVar4 >> 0x1f;
      local_1c = 1000000000;
      local_18 = 0;
      local_44 = 0xffffffff;
      local_3c = uVar4;
      local_24 = uVar3;
      local_70 = st::fn_0072E4F0(uVar3,local_20,uVar3,local_20);
      local_68 = st::fn_0072E4F0(local_14,local_10,local_14,local_10);
      local_80 = st::fn_0072E4F0(uVar4,local_38,uVar4,local_38);
      if ((uVar3 == 0 && local_20 == 0) && (local_14 == 0 && local_10 == 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + 1;
        local_68 = 1;
        local_14 = 1;
        local_10 = 0;
        local_70 = 1;
        local_24 = 1;
        local_20 = 0;
        uVar3 = 1;
      }
      local_40 = 0;
      if (local_60->field_0281 != '\0') {
        local_a4 = &local_60->field_023B;
        do {
          local_28 = 0;
          local_90 = (uint)(short)local_a4[2];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_2c = CONCAT22(*local_a4,local_a4[-1]);
          local_8c = (int)local_90 >> 0x1f;
          puVar5 = st::fn_0040342C(local_104,local_a4[-1],0,local_60->field_006C);
          local_2c = (short)*puVar5;
          local_2c = local_2c + local_60->field_0041;
          sStack_2a = (short)((uint)*puVar5 >> 0x10);
          local_28 = *(short *)(puVar5 + 1) + local_60->field_0045;
          sStack_2a = local_60->field_0043 - sStack_2a;
          if (uVar3 == 0 && local_20 == 0) {
            local_4c = (int)param_3 - (int)local_28;
            local_EDXEAX_506 =
                 st::fn_0072E4F0(local_4c,(int)local_4c >> 0x1f,uVar4,local_38);
            local_EDXEAX_521 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_506,(int)((ulonglong)local_EDXEAX_506 >> 0x20),
                            local_14,local_10);
            local_54 = local_68 + local_80;
            local_34 = (uint)sStack_2a;
            local_b4 = (uint)param_2;
            local_b0 = (int)local_b4 >> 0x1f;
            local_78 = local_EDXEAX_521;
            local_EDXEAX_595 =
                 st::fn_0072E4F0
                           (local_34,(int)local_34 >> 0x1f,(uint)local_68,STPiece<4,4>(local_68));
            local_EDXEAX_626 =
                 st::fn_0072E4F0
                           (local_b4,local_b0,(uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = (local_EDXEAX_521 - local_EDXEAX_595) - local_EDXEAX_626;
            local_5c = st::fn_0072E4F0((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar4 = local_4c * local_4c +
                    ((int)param_1 - (int)local_2c) * ((int)param_1 - (int)local_2c) +
                    local_34 * local_34;
            local_EDXEAX_706 = st::fn_0072E4F0(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_725 =
                 st::fn_0072E4F0
                           (uVar4 - (uint)local_EDXEAX_706,
                            (((int)uVar4 >> 0x1f) - (int)((ulonglong)local_EDXEAX_706 >> 0x20)) -
                            st::storage_bit_cast<uint>(static_cast<uint32_t>(uVar4 < (uint)local_EDXEAX_706)),(uint)local_68,
                            (int)((ulonglong)local_68 >> 0x20));
            local_EDXEAX_751 =
                 st::fn_0072E4F0
                           (param_2 * 2,param_2 * 2 >> 0x1f,(uint)local_78,
                            (int)((ulonglong)local_78 >> 0x20));
            local_EDXEAX_776 = st::fn_0072E4F0(local_b4,local_b0,local_b4,local_b0);
            local_EDXEAX_791 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_776,(int)((ulonglong)local_EDXEAX_776 >> 0x20),
                            (uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = local_EDXEAX_791 + (local_EDXEAX_725 - local_EDXEAX_751);
            local_EDXEAX_810 =
                 st::fn_0072E4F0
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            STPiece<4,4>(local_54));
            local_EDXEAX_821 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_810,(int)((ulonglong)local_EDXEAX_810 >> 0x20),4,0);
            local_EDXEAX_840 =
                 st::fn_0072E4F0
                           ((uint)local_5c,STPiece<4,4>(local_5c),(uint)local_5c,STPiece<4,4>(local_5c));
            local_a0 = local_EDXEAX_840 - local_EDXEAX_821;
            uVar4 = local_3c;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_897 =
                     st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = st::fn_0072E440
                                   ((uint)local_5c,(uint)((ulonglong)local_5c >> 0x20),
                                    (uint)local_EDXEAX_897,
                                    (uint)((ulonglong)local_EDXEAX_897 >> 0x20));
                uVar4 = local_3c;
                iVar6 = (int)uVar13;
                local_30 = iVar6;
                local_EDXEAX_939 =
                     st::fn_0072E4F0
                               (iVar6 - param_2,iVar6 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_939,
                                    (uint)((ulonglong)local_EDXEAX_939 >> 0x20),local_14,local_10);
                local_34 = param_5 - iVar6;
                iVar9 = (int)uVar13 + (int)param_3;
                iVar6 = param_6 - iVar9;
                uVar3 = iVar6 * iVar6 +
                        ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1) +
                        local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (ushort)iVar9;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_e4 = st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_e4;
                local_EDXEAX_1141 = st::fn_0072E288();
                uVar4 = local_3c;
                STPiece<0,4>(local_EDXEAX_1141) = (int)local_EDXEAX_1141;
                local_30 = (int)local_EDXEAX_1141;
                local_EDXEAX_1168 =
                     st::fn_0072E4F0
                               ((int)local_EDXEAX_1141 - param_2,
                                (int)local_EDXEAX_1141 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_1168,
                                    (uint)((ulonglong)local_EDXEAX_1168 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                iVar9 = ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1);
                uVar3 = (param_5 - (int)local_EDXEAX_1141) * (param_5 - (int)local_EDXEAX_1141) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
                local_ec = -(uint)local_5c;
                iStack_e8 = -(STPiece<4,4>(local_5c) + st::storage_bit_cast<uint>(static_cast<uint32_t>((uint)local_5c != 0)));
                local_EDXEAX_1329 = st::fn_0072E288();
                local_30 = (int)local_EDXEAX_1329;
                local_EDXEAX_1351 =
                     st::fn_0072E4F0
                               (local_30 - param_2,local_30 - param_2 >> 0x1f,uVar4,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_1351,
                                    (uint)((ulonglong)local_EDXEAX_1351 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                uVar3 = (param_5 - local_30) * (param_5 - local_30) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          else {
            local_78 = st::fn_0072E4F0
                                 ((int)param_2 - (int)sStack_2a,
                                  (int)param_2 - (int)sStack_2a >> 0x1f,uVar3,local_20);
            local_EDXEAX_1516 =
                 st::fn_0072E4F0
                           ((int)param_3 - (int)local_28,(int)param_3 - (int)local_28 >> 0x1f,uVar3,
                            local_20);
            local_cc = local_EDXEAX_1516;
            local_EDXEAX_1540 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_1516,(int)((ulonglong)local_EDXEAX_1516 >> 0x20),
                            uVar4,local_38);
            lVar13 = st::fn_0072E4F0
                               ((uint)local_78,(int)((ulonglong)local_78 >> 0x20),local_14,local_10);
            local_54 = local_70 + local_68 + local_80;
            local_dc = (uint)param_1;
            local_d8 = (int)local_dc >> 0x1f;
            local_d4 = lVar13 + local_EDXEAX_1540;
            lVar14 = st::fn_0072E4F0
                               (local_dc,local_d8,(uint)(local_80 + local_68),
                                (int)((ulonglong)(local_80 + local_68) >> 0x20));
            local_c4 = (uint)local_2c;
            local_c0 = (int)local_c4 >> 0x1f;
            local_bc = lVar14;
            local_EDXEAX_1689 =
                 st::fn_0072E4F0
                           (local_c4,local_c0,(uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            lVar1 = ((lVar13 + local_EDXEAX_1540) - local_EDXEAX_1689) -
                    CONCAT44(STPiece<4,4>(local_bc),(int)lVar14);
            local_5c = st::fn_0072E4F0((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar3 = (uint)((ulonglong)local_5c >> 0x20);
            local_EDXEAX_1743 = st::fn_0072E4F0(local_c4,local_c0,local_c4,local_c0);
            local_EDXEAX_1768 = st::fn_0072E4F0(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_1787 =
                 st::fn_0072E4F0
                           ((uint)(local_EDXEAX_1743 - local_EDXEAX_1768),
                            (int)((ulonglong)(local_EDXEAX_1743 - local_EDXEAX_1768) >> 0x20),
                            (uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            local_EDXEAX_1814 =
                 st::fn_0072E4F0((uint)local_d4,(int)((ulonglong)local_d4 >> 0x20),2,0);
            local_EDXEAX_1851 =
                 st::fn_0072E4F0
                           ((uint)(local_bc - local_EDXEAX_1814),
                            (int)((ulonglong)(local_bc - local_EDXEAX_1814) >> 0x20),local_dc,
                            local_d8);
            lVar15 = st::fn_0072E4F0
                               ((uint)local_cc,STPiece<4,4>(local_cc),(uint)local_cc,STPiece<4,4>(local_cc));
            lVar12 = st::fn_0072E4F0
                               ((uint)local_78,STPiece<4,4>(local_78),(uint)local_78,STPiece<4,4>(local_78));
            lVar1 = local_EDXEAX_1851 + local_EDXEAX_1787 + lVar15 + lVar12;
            local_EDXEAX_1914 =
                 st::fn_0072E4F0
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            (int)((ulonglong)local_54 >> 0x20));
            local_EDXEAX_1925 =
                 st::fn_0072E4F0
                           ((uint)local_EDXEAX_1914,(int)((ulonglong)local_EDXEAX_1914 >> 0x20),4,0);
            local_EDXEAX_1941 = st::fn_0072E4F0((uint)local_5c,uVar3,(uint)local_5c,uVar3);
            local_a0 = local_EDXEAX_1941 - local_EDXEAX_1925;
            uVar4 = local_3c;
            iVar11 = local_18;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_1998 =
                     st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = st::fn_0072E440
                                   ((uint)local_5c,uVar3,(uint)local_EDXEAX_1998,
                                    (uint)((ulonglong)local_EDXEAX_1998 >> 0x20));
                local_48 = (int)uVar13;
                uVar3 = local_48 - param_1;
                local_84 = (int)uVar3 >> 0x1f;
                local_EDXEAX_2040 = st::fn_0072E4F0(uVar3,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2040,
                                    (uint)((ulonglong)local_EDXEAX_2040 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                iVar12 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2081 = st::fn_0072E4F0(uVar3,local_84,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2081,
                                    (uint)((ulonglong)local_EDXEAX_2081 >> 0x20),local_24,local_20);
                local_34 = param_5 - iVar12;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar3 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar9 = (int)uVar3 >> 0x1f;
                iVar11 = local_18;
                if ((iVar9 <= local_18) && ((iVar9 < local_18 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar12;
                  local_8 = (ushort)iVar6;
                  local_44 = local_40;
                  iVar11 = iVar9;
                  local_1c = uVar3;
                  local_18 = iVar9;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_f4 = st::fn_0072E4F0((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_f4;
                local_EDXEAX_2281 = st::fn_0072E288();
                local_48 = (int)local_EDXEAX_2281;
                uVar7 = local_48 - param_1;
                local_84 = (int)uVar7 >> 0x1f;
                local_EDXEAX_2311 = st::fn_0072E4F0(uVar7,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2311,
                                    (uint)((ulonglong)local_EDXEAX_2311 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                local_30 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2353 = st::fn_0072E4F0(uVar7,local_84,local_3c,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2353,
                                    (uint)((ulonglong)local_EDXEAX_2353 >> 0x20),local_24,local_20);
                local_34 = param_5 - local_30;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar7 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar11 = (int)uVar7 >> 0x1f;
                if ((iVar11 <= local_18) && ((iVar11 < local_18 || (uVar7 < local_1c)))) {
                  local_8 = (ushort)iVar6;
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_44 = local_40;
                  local_1c = uVar7;
                  local_18 = iVar11;
                }
                iVar11 = local_18;
                local_fc = -(uint)local_5c;
                iStack_f8 = -(uVar3 + ((uint)local_5c != 0));
                local_EDXEAX_2517 = st::fn_0072E288();
                local_88 = (int)local_EDXEAX_2517 - (int)param_1;
                local_84 = (int)local_88 >> 0x1f;
                local_48 = (int)local_EDXEAX_2517;
                local_EDXEAX_2551 = st::fn_0072E4F0(local_88,local_84,local_14,local_10);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2551,
                                    (uint)((ulonglong)local_EDXEAX_2551 >> 0x20),local_24,local_20);
                iVar9 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2595 = st::fn_0072E4F0(local_88,local_84,uVar4,local_38);
                uVar13 = st::fn_0072E440
                                   ((uint)local_EDXEAX_2595,
                                    (uint)((ulonglong)local_EDXEAX_2595 >> 0x20),local_24,local_20);
                local_4c = (int)uVar13 + (int)param_3;
                local_34 = param_5 - iVar9;
                uVar3 = ((int)param_6 - local_4c) * ((int)param_6 - local_4c) +
                        (param_4 - local_48) * (param_4 - local_48) + local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar9;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          pSVar2 = local_60;
          local_40 = local_40 + 1;
          local_a4 = local_a4 + 4;
          uVar3 = local_24;
        } while ((int)local_40 < (int)(uint)(byte)local_60->field_0281);
        if (local_44 != 0xffffffff) {
          STPiece<0,2>(local_c) = (short)local_c - local_60->field_0041;
          local_8 = local_8 - local_60->field_0045;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(local_60->field_0043 - STPiece<2,2>(local_c),(short)local_c);
          puVar5 = st::fn_0040342C(local_104,(short)local_c,local_8,0x168 - local_60->field_006C);
          uVar4 = local_44;
          local_c = *puVar5;
          local_8 = *(ushort *)(puVar5 + 1);
          pDVar8 = (DArrayTy *)(&pSVar2->field_0282)[local_44];
          if (pDVar8 == nullptr) {
            pDVar8 = st::fn_006AE290(nullptr,1,6,1);
            (&pSVar2->field_0282)[uVar4] = (int)pDVar8;
            iVar10 = st::fn_006AE1C0(pDVar8,&local_c);
            return iVar10 << 0x10 | uVar4 & 0xffff;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          auto _param_1 = 0xffffffff;
          uVar3 = pDVar8->count - 1;
          if (-1 < (int)uVar3) {
            do {
              st::fn_006ACC70(pDVar8,uVar3,&local_2c);
              if (local_2c == 0x7fff) {
                _param_1 = uVar3;
              }
              uVar3 = uVar3 - 1;
            } while (-1 < (int)uVar3);
            if (_param_1 != 0xffffffff) {
              st::fn_006AE140(pDVar8,_param_1,&local_c);
              return _param_1 << 0x10 | uVar4 & 0xffff;
            }
          }
          local_EAX_2975 = st::fn_006AE1C0(pDVar8,&local_c);
          return local_EAX_2975 << 0x10 | uVar4 & 0xffff;
        }
      }
    }
  }
  return 0xffffffff;
}

// 004838B0 STBoatC::sub_004838B0
#line 4 "decomp/ST.exe/functions/004838B0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 0040289C
   Slots: 0xF8
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007905A0:62 calls=16
   caller_families=2 receiver_extent=1113/2106; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=16; caller_families=2;
   owner_type=/STBoatC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

undefined4 __thiscall st::fn_004838B0(STBoatC *this)

{
  uint uVar1;
  uVar1 = 1;
  if ((this->field_0455 == 1) || (this->field_02C0 == 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 004838E0 STBoatC::sub_004838E0
#line 4 "decomp/ST.exe/functions/004838E0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00483caa) */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_004603B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=3; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=16; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall st::fn_004838E0(STBoatC *this,RecoveredRecord_STBoatC_004838E0 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong local_EDXEAX_136;
  longlong local_EDXEAX_163;
  longlong local_EDXEAX_197;
  ulonglong uVar24;
  longlong local_EDXEAX_321;
  longlong local_EDXEAX_330;
  longlong local_EDXEAX_355;
  longlong local_EDXEAX_374;
  longlong lVar25;
  longlong local_EDXEAX_440;
  longlong lVar26;
  longlong lVar27;
  longlong local_EDXEAX_531;
  longlong local_EDXEAX_556;
  longlong lVar23;
  longlong local_EDXEAX_611;
  longlong lVar22;
  longlong local_EDXEAX_652;
  longlong lVar28;
  longlong lVar24;
  longlong local_EDXEAX_749;
  longlong local_EDXEAX_798;
  longlong local_EDXEAX_913;
  longlong local_EDXEAX_932;
  longlong local_EDXEAX_948;
  longlong local_60;
  ulonglong local_48;
  sVar1 = param_1->field_003A;
  uVar18 = (uint)param_1->field_0034;
  uVar6 = (int)sVar1 - uVar18;
  uVar19 = (int)uVar6 >> 0x1f;
  sVar2 = param_1->field_003C;
  uVar20 = (uint)param_1->field_0036;
  uVar7 = (int)sVar2 - uVar20;
  uVar21 = (int)uVar7 >> 0x1f;
  sVar3 = param_1->field_003E;
  uVar22 = (uint)param_1->field_0038;
  uVar8 = (int)sVar3 - uVar22;
  uVar23 = (int)uVar8 >> 0x1f;
  uVar9 = (uint)this->field_0045;
  uVar10 = (uint)this->field_0043;
  uVar11 = (uint)this->field_0041;
  local_EDXEAX_136 = st::fn_0072E4F0(uVar11,(int)uVar11 >> 0x1f,uVar6,uVar19);
  local_EDXEAX_163 = st::fn_0072E4F0(uVar10,(int)uVar10 >> 0x1f,uVar7,uVar21);
  local_EDXEAX_197 = st::fn_0072E4F0(uVar9,(int)uVar9 >> 0x1f,uVar8,uVar23);
  lVar4 = local_EDXEAX_197 + local_EDXEAX_163 + local_EDXEAX_136;
  iVar12 = (int)lVar4;
  uVar13 = -iVar12;
  uVar17 = -((int)((ulonglong)lVar4 >> 0x20) + (uint)(iVar12 != 0));
  iVar12 = (int)uVar18 >> 0x1f;
  if (uVar6 == 0) {
    uVar22 = uVar18;
    iVar16 = iVar12;
    if (uVar7 == 0) {
      local_48 = (longlong)(int)uVar20;
      if (uVar8 == 0) {
        return 0;
      }
      uVar24 = st::fn_0072E440(uVar13,uVar17,uVar8,uVar23);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar24 = CONCAT44(-((int)((ulonglong)uVar24 >> 0x20) + st::storage_bit_cast<uint>(static_cast<uint32_t>((int)uVar24 != 0))),-(int)uVar24);
    }
    else {
      local_60 = (longlong)(int)uVar20;
      local_EDXEAX_321 = st::fn_0072E4F0(uVar20,(int)uVar20 >> 0x1f,uVar8,uVar23);
      local_EDXEAX_330 =
           st::fn_0072E4F0
                     ((uint)local_EDXEAX_321,(int)((ulonglong)local_EDXEAX_321 >> 0x20),uVar8,uVar23
                     );
      local_EDXEAX_355 = st::fn_0072E4F0(uVar13,uVar17,uVar7,uVar21);
      local_EDXEAX_374 = st::fn_0072E4F0(uVar8,uVar23,uVar8,uVar23);
      lVar25 = st::fn_0072E4F0(uVar7,uVar21,uVar7,uVar21);
      local_48 = st::fn_0072E440
                           ((uint)(local_EDXEAX_330 - local_EDXEAX_355),
                            (uint)((ulonglong)(local_EDXEAX_330 - local_EDXEAX_355) >> 0x20),
                            (uint)(local_EDXEAX_374 + lVar25),
                            (uint)((ulonglong)(local_EDXEAX_374 + lVar25) >> 0x20));
      local_EDXEAX_440 =
           st::fn_0072E4F0
                     ((uint)(local_48 - local_60),(int)((ulonglong)(local_48 - local_60) >> 0x20),
                      uVar8,uVar23);
      uVar24 = st::fn_0072E440
                         ((uint)local_EDXEAX_440,(uint)((ulonglong)local_EDXEAX_440 >> 0x20),uVar7,
                          uVar21);
    }
  }
  else {
    lVar26 = st::fn_0072E4F0(uVar22,(int)uVar22 >> 0x1f,uVar6,uVar19);
    lVar27 = st::fn_0072E4F0(uVar20,(int)uVar20 >> 0x1f,uVar6,uVar19);
    local_EDXEAX_531 = st::fn_0072E4F0(uVar18,iVar12,uVar7,uVar21);
    local_EDXEAX_556 =
         st::fn_0072E4F0
                   ((uint)(local_EDXEAX_531 - lVar27),
                    (int)((ulonglong)(local_EDXEAX_531 - lVar27) >> 0x20),uVar7,uVar21);
    lVar23 = st::fn_0072E4F0(uVar13,uVar17,uVar6,uVar19);
    local_EDXEAX_611 = st::fn_0072E4F0(uVar18,iVar12,uVar8,uVar23);
    lVar22 = st::fn_0072E4F0
                       ((uint)(local_EDXEAX_611 - lVar26),
                        (int)((ulonglong)(local_EDXEAX_611 - lVar26) >> 0x20),uVar8,uVar23);
    lVar5 = (lVar23 - local_EDXEAX_556) - lVar22;
    local_EDXEAX_652 = st::fn_0072E4F0(uVar8,uVar23,uVar8,uVar23);
    lVar28 = st::fn_0072E4F0(uVar7,uVar21,uVar7,uVar21);
    lVar24 = st::fn_0072E4F0(uVar6,uVar19,uVar6,uVar19);
    lVar4 = local_EDXEAX_652 + lVar28 + lVar24;
    uVar24 = st::fn_0072E440
                       ((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),(uint)lVar4,
                        (uint)((ulonglong)lVar4 >> 0x20));
    uVar22 = -(int)uVar24;
    iVar16 = -((int)((ulonglong)uVar24 >> 0x20) + st::storage_bit_cast<uint>(static_cast<uint32_t>((int)uVar24 != 0)));
    iVar12 = (iVar16 - iVar12) - st::storage_bit_cast<uint>(static_cast<uint32_t>(uVar22 < uVar18));
    local_EDXEAX_749 = st::fn_0072E4F0(uVar22 - uVar18,iVar12,uVar7,uVar21);
    local_48 = st::fn_0072E440
                         ((uint)(local_EDXEAX_749 + lVar27),
                          (uint)((ulonglong)(local_EDXEAX_749 + lVar27) >> 0x20),uVar6,uVar19);
    local_EDXEAX_798 = st::fn_0072E4F0(uVar22 - uVar18,iVar12,uVar8,uVar23);
    uVar24 = st::fn_0072E440
                       ((uint)(local_EDXEAX_798 + lVar26),
                        (uint)((ulonglong)(local_EDXEAX_798 + lVar26) >> 0x20),uVar6,uVar19);
  }
  uVar6 = uVar9 - (uint)uVar24;
  iVar14 = (((int)uVar9 >> 0x1f) - (int)((ulonglong)uVar24 >> 0x20)) - st::storage_bit_cast<uint>(static_cast<uint32_t>(uVar9 < (uint)uVar24));
  iVar15 = (((int)uVar10 >> 0x1f) - STPiece<4,4>(local_48)) - st::storage_bit_cast<uint>(static_cast<uint32_t>(uVar10 < (uint)local_48));
  iVar16 = (((int)uVar11 >> 0x1f) - iVar16) - st::storage_bit_cast<uint>(static_cast<uint32_t>(uVar11 < uVar22));
  iVar12 = ((int)*(short *)&this->field_0x237 << 2) / 5;
  local_EDXEAX_913 = st::fn_0072E4F0(uVar11 - uVar22,iVar16,uVar11 - uVar22,iVar16);
  local_EDXEAX_932 =
       st::fn_0072E4F0(uVar10 - (uint)local_48,iVar15,uVar10 - (uint)local_48,iVar15);
  local_EDXEAX_948 = st::fn_0072E4F0(uVar6,iVar14,uVar6,iVar14);
  if ((local_EDXEAX_932 + local_EDXEAX_913 + local_EDXEAX_948 <= (longlong)(iVar12 * iVar12)) &&
     (lVar5 = (longlong)(int)(uVar10 - (int)param_1->field_0043) *
              (longlong)((int)sVar2 - (int)param_1->field_0043) +
              (longlong)(int)(uVar11 - (int)param_1->field_0041) *
              (longlong)((int)sVar1 - (int)param_1->field_0041),
     lVar4 = (longlong)(int)(uVar9 - (int)param_1->field_0045) *
             (longlong)((int)sVar3 - (int)param_1->field_0045),
     -1 < st::storage_bit_cast<int>(static_cast<uint32_t>((int)((ulonglong)lVar5 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
               (uint)CARRY4((uint)lVar5,(uint)lVar4))))) {
    return 1;
  }
  return 0;
}

// 00483E30 STBoatC::sub_00483E30
#line 4 "decomp/ST.exe/functions/00483E30/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00483eb6) */
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=9; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall st::fn_00483E30(STBoatC *this,RecoveredRecord_STBoatC_00482DB0 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;

  uVar2 = (int)this->field_0041 - (int)param_1->field_0041;
  uVar1 = this->field_080C;
  uVar3 = (int)this->field_0043 - (int)param_1->field_0043;
  uVar4 = (int)this->field_0041 - (int)param_1->field_0045;
  uVar5 = (int)this->field_0045 - (int)param_1->field_0045;
  lVar6 = st::fn_0072E4F0
                    (uVar3 + uVar4,
                     ((int)uVar3 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4),uVar5,
                     (int)uVar5 >> 0x1f);
  lVar7 = st::fn_0072E4F0(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
  lVar8 = st::fn_0072E4F0(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
  if (lVar7 + lVar6 <= lVar8) {
    return 1;
  }
  return 0;
}

// 00483F10 STBoatC::sub_00483F10
#line 4 "decomp/ST.exe/functions/00483F10/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00483fc6) */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004608B0 -> 00483F10 @ 00461551; STBoatC::Defence this; stable alias ESI | 00471AC0 ->
   00483F10 @ 004726CF; STBoatC::Guard this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall st::fn_00483F10(STBoatC *this)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;

  /* ST_CALLSITE[00483F2F]: CALL 0x0040219e; direct=0040219E STAllPlayersC::IsTorpLive */
  iVar3 = st::fn_0040219E(g_allPlayers_007FA174,this->field_046F,this->field_0471);
  if (iVar3 != 0) {
    puVar1 = this->field_046B;
    uVar4 = (int)this->field_0045 - (int)STField<short>(puVar1,0x45);
    uVar5 = (int)this->field_0043 - (int)STField<short>(puVar1,0x43);
    uVar6 = (int)this->field_0041 - (int)STField<short>(puVar1,0x41);
    uVar2 = this->field_0810;
    lVar7 = st::fn_0072E4F0(uVar6,(int)uVar6 >> 0x1f,uVar6,(int)uVar6 >> 0x1f);
    lVar8 = st::fn_0072E4F0(uVar5,(int)uVar5 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
    lVar9 = st::fn_0072E4F0(uVar4,(int)uVar4 >> 0x1f,uVar4,(int)uVar4 >> 0x1f);
    lVar10 = st::fn_0072E4F0(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
    if (lVar10 < lVar8 + lVar7 + lVar9) {
      return 0;
    }
  }
  return 1;
}

// 00484020 STBoatC::sub_00484020
#line 4 "decomp/ST.exe/functions/00484020/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=004842C6 MOVSX EDX,word ptr [EBP + 0x8] | 00484301
   MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/short
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

undefined4 __thiscall
st::fn_00484020(STBoatC *this,short param_1,short *param_2,short *param_3,short *param_4)

{
  int _param_1 = static_cast<int>(param_1);

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;

  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  byte *puVar12;
  int iVar13;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  short sStack_56;
  undefined2 uStack_52;
  uint local_50 [2];
  uint local_48 [2];
  int local_40;
  int local_3c;
  uint local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ushort local_20;
  STWorldObject *local_1c;
  short local_18 [2];
  short local_14 [2];
  STWorldObject *local_10;
  undefined *local_c;
  int local_8;

  local_38 = 0;
  if (_param_1 == 6) {
    local_8 = 0x2c;
    local_c = (undefined *)&DAT_007a9538;
  }
  else if (_param_1 == 7) {
    local_8 = 0x2c;
    local_c = (undefined *)&DAT_007a9640;
  }
  else if (_param_1 == 8) {
    local_8 = 0x98;
    local_c = (undefined *)&DAT_007a9748;
  }
  else {
    local_8 = -1;
    local_c = nullptr;
  }
  sVar3 = this->field_0800;
  sVar4 = this->field_0802;
  _param_1 = STReplaceLowWord((uint32_t)(this), (uint16_t)(sVar4));
  sVar1 = this->field_0804;
  if (((((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
        ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0], local_10 == nullptr)) &&
     ((((sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
       ((sVar4 < 0 ||
        (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[1], local_10 == nullptr)))) {
    return 0;
  }
  st::fn_004031E3(local_10,reinterpret_cast<uint *>(local_14),local_18,&param_1);
  local_30 = 0;
  if (0 < local_8) {
    local_34 = reinterpret_cast<short *>((local_c + 2));
    do {
      sVar3 = local_34[1] + this->field_004B;
      *param_4 = sVar3;
      if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeZ + -1)) {
        sVar3 = this->field_0049 + *local_34;
        *param_3 = sVar3;
        if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeY + -1)) {
          sVar4 = local_34[-1] + this->field_0047;
          *param_2 = sVar4;
          if (-1 < sVar4) {
            local_28 = (int)g_worldGrid.sizeX;
            local_2c = (int)sVar4;
            if (local_2c <= local_28 + -1) {
              sVar1 = *param_3;
              sVar2 = *param_4;
              if ((-1 < STGridAt3D(g_pathingGrid, local_2c, sVar1, sVar2)) &&
                 ((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                   ((sVar1 < 0 ||
                    (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
                   )) || (g_worldGrid.cells
                          [(int)sVar2 * (int)g_worldGrid.planeStride + sVar1 * local_28 + (int)sVar4
                          ].objects[0] == nullptr)))) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar13 = CONCAT22(sVar3 >> 0xf,sVar4) * 0xc9 + 100;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (undefined *)
                          (CONCAT22((short)(st::storage_bit_cast<uint>(static_cast<uint32_t>(local_28 + -1)) >> 0x10),sVar1) * 0xc9 + 100);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = CONCAT22(sVar4 >> 0xf,sVar2) * 200 + 100;
                local_40 = iVar13;
                local_3c = iVar10;

                iVar6 = st::fn_006ACF0D((short)iVar13,(short)local_c,(short)iVar10,
                                     (int)local_14[0],(int)local_18[0],(int)param_1);
                if ((iVar6 <= this->field_0814) &&
                   ((iVar6 < 1 ||
                    (uVar7 = (int)param_1 - (short)iVar10, uVar11 = (int)uVar7 >> 0x1f,
                    st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar7 ^ uVar11) - uVar11) * 10)) / iVar6 < 4)))) {
                  /* ST_CALLSITE[00484336]: CALL dword ptr [EAX + 0x10] */
                  uVar5 = (*this->vtable->vfunc_10)
                                    ((short)iVar13,(short)local_c,iVar10,local_14[0],local_18[0],
                                     _param_1);
                  local_20 = uVar5;
                  local_2c = 0;
                  if (this->field_02B2 == '\0') {
                    return 1;
                  }
                  puVar12 = &this->field_0x2a8;
                  do {

                    piVar8 = reinterpret_cast<int *>(st::fn_0040342C(local_48,(short)*(undefined4 *)(puVar12 + -2),
                                                *(ushort *)(puVar12 + 2),(short)local_20));
                    sStack_56 = (short)((uint)*piVar8 >> 0x10);
                    local_28 = *piVar8 + iVar13;
                    sVar3 = (short)local_c - sStack_56;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_24 = CONCAT22(uStack_52,(short)piVar8[1]) + local_3c;

                    puVar9 = st::fn_0040342C(local_50,0,0,(short)local_20);
                    sStack_56 = (short)((uint)*puVar9 >> 0x10);
                    sVar4 = local_14[0] + (short)*puVar9;
                    sStack_56 = local_18[0] - sStack_56;
                    if (this->field_0736 == 0) {
                      /* ST_CALLSITE[0048440F]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar10 = st::fn_00405907
                                         (reinterpret_cast<STSprGameObjC *>(this),(short)local_28,sVar3,
                                          (short)local_24,sVar4,sStack_56,(short)_param_1,
                                          this->field_079A,reinterpret_cast<int *>(&local_1c),0);
                      if ((iVar10 == 0) && (local_1c != local_10)) break;
                    }
                    else {
                      /* ST_CALLSITE[00484442]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar10 = st::fn_00405907
                                         (reinterpret_cast<STSprGameObjC *>(this),(short)local_28,sVar3,
                                          (short)local_24,sVar4,sStack_56,(short)_param_1,
                                          this->field_079A,reinterpret_cast<int *>(&local_1c),1);
                      if ((iVar10 == 0) && (local_1c != local_10)) break;
                    }
                    local_2c = local_2c + 1;
                    puVar12 = puVar12 + 6;
                    iVar13 = local_40;
                    if ((int)(uint)(byte)this->field_02B2 <= local_2c) {
                      return 1;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 3;
    } while (local_30 < local_8);
  }
  return local_38;
}

// 004845E0 STBoatC::vfunc_28
#line 4 "decomp/ST.exe/functions/004845E0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STGameObjC_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004057D1
   Slots: 0x28
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/2106; unique_owner_for_target

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_vfunc_28_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77
    */

ushort __thiscall
st::fn_004845E0(STBoatC *this,STBoatC_vfunc_28_param_1Enum param_1,
                 RecoveredRecord_004845E0_7E8F2946 *param_2)

{
  byte bVar1;
  byte bVar2;
  STBoatC_field_06F7State SVar3;
  RecoveredRecord_004845E0_7E8F2946 *this_00;
  int iVar5;
  int local_EAX_1102;
  dword dVar6;
  int local_EAX_2778;
  int iVar4;
  int local_EAX_2933;
  int iVar7;
  int local_EAX_4151;
  int local_EAX_4220;
  int local_EAX_4242;
  int local_EAX_4800;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  byte local_10 [4];
  int local_c;
  uint local_8;
  this_00 = param_2;
  if ((param_2 != nullptr) &&
     (*(int *)&param_2->field_0x20 == 1000)) {
    if (*(int *)&param_2[2].field_0x22 != 0) {
      return 0;
    }
    if (param_2->field_0245 == 6) {
      return 0;
    }
  }
  switch(param_1) {
  case CASE_0:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      if (this_00 == nullptr) {
        return 0;
      }
      if ((STBoatC *)this_00 == this) {
        return 3;
      }
      if (this->field_0024 != *(int *)&this_00->field_0x24) {
        return 0;
      }
      /* ST_CALLSITE[0048556C]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
      iVar7 = ((STBoatC *)this_00)->vfunc_EC();
      if (iVar7 != 0) {
        iVar7 = *(int *)&this_00->field_0x20;
        if (iVar7 == 1000) {
          return 4;
        }
        if (iVar7 == 0x3e9) {
          return 4;
        }
        if (iVar7 != 0x14) {
          return 0;
        }
        return 3;
      }
      return 0;
    }
    if ((STBoatC *)this_00 == this) {
      return 3;
    }
    if (this_00 == nullptr) {
      return 5;
    }
    iVar7 = *(int *)&this_00->field_0x20;
    if ((((iVar7 != 0x14) && (iVar7 != 1000)) && (iVar7 != 0x3e9)) && (iVar7 != 0x1ae)) {
      return 5;
    }
    SVar3 = this->field_06F7;
    if ((((SVar3 != CASE_9) && (SVar3 != CASE_15)) &&
        ((this->field_0716 < this->field_0712 &&

         ((local_EAX_4151 = st::fn_00401F5A(SVar3), local_EAX_4151 != 3 &&
          /* ST_CALLSITE[00485625]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x33))))))
       && (this->field_0024 == *(int *)&this_00->field_0x24)) {
      return 0x18;
    }
    /* ST_CALLSITE[00485648]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((((iVar7 == 0x62) && (this->field_0024 == *(int *)&this_00->field_0x24)) &&
        /* ST_CALLSITE[0048565C]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        (local_EAX_4220 = st::fn_00403594(reinterpret_cast<TLOBaseTy *>(this)), 0 < local_EAX_4220)) &&

       (local_EAX_4242 = st::fn_00401F5A(this->field_06F7), local_EAX_4242 == 3)) {
      return 0x1b;
    }
    /* ST_CALLSITE[0048568D]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if (((iVar7 == 0x37) ||
        /* ST_CALLSITE[00485699]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x6c)) &&

       (iVar7 = st::fn_00401EAB(this_00,this->field_0024), iVar7 == 1)) {
      return 0x1d;
    }
    /* ST_CALLSITE[004856C9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if (((iVar7 == 0x16) ||
        /* ST_CALLSITE[004856D5]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x25)) &&
       (*(int *)&this_00[3].field_0x57 == 1)) {
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_004857a5:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004857a5;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if (bVar11) goto LAB_0048589a;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar10) {
LAB_0048586d:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar10];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar10][bVar1] != 1)) goto LAB_0048586d;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar10].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar11) {
        /* ST_CALLSITE[00485881]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar7 = ((STBoatC *)this_00)->vfunc_EC();
        return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
      }
LAB_0048589a:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));

      local_EAX_4800 = st::fn_00405AE7(this_00,this->field_0024);
      return (-(ushort)(local_EAX_4800 != 1) & 0xfff9) + 7;
    }
    SVar3 = this->field_06F7;
    if (((SVar3 == CASE_8) || (SVar3 == CASE_14)) || (SVar3 == CASE_1A)) {
      /* ST_CALLSITE[004860BA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
      if (((iVar7 != 0x38) &&
          /* ST_CALLSITE[004860CA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x39)) &&
         /* ST_CALLSITE[004860DA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
         ((iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x4f &&
          /* ST_CALLSITE[004860EA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x5e)))) {
        /* ST_CALLSITE[004860FA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (((iVar7 == 0x3b) ||
            /* ST_CALLSITE[00486106]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x60))
           && ((this->field_0024 == *(int *)&this_00->field_0x24 &&
               (0 < this->field_07DA + this->field_07D6 + this->field_07D2)))) {
          return 0x13;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f != '\0') {
          iVar7 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        if (bVar10 == bVar1) {
LAB_00485d4a:
          iVar7 = 0;
        }
        else {
          uVar8 = (uint)bVar10;
          uVar9 = (uint)bVar1;
          bVar10 = g_playerRelationMatrix[uVar8][uVar9];
          if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar10 == 1) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 1)) {
            iVar7 = 1;
          }
          else {
LAB_004861ee:
            if ((bVar10 != 1) || (g_playerRelationMatrix[uVar9][uVar8] != 1)) goto LAB_00485d4a;
            iVar7 = 2;
          }
        }
LAB_00485d4c:
        bVar11 = iVar7 < 0;
LAB_00485d55:
        if (bVar11) {
          return 0;
        }
        if (*(int *)&this_00->field_0x20 == 0x14) {
LAB_00485d68:
          /* ST_CALLSITE[00485D6C]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = ((STBoatC *)this_00)->vfunc_EC();
          if (iVar7 == 1) {
            return 3;
          }
        }
        goto LAB_00485caa;
      }
      if (this->field_0024 != *(int *)&this_00->field_0x24) {
        return 0;
      }
      /* ST_CALLSITE[00486221]: CALL dword ptr [EDX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x88, local_10);
      if (0 < iVar7) {
        return 0x12;
      }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_00485f6a:
      /* ST_CALLSITE[00485F6E]: CALL dword ptr [EDX + 0xec] */
      iVar7 = (**(code **)(*(int *)this_00 + 0xec))();
    }
    else {
      if (((SVar3 == CASE_7) || (SVar3 == CASE_13)) || (SVar3 == CASE_1B)) {
        if (this->field_07CA != nullptr) {
          /* ST_CALLSITE[00485E18]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
          if ((iVar7 == 0x52) || (iVar7 == 0x5f)) {

            st::fn_006E62D0(g_playSystem_00802A38,this->field_07CA,&local_c);
            if ((local_c != 0) && (STField<int>(local_c,0x20) == 0x1a4)) {
              return 0x1e;
            }
          }
          else if (iVar7 == 99) {
            return 0x1e;
          }
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) {
LAB_00485f1f:
              iVar7 = 0;
            }
            else {
              bVar2 = g_playerRelationMatrix[bVar10][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00485f1f;
                iVar7 = 2;
              }
            }
            bVar11 = iVar7 < 0;
          }
          else {
            bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar10].field_0023;
          }
          if (bVar11) {
            return 0;
          }
          if ((*(int *)&this_00->field_0x20 == 0x14) &&
             /* ST_CALLSITE[00485F3D]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
             (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
            return 3;
          }
          if ((*(int *)&this_00->field_0x20 != 1000) && (*(int *)&this_00->field_0x20 != 0x3e9)) {
            return 0;
          }
          goto LAB_00485f6a;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar10 == bVar1) {
LAB_0048602b:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_0048602b;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
        }
        else {
          bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar10].field_0023;
        }
        if (bVar11) {
          return 0;
        }
        if (*(int *)&this_00->field_0x20 == 0x14) {
          if (SVar3 != CASE_1B) {
            /* ST_CALLSITE[0048608A]: CALL dword ptr [EDX + 0xbc] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar7 = (**(code **)(*(int *)this_00 + 0xbc))();
            if ((iVar7 == 1) &&
               /* ST_CALLSITE[0048609D]: CALL dword ptr [EAX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
               (iVar7 = ((STGameObjC *)this_00)->vfunc_7C(), iVar7 < 100))
            {
              return 0x17;
            }
            goto LAB_00485d68;
          }
          /* ST_CALLSITE[00486052]: CALL dword ptr [EDX + 0xbc] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*(int *)this_00 + 0xbc))();
          if (iVar7 == 1) {
            return 0x1a;
          }
          /* ST_CALLSITE[0048606E]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = ((STBoatC *)this_00)->vfunc_EC();
          if (iVar7 == 1) {
            return 3;
          }
        }
LAB_00485caa:
        iVar7 = *(int *)&this_00->field_0x20;
      }
      else {
        if (((SVar3 == CASE_C) || (SVar3 == CASE_18)) || (SVar3 == CASE_19)) {
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) goto LAB_00485d4a;
            uVar8 = (uint)bVar10;
            uVar9 = (uint)bVar1;
            bVar10 = g_playerRelationMatrix[uVar8][uVar9];
            if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar10 == 1) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -1;
            }
            else {
LAB_00485d2d:
              if ((bVar10 != 0) || (g_playerRelationMatrix[uVar9][uVar8] != 1)) goto LAB_004861ee;
              iVar7 = 1;
            }
            goto LAB_00485d4c;
          }
          iVar7 = (uint)bVar1 * 9;
LAB_00486163:
          bVar11 = (&g_bulkInitializedRecords_008087C7[0].field_0023)[iVar7 * 9] !=
                   g_bulkInitializedRecords_008087C7[(uint)param_2 & 0xff].field_0023;
          goto LAB_00485d55;
        }
        if (SVar3 == CASE_9) {
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f != '\0') {
            bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar10].field_0023;
            goto LAB_004859d8;
          }
          if (bVar10 == bVar1) {
LAB_004859cd:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004859cd;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
LAB_004859d8:
          if (!bVar11) {
            iVar7 = *(int *)&this_00->field_0x20;
            if (iVar7 == 0x14) {
              /* ST_CALLSITE[004859E9]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
              iVar7 = ((STBoatC *)this_00)->vfunc_EC();
              return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
            }
            if ((iVar7 == 1000) || (iVar7 == 0x3e9)) {
              /* ST_CALLSITE[00485A14]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
              iVar7 = ((STBoatC *)this_00)->vfunc_EC();
              return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
            }
          }
          if ((*(int *)&this_00->field_0x20 != 1000) && (*(int *)&this_00->field_0x20 != 0x3e9)) {
            return 0;
          }
          /* ST_CALLSITE[00485A46]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
          if ((iVar7 != 0x3b) &&
             /* ST_CALLSITE[00485A52]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60))
          {
            return 0;
          }
          return 7;
        }
        if (SVar3 != CASE_1D) {
          if ((SVar3 != CASE_24) && (SVar3 != CASE_25)) {
            bVar10 = this_00->field_0x24;
            bVar1 = (byte)this->field_0024;
            param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
            param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
            if (DAT_00808a8f == '\0') {
              if (bVar10 == bVar1) {
LAB_00485c58:
                iVar7 = 0;
              }
              else {
                bVar2 = g_playerRelationMatrix[bVar10][bVar1];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                  iVar7 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                  iVar7 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
                  iVar7 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1))
                  goto LAB_00485c58;
                  iVar7 = 2;
                }
              }
              bVar11 = iVar7 < 0;
            }
            else {
              bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar10].field_0023;
            }
            if (bVar11) {
              if (SVar3 == CASE_15) {
                return 7;
              }
              if (0 < this->field_07A2) {
                return 7;
              }
              return 0;
            }
            if ((*(int *)&this_00->field_0x20 == 0x14) &&
               /* ST_CALLSITE[00485C92]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
               (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
              return 3;
            }
            goto LAB_00485caa;
          }
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) goto LAB_00485d4a;
            uVar8 = (uint)bVar10;
            uVar9 = (uint)bVar1;
            bVar10 = g_playerRelationMatrix[uVar8][uVar9];
            if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -2;
            }
            else {
              if ((bVar10 != 1) || (g_playerRelationMatrix[uVar9][uVar8] != 0)) goto LAB_00485d2d;
              iVar7 = -1;
            }
            goto LAB_00485d4c;
          }
          iVar7 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar10 == bVar1) {
LAB_00485b29:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00485b29;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
        }
        else {
          bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar10].field_0023;
        }
        if (bVar11) {
          return 0;
        }
        if ((*(int *)&this_00->field_0x20 == 0x14) &&
           /* ST_CALLSITE[00485B47]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
           (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
          return 3;
        }
        iVar7 = *(int *)&this_00->field_0x20;
      }
      if ((iVar7 != 1000) && (iVar7 != 0x3e9)) {
        return 0;
      }
      /* ST_CALLSITE[00485B78]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
      iVar7 = ((STBoatC *)this_00)->vfunc_EC();
    }
    if (iVar7 == 1) {
      return 4;
    }
    break;
  case CASE_2:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (-(ushort)(iVar7 != 0) & 0xfffa) + 6;
  case CASE_3:
  case CASE_2B:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    iVar7 = *(int *)&this_00->field_0x20;
    if (((iVar7 != 0x14) && (iVar7 != 1000)) && ((iVar7 != 0x3e9 && (iVar7 != 0x1ae)))) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    SVar3 = this->field_06F7;
    if (SVar3 == CASE_7) {
      return 1;
    }
    if (SVar3 == CASE_13) {
      return 1;
    }
    if (SVar3 == CASE_8) {
      return 1;
    }
    if (SVar3 == CASE_14) {
      return 1;
    }
    if (SVar3 == CASE_C) {
      return 1;
    }
    if (SVar3 == CASE_18) {
      return 1;
    }
    if (SVar3 == CASE_19) {
      return 1;
    }
    if (SVar3 == CASE_1A) {
      return 1;
    }
    if (SVar3 == CASE_1B) {
      return 1;
    }
    if (SVar3 == CASE_25) {
      return 1;
    }
    if (SVar3 != CASE_9) {
      if ((SVar3 != CASE_15) && (this->field_07A2 < 1)) {
        return 1;
      }
      /* ST_CALLSITE[00484867]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
      if (((iVar7 != 0x16) &&
          /* ST_CALLSITE[00484873]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x25)) ||
         (*(int *)&this_00[3].field_0x57 != 1)) {
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)(uint)(byte)this_00->field_0x24;
        param_1 = (STBoatC_vfunc_28_param_1Enum)(byte)this->field_0024;
        if (DAT_00808a8f != '\0') {
          bVar11 = g_bulkInitializedRecords_008087C7[param_1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[(int)param_2].field_0023;
          return (((ushort)bVar11 - (ushort)bVar11) - (ushort)bVar11 & 5) + 2;
        }
        if (this_00->field_0x24 != (byte)this->field_0024) {
          bVar10 = g_playerRelationMatrix[(int)param_2][param_1];
          if ((bVar10 == 0) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\0')) {
            iVar7 = -2;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 1) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\0')) {
            iVar7 = -1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 0) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\x01')) {
            iVar7 = 1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 1) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\x01')) {
            iVar7 = 2;
            goto cf_common_exit_00484B10;
          }
        }
        iVar7 = 0;
cf_common_exit_00484B10:
        bVar11 = iVar7 < 0;
        return (((ushort)bVar11 - (ushort)bVar11) - (ushort)bVar11 & 5) + 2;
      }
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_8)), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_00484943:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484943;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if (bVar11) goto LAB_00484a28;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar10) {
LAB_00484a0b:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar10];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar10][bVar1] != 1)) goto LAB_00484a0b;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar10].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar11) {
        return 2;
      }
LAB_00484a28:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));

      local_EAX_1102 = st::fn_00405AE7(this_00,this->field_0024);
      return (-(ushort)(local_EAX_1102 != 1) & 0xfffa) + 7;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      goto LAB_004847df;
    }
    if (bVar10 == bVar1) {
LAB_004847d4:
      iVar5 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar10][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar5 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar5 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
        iVar5 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004847d4;
        iVar5 = 2;
      }
    }
    bVar11 = iVar5 < 0;
LAB_004847df:
    if (!bVar11) {
      if (iVar7 == 0x14) {
        return 3;
      }
      if (iVar7 == 1000) {
        return 4;
      }
      if (iVar7 == 0x3e9) {
        return 4;
      }
    }
    if (iVar7 != 1000) {
      return 1;
    }
    /* ST_CALLSITE[0048481E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((iVar7 != 0x3b) &&
       /* ST_CALLSITE[0048482E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
       (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60)) {
      return 1;
    }
    return 7;
  case CASE_4:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        if (this->field_06F7 == CASE_9) {
          return 1;
        }
        if (this->field_06F7 == CASE_15) {
          return 1;
        }
        if (this->field_0712 <= this->field_0716) {
          return 1;
        }
        /* ST_CALLSITE[00484D19]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (iVar7 != 0x33) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        return 0x18;
      }
    }
    break;
  case CASE_5:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        iVar7 = *(int *)&this_00->field_0x20;
        if (((iVar7 != 0x14) && (iVar7 != 1000)) && (iVar7 != 0x3e9)) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }

        iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(this));
        if (iVar7 != 1) {
          return 1;
        }
        return 0xd;
      }
    }
    break;
  case CASE_6:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (-(ushort)(iVar7 != 0) & 0xfff1) + 0xf;
  case CASE_7:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_6) && (SVar3 != CASE_12)) && (SVar3 != CASE_22)) {
          return 1;
        }
        /* ST_CALLSITE[004850A5]: CALL dword ptr [EAX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
        iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x108, this->field_0024);
        if (iVar7 != 1) {
          return 1;
        }

        local_EAX_2778 = st::fn_00403CEC(this_00,this->field_0024);
        if (local_EAX_2778 != 1) {
          if (local_EAX_2778 == 2) {
            return 10;
          }
          if (local_EAX_2778 != 3) {
            return 1;
          }
          return 0xb;
        }
        return 9;
      }
    }
    break;
  case CASE_8:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (-(ushort)(iVar7 != 0) & 0xffef) + 0x11;
  case CASE_9:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (-(ushort)(iVar7 != 0) & 0xfff8) + 8;
  case CASE_A:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (this->field_06F7 != CASE_17) {
      return 1;
    }
    if (*(int *)&this_00->field_0x20 != 0x14) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (this->field_072A < 1) {
      return 1;
    }
    /* ST_CALLSITE[004852EB]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((iVar7 != 0x16) &&
       /* ST_CALLSITE[004852F7]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
       (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x25)) {
      return 0xc;
    }
    if (*(int *)&this_00[3].field_0x57 != 1) {
      return 0xc;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_1 = (STBoatC_vfunc_28_param_1Enum)bVar10;
    local_8 = (uint)bVar1;
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[local_8].field_0023 !=
               g_bulkInitializedRecords_008087C7[param_1].field_0023;
      goto LAB_004853d2;
    }
    if (bVar10 == bVar1) {
LAB_004853c7:
      iVar7 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[param_1][local_8];
      if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar7 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar7 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 1)) {
        iVar7 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[local_8][param_1] != 1)) goto LAB_004853c7;
        iVar7 = 2;
      }
    }
    bVar11 = iVar7 < 0;
LAB_004853d2:
    if (!bVar11) {
      param_1 = (STBoatC_vfunc_28_param_1Enum)bVar10;
      if (DAT_00808a8f != '\0') {
        return 0xc;
      }
      if (bVar1 != bVar10) {
        bVar10 = g_playerRelationMatrix[bVar1][param_1];
        if ((bVar10 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar10 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar10 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
        if ((bVar10 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
      }
    }
    return 0xc;
  case CASE_D:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      return 0;
    }
    if (this->field_07CA != nullptr) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (*(int *)&this_00->field_0x20 != 0x14) {
      return 1;
    }
    /* ST_CALLSITE[00484F36]: CALL dword ptr [EAX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_7C();
    if (99 < iVar7) {
      return 1;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      goto LAB_00485002;
    }
    if (bVar10 == bVar1) {
LAB_00484ff7:
      iVar7 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar10][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar7 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar7 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
        iVar7 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484ff7;
        iVar7 = 2;
      }
    }
    bVar11 = iVar7 < 0;
LAB_00485002:
    if (bVar11) {
      return 1;
    }
    /* ST_CALLSITE[0048500E]: CALL dword ptr [EDX + 0xbc]; [STIndirectCallsiteApplier] exact slot 0xBC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_BC();
    if (iVar7 != 1) {
      return 1;
    }
    return 0x17;
  case CASE_E:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0024 != 0))
      {
        return 0x14;
      }
      return 0x15;
    }
    break;
  case CASE_10:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      return 0;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (*(int *)&this_00->field_0x20 != 1000) {
      return 1;
    }
    if (*(int *)&this_00->field_0x24 != this->field_0024) {
      return 1;
    }

    iVar7 = st::fn_0040141A(reinterpret_cast<RecoveredRecordView_004B9D90_09AED060 *>(this_00));
    if (iVar7 == 0) {
      return 1;
    }
    /* ST_CALLSITE[00485252]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
    st::fn_00405F0B
              (reinterpret_cast<STFishC *>(this_00),(short *)((int)&local_8 + 2),(short *)((int)&param_1 + 2),
               (short *)((int)&param_2 + 2));
    return (((int)STPiece<2,2>(param_2) <= g_worldGrid.sizeZ + -2) - 1 & 0xffeb) + 0x16;
  case CASE_11:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_8) && (SVar3 != CASE_14)) && (SVar3 != CASE_1A)) {
          return 1;
        }
        /* ST_CALLSITE[00484B7A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((((iVar7 != 0x38) &&
             /* ST_CALLSITE[00484B86]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x39))
            /* ST_CALLSITE[00484B92]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            && (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x4f)
            /* ST_CALLSITE[00484B9E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            ) && (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(),
                 iVar7 != 0x5e)) {
          return 1;
        }
        if (this->field_0024 == *(int *)&this_00->field_0x24) {
          /* ST_CALLSITE[00484BD2]: CALL dword ptr [EDX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
          iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x88, local_10);
          return ((0 < iVar7) - 1 & 0xffef) + 0x12;
        }
        return 1;
      }
    }
    break;
  case CASE_12:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_8) && (SVar3 != CASE_14)) && (SVar3 != CASE_1A)) {
          return 1;
        }
        /* ST_CALLSITE[00484C37]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((iVar7 != 0x3b) &&
           /* ST_CALLSITE[00484C43]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60)) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        if (this->field_07DA + this->field_07D6 + this->field_07D2 < 1) {
          return 1;
        }
        return 0x13;
      }
    }
    break;
  case CASE_13:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 != 0) {
      return 0;
    }
    if (this->field_07CA != nullptr) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (*(int *)&this_00->field_0x20 == 0x14) {
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_00484e9f:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484e9f;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if ((!bVar11) ||
         /* ST_CALLSITE[00484EB2]: CALL dword ptr [EAX + 0x120]; [STIndirectCallsiteApplier] exact slot 0x120; mode=dispatch; signature=__thiscall;/dword;pointer:/STBoatC */
         (dVar6 = ((STBoatC *)this_00)->vfunc_120(), dVar6 == 1))
      goto LAB_00484ed2;
    }
    if ((*(int *)&this_00->field_0x20 != 0x172) && (*(int *)&this_00->field_0x20 != 0x1a4)) {
      return 1;
    }
LAB_00484ed2:
    /* ST_CALLSITE[00484ED6]: CALL dword ptr [EDX + 0xbc]; [STIndirectCallsiteApplier] exact slot 0xBC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_BC();
    if (iVar7 != 1) {
      return 1;
    }
    return 0x1a;
  case CASE_18:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      return -(ushort)((STBoatC *)this_00 != this) & 0x1d;
    }
    break;
  case CASE_2C:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (ushort)(iVar7 == 0);
  case CASE_2D:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    return (-(ushort)(iVar7 != 0) & 0xfff0) + 0x10;
  case CASE_48:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        /* ST_CALLSITE[0048511F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (iVar7 != 0x62) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        /* ST_CALLSITE[0048513B]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        iVar4 = st::fn_00403594(reinterpret_cast<TLOBaseTy *>(this));
        if (iVar4 < 1) {
          return 1;
        }

        local_EAX_2933 = st::fn_00401F5A(this->field_06F7);
        if (local_EAX_2933 != 3) {
          return 1;
        }
        return 0x1b;
      }
    }
    break;
  case CASE_4D:

    iVar7 = st::fn_0040226B(reinterpret_cast<STGameObjC *>(this));
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        /* ST_CALLSITE[0048519C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((iVar7 != 0x37) &&
           /* ST_CALLSITE[004851A8]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x6c)) {
          return 1;
        }

        iVar7 = st::fn_00401EAB(this_00,this->field_0024);
        if (iVar7 != 1) {
          return 1;
        }
        return 0x1d;
      }
    }
  }
  return 0;
}

// 00486A40 STBoatC::vfunc_78
#line 4 "decomp/ST.exe/functions/00486A40/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004057FE
   Slots: 0x78
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00486A40(STBoatC *this)

{
  return this->field_0716;
}

// 00486AA0 STBoatC::vfunc_84
#line 4 "decomp/ST.exe/functions/00486AA0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405BAF
   Slots: 0x84
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1818/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_00486AA0(STBoatC *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 1;
  }
  else if (100 < param_1) {
    param_1 = 100;
  }
  this->field_0716 = (this->field_0712 * param_1) / 100;
  return;
}

// 00486AF0 STBoatC::vfunc_80
#line 4 "decomp/ST.exe/functions/00486AF0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004027B6
   Slots: 0x80
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1818/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_00486AF0(STBoatC *this,int param_1)

{
  if (param_1 < 0) {
    this->field_0716 = 1;
    return;
  }
  if (this->field_0712 < param_1) {
    this->field_0716 = this->field_0712;
    return;
  }
  this->field_0716 = param_1;
  return;
}

// 00488890 STBoatC::vfunc_40
#line 4 "decomp/ST.exe/functions/00488890/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405CEF
   Slots: 0x40
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=40/2106; unique_owner_for_target; unique physical vtable owner and slot type only
   the existing __thiscall receiver; explicit parameters and return are retained
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:1: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=6,
   pointer_dereferences=7, scalar_uses=0; sites=00488922 dereference: CMP dword ptr [EDI +
   EBX*0x4],0x0 | 00488935 dereference: MOV dword ptr [EDI + EBX*0x4],EAX | 00488AE5 dereference:
   MOV EDX,dword ptr [ECX + EBX*0x4] | 00488B0D dereference: MOV ECX,dword ptr [ECX + EBX*0x4] |
   00488B41 dereference: MOV ECX,dword ptr [ECX + EBX*0x4] | 00488BBE dereference: MOV ECX,dword ptr
   [EAX + EBX*0x4] | 00488BD3 dereference: MOV ECX,dword ptr [EDX + EBX*0x4] */

void __thiscall st::fn_00488890(STBoatC *this,void *param_1)

{
  uint index;
  uint *puVar1;
  uint *puVar2;
  STBoatC *pSVar3;
  byte bVar4;
  int local_EAX_38;
  int uVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  int local_EAX_393;
  int local_EAX_430;
  int local_EAX_483;
  int local_EAX_519;
  int local_EAX_732;
  int uVar7;
  int iVar8;
  void **ppvVar9;
  void *pvVar10;
  uint index_00;
  int local_7c [2];
  char local_74;
  void *local_4c [2];
  char local_44;
  byte local_43;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  uint local_3a [7];
  uint *local_1c;
  int local_18;
  STBoatC *local_14;
  int local_10;
  void *local_c;
  uint *local_8;

  local_18 = 0;
  local_14 = this;
  do {
    iVar8 = local_18;
    local_8 = nullptr;
    /* ST_CALLSITE[004888B6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_38 = st::fn_004049B7((char)this->field_0024);
    local_EAX_38 = (int)(byte)local_EAX_38;
    local_1c = g_bitset_00800FA0 + local_EAX_38 * 4;
    switch(iVar8) {
    case 0:
      local_8 = g_bitset_008014A0;
      break;
    case 1:
      local_8 = g_bitset_00800F90;
      break;
    case 2:
      local_8 = g_bitset_00800F80;
      break;
    case 3:
      local_8 = g_bitset_00801360;
      break;
    case 4:
      local_1c = nullptr;
      /* ST_CALLSITE[00488909]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar4 = st::fn_004049B7((char)this->field_0024);
      uVar4 = (int)(byte)uVar4;
      local_8 = g_bitset_00801370 + uVar4 * 4;
    }
    if (*(int *)((int)param_1 + iVar8 * 4) == 0) {
      pDVar5 = st::fn_006AE290(nullptr,5,0x30,5);
      *(DArrayTy **)((int)param_1 + iVar8 * 4) = pDVar5;
    }
    local_10 = 0;
    local_c = (void *)0x32;
    do {
      pvVar10 = local_c;

      if (((((local_1c == nullptr) || (iVar6 = st::fn_006B0FD0((int)local_1c), iVar6 != 0)) &&

           (iVar6 = st::fn_006B0FD0((int)local_8), iVar6 != 0)) &&

          (iVar6 = st::fn_0040571D((byte *)this->field_0024,(int)pvVar10 + -0x32), iVar6 != 0))
         && (((int)pvVar10 < 0x54 || (0x5a < (int)pvVar10)))) {
        ppvVar9 = local_4c;
        for (iVar6 = 0xc; pvVar10 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppvVar9 = nullptr;
          ppvVar9 = ppvVar9 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = nullptr;
        /* ST_CALLSITE[004889C8]: CALL 0x0040469c; direct=0040469C STAllPlayersC::sub_004E6C20 */
        iVar7 = st::fn_0040469C
                          (g_allPlayers_007FA174,(byte *)this->field_0024,(int)local_c);
        if ((iVar7 == 0) ||
           /* ST_CALLSITE[004889DB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
           (((bVar4 = st::fn_004049B7((char)this->field_0024), bVar4 == 3 &&
             (st::machine_word_boundary_cast<uint>(pvVar10) != st::machine_word_boundary_cast<uint>((void *)0x5c))) &&
            (g_packedRecords_A62x8[this->field_0024].field1965_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        /* ST_CALLSITE[00488A19]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_393 = st::fn_004049B7((char)this->field_0024);
        iVar6 = local_10;
        local_EAX_393 = (int)(byte)local_EAX_393;
        local_3e = *(undefined2 *)(&DAT_008545a8 + (local_EAX_393 + local_10) * 4);
        /* ST_CALLSITE[00488A3E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_430 = st::fn_004049B7((char)this->field_0024);
        local_EAX_430 = (int)(byte)local_EAX_430;
        local_42 = *(undefined2 *)(&DAT_007e1c4c + (local_EAX_430 + iVar6) * 4);
        /* ST_CALLSITE[00488A60]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = st::fn_004049B7((char)this->field_0024);
        if (bVar4 == 3) {
          /* ST_CALLSITE[00488A73]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_483 = st::fn_004049B7((char)this->field_0024);
          local_EAX_483 = (int)(byte)local_EAX_483;
          local_40 = *(undefined2 *)(&DAT_007e315c + (local_EAX_483 + iVar6) * 4);
        }
        else {
          /* ST_CALLSITE[00488A97]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_519 = st::fn_004049B7((char)this->field_0024);
          local_EAX_519 = (int)(byte)local_EAX_519;
          local_40 = *(undefined2 *)(&DAT_007e24f8 + (local_EAX_519 + iVar6) * 4);
        }
        local_3c = 0xffff;
        /* ST_CALLSITE[00488ABF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_43 = st::fn_004049B7((char)this->field_0024);
        st::fn_00405551(g_allPlayers_007FA174,(byte *)this->field_0024,local_4c[0],local_3a);

        st::fn_006AE1C0(*(DArrayTy **)((int)param_1 + iVar8 * 4),local_4c);
        pvVar10 = local_c;
      }
      local_c = (void *)((int)pvVar10 + 1);
      local_10 = local_10 + 3;
    } while ((int)pvVar10 + -0x31 < 0x42);
    pDVar5 = *(DArrayTy **)((int)param_1 + iVar8 * 4);
    puVar1 = (uint *)pDVar5->count;
    puVar2 = puVar1;
    while (puVar2 != nullptr) {
      local_1c = nullptr;
      index_00 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {

        st::fn_006ACC70(pDVar5,index_00,local_4c);
        index = index_00 + 1;

        st::fn_006ACC70(*(DArrayTy **)((int)param_1 + iVar8 * 4),index,local_7c);
        pSVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
LAB_00488b5f:
            /* ST_CALLSITE[00488B6C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_732 = st::fn_004049B7((char)local_14->field_0024);
            local_10 = (uint)(byte)local_EAX_732 + local_7c[0] * 3;
            /* ST_CALLSITE[00488B8E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            uVar7 = st::fn_004049B7((char)pSVar3->field_0024);
            iVar8 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uint)(byte)uVar7 + (int)local_4c[0] * 3) * 4))
            goto LAB_00488bce;
          }

          st::fn_006B0CD0(*(RecoveredRecordView_00413AF0_B98DB3AE **)((int)param_1 + iVar8 * 4),
                       index_00,index);
          local_1c = (uint *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        pDVar5 = *(DArrayTy **)((int)param_1 + iVar8 * 4);
        puVar1 = (uint *)pDVar5->count;
        index_00 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar8 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

// 00488D10 STBoatC::vfunc_4C
#line 4 "decomp/ST.exe/functions/00488D10/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401A0A
   Slots: 0x4C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2030/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_31=49;CASE_32=50;CASE_34=52
    */

void __thiscall st::fn_00488D10(STBoatC *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  STField<undefined1>(param_1,0x12) = 0;
  *param_1 = this->field_06F7;
  ((undefined1 *)param_1)[1] = 0x2b;
  STField<undefined1>(param_1,5) = 0x2c;
  STField<undefined1>(param_1,6) = 5;
  STField<undefined1>(param_1,7) = 6;
  ((undefined1 *)param_1)[2] = 0x4d;
  STField<undefined1>(param_1,9) = 0x2d;
  if (this->field_07E6 == 0) {
    STField<undefined1>(param_1,0x11) = 3;
    ((undefined1 *)param_1)[4] = 1;
  }
  else {
    ((undefined1 *)param_1)[4] = 3;
    STField<undefined1>(param_1,0x11) = 1;
  }
  if (this->field_07EA == 0) {
    STField<undefined1>(param_1,0x12) = 1;
  }
  else {
    STField<undefined1>(param_1,0x12) = 3;
  }
  switch(this->field_06F7) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_A:
  case CASE_B:
  case CASE_D:
  case CASE_E:
  case CASE_F:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_15:
  case CASE_16:
  case CASE_17:
  case CASE_1C:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    STField<undefined1>(param_1,10) = 1;
    STField<undefined1>(param_1,0xb) = 1;
    if (this->field_045D == CASE_5) {
      ((undefined1 *)param_1)[3] = 3;
    }
    else {
      ((undefined1 *)param_1)[3] = 1;
    }
    if (this->field_045D == CASE_6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if ((this->field_045D == CASE_15) && (this->field_0635 != 2)) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (this->field_045D == CASE_8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_C:
  case CASE_13:
  case CASE_14:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1D:
  case CASE_24:
  case CASE_25:
    STField<undefined1>(param_1,10) = 0;
    STField<undefined1>(param_1,0xb) = 0;
    ((undefined1 *)param_1)[3] = 0;
    if (this->field_045D == CASE_6) {
      STField<undefined1>(param_1,0xd) = 3;
    }
    else {
      STField<undefined1>(param_1,0xd) = 1;
    }
    if (this->field_045D == CASE_15) {
      STField<undefined1>(param_1,0xe) = 3;
    }
    else {
      STField<undefined1>(param_1,0xe) = 1;
    }
    if (this->field_045D == CASE_8) {
      STField<undefined1>(param_1,0xf) = 3;
      return;
    }
    break;
  default:
    goto switchD_00488d99_default;
  }
  STField<undefined1>(param_1,0xf) = 1;
switchD_00488d99_default:
  return;
}

// 00488EE0 STBoatC::vfunc_58
#line 4 "decomp/ST.exe/functions/00488EE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00488EE0 returns return of FUN_004e8030 @ 00488F18

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00402586
   Slots: 0x58
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1787/2106; unique_owner_for_target */

int __thiscall st::fn_00488EE0(STBoatC *this,RecoveredRecord_00488EE0_F969607B *param_1)

{
  int iVar1;

  *(undefined1 *)param_1 = 1;
  param_1->field_0x1 = 1;
  param_1->field_0002 = this->field_06F7;

  iVar1 = st::fn_00401F5A(this->field_06F7);
  param_1->field_0x6 = (char)iVar1;
  param_1->field_0007 = this->field_0018;
  return iVar1;
}

// 004898C0 STBoatC::vfunc_68
#line 4 "decomp/ST.exe/functions/004898C0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004055EC
   Slots: 0x68
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1802/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_004898C0(STBoatC *this,RecoveredRecordView_004898C0_EBFAD36E *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecordView_004898C0_EBFAD36E *pRVar3;

  pRVar3 = param_1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pRVar3 = 0;
    pRVar3 = reinterpret_cast<RecoveredRecordView_004898C0_EBFAD36E *>(reinterpret_cast<byte *>(pRVar3) + 0x4);
  }
  *(int *)param_1 = this->field_0018;
  *(STBoatC_field_06F7State *)&param_1->field_0x4 = this->field_06F7;

  iVar1 = st::fn_00401F5A(this->field_06F7);
  param_1->field_0x8 = (char)iVar1;
  param_1->field_0009 = this->field_06FB;
  param_1->field_000D = this->field_06FF;
  param_1->field_0011 = this->field_0703;
  param_1->field_0015 = this->field_0707;
  param_1->field_0017 = this->field_0709;
  return;
}

// 0048D110 STBoatC::vfunc_FC
#line 4 "decomp/ST.exe/functions/0048D110/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00403530
   Slots: 0xFC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0048D110(STBoatC *this)

{
  return this->field_07A2;
}

// 0048D930 STBoatC::sub_0048D930
#line 4 "decomp/ST.exe/functions/0048D930/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=9;
   incoming_edx_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=12, used=0), and
   decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall st::fn_0048D930(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;

  if ((this->field_045D == CASE_C) || (this->field_0459 == CASE_70)) {
    sVar1 = this->field_049B;
    sVar2 = this->field_049F;
    sVar3 = this->field_049D;
    if ((((-1 < sVar1) &&
         (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
        (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
         (pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_04A1)) {
      st::fn_00405691(pSVar4,this->field_0018);
      st::fn_00402CCA(pSVar4,this->field_0018);
    }
    sVar1 = this->field_04A5;
    sVar2 = this->field_04A9;
    sVar3 = this->field_04A7;
    if (((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
       ((-1 < sVar3 &&
        ((((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeZ)) &&
         ((pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr &&
          (*(HoloTy **)&pSVar4->field_0x18 == this->field_04AB)))))))) {
      st::fn_00405691(pSVar4,this->field_0018);
      st::fn_00402CCA(pSVar4,this->field_0018);
    }
  }
  if ((this->field_045D == CASE_D) || (this->field_0459 == CASE_71)) {
    sVar1 = this->field_052C;
    sVar2 = this->field_0530;
    sVar3 = this->field_052E;
    if ((((-1 < sVar1) &&
         (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
        (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
         (pSVar4 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar4 != nullptr)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_0532)) {
      st::fn_00405691(pSVar4,this->field_0018);
      st::fn_00402CCA(pSVar4,this->field_0018);
    }
  }
  return;
}

// 0048DBA0 STBoatC::sub_0048DBA0
#line 4 "decomp/ST.exe/functions/0048DBA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall st::fn_0048DBA0(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  if ((this->field_045D == CASE_4) || (this->field_0459 == CASE_68)) {
    sVar1 = this->field_0554;
    sVar2 = this->field_0558;
    sVar3 = this->field_0556;
    if (((-1 < sVar1) &&
        (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)))) {
      this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      if ((this_00 != nullptr) && (*(int *)&this_00->field_0x18 == this->field_055A)) {
        st::fn_00404C23(this_00,this->field_0568,this->field_0018);
        st::fn_00403D28(this_00,this->field_0568,this->field_0018);
      }
    }
  }
  return;
}

// 0048DFD0 STBoatC::sub_0048DFD0
#line 4 "decomp/ST.exe/functions/0048DFD0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0048DFD0.
   Evidence: incoming_receiver_captures=2; receiver_accesses=3; incoming_edx_uses=0; calls=30;
   ecx_pointer_setup=30; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[40];
   expected_stack=40; receiver_family_members=1
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0048EA1D MOVSX EAX,word ptr [EBP + 0x8] | 0048EAAA
   MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=379; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/short
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

undefined4 __thiscall
st::fn_0048DFD0
          (STBoatC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          int *param_6,int param_7,short *param_8,short *param_9,short *param_10)

{
  uint32_t _local_96;
  uint32_t _local_b2;
  uint32_t _local_b6;
  uint32_t _local_cc;
  uint32_t _local_d0;

  int _param_3 = static_cast<int>(param_3);

  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  short *psVar14;
  int iVar15;
  uint *puVar16;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  int local_3fc [194];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  short local_e0 [4];
  short local_d8;
  short local_d6;
  short local_d4;
  short local_d2;
  short local_d0;
  short sStack_ce;
  short local_cc;
  short sStack_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be;
  short local_bc;
  short local_ba;
  short local_b8;
  short local_b6;
  short sStack_b4;
  short local_b2;
  short sStack_b0;
  short local_ae;
  short local_ac;
  short local_aa;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0;
  short local_9e;
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  short sStack_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  undefined4 *local_30;
  STBoatC *local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  short sStack_e;
  short sStack_c;
  short local_a;
  undefined4 *local_8;
  short *psVar9;
  short *temp_103f6dd68211;

  local_3fc[0] = 6;
  local_3fc[1] = 4;
  local_3fc[2] = 8;
  local_3fc[3] = 2;
  local_3fc[4] = 0xb;
  local_3fc[5] = 0x11;
  local_3fc[6] = 0xe;
  local_3fc[7] = 0x14;
  local_3fc[8] = 0x10;
  local_3fc[9] = 0xd;
  local_3fc[10] = 0x13;
  local_3fc[0xb] = 1;
  local_3fc[0xc] = 10;
  local_3fc[0xd] = 0xf;
  local_3fc[0xe] = 0xc;
  local_3fc[0xf] = 0x12;
  local_3fc[0x10] = 5;
  local_3fc[0x11] = 3;
  local_3fc[0x12] = 7;
  local_3fc[0x13] = 0;
  local_3fc[0x14] = 9;
  local_3fc[0x15] = 2;
  local_3fc[0x16] = 4;
  local_3fc[0x17] = 0xe;
  local_3fc[0x18] = 0xd;
  local_3fc[0x19] = 0x11;
  local_3fc[0x1a] = 1;
  local_3fc[0x1b] = 6;
  local_3fc[0x1c] = 0x10;
  local_3fc[0x1d] = 0xc;
  local_3fc[0x1e] = 8;
  local_3fc[0x1f] = 0x14;
  local_3fc[0x20] = 0;
  local_3fc[0x21] = 0xb;
  local_3fc[0x22] = 0xf;
  local_3fc[0x23] = 0x13;
  local_3fc[0x24] = 3;
  local_3fc[0x25] = 10;
  local_3fc[0x26] = 5;
  local_3fc[0x27] = 0x12;
  local_3fc[0x28] = 7;
  local_3fc[0x29] = 9;
  local_3fc[0x2a] = 1;
  local_3fc[0x2b] = 0;
  local_3fc[0x2c] = 2;
  local_3fc[0x2d] = 3;
  local_3fc[0x2e] = 4;
  local_3fc[0x2f] = 0xd;
  local_3fc[0x30] = 0xc;
  local_3fc[0x31] = 0xe;
  local_3fc[0x32] = 0x10;
  local_3fc[0x33] = 0xf;
  local_3fc[0x34] = 0x11;
  local_3fc[0x35] = 5;
  local_3fc[0x36] = 6;
  local_3fc[0x37] = 0x13;
  local_3fc[0x38] = 0x12;
  local_3fc[0x39] = 0x14;
  local_3fc[0x3a] = 7;
  local_3fc[0x3b] = 8;
  local_3fc[0x3c] = 10;
  local_3fc[0x3d] = 9;
  local_3fc[0x3e] = 0xb;
  local_3fc[0x3f] = 0;
  local_3fc[0x40] = 3;
  local_3fc[0x41] = 0xc;
  local_3fc[0x42] = 5;
  local_3fc[0x43] = 1;
  local_3fc[0x44] = 0xf;
  local_3fc[0x45] = 0xd;
  local_3fc[0x46] = 0x10;
  local_3fc[0x47] = 7;
  local_3fc[0x48] = 0x12;
  local_3fc[0x49] = 2;
  local_3fc[0x4a] = 0xe;
  local_3fc[0x4b] = 9;
  local_3fc[0x4c] = 4;
  local_3fc[0x4d] = 0x13;
  local_3fc[0x4e] = 0x11;
  local_3fc[0x4f] = 10;
  local_3fc[0x50] = 6;
  local_3fc[0x51] = 0x14;
  local_3fc[0x52] = 8;
  local_3fc[0x53] = 0xb;
  local_3fc[0x54] = 5;
  local_3fc[0x55] = 7;
  local_3fc[0x56] = 3;
  local_3fc[0x57] = 9;
  local_3fc[0x58] = 0;
  local_3fc[0x59] = 0xf;
  local_3fc[0x5a] = 0x12;
  local_3fc[0x5b] = 0xc;
  local_3fc[0x5c] = 0x10;
  local_3fc[0x5d] = 0x13;
  local_3fc[0x5e] = 0xd;
  local_3fc[0x5f] = 10;
  local_3fc[0x60] = 1;
  local_3fc[0x61] = 0x11;
  local_3fc[0x62] = 0x14;
  local_3fc[99] = 0xe;
  local_3fc[100] = 0xb;
  local_3fc[0x65] = 2;
  local_3fc[0x66] = 6;
  local_3fc[0x67] = 8;
  local_3fc[0x68] = 4;
  local_3fc[0x69] = 9;
  local_3fc[0x6a] = 7;
  local_3fc[0x6b] = 0x12;
  local_3fc[0x6c] = 10;
  local_3fc[0x6d] = 5;
  local_3fc[0x6e] = 0x13;
  local_3fc[0x6f] = 0xf;
  local_3fc[0x70] = 0x10;
  local_3fc[0x71] = 0xb;
  local_3fc[0x72] = 3;
  local_3fc[0x73] = 0x14;
  local_3fc[0x74] = 0xc;
  local_3fc[0x75] = 8;
  local_3fc[0x76] = 0;
  local_3fc[0x77] = 0x11;
  local_3fc[0x78] = 0xd;
  local_3fc[0x79] = 6;
  local_3fc[0x7a] = 1;
  local_3fc[0x7b] = 0xe;
  local_3fc[0x7c] = 4;
  local_3fc[0x7d] = 2;
  local_3fc[0x7e] = 10;
  local_3fc[0x7f] = 9;
  local_3fc[0x80] = 0xb;
  local_3fc[0x81] = 7;
  local_3fc[0x82] = 8;
  local_3fc[0x83] = 0x13;
  local_3fc[0x84] = 0x12;
  local_3fc[0x85] = 0x14;
  local_3fc[0x86] = 0x10;
  local_3fc[0x87] = 5;
  local_3fc[0x88] = 6;
  local_3fc[0x89] = 0xf;
  local_3fc[0x8a] = 0x11;
  local_3fc[0x8b] = 0xd;
  local_3fc[0x8c] = 3;
  local_3fc[0x8d] = 4;
  local_3fc[0x8e] = 0xc;
  local_3fc[0x8f] = 0xe;
  local_3fc[0x90] = 1;
  local_3fc[0x91] = 0;
  local_3fc[0x92] = 2;
  local_3fc[0x93] = 8;
  local_3fc[0x94] = 0xb;
  local_3fc[0x95] = 0x14;
  local_3fc[0x96] = 10;
  local_3fc[0x97] = 6;
  local_3fc[0x9d] = 0x12;
  local_3fc[0x9b] = 9;
  local_3fc[0xa0] = 2;
  local_3fc[0xa5] = 0xc;
  local_3fc[0xaa] = 2;
  local_3fc[0xae] = 2;
  local_3fc[0xb2] = 2;
  local_3fc[0xb9] = 2;
  local_3fc[0xbe] = 2;
  local_3fc[0x98] = 0x13;
  local_3fc[0x99] = 0x11;
  local_3fc[0x9a] = 0x10;
  local_3fc[0x9c] = 4;
  local_3fc[0x9e] = 0xe;
  local_3fc[0x9f] = 7;
  local_3fc[0xa1] = 0xf;
  local_3fc[0xa2] = 0xd;
  local_3fc[0xa3] = 5;
  local_3fc[0xa4] = 1;
  local_3fc[0xa6] = 3;
  local_3fc[0xa7] = 0;
  local_3fc[0xa8] = 0;
  local_3fc[0xa9] = 1;
  local_3fc[0xab] = 3;
  local_3fc[0xac] = 4;
  local_3fc[0xad] = 1;
  local_3fc[0xaf] = 3;
  local_3fc[0xb0] = 0;
  local_3fc[0xb1] = 4;
  local_3fc[0xb3] = 3;
  local_3fc[0xb4] = 4;
  local_3fc[0xb5] = 1;
  local_3fc[0xb6] = 0;
  local_3fc[0xb7] = 3;
  local_3fc[0xb8] = 4;
  local_3fc[0xba] = 1;
  local_3fc[0xbb] = 0;
  local_3fc[0xbc] = 4;
  local_3fc[0xbd] = 3;
  local_3fc[0xbf] = 1;
  local_3fc[0xc0] = 0;
  local_18 = param_7;
  local_e4 = 0;
  if (((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
      ((((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) ||
        ((g_worldGrid.sizeZ <= param_3 || ((param_4 < 0 || (g_worldGrid.sizeX <= param_4)))))) ||
       (param_5 < 0)))) ||
     (((g_worldGrid.sizeY <= param_5 || (sVar3 = (short)param_6, sVar3 < 0)) ||
      (g_worldGrid.sizeZ <= sVar3)))) {
    return 0;
  }
  if (param_7 < 1) {
    if (param_3 < 1) {
      if ((STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0] == nullptr) &&
         (STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[1] == nullptr)) {
        *param_8 = param_1;
        *param_9 = param_2;
        *param_10 = param_3;
        return 1;
      }
    }
    else {
      local_1c = (int)param_3;
      iVar5 = (int)g_worldGrid.sizeX * (int)param_2;
      iVar8 = (int)param_1;
      if ((((g_worldGrid.cells[local_1c * g_worldGrid.planeStride + iVar8 + iVar5].objects[0] ==
             nullptr) &&
           (g_worldGrid.cells[local_1c * g_worldGrid.planeStride + iVar8 + iVar5].objects[1] ==
            nullptr)) &&
          ((sVar12 = param_3 + -1, sVar12 < 0 ||
           (((g_worldGrid.sizeZ <= sVar12 ||
             (g_worldGrid.cells[(int)sVar12 * (int)g_worldGrid.planeStride + iVar8 + iVar5].objects
              [0] == nullptr)) ||
            (STGridAt3D(g_pathingGrid, iVar8, param_2, local_1c + -1) == 0)))))) &&
         (((sVar12 = param_3 + -1, sVar12 < 0 || (g_worldGrid.sizeZ <= sVar12)) ||
          (g_worldGrid.cells[(int)sVar12 * (int)g_worldGrid.planeStride + iVar8 + iVar5].objects[1]
           == nullptr)))) {
        *param_8 = param_1;
        *param_9 = param_2;
        *param_10 = param_3;
        return 1;
      }
    }
    local_18 = 1;
  }
  iVar5 = local_18;
  sVar12 = param_1;
  sVar13 = param_4;
  if (param_1 <= param_4) {
    sVar12 = param_4;
    sVar13 = param_1;
  }
  sVar1 = param_2;
  sVar2 = param_5;
  if (param_2 <= param_5) {
    sVar1 = param_5;
    sVar2 = param_2;
  }
  local_20 = (int)sVar13 + local_18 * -4 + -5;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_28 = (int)sVar2 + local_18 * -4 + -5;
  if (local_28 < 0) {
    local_28 = 0;
  }
  iVar8 = local_28;
  local_ec = sVar12 + 5 + local_18 * 4;
  if (g_pathingGrid.sizeX <= local_ec) {
    local_ec = g_pathingGrid.sizeX + -1;
  }
  local_e8 = sVar1 + 5 + local_18 * 4;
  if (g_pathingGrid.sizeY <= local_e8) {
    local_e8 = g_pathingGrid.sizeY + -1;
  }
  local_10 = ((short)local_ec - (short)local_20) + 1;
  sStack_e = ((short)local_e8 - (short)local_28) + 1;
  local_a = sStack_e * local_10;
  local_30 = nullptr;
  local_2c = this;

  local_8 = (undefined4 *)st::fn_006AAC70(local_a * 10);
  iVar15 = local_20;
  local_14 = 0;
  do {
    psVar10 = g_pathingGrid.cells +
              g_pathingGrid.sizeX * iVar8 + local_20 + g_pathingGrid.planeStride * local_14;
    local_24 = (undefined4 *)((int)local_8 + local_a * local_14 * 2);
    iVar4 = 0;
    if (0 < sStack_e) {
      uVar6 = (int)local_10 << 1;
      do {
        psVar14 = psVar10;
        puVar16 = local_24;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar16 = *(undefined4 *)psVar14;
          psVar14 = psVar14 + 2;
          puVar16 = puVar16 + 1;
        }
        iVar4 = iVar4 + 1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)puVar16 = (char)*psVar14;
          psVar14 = (short *)((int)psVar14 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        psVar10 = psVar10 + g_pathingGrid.sizeX;
        uVar6 = local_10 * 2;
        local_24 = (undefined4 *)((int)local_24 + uVar6);
        iVar8 = local_28;
      } while (iVar4 < sStack_e);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 5);

  st::fn_006AB090((int)local_8,(int)local_10,(int)sStack_e,5,param_4 - local_20,param_5 - iVar8,
               (int)sVar3,-1,-1,-1);
  local_1c = (int)param_3;
  if (*(short *)((int)local_8 +
                ((((param_2 - iVar8) * (int)local_10 + (int)local_a * (int)param_3) - iVar15) +
                (int)param_1) * 2) < 1) {
    st::fn_006AB060(&local_8);
    local_36 = g_pathingGrid.sizeY;
    local_34 = g_pathingGrid.sizeZ;
    local_38 = g_pathingGrid.sizeX;
    local_32 = g_pathingGrid.planeStride;

    local_30 = (undefined4 *)st::fn_006AAC70
                         ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                          (int)g_pathingGrid.sizeX * 2);
    uVar6 = (int)local_34 * (int)local_36 * (int)local_38;
    psVar9 = g_pathingGrid.cells;
    puVar16 = local_30;
    for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar16 = *(undefined4 *)psVar9;
      psVar9 = psVar9 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar16 = (char)*psVar9;
      psVar9 = (short *)((int)psVar9 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }

    st::fn_006AB090((int)local_30,(int)local_38,(int)local_36,(int)local_34,(int)param_1,(int)param_2,
                 local_1c,-1,-1,-1);
    sStack_e = g_pathingGrid.sizeY;
    sStack_c = g_pathingGrid.sizeZ;
    local_10 = g_pathingGrid.sizeX;
    local_a = g_pathingGrid.planeStride;

    local_8 = (undefined4 *)st::fn_006AAC70
                        ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                         (int)g_pathingGrid.sizeX * 2);
    uVar6 = (int)sStack_c * (int)sStack_e * (int)local_10;
    temp_103f6dd68211 = g_pathingGrid.cells;
    puVar16 = local_8;
    for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar16 = *(undefined4 *)temp_103f6dd68211;
      temp_103f6dd68211 = temp_103f6dd68211 + 2;
      puVar16 = puVar16 + 1;
    }
    for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar16 = (char)*temp_103f6dd68211;
      temp_103f6dd68211 = (short *)((int)temp_103f6dd68211 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }

    st::fn_006AB090((int)local_8,(int)local_10,(int)sStack_e,(int)sStack_c,(int)param_4,(int)param_5,
                 (int)sVar3,-1,-1,-1);
    local_20 = 0;
    local_28 = 0;
    local_24 = local_30;
    local_ec = g_pathingGrid.sizeX + -1;
    local_e8 = g_pathingGrid.sizeY + -1;
  }
  else {
    local_24 = local_8;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    uVar6 = local_2c->field_001C * 0x41c64e6d + 0x3039;
    local_2c->field_001C = uVar6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = uVar6 >> 0x10 & 7;
  }
  else {
    /* ST_CALLSITE[0048EC3E]: CALL dword ptr [EAX + 0x10] */
    sVar3 = (*local_2c->vtable->vfunc_10)
                      (param_1 * 0xc9 + 100,param_2 * 0xc9 + 100,_param_3 * 200 + 100,
                       param_4 * 0xc9 + 100,param_5 * 0xc9 + 100,(int)param_6 * 200 + 100);
    iVar4 = (int)sVar3;
    iVar15 = (iVar4 / 0x2d) * 0x2d;
    iVar8 = iVar15 + 0x2d;
    uVar6 = iVar4 - iVar8;
    uVar7 = (int)uVar6 >> 0x1f;
    uVar11 = iVar4 % 0x2d >> 0x1f;
    if (st::storage_bit_cast<int>(static_cast<uint32_t>((uVar6 ^ uVar7) - uVar7)) <= st::storage_bit_cast<int>(static_cast<uint32_t>((iVar4 % 0x2d ^ uVar11) - uVar11))) {
      iVar15 = iVar8;
    }
    if (iVar15 == 0x168) {
      _param_3 = 0;
    }
    else {
      _param_3 = iVar15 / 0x2d;
    }
  }
  if (local_18 / iVar5 < 5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_5 = local_18 * 2 + 1;
    do {
      local_92 = (short)local_18;
      local_84 = local_92 + param_1;
      local_e0[0] = -local_92 + param_1;
      local_aa = (short)(_param_5 / 3);
      local_d4 = local_84 - local_aa;
      local_98 = local_e0[0];
      local_e0[2] = local_aa + -1 + local_e0[0];
      local_b8 = local_e0[0];
      local_e0[3] = -local_92 + param_2;
      local_88 = local_d4 + 1;
      local_d8 = local_e0[2] + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_d0 = CONCAT22(local_e0[3],local_88);
      local_e0[1] = local_e0[3];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_cc = CONCAT22(local_e0[3],local_84);
      local_d6 = local_e0[3];
      local_d2 = local_e0[3];
      local_92 = local_92 + param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_96 = CONCAT22(local_e0[2],local_92);
      local_82 = local_92;
      local_86 = local_92;
      local_90 = local_d8;
      local_8e = local_92;
      local_8a = local_92;
      local_8c = local_d4;
      local_ae = local_aa + local_e0[3];
      local_aa = local_92 - local_aa;
      local_60 = local_d8;
      local_5c = local_d4;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_b6 = CONCAT22(local_e0[0],local_ae);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_b2 = CONCAT22(local_84,local_aa);
      local_ac = local_84;
      local_5e = local_ae;
      local_5a = local_aa;
      if (_param_5 < 7) {
        local_3a = -0x7960;
        local_3e = -0x7960;
        local_3c = -0x7960;
        local_40 = -0x7960;
        local_42 = 0x86a0;
        local_46 = 0x86a0;
        local_44 = -0x7960;
        local_48 = -0x7960;
        local_4a = 0x86a0;
        local_4e = 0x86a0;
        local_4c = -0x7960;
        local_50 = -0x7960;
        local_52 = -0x7960;
        local_56 = -0x7960;
        local_54 = 0x86a0;
        local_58 = 0x86a0;
        local_62 = 0x86a0;
        local_66 = 0x86a0;
        local_64 = 0x86a0;
        local_68 = 0x86a0;
        local_6a = -0x7960;
        local_6e = -0x7960;
        local_6c = 0x86a0;
        local_70 = 0x86a0;
        local_72 = 0x86a0;
        local_76 = 0x86a0;
        local_74 = 0x86a0;
        local_78 = 0x86a0;
        local_7a = 0x86a0;
        local_7e = 0x86a0;
        local_7c = 0x86a0;
        local_80 = 0x86a0;
        local_9a = 0x86a0;
        local_9e = 0x86a0;
        local_9c = -0x7960;
        local_a0 = 0x86a0;
        local_a2 = 0x86a0;
        local_a6 = 0x86a0;
        local_a4 = -0x7960;
        local_a8 = 0x86a0;
        local_ba = 0x86a0;
        local_be = 0x86a0;
        local_bc = 0x86a0;
        local_c0 = 0x86a0;
        local_c2 = 0x86a0;
        local_c6 = 0x86a0;
        local_c4 = 0x86a0;
        local_c8 = 0x86a0;
      }
      else {
        local_c8 = local_e0[0];
        local_c6 = local_e0[3] + 1;
        local_c4 = local_e0[0];
        local_c2 = local_ae + -1;
        local_a8 = local_e0[0];
        local_be = local_c6;
        local_a4 = local_e0[0];
        local_ba = local_c2;
        local_c0 = local_84;
        local_bc = local_84;
        local_a0 = local_84;
        local_9c = local_84;
        local_a6 = local_aa + 1;
        local_a2 = local_92 + -1;
        local_80 = local_e0[0] + 1;
        local_7c = local_e0[2];
        local_7e = local_c6;
        local_7a = local_c2;
        local_78 = local_d8;
        local_74 = local_d4;
        local_76 = local_c6;
        local_72 = local_c2;
        local_6c = local_84 + -1;
        local_62 = local_aa;
        local_6e = local_c6;
        local_52 = local_aa;
        local_6a = local_c2;
        local_50 = local_80;
        local_68 = local_80;
        local_4c = local_e0[2];
        local_64 = local_e0[2];
        local_48 = local_d8;
        local_9e = local_a6;
        local_9a = local_a2;
        local_70 = local_88;
        local_66 = local_ae;
        local_58 = local_88;
        local_54 = local_6c;
        local_56 = local_ae;
        local_4e = local_a6;
        local_4a = local_a2;
        local_44 = local_d4;
        local_46 = local_a6;
        local_42 = local_a2;
        local_40 = local_88;
        local_3c = local_6c;
        local_3e = local_a6;
        local_3a = local_a2;
      }
      local_14 = 0;
      do {
        local_2c = nullptr;
        auto param_6_after_write = local_3fc + _param_3 * 0x15; /* compiler stack-slot lifetime split */
        do {
          local_f4 = *param_6_after_write;
          iVar8 = (int)local_e0[local_f4 * 4];
          local_c8 = local_a4;
          local_c6 = local_6e;
          local_c4 = local_a4;
          local_c2 = local_6a;
          local_c0 = local_9c;
          local_be = local_6e;
          local_bc = local_9c;
          local_ba = local_6a;
          local_a8 = local_a4;
          local_a6 = local_3e;
          local_a2 = local_3a;
          local_a0 = local_9c;
          local_9e = local_3e;
          local_9a = local_3a;
          local_80 = local_50;
          local_7e = local_6e;
          local_7c = local_4c;
          local_7a = local_6a;
          local_78 = local_48;
          local_76 = local_6e;
          local_74 = local_44;
          local_72 = local_6a;
          local_70 = local_40;
          local_6c = local_3c;
          local_68 = local_50;
          local_66 = local_56;
          local_64 = local_4c;
          local_62 = local_52;
          local_58 = local_40;
          local_54 = local_3c;
          local_4e = local_3e;
          local_4a = local_3a;
          local_46 = local_3e;
          local_42 = local_3a;
          if ((iVar8 != 100000) &&
             ((local_f4 < 0xc ||
              (uVar6 = local_1c - local_3fc[local_14 + local_1c * 5 + 0xa8] >> 0x1f,
              iVar5 <= st::storage_bit_cast<int>(static_cast<uint32_t>((local_1c - local_3fc[local_14 + local_1c * 5 + 0xa8] ^ uVar6) - uVar6))
              )))) {
            local_3fc[0xc1] = (int)local_e0[local_f4 * 4 + 2];
            for (; iVar8 <= local_e0[local_f4 * 4 + 2]; iVar8 = iVar8 + 1) {
              if ((local_20 <= iVar8) && (iVar8 <= local_ec)) {
                local_f0 = (int)local_e0[local_f4 * 4 + 3];
                for (iVar15 = (int)local_e0[local_f4 * 4 + 1]; iVar15 <= local_e0[local_f4 * 4 + 3];
                    iVar15 = iVar15 + 1) {
                  if ((local_28 <= iVar15) && (iVar15 <= local_e8)) {
                    iVar4 = local_3fc[local_14 + local_1c * 5 + 0xa8];
                    sVar3 = (short)iVar4;
                    sVar12 = (short)iVar8;
                    sVar13 = (short)iVar15;
                    if (iVar4 < 1) {
                      if (sVar12 < 0) {
LAB_0048f3f7:
                        iVar4 = ((((iVar15 - local_28) * (int)local_10 + local_a * iVar4) - local_20
                                 ) + iVar8) * 2;
                        if ((0 < *(short *)(iVar4 + (int)local_24)) &&
                           (local_18 <= (*(short *)(iVar4 + (int)local_8) + -1) / 3)) {
                          local_e4 = 1;
                          *param_8 = sVar12;
                          *param_9 = sVar13;
                          *param_10 = (short)local_3fc[local_1c * 5 + local_14 + 0xa8];
                          goto LAB_0048f4e0;
                        }
                      }
                      else if (((((g_worldGrid.sizeX <= sVar12) || (sVar13 < 0)) ||
                                (g_worldGrid.sizeY <= sVar13)) ||
                               ((sVar3 < 0 || (g_worldGrid.sizeZ <= sVar3)))) ||
                              (STGridAt3D(g_worldGrid, sVar12, sVar13, sVar3).objects[0] ==
                               nullptr)) {
joined_r0x0048f3a9:
                        if ((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) || (sVar13 < 0)) ||
                           ((((g_worldGrid.sizeY <= sVar13 || (sVar3 < 0)) ||
                             (g_worldGrid.sizeZ <= sVar3)) ||
                            (STGridAt3D(g_worldGrid, sVar12, sVar13, sVar3).objects[1] ==
                             nullptr)))) goto LAB_0048f3f7;
                      }
                    }
                    else if ((sVar12 < 0) ||
                            ((((g_worldGrid.sizeX <= sVar12 || (sVar13 < 0)) ||
                              ((g_worldGrid.sizeY <= sVar13 ||
                               (((sVar3 < 0 || (g_worldGrid.sizeZ <= sVar3)) ||
                                (STGridAt3D(g_worldGrid, sVar12, sVar13, sVar3).objects[0] ==
                                 nullptr)))))) &&
                             (((sVar12 < 0 || (g_worldGrid.sizeX <= sVar12)) ||
                              ((sVar13 < 0 ||
                               (((g_worldGrid.sizeY <= sVar13 || (sVar3 < 0)) ||
                                ((g_worldGrid.sizeZ <= sVar3 ||
                                 (STGridAt3D(g_worldGrid, sVar12, sVar13, sVar3).objects[1] ==
                                  nullptr)))))))))))) {
                      sVar3 = sVar3 + -1;
                      if (sVar12 < 0) goto LAB_0048f3f7;
                      if (((((g_worldGrid.sizeX <= sVar12) || (sVar13 < 0)) ||
                           (g_worldGrid.sizeY <= sVar13)) ||
                          ((sVar3 < 0 || (g_worldGrid.sizeZ <= sVar3)))) ||
                         ((STGridAt3D(g_worldGrid, sVar12, sVar13, sVar3).objects[0] ==
                           nullptr ||
                          (STGridAt3D(g_pathingGrid, iVar8, iVar15, iVar4 + -1) == 0))))
                      goto joined_r0x0048f3a9;
                    }
                  }
                }
              }
            }
          }
          local_2c = (STBoatC *)((int)&local_2c->vtable + 1);
          param_6_after_write = param_6_after_write + 1;
        } while ((int)local_2c < 0x15);
        local_14 = local_14 + 1;
      } while (local_14 < 5);
      local_18 = local_18 + 1;
      _param_5 = _param_5 + 2;
    } while (local_18 / iVar5 < 5);
  }
LAB_0048f4e0:
  if (local_30 != nullptr) {
    st::fn_006AB060(&local_30);
  }
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  return local_e4;
}

// 00490570 STBoatC::sub_00490570
#line 4 "decomp/ST.exe/functions/00490570/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=12,
   ignored=0, unknown=0 */

int __thiscall st::fn_00490570(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;

  sVar1 = this->field_004B;
  if (sVar1 < 1) {
    sVar2 = this->field_0049;
    sVar3 = this->field_0047;
    if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar2 < 0)) ||
        ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))) ||
       ((g_worldGrid.sizeZ <= sVar1 ||
        (STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1] == nullptr)))) {
      return 0;
    }
  }
  else {
    sVar2 = this->field_0047;
    sVar3 = this->field_0049;
    if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar1 < 0)) ||
         ((g_worldGrid.sizeZ <= sVar1 ||
          (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar1).objects[1] == nullptr)))))) &&
       ((sVar4 = sVar1 + -1, sVar2 < 0 ||
        ((((g_worldGrid.sizeX <= sVar2 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeY <= sVar3 ||
           ((((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)) ||
             (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[0] == nullptr)) ||
            (STGridAt3D(g_pathingGrid, sVar2, sVar3, sVar1 + -1) == 0)))))) &&
         (((((sVar2 < 0 || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
           ((g_worldGrid.sizeY <= sVar3 || (sVar4 < 0)))) ||
          ((g_worldGrid.sizeZ <= sVar4 ||
           (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[1] == nullptr)))))))))) {
      return 0;
    }
  }
  return 1;
}

// 00490B30 STBoatC::vfunc_8C
#line 4 "decomp/ST.exe/functions/00490B30/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405984
   Slots: 0x8C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2054/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void __thiscall
st::fn_00490B30(STBoatC *this,RecoveredRecord_STBoatC_00490B30 *param_1,short param_2,uint param_3
                 )

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  char objPtr;

  objPtr = (char)param_1;
  if (((char)this->field_033A == objPtr) && (*(short *)&this->field_0x33f == param_2)) {
    *(undefined2 *)&this->field_0x33f = (undefined2)param_3;
  }
  if (this->field_045D == CASE_2) {
    sVar1 = this->field_0800;
    sVar2 = this->field_0804;
    sVar3 = this->field_0802;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      param_1 = reinterpret_cast<RecoveredRecord_STBoatC_00490B30 *>(STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0]);
    }
    if ((((param_1 != nullptr) &&
         ((RecoveredRecordView_005EFAE0_855D930D *)param_1->field_0018 == this->field_07F4)) ||

        (iVar4 = st::fn_006E62D0(g_playSystem_00802A38,this->field_07F4,reinterpret_cast<int *>(&param_1))
        , iVar4 != -4)) &&
       ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)objPtr)))) {
      /* ST_CALLSITE[00490C2B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,objPtr,(ushort)param_3,CASE_1);
      this->field_07F4 = (RecoveredRecordView_005EFAE0_855D930D *)pSVar5->field_0018;
    }
  }
  return;
}

// 00490CD0 STBoatC::sub_00490CD0
#line 4 "decomp/ST.exe/functions/00490CD0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00490CD0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=10;
   ecx_pointer_setup=10; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=3; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00490CD0(STBoatC *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;

  if (param_3 < 0) {
    STPiece<2,2>(param_3) = 0;
  }
  sVar1 = (short)param_4;
  if ((short)param_4 < 0) {
    sVar1 = 0;
  }
  if (param_4 < 0) {
    STPiece<2,2>(param_4) = 0;
  }
  if (g_worldGrid.sizeX + -1 < (int)STPiece<2,2>(param_3)) {
    STPiece<2,2>(param_3) = g_worldGrid.sizeX + -1;
  }
  if (g_worldGrid.sizeY + -1 < (int)sVar1) {
    sVar1 = g_worldGrid.sizeY + -1;
  }
  if (g_worldGrid.sizeZ + -1 < (int)STPiece<2,2>(param_4)) {
    STPiece<2,2>(param_4) = g_worldGrid.sizeZ + -1;
  }
  this->field_0475 = STPiece<2,2>(param_3);
  this->field_0477 = sVar1;
  this->field_0479 = STPiece<2,2>(param_4);
  return;
}

// 00490E70 STBoatC::vfunc_6C
#line 4 "decomp/ST.exe/functions/00490E70/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 0040399F
   Slots: 0x6C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00490E70(STBoatC *this)

{
  return this->field_06F3;
}

// 00490E90 STBoatC::vfunc_74
#line 4 "decomp/ST.exe/functions/00490E90/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401E33
   Slots: 0x74
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1791/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_00490E90(STBoatC *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = reinterpret_cast<char *>(&this->field_06FB);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00490ED0 STBoatC::vfunc_70
#line 4 "decomp/ST.exe/functions/00490ED0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401B95
   Slots: 0x70
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1791/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_00490ED0(STBoatC *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340(reinterpret_cast<char *>(&this->field_06FB),param_1,0xe);
    this->field_0709 = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = reinterpret_cast<char *>(&this->field_06FB);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 004911B0 STBoatC::vfunc_A8
#line 4 "decomp/ST.exe/functions/004911B0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004053A3
   Slots: 0xA8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1476/2106; unique_owner_for_target */

undefined4 __thiscall
st::fn_004911B0(STBoatC *this,RecoveredRecordView_005EFAE0_855D930D *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (((this->field_045D == CASE_14) && (this->field_05C0 != CASE_2)) &&
     (this->field_05A2 == nullptr)) {
    this->field_05A2 = param_1;
    uVar1 = 1;
  }
  return uVar1;
}

// 00491200 STBoatC::vfunc_AC
#line 4 "decomp/ST.exe/functions/00491200/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401DDE
   Slots: 0xAC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1446/2106; unique_owner_for_target */

undefined4 __thiscall st::fn_00491200(STBoatC *this,int param_1)

{
  uint uVar1;
  uVar1 = 0;
  if ((this->field_045D == CASE_14) &&
     (this->field_05A2 == (RecoveredRecordView_005EFAE0_855D930D *)param_1)) {
    this->field_05A2 = nullptr;
    uVar1 = 1;
  }
  return uVar1;
}

// 00492420 STBoatC::sub_00492420
#line 4 "decomp/ST.exe/functions/00492420/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00492420(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if ((this->field_07C6 == 1) && (this->field_07CA == nullptr))
  {
    this->field_07C6 = 0;
    local_8 = this;

    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,
                       *(RecoveredRecordView_005EFAE0_855D930D **)&this->field_0x58e,reinterpret_cast<int *>(&local_8)
                      );
    if (iVar1 != -4) {
      /* ST_CALLSITE[00492468]: CALL dword ptr [EDX + 0xa0] */
      local_8->ReleaseLoad((uint *)this->field_0018);
    }
  }
  return;
}

// 004926C0 STBoatC::sub_004926C0
#line 4 "decomp/ST.exe/functions/004926C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_004926C0(STBoatC *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short local_dc [94];
  uint local_20;
  STBoatC *local_1c;
  int local_18;
  uint local_14;
  short *local_10;
  int local_c;
  int local_8;

  local_dc[2] = 0;
  local_dc[3] = 0;
  local_dc[0xc] = 0;
  local_dc[0xd] = 0;
  local_dc[0x10] = 0;
  local_dc[0x11] = 0;
  local_dc[0x16] = 0;
  local_dc[0x17] = 0;
  local_dc[0x26] = 0;
  local_dc[0x27] = 0;
  local_dc[0x38] = 0;
  local_dc[0x39] = 0;
  local_dc[0x44] = 0;
  local_dc[0x45] = 0;
  local_dc[0x52] = 0;
  local_dc[0x53] = 0;
  uVar1 = this->field_05EC;
  local_dc[0x2e] = 2;
  local_dc[0x2f] = 0;
  local_dc[0x3e] = 2;
  local_dc[0x3f] = 0;
  local_dc[0x42] = 2;
  local_dc[0x43] = 0;
  local_dc[0x46] = 2;
  local_dc[0x47] = 0;
  local_dc[0x4c] = 2;
  local_dc[0x4d] = 0;
  local_dc[0x50] = 2;
  local_dc[0x51] = 0;
  local_dc[0x54] = 2;
  local_dc[0x55] = 0;
  local_dc[0x58] = 2;
  local_dc[0x59] = 0;
  local_dc[0x5a] = 2;
  local_dc[0x5b] = 0;
  local_dc[0x5c] = 2;
  local_dc[0x5d] = 0;
  uVar2 = this->field_05EE;
  local_dc[0x1e] = -2;
  local_dc[0x1f] = -1;
  local_dc[0x20] = -2;
  local_dc[0x21] = -1;
  local_dc[0x24] = -2;
  local_dc[0x25] = -1;
  local_dc[0x28] = -2;
  local_dc[0x29] = -1;
  local_dc[0x2c] = -2;
  local_dc[0x2d] = -1;
  local_dc[0x30] = -2;
  local_dc[0x31] = -1;
  local_dc[0x32] = -2;
  local_dc[0x33] = -1;
  local_dc[0x36] = -2;
  local_dc[0x37] = -1;
  local_dc[0x3a] = -2;
  local_dc[0x3b] = -1;
  local_dc[0x4a] = -2;
  local_dc[0x4b] = -1;
  local_1c = this;
  local_dc[0] = -1;
  local_dc[1] = -1;
  local_dc[4] = -1;
  local_dc[5] = -1;
  local_dc[6] = 1;
  local_dc[7] = 0;
  local_dc[8] = -1;
  local_dc[9] = -1;
  local_dc[10] = -1;
  local_dc[0xb] = -1;
  local_dc[0xe] = 1;
  local_dc[0xf] = 0;
  local_dc[0x12] = -1;
  local_dc[0x13] = -1;
  local_dc[0x14] = 1;
  local_dc[0x15] = 0;
  local_dc[0x18] = 1;
  local_dc[0x19] = 0;
  local_dc[0x1a] = 1;
  local_dc[0x1b] = 0;
  local_dc[0x1c] = 1;
  local_dc[0x1d] = 0;
  local_dc[0x22] = -1;
  local_dc[0x23] = -1;
  local_dc[0x2a] = 1;
  local_dc[0x2b] = 0;
  local_dc[0x34] = -1;
  local_dc[0x35] = -1;
  local_dc[0x3c] = 1;
  local_dc[0x3d] = 0;
  local_dc[0x40] = -1;
  local_dc[0x41] = -1;
  local_dc[0x48] = 1;
  local_dc[0x49] = 0;
  local_dc[0x4e] = -1;
  local_dc[0x4f] = -1;
  local_dc[0x56] = 1;
  local_dc[0x57] = 0;
  local_14 = (uint)uVar2;
  local_20 = (uint)uVar1;
  if ((((((short)uVar1 < 0) || (g_worldGrid.sizeX <= (short)uVar1)) || ((short)uVar2 < 0)) ||
      (((g_worldGrid.sizeY <= (short)uVar2 || (g_worldGrid.sizeZ < 5)) ||
       (local_8 = (int)g_worldGrid.planeStride,
       STGridAt3D(g_worldGrid, uVar1, uVar2, 4).objects[0] == nullptr)))) &&
     ((((short)uVar1 < 0 || (g_worldGrid.sizeX <= (short)uVar1)) ||
      (((short)uVar2 < 0 ||
       (((g_worldGrid.sizeY <= (short)uVar2 || (g_worldGrid.sizeZ < 5)) ||
        (local_8 = (int)g_worldGrid.planeStride,
        STGridAt3D(g_worldGrid, uVar1, uVar2, 4).objects[1] == nullptr)))))))) {
    this->field_05F2 = uVar1;
    this->field_05F4 = uVar2;
    this->field_05F6 = 4;
    return 1;
  }
  iVar6 = 4;
  local_18 = this->field_05F0 + 1;
  if (local_18 < 5) {
    do {
      local_10 = local_dc;
      local_c = 0;
      do {
        sVar4 = *local_10 + uVar2;
        sVar3 = local_10[-2] + uVar1;
        if ((((-1 < sVar3) && (sVar3 < g_pathingGrid.sizeX)) &&
            ((-1 < sVar4 && (sVar4 < g_pathingGrid.sizeY)))) &&
           ((sVar5 = (short)iVar6, g_worldGrid.sizeX <= sVar3 ||
            ((((g_worldGrid.sizeY <= sVar4 || (sVar5 < 0)) ||
              ((g_worldGrid.sizeZ <= sVar5 ||
               (g_worldGrid.cells
                [(int)sVar4 * (int)g_worldGrid.sizeX + sVar5 * local_8 + (int)sVar3].objects[0] ==
                nullptr)))) &&
             ((((g_worldGrid.sizeX <= sVar3 || (g_worldGrid.sizeY <= sVar4)) || (sVar5 < 0)) ||
              ((g_worldGrid.sizeZ <= sVar5 ||
               (g_worldGrid.cells
                [(int)sVar4 * (int)g_worldGrid.sizeX + sVar5 * local_8 + (int)sVar3].objects[1] ==
                nullptr)))))))))) {
          this->field_05F6 = sVar5;
          this->field_05F4 = sVar4;
          this->field_05F2 = sVar3;
          return 1;
        }
        local_10 = local_10 + 4;
        local_c = local_c + 1;
      } while (local_c < 0x18);
      iVar6 = iVar6 + -1;
    } while (local_18 <= iVar6);
  }
  return 0;
}

// 00493050 STBoatC::vfunc_114
#line 4 "decomp/ST.exe/functions/00493050/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00401681
   Slots: 0x114
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=2098/2106; unique_owner_for_target */

undefined4 __thiscall st::fn_00493050(STBoatC *this,int param_1)

{
  STBoatC_field_06F7State SVar1;

  if ((this->field_045D == CASE_3) &&
     ((this->field_082E == CASE_FFFFFFFF || (this->field_082E == ~CASE_FFFFFFFF)))) {
    SVar1 = this->field_06F7;
    if ((SVar1 == CASE_7) || ((SVar1 == CASE_13 || (SVar1 == CASE_1B)))) {
      if (this->field_07CA == nullptr) {
        if (param_1 == 0xfd) {
          return 1;
        }
        if (param_1 == 0xfe) {
          return 1;
        }
        if ((((0 < param_1) && (param_1 < 0x29)) && (param_1 != 7)) &&
           ((param_1 != 0x13 && (param_1 != 0x1b)))) {
          return 1;
        }
      }
    }
    else if (((param_1 == 7) || (param_1 == 0x13)) || (param_1 == 0x1b)) {
      return 1;
    }
  }
  return 0;
}

// 004939B0 STBoatC::sub_004939B0
#line 4 "decomp/ST.exe/functions/004939B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=6
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=00479600 @ 004797DA
   -> CMP CMP EAX,0x1 | 00479600 @ 00479B2B -> CMP CMP EAX,0x1 | 00479600 @ 00479D79 -> CMP CMP
   EAX,0x1 */

int __thiscall st::fn_004939B0(STBoatC *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar5;
  int iVar4;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_c;
  int local_8;

  local_c = 1000000;
  local_8 = 0;
  do {
    iVar8 = 0;
    do {
      iVar5 = this->field_0639 + local_8;
      sVar7 = (short)iVar8;
      sVar2 = (short)local_8;
      if (((iVar5 == this->field_005B) && (this->field_063B + iVar8 == (int)this->field_005D)) &&
         (this->field_063D + 1 == (int)this->field_005F)) {
        *param_1 = this->field_0639 + sVar2;
        *param_2 = this->field_063B + sVar7;
        *param_3 = this->field_063D + 1;
        return 1;
      }
      sVar1 = this->field_063D + 1;
      sVar6 = sVar7 + this->field_063B;
      sVar3 = sVar2 + this->field_0639;
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
           ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))))) ||
          (g_worldGrid.sizeZ <= sVar1)) ||
         (STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0] == nullptr)) {
        iVar4 = st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,iVar5
                             ,this->field_063B + iVar8,this->field_063D + 1);
        if (iVar4 < local_c) {
          *param_1 = this->field_0639 + sVar2;
          *param_2 = sVar7 + this->field_063B;
          *param_3 = this->field_063D + 1;
          local_c = iVar4;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return (uint)(local_c != 1000000);
    }
  } while( true );
}

// 00494870 STBoatC::vfunc_F4
#line 4 "decomp/ST.exe/functions/00494870/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 0040200E
   Slots: 0xF4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1846/2106; unique_owner_for_target

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_05C0 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

bool __thiscall st::fn_00494870(STBoatC *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 1;
  if (((this->field_0732 != 1) || (7 < param_1)) ||
     ((g_playSystem_00802A38 != nullptr &&
      (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)))) goto cf_common_exit_00494A35;
  bVar1 = (byte)this->field_0024;
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar5][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_0049495d;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (!bVar6) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
        iVar4 = 0;
      }
      else {
        uVar5 = param_1 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar5];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
          iVar4 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00494a19;
          iVar4 = 2;
        }
      }
      bVar6 = iVar4 < 0;
    }
    else {
      bVar6 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if (!bVar6) {
      uVar3 = 0;
      goto cf_common_exit_00494A35;
    }
  }
  iVar4 = st::fn_00405AE7(this,param_1);
  uVar3 = (undefined1)iVar4;
cf_common_exit_00494A35:
  if ((this->field_045D == CASE_14) && (this->field_05C0 == CASE_3)) {
    uVar3 = 0;
  }
  return (bool)uVar3;
}

// 004952C0 STBoatC::vfunc_120
#line 4 "decomp/ST.exe/functions/004952C0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405C4A
   Slots: 0x120
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004952C0(STBoatC *this)

{
  return (uint)(0 < this->field_073A);
}

// 004952E0 STBoatC::sub_004952E0
#line 4 "decomp/ST.exe/functions/004952E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004952E0 returns return of FUN_004b7d50 @ 004953DE

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0 */

bool __thiscall st::fn_004952E0(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  STWorldObject *pSVar5;
  bool bVar6;
  uint uVar7;

  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
      ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))) &&
     ((sVar2 < g_worldGrid.sizeZ &&
      ((pSVar5 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], pSVar5 != nullptr &&
       (pSVar5->value_20 == 1000)))))) {
    st::fn_00402743(pSVar5,this);
  }
  uVar4 = this->field_0423;
  uVar7 = (uint)uVar4;
  sVar1 = this->field_0427;
  sVar2 = this->field_0425;
  if ((((-1 < (short)uVar4) && ((short)uVar4 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
     (((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeZ)))) {
    uVar7 = (uint)(short)uVar4;
    pSVar5 = STGridAt3D(g_worldGrid, uVar7, sVar2, sVar1).objects[0];
    if ((pSVar5 != nullptr) && (pSVar5->value_20 == 1000)) {
      bVar6 = st::fn_00402743(pSVar5,this);
      uVar7 = (uint)bVar6;
    }
  }
  return SUB41(uVar7,0);
}
