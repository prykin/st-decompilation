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

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079B688;
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
  undefined1 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar6_mg0;

  pcVar6_mg0 = PTR_s_rc276__d_007cb090;
  if (param_1 == -1) {
    uVar2 = st::fn_004019FB(0xdd,this->field_0259);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    param_1 = CONCAT31(extraout_var,uVar2);
    pcVar6_mg0 = PTR_s_rc276_c_d_007cb08c;
  }
  st::external_00000080(&CHAR_00h_00811670,pcVar6_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811670;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &CHAR_m_007cb260;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = &CHAR_00h_00811670;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
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

  pcVar5_mg0 = PTR_s_rgold__d_007cb098;
  if (param_1 == -1) {
    iVar4 = this->field_0259 / 999999;
    if (0 < iVar4) {
      iVar4 = 0;
    }
    param_1 = -iVar4;
    pcVar5_mg0 = PTR_s_rgold_c0_007cb094;
  }
  st::external_00000080(&CHAR_00h_00811650,pcVar5_mg0,param_1);
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
  undefined1 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar6_mg0;

  pcVar6_mg0 = PTR_s_rmeta__d_007cb0a0;
  if (param_1 == -1) {
    uVar2 = st::fn_004019FB(0xde,this->field_0259);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    param_1 = CONCAT31(extraout_var,uVar2);
    pcVar6_mg0 = PTR_s_rmeta_c_d_007cb09c;
  }
  st::external_00000080(&CHAR_00h_00811690,pcVar6_mg0,param_1);
  if (param_2 == 0) {
    return (undefined4 *)&CHAR_00h_00811690;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &CHAR_m_007cb260;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = &CHAR_00h_00811690;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
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
  text = st::fn_004035D5(this,this->field_025D);
  iVar1 = st::fn_00404183((STT3DSprC *)this_00,0xe,PTR_00806764,text,GVar2);
  if (iVar1 == 0) {
    iVar1 = st::fn_00404183
                      ((STT3DSprC *)this_00,0xd,PTR_00806764,PTR_s_termsd_007cb0b4,CASE_1D);
    if (iVar1 == 0) {
      st::fn_00405240((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_004045D9
                ((STT3DSprC *)this_00,(float)(int)this->field_0245 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_0249 * _DAT_007904f8 + _DAT_007904f4,
                 (float)(int)this->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
      st::fn_006EA3E0((void *)this->field_0211,this->field_01ED,-1);
      st::fn_00403AFD((STT3DSprC *)this_00,'\r');
      st::fn_00405240((STT3DSprC *)this_00,0xd,g_playSystem_00802A38->field_00E4);
      return 1;
    }
  }
  return 0xffffffff;
}

// 00580F20 STDcResourcC::FUN_00580f20
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

// 005810B0 STDcResourcC::FUN_005810b0
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

