#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STDcResourcC.cpp

// 0057F1D0 STDcResourcC::STDcResourcC
#line 4 "decomp/ST.exe/functions/0057F1D0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B528 (store 0057F1F9)
   Evidence: final_vptr=0079B528; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057F1D0 returns STDcResourcC::STDcResourcC this @ 0057F215 */

STDcResourcC * __thiscall st::fn_0057F1D0(STDcResourcC *this)

{

  /* ST_CALLSITE[0057F1D4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933(reinterpret_cast<STGameObjC *>(this));
  /* ST_CALLSITE[0057F1E1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316(reinterpret_cast<STT3DSprC *>(&this->field_01D5));
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079B688);
  this->vtable = &st_global_0079B528;
  memset(&this->field_0231, 0, 0x28); /* compiler bulk-zero initialization */
  this->field_0261 = 0;
  this->field_0259 = -1;
  return this;
}

// 0057F2E0 STDcResourcC::sub_0057F2E0
#line 4 "decomp/ST.exe/functions/0057F2E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall st::fn_0057F2E0(STDcResourcC *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar6_mg0;

  pcVar6_mg0 = st_global_007CB090;
  if (param_1 == -1) {

    param_1 = st::fn_004019FB(0xdd,this->field_0259);
    pcVar6_mg0 = st_global_007CB08C;
  }
  /* ST_CALLSITE[0057F313]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&CHAR_00h_00811670),pcVar6_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811670;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &CHAR_m_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = &CHAR_00h_00811670;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return (undefined4 *)&CHAR_00h_00811670;
}

// 0057F3A0 STDcResourcC::sub_0057F3A0
#line 4 "decomp/ST.exe/functions/0057F3A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=6; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall st::fn_0057F3A0(STDcResourcC *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar5_mg0;

  pcVar5_mg0 = st_global_007CB098;
  if (param_1 == -1) {
    iVar4 = this->field_0259 / 999999;
    if (0 < iVar4) {
      iVar4 = 0;
    }
    param_1 = -iVar4;
    pcVar5_mg0 = PTR_s_rgold_c0_007cb094;
  }
  /* ST_CALLSITE[0057F3E2]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&CHAR_00h_00811650),pcVar5_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811650;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &CHAR_m_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = &CHAR_00h_00811650;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return (undefined4 *)&CHAR_00h_00811650;
}

// 0057F470 STDcResourcC::sub_0057F470
#line 4 "decomp/ST.exe/functions/0057F470/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall st::fn_0057F470(STDcResourcC *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar6_mg0;

  pcVar6_mg0 = st_global_007CB0A0;
  if (param_1 == -1) {

    param_1 = st::fn_004019FB(0xde,this->field_0259);
    pcVar6_mg0 = st_global_007CB09C;
  }
  /* ST_CALLSITE[0057F4A3]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&CHAR_00h_00811690),pcVar6_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811690;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &CHAR_m_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = &CHAR_00h_00811690;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  memmove(pcVar7, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return (undefined4 *)&CHAR_00h_00811690;
}

// 005805C0 STDcResourcC::sub_005805C0
#line 4 "decomp/ST.exe/functions/005805C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_005805C0(STDcResourcC *this)

{
  undefined4 *this_00;
  char *text;
  int iVar1;
  Global_mfRLoad_param_2Enum GVar2;

  GVar2 = CASE_1D;
  this_00 = &this->field_01D5;
  /* ST_CALLSITE[005805D5]: CALL 0x004035d5; direct=004035D5 thunk_FUN_0057f530; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  text = st::fn_004035D5(this,this->field_025D);
  /* ST_CALLSITE[005805E6]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = st::fn_00404183(reinterpret_cast<STT3DSprC *>(this_00),0xe,PTR_00806764,text,GVar2);
  if (iVar1 == 0) {
    /* ST_CALLSITE[00580606]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar1 = st::fn_00404183
                      (reinterpret_cast<STT3DSprC *>(this_00),0xd,PTR_00806764,PTR_s_termsd_007cb0b4,CASE_1D);
    if (iVar1 == 0) {
      /* ST_CALLSITE[00580624]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240(reinterpret_cast<STT3DSprC *>(this_00),0xe,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[00580673]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      st::fn_004045D9
                (reinterpret_cast<STT3DSprC *>(this_00),(float)this->field_0245 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_0249 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
      st::fn_006EA3E0(this->field_0211,this->field_01ED,-1);
      /* ST_CALLSITE[00580690]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
      st::fn_00403AFD(reinterpret_cast<STT3DSprC *>(this_00),'\r');
      /* ST_CALLSITE[005806A6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240(reinterpret_cast<STT3DSprC *>(this_00),0xd,g_playSystem_00802A38->field_00E4);
      return 1;
    }
  }
  return 0xffffffff;
}

// 00580700 STDcResourcC::sub_00580700
#line 4 "decomp/ST.exe/functions/00580700/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 0040437C
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=593/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
st::fn_00580700(STDcResourcC *this,RecoveredRecord_00580700_AE7D638A *param_1)

{
  byte uVar1;
  byte bVar2;
  dword dVar3;

  *(undefined1 *)param_1 = 4;
  uVar1 = this->field_021D;
  param_1->field_0x2 = 0;
  param_1->field_0x1 = uVar1;
  /* ST_CALLSITE[0058071C]: CALL dword ptr [EDX + 0x2c] */
  dVar3 = this->vfunc_2C();
  param_1->field_0003 = dVar3;
  /* ST_CALLSITE[0058072C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = st::fn_004049B7(this->field_0024);
  param_1->field_0x7 = bVar2;
  param_1->field_0008 = this->field_0018;
  *(undefined1 *)((int)param_1 + (0x2e - this->field_024D)) = 1;
  *(undefined1 *)&param_1[2].field_0003 = 100;
  *(undefined1 *)((int)&param_1[2].field_0003 + 2) = 1;
  return;
}

// 00580780 STDcResourcC::sub_00580780
#line 4 "decomp/ST.exe/functions/00580780/decomp.c"
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

void __thiscall
st::fn_00580780(STDcResourcC *this,RecoveredRecordView_00580780_CA7307F5 *param_1)

{
  byte bVar1;
  dword dVar2;

  /* ST_CALLSITE[00580789]: CALL dword ptr [EAX + 0x2c] */
  dVar2 = this->vfunc_2C();
  *(dword *)param_1 = dVar2;
  /* ST_CALLSITE[0058079B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = st::fn_004049B7(this->field_0024);
  param_1->field_0x4 = bVar1;
  param_1->field_0005 = 4;
  param_1->field_0006 = 0;
  param_1->field_0007 = 1;
  param_1->field_0x8 = this->field_021D;
  /* ST_CALLSITE[005807BC]: CALL dword ptr [EAX + 0x2c] */
  dVar2 = this->vfunc_2C();
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

// 00580860 STDcResourcC::sub_00580860
#line 4 "decomp/ST.exe/functions/00580860/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00401FB4
   Slots: 0x5C
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:23 calls=3
   caller_families=2 receiver_extent=28/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
st::fn_00580860(STDcResourcC *this,RecoveredRecord_00580860_5AE9515A *param_1)

{
  dword dVar1;

  *(undefined1 *)param_1 = 4;
  param_1->field_0x1 = 0;
  /* ST_CALLSITE[00580873]: CALL dword ptr [EAX + 0x2c] */
  dVar1 = this->vfunc_2C();
  param_1->field_0002 = dVar1;
  param_1->field_0x6 = 0;
  param_1->field_0007 = this->field_0018;
  return;
}

// 005808A0 STDcResourcC::sub_005808A0
#line 4 "decomp/ST.exe/functions/005808A0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00404D81
   Slots: 0x58
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:22 calls=5
   caller_families=2 receiver_extent=28/631; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=5; caller_families=2;
   owner_type=/STDcResourcC; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
st::fn_005808A0(STDcResourcC *this,RecoveredRecord_005808A0_34963C85 *param_1)

{
  dword dVar1;

  *(undefined1 *)param_1 = 4;
  param_1->field_0x1 = 0;
  /* ST_CALLSITE[005808B3]: CALL dword ptr [EAX + 0x2c] */
  dVar1 = this->vfunc_2C();
  param_1->field_0002 = dVar1;
  param_1->field_0x6 = 0;
  param_1->field_0007 = this->field_0018;
  return;
}

// 00580F20 STDcResourcC::vfunc_11C
#line 4 "decomp/ST.exe/functions/00580F20/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00405894
   Slots: 0x11C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00580F20(STDcResourcC *this)

{
  return (-(uint)(this->field_025D != 1) & 0xfffffffe) + 2;
}

// 005810B0 STDcResourcC::vfunc_2C
#line 4 "decomp/ST.exe/functions/005810B0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B528
   Entries: 00405817
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005810B0(STDcResourcC *this)

{
  return this->field_0255;
}
