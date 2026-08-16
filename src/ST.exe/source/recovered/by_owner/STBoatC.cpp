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
  iVar6 = STReplaceLowWord((uint32_t)(unaff_ESI), (uint16_t)(this->field_0086));
  iVar8 = (int)param_1;
  uVar3 = (iVar8 / (int)this->field_0086) * iVar6;
  uVar7 = iVar6 + uVar3;
  uVar1 = iVar8 - (short)uVar7;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar2 = iVar8 - (short)uVar3;
  uVar5 = (int)uVar2 >> 0x1f;
  if ((int)((uVar1 ^ uVar4) - uVar4) <= (int)((uVar2 ^ uVar5) - uVar5)) {
    uVar3 = uVar7;
  }
  return -(uint)((short)uVar3 != 0x168) & uVar3;
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
  undefined4 *puVar2;
  short *psVar3;
  STBoatC_field_06F3State *pSVar4;

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_00790700);
  this->vtable = &st_global_007905A0;
  puVar2 = (undefined4 *)&this->field_0x231;
  memset(puVar2, 0, 0x8f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x8c);
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
  *(undefined1 *)(psVar3 + 1) = 0;
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

// 0044E960 STBoatC::FUN_0044e960
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

// 0044EDC0 STBoatC::FUN_0044edc0
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

// 0045EEE0 STBoatC::FUN_0045eee0
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
  uVar6 = st::fn_004049B7(*(char *)&this->field_0024);
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
  this->field_00E3 = 1;
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
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar13), (uint16_t)(this->field_0045)),arg_4,arg_5,arg_6);
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
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_0045FF50(STBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar1;
  undefined4 uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0) {
    this_00 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
    if (this_00 != nullptr) {
      st::fn_00402B26(this_00,(uint)(ushort)this->field_0032,'\0');
      iVar1 = st::fn_0040230B((AnonShape_0040D540_1BB7A4CF *)this_00,
                                 (uint)(ushort)this->field_0032);
      switch(iVar1) {
      case 0:
        this->field_00FD = 1;
        st::fn_00404FF2(this_00,(uint)(ushort)this->field_0032);
        break;
      case 1:
        this->field_00FA = 0;
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
    uVar1 = this->vfunc_1C();
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
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 2:
        this->StopMove(unaff_EDI);
        return 3;
      }
    }
  }
  return 0xffffffff;
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
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall st::fn_004602B0(STBoatC *this)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_ESI;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  this->StopMove(unaff_ESI);
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
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = this->StopMove(unaff_EDI);
  iVar2 = this->vfunc_D8();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    if (iVar1 != 0) {
      return -(uint)(iVar1 != 1);
    }
    return 2;
  }
  return -1;
}

// 004803D0 STBoatC::FUN_004803d0
#line 4 "decomp/ST.exe/functions/004803D0/decomp.c"
int __thiscall st::fn_004803D0(STBoatC *this,AnonShape_004803D0_350EB461 *param_1)

{
  int local_EAX_141;
  int local_EAX_344;
  int iVar1;
  int iVar2;

  if ((param_1 == nullptr) ||
     (param_1 == (AnonShape_004803D0_350EB461 *)0x1)) {
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
    local_EAX_141 = st::fn_00404E1C(this,(AnonShape_005EFAE0_B406B78B *)param_1);
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
    iVar2 = this->vfunc_D8();
    if (iVar2 != 0) {
      return -1;
    }
    if (g_playSystem_00802A38->field_00E4 % 0x25 == 0) {
      iVar2 = st::fn_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&param_1);
      if (iVar2 == -4) {
        return 0;
      }
      if (param_1->field_0716 == param_1->field_0712) {
        this->field_03D2 = 0xffff;
        this->field_03D0 = 0xffff;
        this->field_03CE = 0xffff;
        this->field_06EF = 2;
        local_EAX_344 = st::fn_004011AE(this,1);
        return local_EAX_344;
      }
    }
  }
  else if (iVar2 == 2) {
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

// 00486A40 STBoatC::FUN_00486a40
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

// 0048D110 STBoatC::FUN_0048d110
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
          (*(int *)&pSVar4->field_0x18 == this->field_04AB)))))))) {
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
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0048DFD0
          (STBoatC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          int *param_6,int param_7,short *param_8,short *param_9,short *param_10)

{
  int _param_3 = static_cast<int>(param_3);
  int _param_5 = static_cast<int>(param_5);

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
  undefined4 *puVar16;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  int local_3fc [194];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
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
  local_8 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(local_a * 10));
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
    local_30 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70
                         ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                          (int)g_pathingGrid.sizeX * 2));
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
    local_8 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70
                        ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                         (int)g_pathingGrid.sizeX * 2));
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
    uVar6 = st::machine_word_boundary_cast<uint>(local_2c->field_001C * 0x41c64e6d + 0x3039);
    local_2c->field_001C = uVar6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = uVar6 >> 0x10 & 7;
  }
  else {
    sVar3 = (*local_2c->vtable->vfunc_10)
                      (param_1 * 0xc9 + 100,param_2 * 0xc9 + 100,_param_3 * 200 + 100,
                       param_4 * 0xc9 + 100,param_5 * 0xc9 + 100,(int)param_6 * 200 + 100);
    iVar4 = (int)sVar3;
    iVar15 = (iVar4 / 0x2d) * 0x2d;
    iVar8 = iVar15 + 0x2d;
    uVar6 = iVar4 - iVar8;
    uVar7 = (int)uVar6 >> 0x1f;
    uVar11 = iVar4 % 0x2d >> 0x1f;
    if ((int)((uVar6 ^ uVar7) - uVar7) <= (int)((iVar4 % 0x2d ^ uVar11) - uVar11)) {
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
      auto _local_d0 = CONCAT22(local_e0[3],local_88);
      local_e0[1] = local_e0[3];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      auto _local_cc = CONCAT22(local_e0[3],local_84);
      local_d6 = local_e0[3];
      local_d2 = local_e0[3];
      local_92 = local_92 + param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      auto _local_96 = CONCAT22(local_e0[2],local_92);
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
      auto _local_b6 = CONCAT22(local_e0[0],local_ae);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      auto _local_b2 = CONCAT22(local_84,local_aa);
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
              iVar5 <= (int)((local_1c - local_3fc[local_14 + local_1c * 5 + 0xa8] ^ uVar6) - uVar6)
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
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_00490570(STBoatC *this)

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

// 00490E70 STBoatC::FUN_00490e70
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

// 00492420 STBoatC::sub_00492420
#line 4 "decomp/ST.exe/functions/00492420/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall st::fn_00492420(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if ((this->field_07C6 == 1) && (this->field_07CA == nullptr)) {
    this->field_07C6 = 0;
    local_8 = this;
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)&this->field_0x58e,
                       (int *)&local_8);
    if (iVar1 != -4) {
      local_8->ReleaseLoad(this->field_0018);
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
  local_18 = st::machine_word_boundary_cast<int>(this->field_05F0 + 1);
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
      iVar5 = st::machine_word_boundary_cast<int>(this->field_0639 + local_8);
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
                             ,st::machine_word_boundary_cast<int>(this->field_063B + iVar8),st::machine_word_boundary_cast<int>(this->field_063D + 1));
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

// 004952C0 STBoatC::FUN_004952c0
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

