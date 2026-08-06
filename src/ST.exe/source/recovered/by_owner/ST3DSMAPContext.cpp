#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ST3DSMAPContext.cpp

// 006DBAB0 ST3DSMAPContext::sub_006DBAB0
#line 4 "decomp/ST.exe/functions/006DBAB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006DBCF0 -> 006DBAB0 @ 006DBCF3; ST3DSMAPContext::sub_006DBCF0 this

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DBAB0(ST3DSMAPContext *this)

{
  uint uVar1;
  int iVar2;

  do {
    iVar2 = 0;
    if (this->field_0000 != nullptr) {
      this->field_0000[0x8b] = 0;
    }
    st::fn_006B9890((int *)&this->field_044A);
    st::fn_006B9890((int *)&this->field_044E);
    st::fn_006B9890((int *)&this->field_0452);
    st::fn_006AB060(&this->field_0420);
    this->field_0428 = 0;
    this->field_042C = 0;
    this->field_0430 = 0;
    this->field_0434 = 0;
    this->field_04A2 = 0;
    this->field_04A6 = 0;
    this->field_04AA = 0;
    this->field_04AE = 0;
    this->field_04BA = 0;
    this->field_043E = 0;
    this->field_04C6 = 0;
    this->field_04CA = 0;
    this->field_04D6 = 0;
    this->field_04DA = 0;
    st::fn_006AB060((void **)&this->field_0388);
    if (this->field_031C != nullptr) {
      uVar1 = 0;
      if (0 < (int)this->field_0310) {
        do {
          if ((*(uint *)(this->field_031C + iVar2) & 0x8000) != 0) {
            st::fn_006E8BA0(this,uVar1);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006A5E90(*(short **)(this->field_031C + iVar2 + 0xec));
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x114;
        } while ((int)uVar1 < (int)this->field_0310);
      }
      st::fn_006AB060(&this->field_031C);
      st::fn_006AB060((void **)&this->field_0330);
    }
    this->field_02E0 = 0;
    this->field_0000 = nullptr;
    this->field_0310 = 0;
    this->field_0318 = 0;
    this->field_0328 = 0;
    this->field_032C = 0;
    this->field_02DC = 0;
    this->field_02A8 = 0;
    st::fn_006AB060(&this->field_0008);
    st::fn_006AB060(&this->field_0010);
    st::fn_006AB060(&this->field_0018);
    st::fn_006AB060(&this->field_0158);
    st::fn_006AB060(&this->field_0154);
    st::fn_006AB060(&this->field_001C);
    st::fn_006AB060(&this->field_0350);
    st::fn_006AB060(&this->field_0354);
    st::fn_006AB060(&this->field_02B0);
    st::fn_006B9890(&this->field_0294);
    st::fn_006E6620((int)this);
    this->field_0014 = nullptr;
    this->field_0004 = nullptr;
    this->field_0280 = nullptr;
    this->field_0290 = 0;
    this->field_029C = 0;
    this->field_0140 = nullptr;
    this->field_028C = 0;
    this->field_013C = 0;
    this->field_0124 = 0;
    this = (ST3DSMAPContext *)this->field_0358;
  } while (this != nullptr);
  return;
}

// 006DBCF0 ST3DSMAPContext::sub_006DBCF0
#line 4 "decomp/ST.exe/functions/006DBCF0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=8;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DBCF0(ST3DSMAPContext *this)

{
  ST3DSMAPContext *this_00;

  st::fn_006DBAB0(this);
  this_00 = (ST3DSMAPContext *)this->field_0358;
  if (this_00 != nullptr) {
    st::fn_006DBCF0(this_00);
    st::fn_0072E2B0((HoloTy *)this_00);
  }
  return;
}

// 006DBD20 ST3DSMAPContext::sub_006DBD20
#line 4 "decomp/ST.exe/functions/006DBD20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=59;
   incoming_edx_uses=0; incoming_stack_parameter_uses=29; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A9540 -> 006DBD20 @ 004A9724; data at 00807598 | 006DC050 -> 006DBD20 @ 006DC10A;
   ST3DSMAPContext::sub_006DC050 this */

void __thiscall
st::fn_006DBD20
          (ST3DSMAPContext *param_1,AnonPointee_ST3DSMAPContext_0004 *param_2,uint param_3,
          undefined4 param_4,int param_5,int param_6,double param_7,double param_8,double param_9,
          double param_10)

{
  void *pvVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  float10 fVar3;
  longlong lVar4;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  float local_20 [3];
  double local_14;
  double local_c;

  param_1->field_0004 = param_2;
  param_1->field_0020 = param_3;
  param_1->field_0024 = param_4;
  param_1->field_0028 = param_5;
  iVar2 = param_5 * param_6;
  param_1->field_002C = param_6;
  pvVar1 = st::fn_006ACF50(param_1->field_0008,iVar2 + 0x18);
  param_1->field_0008 = pvVar1;
  param_1->field_000C = ((int)pvVar1 - 1U ^ param_3) & 7 ^ (int)pvVar1 + 7U;
  if (param_1->field_0124 == 1) {
    pvVar1 = st::fn_006ACF50(param_1->field_0010,iVar2 + 0x10);
    param_1->field_0010 = pvVar1;
  }
  else {
    pvVar1 = st::fn_006ACF50(param_1->field_0010,iVar2 * 2 + 0x10);
    param_1->field_0010 = pvVar1;
    if (((param_1->field_0144 != 0) && (iVar2 = param_1->field_0174, 0 < iVar2)) &&
       (iVar2 < param_1->field_002C)) {
      pvVar1 = st::fn_006ACF50(param_1->field_001C,param_1->field_0028 * iVar2);
      param_1->field_001C = pvVar1;
    }
  }
  local_14 = param_8 - param_7;
  param_1->field_02F0 = 100;
  param_1->field_0014 = (ushort *)((int)param_1->field_0010 + 8);
  param_1->field_02F4 = 100;
  param_1->field_00F8 = local_14 / (double)param_5;
  local_c = param_10 - param_9;
  param_1->field_0100 = local_c / (double)param_6;
  param_1->field_00E8 = local_14 / (double)param_5;
  param_1->field_00F0 = local_c / (double)param_6;
  param_1->field_010C = _DAT_0079df78 / (param_1->field_011C - param_1->field_0114);
  lVar4 = st::fn_0072E288();
  param_1->field_02E4 = (int)lVar4;
  st::fn_006DD660(param_1,0,0,param_5,param_6);
  st::fn_006DD6E0
            (param_1,STPiece<0,4>(param_7),STPiece<4,4>(param_7),STPiece<0,4>(param_8),STPiece<4,4>(param_8),STPiece<0,4>(param_9),
             STPiece<4,4>(param_9),STPiece<0,4>(param_10),STPiece<4,4>(param_10));
  st::fn_006DD610(param_1,(-(uint)(param_1->field_0124 != 1) & 0xfffffffc) + 4,param_1->field_0098,
               param_1->field_00A0);
  if ((param_1->field_0124 == 0) || (param_1->field_0124 == 10)) {
    local_20[0] = 0.0;
    local_20[1] = 0.0;
    local_20[2] = 0.0;
    st::fn_006E25D0(param_1,&local_40,local_20,0.0,0.0,0.0,1);
    st::fn_006E25D0(param_1,&local_30,local_20,0.0,0.0,1.0,1);
    param_1->field_0108 = local_2c - local_3c;
  }
  param_1->field_02D8 = 1;
  param_1->field_02DC = 0;
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  if (param_1->field_0358 != 0) {
    *(AnonPointee_ST3DSMAPContext_0280 **)(param_1->field_0358 + 0x280) = param_1->field_0280;
    param_1->field_0368 = param_1->field_00C8 / (double)param_1->field_0380;
    lVar4 = st::fn_0072E288();
    iVar2 = (int)lVar4;
    param_1->field_0370 = iVar2;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    fVar3 = (float10)iVar2 * extraout_ST0;
    param_1->field_0360 = (double)fVar3;
    st::fn_006DBD20((ST3DSMAPContext *)param_1->field_0358,nullptr,0,0,
                 iVar2,iVar2,(double)(fVar3 * (float10)_DAT_0079df58),
                 (double)(fVar3 * (float10)_DAT_007901c0),(double)(fVar3 * (float10)_DAT_0079df58),
                 (double)(fVar3 * (float10)_DAT_007901c0));
    iVar2 = param_1->field_0358;
    param_1->field_038C = *(undefined4 *)(iVar2 + 0xc);
    param_1->field_0390 = *(undefined4 *)(iVar2 + 0x14);
    param_1->field_037C = *(undefined4 *)(iVar2 + 0x28);
    param_1->field_0374 = -30000;
    param_1->field_0378 = -30000;
    *(undefined4 *)(iVar2 + 0x370) = param_1->field_0370;
    *(undefined4 *)(param_1->field_0358 + 0x134) = 1;
  }
  return;
}

// 006DC050 ST3DSMAPContext::sub_006DC050
#line 4 "decomp/ST.exe/functions/006DC050/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=43;
   incoming_edx_uses=0; incoming_stack_parameter_uses=36; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A8FC0 -> 006DC050 @ 004A90C9; data at 00807598 | 004A8FC0 -> 006DC050 @ 004A9301;
   data at 00807598
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=void
   __thiscall sub_006DC050(ST3DSMAPContext * param_1, undefined4 param_2, uint param_3, undefined4
   param_4, int param_5, int param_6, double param_7, double param_8, double param_9, double
   param_10, double param_11, double param_12, int param_13) Evidence: x87 double-width accesses or
   exact split stores into an owner field independently typed or consumed as double prove physical
   EBP slot boundaries; merged_slots={10=1, 11=1}; sites=incoming qword stored into
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0xc8 and independently consumed as
   double; sites=006DC0A7 stores incoming qword half 0, 006DC0B0 stores incoming qword half 1,
   006DC140 reads owner field as double | 006DC23E forwards adjacent incoming dwords to
   ST3DSMAPContext::sub_006DBD20 parameter stack slot +0x14 typed /double | 006DC23E forwards
   adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20 parameter stack slot +0x24 typed
   /double | incoming qword stored into
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0xd0 and independently consumed as
   double; sites=006DC0B9 stores incoming qword half 0, 006DC0C2 stores incoming qword half 1,
   006DC158 reads owner field as double, 006DC243 reads owner field as double, 006DC264 reads owner
   field as double, 006DC2BA reads owner field as double, 006DC2D2 reads owner field as double |
   006DC23E forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20 parameter stack slot
   +0x1c typed /double | 006DC23E forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DBD20
   parameter stack slot +0x2c typed /double */

void __thiscall
st::fn_006DC050
          (ST3DSMAPContext *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
          int param_6,double param_7,double param_8,double param_9,double param_10,double param_11,
          double param_12,int param_13)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  AnonShape_006DBCA0_EF06575F *pAVar4;
  int iVar5;
  longlong lVar6;

  puVar3 = st::fn_006ACF50(param_1->field_0350,0x658);
  iVar5 = 0;
  param_1->field_0350 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)((int)param_1->field_0350 + 4) = 0;
  puVar3 = st::fn_006ACF50(param_1->field_0354,0x658);
  param_1->field_0354 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)((int)param_1->field_0354 + 4) = 0;
  param_1->field_00C8 = param_11;
  param_1->field_00D0 = param_12;
  param_1->field_0128 = 0;
  param_1->field_041C = 0;
  param_1->field_0124 = 0;
  st::fn_006DBD20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (0 < param_13) {
    pAVar4 = (AnonShape_006DBCA0_EF06575F *)st::fn_006B04D0(0x4f2);
    if (pAVar4 != nullptr) {
      iVar5 = st::fn_006DBCA0(pAVar4);
    }
    param_1->field_0358 = iVar5;
    param_1->field_0380 = param_13;
    param_1->field_0368 = param_1->field_00C8 / (double)param_13;
    lVar6 = st::fn_0072E288();
    param_1->field_0370 = (int)lVar6;
    param_1->field_0360 = (double)((float10)(int)lVar6 * param_1->field_0368);
    *(double *)(iVar5 + 200) = param_11;
    *(double *)(param_1->field_0358 + 0xd0) = param_12;
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x41c) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x124) = 1;
    dVar1 = param_1->field_0360 * _DAT_007901c0;
    dVar2 = param_1->field_0360 * _DAT_0079df58;
    st::fn_006DBD20((ST3DSMAPContext *)param_1->field_0358,0,0,0,param_1->field_0370,
                 param_1->field_0370,dVar2,dVar1,dVar2,dVar1);
    st::fn_006DD790((ST3DSMAPContext *)param_1->field_0358,
                 (float)((float10)_DAT_0079df88 -
                        (float10)param_1->field_00D0 * (float10)_DAT_0079df90));
    st::fn_006DD800((ST3DSMAPContext *)param_1->field_0358,
                 (float)((float10)param_1->field_00D0 + (float10)param_1->field_00D0 +
                        (float10)_DAT_0079df88));
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0x70;
    *(int *)(param_1->field_0358 + 0x380) = param_13;
    *(undefined4 *)(param_1->field_0358 + 0x370) = param_1->field_0370;
    dVar1 = param_1->field_00D0 * _DAT_0079df80;
    param_1->field_0384 = 0x20;
    param_1->field_0394 = dVar1;
    dVar2 = param_1->field_00D0 * _DAT_0079df90;
    param_1->field_039C = dVar2;
    param_1->field_03A4 = dVar2 - dVar1;
    *(undefined4 *)(param_1->field_0358 + 900) = 0x20;
  }
  return;
}

// 006DD530 ST3DSMAPContext::sub_006DD530
#line 4 "decomp/ST.exe/functions/006DD530/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=20; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=1; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006DD530(ST3DSMAPContext *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  *param_3 = (float)this->field_0080;
  fVar1 = (float)((float10)this->field_0080 * (float10)_DAT_0079df60);
  switch(this->field_00A8 & 0xfffffff7) {
  case CASE_0:
    *param_1 = fVar1 + (float)this->field_0098;
    *param_2 = fVar1 + (float)this->field_00A0;
    return;
  case CASE_1:
    *param_1 = (float)this->field_0098 - fVar1;
    *param_2 = fVar1 + (float)this->field_00A0;
    return;
  case CASE_2:
    *param_1 = (float)this->field_0098 - fVar1;
    *param_2 = (float)this->field_00A0 - fVar1;
    return;
  case CASE_3:
    *param_1 = fVar1 + (float)this->field_0098;
    *param_2 = (float)this->field_00A0 - fVar1;
    return;
  default:
    *param_1 = (float)this->field_0098;
    *param_2 = (float)this->field_00A0;
    return;
  }
}

// 006DD610 ST3DSMAPContext::sub_006DD610
#line 4 "decomp/ST.exe/functions/006DD610/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=void
   __thiscall sub_006DD610(ST3DSMAPContext * this, uint param_2, double param_3, double param_4)
   Evidence: x87 double-width accesses or exact split stores into an owner field independently typed
   or consumed as double prove physical EBP slot boundaries; merged_slots={1=2, 3=2}; sites=006DD64A
   forwards adjacent incoming dwords to Library::Ourlib::STREND::FUN_006dd050 parameter stack slot
   +0x4 typed /double | 006DD64A forwards adjacent incoming dwords to
   Library::Ourlib::STREND::FUN_006dd050 parameter stack slot +0xc typed /double */

void __thiscall
st::fn_006DD610(ST3DSMAPContext *this,uint param_2,double param_3,double param_4)

{
  this->field_0088 = param_3;
  this->field_0090 = param_4;
  st::fn_006DD050(this,param_2,param_3,param_4);
  return;
}

// 006DD790 ST3DSMAPContext::sub_006DD790
#line 4 "decomp/ST.exe/functions/006DD790/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=6;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DD790(ST3DSMAPContext *this,float param_1)

{
  longlong lVar1;

  this->field_0114 = (double)param_1;
  if (param_1 < (float)this->field_011C) {
    this->field_010C = (double)((float)_DAT_0079df78 / ((float)this->field_011C - param_1));
    lVar1 = st::fn_0072E288();
    this->field_02E4 = (int)lVar1;
    st::fn_006DD870(this);
    return;
  }
  return;
}

// 006DD800 ST3DSMAPContext::sub_006DD800
#line 4 "decomp/ST.exe/functions/006DD800/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=6;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DD800(ST3DSMAPContext *this,float param_1)

{
  longlong lVar1;

  this->field_011C = (double)param_1;
  if ((float)this->field_0114 < param_1) {
    this->field_010C = (double)((float)_DAT_0079df78 / (param_1 - (float)this->field_0114));
    lVar1 = st::fn_0072E288();
    this->field_02E4 = (int)lVar1;
    st::fn_006DD870(this);
    return;
  }
  return;
}

// 006DD870 ST3DSMAPContext::sub_006DD870
#line 4 "decomp/ST.exe/functions/006DD870/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006DD790 -> 006DD870 @ 006DD7E3; ST3DSMAPContext::sub_006DD790 this; stable alias ESI |
   006DD800 -> 006DD870 @ 006DD853; ST3DSMAPContext::sub_006DD800 this; stable alias ESI | 006DDAE0
   -> 006DD870 @ 006DDB57; ST3DSMAPContext::sub_006DDAE0 this; stable alias EBX

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=34;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=4; attributed_named_callers=4; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DD870(ST3DSMAPContext *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *puVar8;
  longlong lVar9;
  int local_14;
  int local_10;
  int local_c;

  if (((this->field_0148 < 1) || (this->field_0154 == nullptr)) ||
     (this->field_0164 <= this->field_015C)) {
    st::fn_006AB060(&this->field_0158);
  }
  else {
    if (this->field_0158 == nullptr) {
      pvVar1 = st::fn_006AAC70(0xc000);
      this->field_0158 = pvVar1;
    }
    lVar9 = st::fn_0072E288();
    uVar6 = (uint)lVar9 & 0x7f00;
    this->field_016C = uVar6;
    lVar9 = st::fn_0072E288();
    this->field_0170 = (uint)lVar9 & 0x7f00;
    local_c = 0;
    iVar2 = (int)uVar6 >> 8;
    if (iVar2 != 0) {
      iVar5 = 0;
      iVar3 = iVar2;
      do {
        puVar8 = (byte *)((int)this->field_0158 + iVar5);
        iVar5 = iVar5 + 0x100;
        iVar3 = iVar3 + -1;
        pbVar7 = this->field_0154;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
        local_c = iVar2;
      } while (iVar3 != 0);
    }
    iVar3 = this->field_0170 - this->field_016C;
    iVar2 = this->field_0148;
    iVar5 = (int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8;
    iVar3 = 0;
    if (0 < iVar5) {
      local_10 = local_c << 8;
      iVar4 = iVar5 / 2;
      local_14 = iVar5;
      do {
        puVar8 = (byte *)((int)this->field_0158 + local_10);
        local_10 = local_10 + 0x100;
        pbVar7 = this->field_0154 + (iVar4 / iVar5 + 1) * 0x100;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
        iVar4 = iVar4 + iVar2;
        local_14 = local_14 + -1;
        iVar3 = iVar5;
      } while (local_14 != 0);
    }
    if (local_c + iVar3 < 0xc0) {
      iVar2 = (local_c + iVar3) * 0x100;
      do {
        puVar8 = (byte *)((int)this->field_0158 + iVar2);
        iVar2 = iVar2 + 0x100;
        pbVar7 = this->field_0154 + this->field_0148 * 0x100;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
      } while (iVar2 < 0xc000);
    }
    lVar9 = st::fn_0072E288();
    iVar2 = (int)lVar9;
    this->field_0174 = iVar2;
    if (((this->field_0144 != 0) && (0 < iVar2)) && (iVar2 < this->field_002C)) {
      pvVar1 = st::fn_006ACF50(this->field_001C,this->field_0028 * iVar2);
      this->field_001C = pvVar1;
      return;
    }
  }
  return;
}

// 006DDA90 ST3DSMAPContext::sub_006DDA90
#line 4 "decomp/ST.exe/functions/006DDA90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DDA90(ST3DSMAPContext *this,float param_1,float param_2)

{
  if (param_1 < _DAT_0079034c) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0.0;
  }
  if (_DAT_0079dfd0 < param_2) {
    param_2 = _DAT_0079dfd0;
  }
  this->field_015C = (double)param_1;
  this->field_0164 = (double)param_2;
  st::fn_006DD870(this);
  return;
}

// 006DDAE0 ST3DSMAPContext::sub_006DDAE0
#line 4 "decomp/ST.exe/functions/006DDAE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0056DB80 -> 006DDAE0 @ 0056E440; data at 008032C8 */

void __thiscall
st::fn_006DDAE0
          (ST3DSMAPContext *this,int param_1,int param_2,int param_3,ushort *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;

  this->field_014C = param_2;
  this->field_0148 = param_1;
  uVar3 = param_1 + param_2 + param_3;
  this->field_0150 = param_3;
  pbVar1 = st::fn_006ACF50(this->field_0154,(uVar3 + 1) * 0x100);
  this->field_0154 = pbVar1;
  iVar2 = 0;
  do {
    this->field_0154[iVar2] = (byte)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  pbVar1 = this->field_0154 + 0x100;
  for (iVar2 = (uVar3 & 0xffffff) << 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar1 = *(undefined4 *)param_4;
    param_4 = param_4 + 2;
    pbVar1 = pbVar1 + 4;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pbVar1 = (byte)*param_4;
    param_4 = (ushort *)((int)param_4 + 1);
    pbVar1 = pbVar1 + 1;
  }
  st::fn_006DD870(this);
  st::fn_006DDB70(this);
  return;
}

// 006DDB70 ST3DSMAPContext::sub_006DDB70
#line 4 "decomp/ST.exe/functions/006DDB70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DDB70(ST3DSMAPContext *this)

{
  void *pvVar1;

  if (0 < this->field_0174) {
    this->field_0144 = 1;
    this->field_02D8 = 1;
    pvVar1 = st::fn_006ACF50(this->field_001C,this->field_0028 * this->field_0174);
    this->field_001C = pvVar1;
  }
  return;
}

// 006DDBB0 ST3DSMAPContext::sub_006DDBB0
#line 4 "decomp/ST.exe/functions/006DDBB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056DB80 -> 006DDBB0 @ 0056E453

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DDBB0(ST3DSMAPContext *this)

{
  this->field_0144 = 0;
  this->field_02D8 = 1;
  st::fn_006AB060(&this->field_001C);
  return;
}

// 006DDBE0 ST3DSMAPContext::sub_006DDBE0
#line 4 "decomp/ST.exe/functions/006DDBE0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004A8920 -> 006DDBE0 @ 004A89ED

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=20;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006DDBE0(ST3DSMAPContext *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dfd8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((this->field_0004 == nullptr) ||
      ((this->field_0004->field_000C & 0x1100) != 0x100)) &&
     ((this->field_02DC == 0 || (this->field_02D8 != 0)))) {
    uVar4 = this->field_0038 - this->field_0030;
    iVar3 = this->field_003C - this->field_0034;
    ExceptionList = &local_14;
    st::fn_006B01D0(this->field_000C,this->field_0028,this->field_0030,this->field_0034,uVar4,iVar3,
                 (byte)this->field_0128);
    if (this->field_0124 == 1) {
      puVar2 = (undefined4 *)
               ((int)this->field_0014 + this->field_0030 + this->field_0028 * this->field_0034);
      while (iVar3 != 0) {
        puVar5 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar5 = 0x40;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + this->field_0028);
        iVar3 = iVar3 + -1;
      }
    }
    else {
      local_2c = this->field_0014 + this->field_0028 * this->field_0034 + this->field_0030;
      local_8 = 1;
      while (iVar3 != 0) {
        st::fn_006CE6C0(local_2c,uVar4,30000);
        local_2c = local_2c + this->field_0028;
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

// 006DDD50 ST3DSMAPContext::sub_006DDD50
#line 4 "decomp/ST.exe/functions/006DDD50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005745E0 -> 006DDD50 @ 005746B4; data at 0080760C | 005745E0 -> 006DDD50 @ 005746CF;
   data at 0080760C

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=52;
   incoming_edx_uses=0; incoming_stack_parameter_uses=88; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall st::fn_006DDD50(ST3DSMAPContext *param_1)

{
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  char *pcVar7;
  uint uVar8;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar9;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar10;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar18;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar19;
  int iVar20;
  ushort *puVar21;
  int local_120;
  int local_11c;
  float local_ec [2];
  int local_e4;
  undefined1 *local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0 [4];
  int local_90;
  int local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c [2];
  int local_74;
  undefined1 local_68 [24];
  char *local_50;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *local_44;
  float local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar15;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f4598f33d;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f0ea6b32c;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f0605bde0;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5ff32f7558;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_103fe0eba8e3;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar16;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar17;

  puStack_c = &DAT_0079dff8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffed4;
  if (((param_1->field_0004 == nullptr) ||
      ((param_1->field_0004->field_000C & 0x1100) != 0x100)) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    ExceptionList = &local_14;
    param_1->field_02D8 = 1;
    local_8 = 0;
    st::fn_0072DA40();
    local_3c = (undefined4 *)&stack0xfffffed4;
    local_1c = &stack0xfffffed4;
    st::fn_0072DA40();
    local_8 = 0xffffffff;
    if (((int)param_1->field_00A8 < 0) || (3 < (int)param_1->field_00A8)) {
      local_90 = param_1->field_013C;
      while (local_90 = local_90 + -1, local_cc = &stack0xfffffed4, local_1c = &stack0xfffffed4,
            0 < local_90) {
        pRVar18 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&param_1->field_0140;
        pRVar10 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)pRVar18;
        local_11c = local_90;
        if (0 < local_90) {
          do {
            pRVar1 = pRVar10->next;
            pRVar11 = pRVar1;
            pRVar19 = pRVar10;
            if (pRVar1->field_0008 <= pRVar10->field_0008) {
              pRVar18->next = pRVar1;
              pRVar10->next = pRVar1->next;
              pRVar1->next = pRVar10;
              pRVar11 = pRVar10;
              pRVar19 = pRVar1;
            }
            local_11c = local_11c + -1;
            pRVar10 = pRVar11;
            pRVar18 = pRVar19;
          } while (local_11c != 0);
        }
      }
    }
    else {
      local_44 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&param_1->field_0140;
      for (pRVar15 = param_1->field_0140;
          ((pRVar15 != nullptr &&
           (pRVar15->field_0008 == 0)) && (pRVar15->field_0024 < 3)); pRVar15 = pRVar15->next) {
        local_44 = pRVar15;
      }
      temp_5f0ea6b32c = local_44->next;
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0;
      STPiece<0,4>(local_68) = temp_5f0ea6b32c;
      local_1c = &stack0xfffffed4;
      local_cc = &stack0xfffffed4;
      for (pRVar16 = temp_5f0ea6b32c; pRVar16 != nullptr;
          pRVar16 = pRVar16->next) {
        st::fn_006E25D0(param_1,local_7c,&local_88,
                     (double)pRVar16->field_0004 * param_1->field_00C8,
                     (double)pRVar16->field_0006 * param_1->field_00C8,
                     (double)(int)((int)pRVar16->field_0008 - (uint)pRVar16->field_0048) *
                     param_1->field_00D0,1);
        pRVar16->field_0044 = local_74;
      }
      st::fn_006DD530(param_1,local_ec,&local_40,(float *)(local_68 + 0x10));
      while (temp_5f0ea6b32c != nullptr) {
        temp_103fe0eba8e3 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)local_68;
        for (pRVar17 = temp_5f0ea6b32c;
            pRVar17 != nullptr; pRVar17 = pRVar17->next)
        {
          pRVar9 = temp_5f0ea6b32c;
          do {
            if (pRVar17->field_0044 < pRVar9->field_0044) break;
            pRVar9 = pRVar9->next;
          } while (pRVar9 != nullptr);
          if (pRVar9 == nullptr) break;
          temp_103fe0eba8e3 = pRVar17;
        }
        if (pRVar17 == nullptr) {
          local_44->next = temp_5f0ea6b32c;
        }
        else {
          temp_103fe0eba8e3->next = pRVar17->next;
          pRVar17->next = nullptr;
          local_44->next = pRVar17;
          temp_5f0ea6b32c = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)STPiece<0,4>(local_68);
          local_44 = pRVar17;
        }
      }
    }
    if (param_1->field_0124 == 0) {
      for (temp_5f0605bde0 = param_1->field_0140;
          temp_5f0605bde0 != nullptr;
          temp_5f0605bde0 = temp_5f0605bde0->next) {
        st::fn_006E1EE0
                  ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5f0605bde0,
                   local_3c,(int)local_cc,local_a0);
        st::fn_00726CE0(param_1,(int)temp_5f0605bde0);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            st::fn_007279B0(param_1,(int)temp_5f0605bde0,(uint)(byte)local_cc[iVar20],(int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
      }
    }
    else if (param_1->field_0124 == 1) {
      local_38 = param_1->field_0374;
      local_34 = param_1->field_0378;
      local_30 = param_1->field_0370;
      local_2c = local_30;
      for (temp_5ff32f7558 = param_1->field_0140;
          temp_5ff32f7558 != nullptr;
          temp_5ff32f7558 = temp_5ff32f7558->next) {
        st::fn_006E1EE0
                  ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5ff32f7558,
                   local_3c,(int)local_cc,local_a0);
        st::fn_00726CE0(param_1,(int)temp_5ff32f7558);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            st::fn_007282B0
                      ((AnonReceiver_00727C80 *)param_1,
                       (AnonShape_007282B0_AFD740A9 *)temp_5ff32f7558,(uint)(byte)local_cc[iVar20],
                       (int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
        if (temp_5ff32f7558->field_0008 == 0) {
          local_e4 = 0;
        }
        else {
          local_e4 = ((int)temp_5ff32f7558->field_0008 - (uint)temp_5ff32f7558->field_0048) *
                     param_1->field_0384;
        }
        local_bc = param_1->field_0380;
        local_c4 = temp_5ff32f7558->field_0004 * local_bc;
        local_c0 = temp_5ff32f7558->field_0006 * local_bc;
        local_bc = local_bc * 2;
        local_b8 = local_bc;
        iVar20 = st::fn_006B0460(&local_b4,&local_c4,&local_38);
        if (iVar20 != 0) {
          if (local_e4 == 0) {
            st::fn_006B0330((int)param_1->field_0014,param_1->field_0028,local_b4 - local_38,
                         local_b0 - local_34,temp_5ff32f7558->field_0040,local_bc,
                         local_b4 - local_c4,local_b0 - local_c0,local_ac,local_a8,'\0');
          }
          else {
            pcVar7 = (char *)((int)param_1->field_0014 +
                             local_b4 + ((local_b0 - local_34) * param_1->field_0028 - local_38));
            pcVar12 = (char *)((((local_b0 - local_c0) * local_bc + temp_5ff32f7558->field_0040) -
                               local_c4) + local_b4);
            while (local_a8 = local_a8 + -1, -1 < local_a8) {
              if (-1 < local_ac + -1) {
                local_120 = local_ac;
                do {
                  if (*pcVar12 != '\0') {
                    *pcVar7 = *pcVar12 + (char)local_e4;
                  }
                  pcVar12 = pcVar12 + 1;
                  pcVar7 = pcVar7 + 1;
                  local_120 = local_120 + -1;
                } while (local_120 != 0);
              }
              pcVar7 = pcVar7 + (param_1->field_0028 - local_ac);
              pcVar12 = pcVar12 + (local_bc - local_ac);
            }
          }
        }
      }
    }
    else {
      for (temp_5f4598f33d = param_1->field_0140;
          temp_5f4598f33d != nullptr;
          temp_5f4598f33d = temp_5f4598f33d->next) {
        if (param_1->field_0124 == 3) {
          st::fn_006E2B60(param_1,(AnonShape_006E2B60_E36B924C *)temp_5f4598f33d,(int)local_3c,
                       (int)local_cc,local_a0);
        }
        else {
          st::fn_006E1EE0
                    ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5f4598f33d
                     ,local_3c,(int)local_cc,local_a0);
        }
        st::fn_00726CE0(param_1,(int)temp_5f4598f33d);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            st::fn_00727DA0
                      ((AnonReceiver_00727C80 *)param_1,
                       (AnonShape_00727DA0_C4265AA0 *)temp_5f4598f33d,(uint)(byte)local_cc[iVar20],
                       (int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
      }
    }
    if (param_1->field_0124 == 5) {
      local_50 = (char *)param_1->field_000C;
      puVar21 = param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar20 = 0;
          if (0 < param_1->field_0028) {
            do {
              if (*local_50 == -1) {
                iVar14 = (int)((30000 - (uint)*puVar21) * 0x100) / 30000;
                if (iVar14 < 0) {
                  iVar14 = 0;
                }
                if (0xff < iVar14) {
                  iVar14 = 0xff;
                }
                *local_50 = (char)iVar14;
              }
              local_50 = local_50 + 1;
              puVar21 = puVar21 + 1;
              iVar20 = iVar20 + 1;
            } while (iVar20 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
    else if (param_1->field_0124 == 2) {
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079dff0,0);
      iVar14 = local_74;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079df68,0);
      iVar2 = local_74;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079b128,0);
      iVar3 = local_74;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 + param_1->field_00D0,0);
      iVar4 = local_74;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0,0);
      iVar5 = local_74;
      st::fn_006E25D0(param_1,local_7c,&local_88,0.0,0.0,0.0,0);
      iVar20 = (local_74 - iVar5) / 10;
      puVar15 = (undefined1 *)param_1->field_000C;
      puVar21 = param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar13 = 0;
          if (0 < param_1->field_0028) {
            do {
              uVar8 = (uint)*puVar21;
              if ((int)uVar8 < local_74 - iVar20) {
                if (iVar5 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_0439;
                  goto cf_common_join_006DE503;
                }
                if (iVar4 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043A;
                  goto cf_common_join_006DE503;
                }
                if (iVar3 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043B;
                  goto cf_common_join_006DE503;
                }
                if (iVar2 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043C;
                  goto cf_common_join_006DE503;
                }
                if (iVar14 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043D;
                  goto cf_common_join_006DE503;
                }
              }
              else {
                uVar6 = param_1->field_0438;
cf_common_join_006DE503:
                *puVar15 = uVar6;
              }
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
              iVar13 = iVar13 + 1;
            } while (iVar13 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

// 006DE9C0 ST3DSMAPContext::sub_006DE9C0
#line 4 "decomp/ST.exe/functions/006DE9C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E1460 -> 006DE9C0 @ 006E1A6B; ST3DSMAPContext::sub_006E1460 this; stable alias ESI |
   006E1460 -> 006DE9C0 @ 006E1B3F; ST3DSMAPContext::sub_006E1460 this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=236;
   incoming_edx_uses=0; incoming_stack_parameter_uses=274; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall st::fn_006DE9C0(ST3DSMAPContext *param_1)

{
  float fVar1;
  AnonPointee_ST3DSMAPContext_0280 *pAVar2;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int local_f8;
  int local_c4;
  int local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  double local_84;
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_54;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *local_50;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e008;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffee8;
  local_a0 = 30000;
  local_c4 = -30000;
  local_9c = 30000;
  local_c0 = -30000;
  if (param_1->field_0124 == 1) {
    local_c0 = param_1->field_0380;
    local_a0 = (param_1->field_0030 + param_1->field_0374) / local_c0;
    if (local_a0 < 0) {
      local_a0 = 0;
    }
    local_f8 = (int)*(short *)param_1->field_0280;
    if (local_f8 <= local_a0) {
      local_a0 = local_f8 + -1;
    }
    local_c4 = (param_1->field_0038 + param_1->field_0374) / local_c0;
    if (local_c4 < 0) {
      local_c4 = 0;
    }
    if (local_f8 <= local_c4) {
      local_c4 = local_f8 + -1;
    }
    local_9c = (param_1->field_0034 + param_1->field_0378) / local_c0;
    if (local_9c < 0) {
      local_9c = 0;
    }
    iVar12 = (int)*(short *)&param_1->field_0280->field_0x2;
    if (iVar12 <= local_9c) {
      local_9c = iVar12 + -1;
    }
    local_c0 = (param_1->field_003C + param_1->field_0378) / local_c0;
    if (local_c0 < 0) {
      local_c0 = 0;
    }
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
    if (local_c0 < iVar12) goto LAB_006defd4;
    iVar5 = iVar12 + -1;
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
  }
  else {
    ExceptionList = &local_14;
    st::fn_006E1C20(param_1,(float)param_1->field_0030,param_1->field_0034,-(float)param_1->field_00D0,
                 &local_20,&local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar12 = (int)*(short *)pAVar2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    iVar12 = 30000;
    if (iVar5 < 30000) {
      iVar12 = iVar5;
      local_a0 = iVar5;
    }
    if (-30000 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar6 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < 30000) {
      local_9c = iVar5;
    }
    if (-30000 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar6 = (int)*(short *)pAVar2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < iVar12) {
      iVar12 = iVar5;
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar6 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar6 = (int)*(short *)pAVar2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < iVar12) {
      iVar12 = iVar5;
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar6 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar6 = (int)*(short *)pAVar2;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6 + -1;
    }
    if (iVar5 < iVar12) {
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar12 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    fVar1 = (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90);
    st::fn_006E1C20(param_1,(float)param_1->field_0030,param_1->field_0034,fVar1,&local_20,&local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar12 = (int)*(short *)pAVar2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_a0) {
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar12 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar12 = (int)*(short *)pAVar2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_a0) {
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar12 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar12 = (int)*(short *)pAVar2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_a0) {
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar12 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (local_c0 < iVar5) {
      local_c0 = iVar5;
    }
    st::fn_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,fVar1,&local_20,
                 &local_28);
    local_84 = (double)local_28;
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pAVar2 = param_1->field_0280;
    local_f8 = (int)*(short *)pAVar2;
    if (local_f8 <= iVar5) {
      iVar5 = local_f8 + -1;
    }
    if (iVar5 < local_a0) {
      local_a0 = iVar5;
    }
    if (local_c4 < iVar5) {
      local_c4 = iVar5;
    }
    lVar14 = st::fn_0072E288();
    iVar5 = (int)lVar14;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar12 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar12 <= iVar5) {
      iVar5 = iVar12 + -1;
    }
    if (iVar5 < local_9c) {
      local_9c = iVar5;
    }
    if (iVar5 <= local_c0) goto LAB_006defd4;
  }
  local_c0 = iVar5;
LAB_006defd4:
  local_9c = local_9c >> 1;
  iVar5 = local_c4 >> 1;
  if (local_c4 < local_f8 + -2) {
    iVar5 = iVar5 + 1;
  }
  iVar6 = local_c0 >> 1;
  if (local_c0 < iVar12 + -2) {
    iVar6 = iVar6 + 1;
  }
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  local_60 = 5;
  local_a0 = local_a0 >> 1;
  do {
    pAVar2 = param_1->field_0280;
    iVar12 = (int)*(short *)&pAVar2->field_0x2 * (int)*(short *)pAVar2 * local_60;
    local_4c = &pAVar2[1].field_0xc + ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) * 4;
    iVar12 = local_a0;
    for (local_5c = local_9c; local_a0 = iVar12, local_5c <= iVar6; local_5c = local_5c + 1) {
      if (iVar12 <= iVar5) {
        piVar10 = (int *)(local_4c + ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar12) * 4);
        do {
          if ((*piVar10 != 0) && (iVar7 = st::fn_006DE570(param_1,iVar12,local_5c), iVar7 != 0)) {
            pRVar3 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)*piVar10;
            pRVar3->next = param_1->field_0140;
            param_1->field_0140 = pRVar3;
            param_1->field_013C = param_1->field_013C + 1;
          }
          iVar12 = iVar12 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar12 <= iVar5);
      }
      iVar12 = local_a0;
    }
    local_60 = local_60 + -1;
    local_5c = local_9c;
  } while (0 < local_60);
  for (; iVar7 = local_9c, local_5c <= iVar6; local_5c = local_5c + 1) {
    local_a0 = iVar12;
    if (iVar12 <= iVar5) {
      iVar7 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar12) * 4;
      do {
        iVar8 = *(int *)(&param_1->field_0280[1].field_0xc + iVar7);
        if (((iVar8 != 0) && (*(int *)(iVar8 + 0x24) < 3)) &&
           (iVar8 = st::fn_006DE570(param_1,iVar12,local_5c), iVar8 != 0)) {
          pRVar3 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)
                    (&param_1->field_0280[1].field_0xc + iVar7);
          pRVar3->next = param_1->field_0140;
          param_1->field_0140 = pRVar3;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar12 <= iVar5);
    }
    iVar12 = local_a0;
  }
  while (local_5c = iVar7, local_a0 = iVar12, local_5c <= iVar6) {
    if (iVar12 <= iVar5) {
      iVar7 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar12) * 4;
      do {
        iVar8 = *(int *)(&param_1->field_0280[1].field_0xc + iVar7);
        if (((iVar8 != 0) && (2 < *(int *)(iVar8 + 0x24))) &&
           (iVar8 = st::fn_006DE570(param_1,iVar12,local_5c), iVar8 != 0)) {
          pRVar3 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)
                    (&param_1->field_0280[1].field_0xc + iVar7);
          pRVar3->next = param_1->field_0140;
          param_1->field_0140 = pRVar3;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar12 <= iVar5);
    }
    iVar12 = local_a0;
    iVar7 = local_5c + 1;
  }
  local_50 = param_1->field_0140;
  iVar7 = param_1->field_013C;
  if ((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) {
    if (local_9c == 0) {
      for (; iVar12 <= iVar5; iVar12 = iVar12 + 1) {
        iVar8 = st::fn_006DE570(param_1,iVar12,-1);
        if (iVar8 != 0) {
          local_8 = 0;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar8 = st::fn_006DE570(param_1,iVar12,-2);
        if (iVar8 != 0) {
          local_8 = 1;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      if (local_a0 == 0) {
        iVar12 = st::fn_006DE570(param_1,-1,-1);
        if (iVar12 != 0) {
          local_8 = 2;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-1,-2);
        if (iVar12 != 0) {
          local_8 = 3;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-2,-1);
        if (iVar12 != 0) {
          local_8 = 4;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-2,-2);
        if (iVar12 != 0) {
          local_8 = 5;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar12 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar12 + -1 <= iVar5) {
        iVar8 = st::fn_006DE570(param_1,iVar12,-1);
        if (iVar8 != 0) {
          local_8 = 6;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar8 = st::fn_006DE570(param_1,iVar12,-2);
        if (iVar8 != 0) {
          local_8 = 7;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar8 = st::fn_006DE570(param_1,iVar12 + 1,-1);
        if (iVar8 != 0) {
          local_8 = 8;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,iVar12 + 1,-2);
        if (iVar12 != 0) {
          local_8 = 9;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar8 = (int)*(short *)&param_1->field_0280->field_0x2 / 2;
    iVar12 = local_a0;
    if (iVar8 + -1 <= iVar6) {
      for (; local_54 = iVar12, iVar12 <= iVar5; iVar12 = iVar12 + 1) {
        iVar9 = st::fn_006DE570(param_1,iVar12,iVar8);
        if (iVar9 != 0) {
          local_8 = 10;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar12 = local_54;
        }
        iVar9 = st::fn_006DE570(param_1,iVar12,iVar8 + 1);
        if (iVar9 != 0) {
          local_8 = 0xb;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar12 = local_54;
        }
      }
      if (local_a0 == 0) {
        iVar12 = st::fn_006DE570(param_1,-1,iVar8);
        if (iVar12 != 0) {
          local_8 = 0xc;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-1,iVar8 + 1);
        if (iVar12 != 0) {
          local_8 = 0xd;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-2,iVar8);
        if (iVar12 != 0) {
          local_8 = 0xe;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,-2,iVar8 + 1);
        if (iVar12 != 0) {
          local_8 = 0xf;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar12 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar12 + -1 <= iVar5) {
        iVar9 = st::fn_006DE570(param_1,iVar12,iVar8);
        if (iVar9 != 0) {
          local_8 = 0x10;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar9 = st::fn_006DE570(param_1,iVar12,iVar8 + 1);
        if (iVar9 != 0) {
          local_8 = 0x11;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar9 = st::fn_006DE570(param_1,iVar12 + 1,iVar8);
        if (iVar9 != 0) {
          local_8 = 0x12;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar12 = st::fn_006DE570(param_1,iVar12 + 1,iVar8 + 1);
        if (iVar12 != 0) {
          local_8 = 0x13;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar12 = local_9c;
    if (local_a0 == 0) {
      for (; iVar12 <= iVar6; iVar12 = iVar12 + 1) {
        iVar8 = st::fn_006DE570(param_1,-1,iVar12);
        if (iVar8 != 0) {
          local_8 = 0x14;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar8 = st::fn_006DE570(param_1,-2,iVar12);
        if (iVar8 != 0) {
          local_8 = 0x15;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar8 = (int)*(short *)param_1->field_0280 / 2;
    iVar12 = local_9c;
    if (iVar8 + -1 <= iVar5) {
      for (; iVar12 <= iVar6; iVar12 = iVar12 + 1) {
        iVar5 = st::fn_006DE570(param_1,iVar8,iVar12);
        if (iVar5 != 0) {
          local_8 = 0x16;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar5 = st::fn_006DE570(param_1,iVar8 + 1,iVar12);
        if (iVar5 != 0) {
          local_8 = 0x17;
          st::fn_0072DA40();
          local_8 = 0xffffffff;
          puVar13 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
  }
  st::fn_006DDD50(param_1);
  param_1->field_0140 = local_50;
  param_1->field_013C = iVar7;
  local_38 = param_1->field_0030;
  local_34 = param_1->field_0034;
  local_30 = param_1->field_0038 - local_38;
  local_2c = param_1->field_003C - local_34;
  local_24 = 0;
  if (0 < param_1->field_028C) {
    pfVar11 = (float *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)pfVar11[7];
      if (pbVar4 != nullptr) {
        local_94 = *pfVar11;
        local_90 = pfVar11[1];
        local_8c = pfVar11[2];
        st::fn_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
        if (param_1->field_02F0 == 100) {
          local_54 = (local_48 >> 0x10) - (int)*(short *)(pfVar11 + 5);
          local_5c = (local_44 >> 0x10) - (int)STField<short>(pfVar11,0x16);
          local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
          local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
          local_ac = (int)*(short *)(pbVar4 + 0x12);
          local_a8 = (int)*(short *)(pbVar4 + 0x14);
        }
        else {
          local_ac = *(int *)(pbVar4 + 4);
          local_88 = *(int *)(pbVar4 + 8);
          local_a4 = (local_ac * param_1->field_02F0) / 100;
          iVar5 = (local_88 * param_1->field_02F4) / 100;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar12 = (int)((ulonglong)
                         ((longlong)((int)*(short *)(pfVar11 + 5) * param_1->field_02F0) *
                         -0x51eb851f) >> 0x20);
          local_54 = (local_48 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
          iVar12 = (int)((ulonglong)
                         ((longlong)((int)STField<short>(pfVar11,0x16) * param_1->field_02F4) *
                         -0x51eb851f) >> 0x20);
          local_5c = (local_44 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
          local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
          local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar5) / local_88 + local_5c;
          local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
          local_a8 = (*(short *)(pbVar4 + 0x14) * iVar5) / local_88;
        }
        iVar5 = st::fn_006B0460(local_70,&local_b4,&local_38);
        if (iVar5 != 0) {
          st::fn_00708D10
                    ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4
                     ,local_54,local_5c,local_40,(int)pfVar11[4],1);
        }
      }
      local_24 = local_24 + 1;
      pfVar11 = pfVar11 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar13 = (undefined4 *)param_1->field_0294; puVar13 != nullptr;
      puVar13 = (undefined4 *)*puVar13) {
    pbVar4 = (byte *)puVar13[9];
    if (pbVar4 != nullptr) {
      local_94 = (float)puVar13[2];
      local_90 = (float)puVar13[3];
      local_8c = (float)puVar13[4];
      st::fn_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar13 + 7);
        local_5c = (local_44 >> 0x10) - (int)STField<short>(puVar13,0x1e);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar5 = (local_88 * param_1->field_02F4) / 100;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(puVar13 + 7) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
        iVar12 = (int)((ulonglong)
                       ((longlong)((int)STField<short>(puVar13,0x1e) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar5) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar5) / local_88;
      }
      iVar5 = st::fn_006B0460(local_70,&local_b4,&local_38);
      if (iVar5 != 0) {
        st::fn_00708D10
                  ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                   local_54,local_5c,puVar13[6] + local_40,0,1);
      }
    }
  }
  local_24 = 0;
  if (0 < param_1->field_028C) {
    pfVar11 = (float *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)pfVar11[6];
      local_94 = *pfVar11;
      local_90 = pfVar11[1];
      local_8c = pfVar11[2];
      st::fn_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(pfVar11 + 5);
        local_5c = (local_44 >> 0x10) - (int)STField<short>(pfVar11,0x16);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar5 = (local_88 * param_1->field_02F4) / 100;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(pfVar11 + 5) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
        iVar12 = (int)((ulonglong)
                       ((longlong)((int)STField<short>(pfVar11,0x16) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar5) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar5) / local_88;
      }
      iVar5 = st::fn_006B0460(local_70,&local_b4,&local_38);
      if (iVar5 != 0) {
        st::fn_00708D10
                  ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                   local_54,local_5c,local_40,(int)pfVar11[4],0);
      }
      local_24 = local_24 + 1;
      pfVar11 = pfVar11 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar13 = (undefined4 *)param_1->field_0294; puVar13 != nullptr;
      puVar13 = (undefined4 *)*puVar13) {
    pbVar4 = (byte *)puVar13[8];
    local_94 = (float)puVar13[2];
    local_90 = (float)puVar13[3];
    local_8c = (float)puVar13[4];
    st::fn_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
    if (param_1->field_02F0 == 100) {
      local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar13 + 7);
      local_5c = (local_44 >> 0x10) - (int)STField<short>(puVar13,0x1e);
      local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
      local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
      local_ac = (int)*(short *)(pbVar4 + 0x12);
      local_a8 = (int)*(short *)(pbVar4 + 0x14);
    }
    else {
      local_ac = *(int *)(pbVar4 + 4);
      local_88 = *(int *)(pbVar4 + 8);
      local_a4 = (local_ac * param_1->field_02F0) / 100;
      iVar5 = (local_88 * param_1->field_02F4) / 100;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = (int)((ulonglong)
                     ((longlong)((int)*(short *)(puVar13 + 7) * param_1->field_02F0) * -0x51eb851f)
                    >> 0x20);
      local_54 = (local_48 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
      iVar12 = (int)((ulonglong)
                     ((longlong)((int)STField<short>(puVar13,0x1e) * param_1->field_02F4) *
                     -0x51eb851f) >> 0x20);
      local_5c = (local_44 >> 0x10) + ((iVar12 >> 5) - (iVar12 >> 0x1f));
      local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
      local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar5) / local_88 + local_5c;
      local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
      local_a8 = (*(short *)(pbVar4 + 0x14) * iVar5) / local_88;
    }
    iVar5 = st::fn_006B0460(local_70,&local_b4,&local_38);
    if (iVar5 != 0) {
      st::fn_00708D10
                ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                 local_54,local_5c,puVar13[6] + local_40,0,0);
    }
  }
  if (((((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) && (param_1->field_0298 != 0))
      && ((param_1->field_0004 != nullptr &&
          ((param_1->field_0004->field_000C & 0x1100) != 0x100)))) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    iVar5 = param_1->field_0030;
    iVar12 = param_1->field_0038;
    iVar7 = param_1->field_0028 * param_1->field_0034 + param_1->field_000C + iVar5;
    iVar6 = param_1->field_003C - param_1->field_0034;
    while (iVar6 != 0) {
      for (iVar8 = 0; iVar8 < iVar12 - iVar5; iVar8 = iVar8 + 1) {
        *(undefined1 *)(iVar8 + iVar7) =
             *(undefined1 *)(param_1->field_0298 + (uint)*(byte *)(iVar8 + iVar7));
      }
      iVar7 = iVar7 + param_1->field_0028;
      iVar6 = iVar6 + -1;
    }
  }
  param_1->field_0134 = 0;
  ExceptionList = local_14;
  return;
}

// 006E1050 ST3DSMAPContext::sub_006E1050
#line 4 "decomp/ST.exe/functions/006E1050/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=52;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A8920 -> 006E1050 @ 004A89F8; data at 00807598 | 006E1460 -> 006E1050 @ 006E15DE;
   ST3DSMAPContext::sub_006E1460 this; stable alias ESI */

void __fastcall st::fn_006E1050(ST3DSMAPContext *param_1)

{
  uint uVar1;
  ST3DSMAPContext *this;
  double dVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_28;
  int local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  dVar2 = param_1->field_00D8 * param_1->field_00C8 * _DAT_0079df60 + _DAT_007901c0;
  st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = st::fn_0072E288();
  param_1->field_02C0 = (int)lVar7;
  dVar2 = (param_1->field_00E0 * param_1->field_00C8 + _DAT_0079cd88) * _DAT_007901c0;
  st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = st::fn_0072E288();
  iVar3 = (int)lVar7;
  param_1->field_02C4 = iVar3;
  uVar1 = (param_1->field_0028 + -1 + param_1->field_02C0) / param_1->field_02C0 + 1;
  param_1->field_02B8 = uVar1;
  iVar3 = (param_1->field_002C + -1 + iVar3) / iVar3 + 1;
  param_1->field_02BC = iVar3;
  iVar3 = iVar3 * uVar1;
  if (iVar3 - param_1->field_02B4 != 0 && param_1->field_02B4 <= iVar3) {
    param_1->field_02B4 = iVar3;
    puVar4 = st::fn_006ACF50(param_1->field_02B0,iVar3 * 2);
    param_1->field_02B0 = puVar4;
  }
  dVar2 = param_1->field_0098 / param_1->field_00C8;
  st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = st::fn_0072E288();
  local_8 = (int)lVar7;
  dVar2 = param_1->field_00A0 / param_1->field_00C8;
  st::fn_0072E150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = st::fn_0072E288();
  local_c = (int)lVar7;
  local_18 = ((float)local_8 + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  local_10 = 0;
  local_14 = ((float)local_c + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  st::fn_006E25D0(param_1,&local_28,&local_18,0.0,0.0,0.0,1);
  iVar3 = (local_28 >> 0x10) % param_1->field_02C0;
  param_1->field_02C8 = iVar3;
  if (iVar3 != 0) {
    param_1->field_02C8 = iVar3 - param_1->field_02C0;
  }
  iVar3 = (local_24 >> 0x10) % param_1->field_02C4;
  param_1->field_02CC = iVar3;
  if (iVar3 != 0) {
    param_1->field_02CC = iVar3 - param_1->field_02C4;
  }
  st::fn_006CE6C0(param_1->field_02B0,param_1->field_02B4,30000);
  st::fn_006DE9C0(param_1);
  if (param_1->field_0358 != 0) {
    *(AnonPointee_ST3DSMAPContext_0280 **)(param_1->field_0358 + 0x280) = param_1->field_0280;
    iVar3 = param_1->field_0358;
    lVar7 = st::fn_0072E288();
    iVar5 = (int)lVar7;
    lVar7 = st::fn_0072E288();
    iVar6 = (int)lVar7;
    if (((param_1->field_0374 == iVar5) && (param_1->field_0378 == iVar6)) &&
       (*(int *)(iVar3 + 0x134) == 0)) {
      param_1->field_0140 = nullptr;
      param_1->field_013C = 0;
      return;
    }
    param_1->field_0374 = iVar5;
    param_1->field_0378 = iVar6;
    *(int *)(iVar3 + 0x374) = iVar5;
    *(int *)(param_1->field_0358 + 0x378) = iVar6;
    this = (ST3DSMAPContext *)param_1->field_0358;
    st::fn_006DD610(this,4,param_1->field_0368 * _DAT_0079b168 +
                        ((double)param_1->field_0374 * param_1->field_0368 - this->field_0060),
                 ((double)param_1->field_0378 + _DAT_0079b168) * param_1->field_0368 +
                 this->field_0078);
    st::fn_006DDBE0((ST3DSMAPContext *)param_1->field_0358);
    st::fn_006DE9C0((ST3DSMAPContext *)param_1->field_0358);
    *(undefined4 *)(param_1->field_0358 + 0x134) = 0;
    param_1->field_0140 = nullptr;
    param_1->field_013C = 0;
    return;
  }
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  return;
}

// 006E1320 ST3DSMAPContext::sub_006E1320
#line 4 "decomp/ST.exe/functions/006E1320/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006E1320
          (ST3DSMAPContext *this,double *param_1,double *param_2,int *param_3,int *param_4,
          int *param_5)

{
  double dVar1;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  float local_20 [3];
  double local_14;
  double local_c;

  local_c = this->field_0098;
  local_14 = this->field_00A0;
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  st::fn_006E25D0(this,&local_40,local_20,local_c,local_14,0.0,0);
  st::fn_006DD050(this,this->field_00A8,*param_1,*param_2);
  dVar1 = local_14;
  *(undefined4 *)param_1 = *(undefined4 *)&this->field_0098;
  STField<undefined4>(param_1,4) = *(undefined4 *)((int)&this->field_0098 + 4);
  *(undefined4 *)param_2 = *(undefined4 *)&this->field_00A0;
  STField<undefined4>(param_2,4) = *(undefined4 *)((int)&this->field_00A0 + 4);
  st::fn_006E25D0(this,&local_30,local_20,local_c,local_14,0.0,0);
  *param_3 = (local_30 - local_40) + 0x8000 >> 0x10;
  *param_4 = (local_2c - local_3c) + 0x8000 >> 0x10;
  if (param_5 != nullptr) {
    *param_5 = local_28 - local_38;
  }
  st::fn_006DD050(this,this->field_00A8,local_c,dVar1);
  return;
}

// 006E1460 ST3DSMAPContext::sub_006E1460
#line 4 "decomp/ST.exe/functions/006E1460/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=124;
   incoming_edx_uses=0; incoming_stack_parameter_uses=87; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall sub_006E1460(ST3DSMAPContext * this, double param_2, double param_3) Evidence: x87
   double-width accesses or exact split stores into an owner field independently typed or consumed
   as double prove physical EBP slot boundaries; merged_slots={0=2, 2=2}; sites=006E152A forwards
   adjacent incoming dwords to ST3DSMAPContext::sub_006DD610 parameter stack slot +0x4 typed /double
   | 006E152A forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DD610 parameter stack
   slot +0xc typed /double */

undefined4 __thiscall
st::fn_006E1460(ST3DSMAPContext *this,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  double local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  uint local_7c;
  int local_78;
  undefined8 local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_44;
  undefined8 local_3c;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e138;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff0c;
  local_94 = 0;
  local_68 = 0;
  local_7c = 0;
  local_90 = 0;
  if (((this->field_0004 == nullptr) ||
      ((this->field_0004->field_000C & 0x1100) != 0x100)) && (this->field_02DC == 0)) {
    ExceptionList = &local_14;
    this->field_02D8 = 1;
    st::fn_006E1320(this,&param_2,&param_3,(int *)&local_d0,(int *)&local_dc,&local_30);
    if (this->field_0124 == 1) {
      this->field_0374 = this->field_0374 - local_d0;
      this->field_0378 = this->field_0378 - local_dc;
    }
    st::fn_006DD610(this,this->field_00A8,param_2,param_3);
    local_54 = this->field_0030;
    local_64 = this->field_0034;
    local_78 = this->field_0038 - local_54;
    local_cc = this->field_003C - local_64;
    local_c8 = *(undefined4 *)&this->field_0060;
    local_c4 = *(undefined4 *)((int)&this->field_0060 + 4);
    local_2c = *(undefined4 *)&this->field_0068;
    local_28 = *(undefined4 *)((int)&this->field_0068 + 4);
    local_8c = *(undefined4 *)&this->field_0070;
    local_88 = *(undefined4 *)((int)&this->field_0070 + 4);
    local_a4 = *(undefined4 *)&this->field_0078;
    local_a0 = *(undefined4 *)((int)&this->field_0078 + 4);
    iVar6 = (local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f);
    uVar5 = (int)local_dc >> 0x1f;
    if (((local_78 / 2 < iVar6) || (local_cc / 2 < (int)((local_dc ^ uVar5) - uVar5))) &&
       (this->field_0124 != 1)) {
      st::fn_006DDBE0(this);
      st::fn_006E1050(this);
      this->field_0140 = nullptr;
      this->field_013C = 0;
    }
    else {
      local_24 = this->field_0060;
      local_3c = this->field_0068;
      local_74 = this->field_0070;
      local_84 = this->field_0078;
      dVar1 = ((this->field_0068 - this->field_0060) * (double)iVar6) / (double)local_78;
      local_d4 = (local_dc ^ uVar5) - uVar5;
      local_b0 = ((this->field_0078 - this->field_0070) * (double)local_d4) / (double)local_cc;
      iVar2 = this->field_0034;
      local_bc = local_78 - iVar6;
      local_d4 = local_cc - local_d4;
      uVar5 = 0;
      puVar4 = this->field_02B0;
      if (puVar4 != nullptr) {
        this->field_02C8 = this->field_02C8 + local_d0;
      }
      if ((int)local_d0 < 0) {
        local_24 = this->field_0068 - dVar1;
        local_c0 = local_54 - local_d0;
        local_a8 = local_54;
        local_6c = local_54 + local_bc;
        if (puVar4 != nullptr) {
          iVar6 = this->field_02C8;
          while (iVar6 <= -this->field_02C0) {
            iVar6 = this->field_02C8 + this->field_02C0;
            this->field_02C8 = iVar6;
            uVar5 = uVar5 + 1;
          }
          local_7c = 0;
          local_94 = uVar5;
        }
      }
      else {
        local_a8 = local_54 + local_d0;
        local_3c = dVar1 + this->field_0060;
        local_c0 = local_54;
        local_6c = local_54;
        if (puVar4 != nullptr) {
          if (0 < this->field_02C8) {
            do {
              iVar6 = this->field_02C8 - this->field_02C0;
              this->field_02C8 = iVar6;
              uVar5 = uVar5 + 1;
            } while (0 < iVar6);
          }
          local_94 = 0;
          local_7c = uVar5;
        }
      }
      iVar6 = 0;
      local_44 = 0;
      if (puVar4 != nullptr) {
        this->field_02CC = this->field_02CC + local_dc;
      }
      if ((int)local_dc < 0) {
        local_b4 = this->field_0034 + local_d4;
        local_84 = local_b0 + this->field_0070;
        local_d8 = iVar2 - local_dc;
        local_b8 = iVar2;
        if (puVar4 != nullptr) {
          iVar2 = this->field_02CC;
          local_68 = iVar6;
          while (iVar2 <= -this->field_02C4) {
            iVar2 = this->field_02CC + this->field_02C4;
            this->field_02CC = iVar2;
            local_68 = local_68 + 1;
          }
          local_90 = 0;
          local_44 = local_68;
        }
      }
      else {
        local_b8 = iVar2 + local_dc;
        local_b4 = this->field_0034;
        local_74 = this->field_0078 - local_b0;
        local_d8 = iVar2;
        if (puVar4 != nullptr) {
          iVar2 = this->field_02CC;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 - this->field_02C4;
              iVar6 = iVar6 + 1;
            } while (0 < iVar2);
            this->field_02CC = iVar2;
            local_44 = iVar6;
          }
          local_68 = 0;
          local_90 = local_44;
        }
      }
      iVar6 = local_44;
      if (this->field_0124 == 1) {
        st::fn_006E3100
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4);
      }
      else {
        st::fn_006E2F90
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4,local_30);
        puVar4 = this->field_02B0;
        if ((puVar4 != nullptr) && (((uVar5 != 0 || (iVar6 != 0)) || (local_30 != 0)))) {
          local_8 = 0;
          uVar3 = this->field_02B8;
          if (local_30 == 0) {
            st::fn_006D1610((undefined8 *)(puVar4 + uVar3 * local_90 + local_7c),
                         (undefined8 *)(puVar4 + uVar3 * local_68 + local_94),uVar3 * 2,
                         (uVar3 - uVar5) * 2,this->field_02BC - iVar6);
            local_8 = 0xffffffff;
            iVar6 = local_44;
          }
          else {
            st::fn_006E2D50((int *)(puVar4 + uVar3 * local_90 + local_7c),
                         (int *)(puVar4 + uVar3 * local_68 + local_94),uVar3 * 2,uVar3 - uVar5,
                         this->field_02BC - iVar6,local_30);
            local_8 = 0xffffffff;
            iVar6 = local_44;
          }
        }
      }
      if (local_d0 != 0) {
        this->field_0030 = local_6c;
        this->field_0034 = 0;
        this->field_0038 = ((local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f)) + local_6c
        ;
        this->field_003C = local_cc;
        *(undefined4 *)&this->field_0060 = (undefined4)local_24;
        *(undefined4 *)((int)&this->field_0060 + 4) = STPiece<4,4>(local_24);
        *(undefined4 *)&this->field_0068 = (undefined4)local_3c;
        *(undefined4 *)((int)&this->field_0068 + 4) = STPiece<4,4>(local_3c);
        *(undefined4 *)&this->field_0070 = local_8c;
        *(undefined4 *)((int)&this->field_0070 + 4) = local_88;
        *(undefined4 *)&this->field_0078 = local_a4;
        *(undefined4 *)((int)&this->field_0078 + 4) = local_a0;
        if (0 < (int)uVar5) {
          if ((int)local_7c < (int)local_94) {
            puVar4 = this->field_02B0 + (this->field_02B8 - uVar5);
          }
          else {
            puVar4 = this->field_02B0;
          }
          local_58 = 0;
          if (0 < this->field_02BC) {
            do {
              if (0 < (int)uVar5) {
                puVar7 = puVar4;
                for (uVar3 = uVar5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
                  puVar7[0] = 30000;
                  puVar7[1] = 30000;
                  puVar7 = puVar7 + 2;
                }
                for (uVar3 = (uint)((uVar5 & 1) != 0); iVar6 = local_44, uVar3 != 0;
                    uVar3 = uVar3 - 1) {
                  *puVar7 = 30000;
                  puVar7 = puVar7 + 1;
                }
              }
              local_58 = local_58 + 1;
              puVar4 = puVar4 + this->field_02B8;
            } while (local_58 < this->field_02BC);
          }
        }
        st::fn_006DDBE0(this);
        st::fn_006DE9C0(this);
        this->field_0140 = nullptr;
        this->field_013C = 0;
      }
      if (local_dc != 0) {
        this->field_0030 = 0;
        this->field_0034 = local_b4;
        this->field_0038 = local_78;
        this->field_003C = ((local_dc ^ (int)local_dc >> 0x1f) - ((int)local_dc >> 0x1f)) + local_b4
        ;
        *(undefined4 *)&this->field_0060 = local_c8;
        *(undefined4 *)((int)&this->field_0060 + 4) = local_c4;
        *(undefined4 *)&this->field_0068 = local_2c;
        *(undefined4 *)((int)&this->field_0068 + 4) = local_28;
        *(undefined4 *)&this->field_0070 = (undefined4)local_74;
        *(undefined4 *)((int)&this->field_0070 + 4) = STPiece<4,4>(local_74);
        *(undefined4 *)&this->field_0078 = (undefined4)local_84;
        *(undefined4 *)((int)&this->field_0078 + 4) = STPiece<4,4>(local_84);
        if (0 < iVar6) {
          if (local_90 < local_68) {
            puVar4 = this->field_02B0 + (this->field_02BC - iVar6) * this->field_02B8;
          }
          else {
            puVar4 = this->field_02B0;
          }
          if (0 < local_44) {
            uVar5 = this->field_02B8;
            iVar6 = local_44;
            do {
              st::fn_006CE6C0(puVar4,uVar5,30000);
              uVar5 = this->field_02B8;
              puVar4 = puVar4 + uVar5;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        st::fn_006DDBE0(this);
        st::fn_006DE9C0(this);
        this->field_0140 = nullptr;
        this->field_013C = 0;
      }
      this->field_0030 = local_54;
      this->field_0034 = local_64;
      this->field_0038 = local_78 + local_54;
      this->field_003C = local_cc + local_64;
      *(undefined4 *)&this->field_0060 = local_c8;
      *(undefined4 *)((int)&this->field_0060 + 4) = local_c4;
      *(undefined4 *)&this->field_0068 = local_2c;
      *(undefined4 *)((int)&this->field_0068 + 4) = local_28;
      *(undefined4 *)&this->field_0070 = local_8c;
      *(undefined4 *)((int)&this->field_0070 + 4) = local_88;
      *(undefined4 *)&this->field_0078 = local_a4;
      *(undefined4 *)((int)&this->field_0078 + 4) = local_a0;
      if ((ST3DSMAPContext *)this->field_0358 != nullptr) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_006E1460((ST3DSMAPContext *)this->field_0358,this->field_0098,
                     (double)CONCAT26((short)((uint)*(undefined4 *)((int)&this->field_00A0 + 4) >>
                                             0x10),*(undefined6 *)&this->field_00A0));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this->field_0374 = *(int *)(this->field_0358 + 0x374);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this->field_0378 = *(int *)(this->field_0358 + 0x378);
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

// 006E1C20 ST3DSMAPContext::sub_006E1C20
#line 4 "decomp/ST.exe/functions/006E1C20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=5; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=20; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=3; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
st::fn_006E1C20
          (ST3DSMAPContext *this,float param_1,int param_2,float param_3,float *param_4,
          float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int local_24;
  int local_20;
  float local_14;
  float local_10;
  undefined4 local_c;

  local_14 = (float)this->field_0098;
  local_10 = (float)this->field_00A0;
  local_c = 0;
  st::fn_006E25D0(this,&local_24,&local_14,0.0,0.0,0.0,1);
  fVar1 = (float)((int)param_1 * 0x10000 - local_24) * (float)_DAT_0079b148;
  fVar2 = (float)(param_2 * 0x10000 - local_20) * (float)_DAT_0079b148;
  fVar3 = param_3 * (float)_DAT_0079df60;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = fVar3;
  switch(this->field_00A8) {
  case CASE_0:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    break;
  case CASE_1:
    fVar1 = fVar1 * (float)this->field_00E8;
    fVar2 = fVar2 * (float)this->field_00F0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    break;
  case CASE_2:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    break;
  case CASE_3:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    fVar3 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
  }
  *param_4 = param_1 + (float)this->field_0098;
  *param_5 = fVar3 + (float)this->field_00A0;
  return 0;
}

// 006E25D0 ST3DSMAPContext::sub_006E25D0
#line 4 "decomp/ST.exe/functions/006E25D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=19; incoming_this_accesses=32;
   incoming_edx_uses=0; incoming_stack_parameter_uses=61; direct_non_thunk_callers=21;
   incoming_ecx_receiver_callers=14; attributed_named_callers=7; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] machine_stack_arity_expansion target=function:-1: prototype=int
   __thiscall sub_006E25D0(ST3DSMAPContext * this, int * param_2, float * param_3, double param_4,
   double param_5, double param_6, undefined4 param_7) previous_return_type=/int Evidence: every
   machine RET purges exactly 36 explicit stack bytes while the current signature describes 4; every
   incoming byte is read before an overlapping listing write; newly exposed x87 double slot(s)=[32,
   16, 24]; inferred=[EBP+0xC=pointer:/float, EBP+0x10=/double, EBP+0x18=/double, EBP+0x20=/double,
   EBP+0x28=/undefined4]; sites=006E25D9 MOV ECX,dword ptr [EBP + 0xc] | 006E25DF FADD double ptr
   [EBP + 0x20] | 006E262A FADD double ptr [EBP + 0x10] | 006E263F FADD double ptr [EBP + 0x18] |
   006E2672 FADD double ptr [EBP + 0x18] | 006E289F MOV EDI,dword ptr [EBP + 0x8] | 006E290C MOV
   EAX,dword ptr [EBP + 0x28] | 006E293B MOV EAX,dword ptr [EBP + 0x8]; ret_sites=006E2938 RET 0x24
   | 006E294B RET 0x24 */

int __thiscall
st::fn_006E25D0
          (ST3DSMAPContext *this,int *param_2,float *param_3,double param_4,double param_5,
          double param_6,int param_7)

{
  ST3DSMAPContext_field_00A8State SVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;

  SVar1 = this->field_00A8;
  if ((SVar1 & 8) == CASE_0) {
    switch(SVar1) {
    case CASE_0:
      break;
    case CASE_1:
      break;
    case CASE_2:
      break;
    case CASE_3:
      break;
    default:
      param_2[3] = 0;
      return 0;
    }
  }
  else {
    switch(SVar1 & 0xfffffff7) {
    case CASE_0:
      break;
    case CASE_1:
      break;
    case CASE_2:
      break;
    case CASE_3:
    }
  }
  iVar3 = 1;
  lVar4 = st::fn_0072E288();
  iVar2 = (int)lVar4 + this->field_0030 * 0x10000;
  *param_2 = iVar2;
  if ((iVar2 < this->field_0030 * 0x10000) || (this->field_0038 * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = st::fn_0072E288();
  iVar2 = (int)lVar4 + this->field_0034 * 0x10000;
  param_2[1] = iVar2;
  if ((iVar2 < this->field_0034 * 0x10000) || (this->field_003C * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = st::fn_0072E288();
  param_2[2] = (int)lVar4;
  param_2[3] = iVar3;
  return iVar3;
}

// 006E2970 ST3DSMAPContext::sub_006E2970
#line 4 "decomp/ST.exe/functions/006E2970/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054A9B0 -> 006E2970 @ 0054AC85;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0 parameter param_1

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054A9B0 -> 006E2970 @ 0054AC85;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::FUN_0054a9b0 parameter param_2 */

void __thiscall
st::fn_006E2970
          (ST3DSMAPContext *this,float param_1,float param_2,undefined4 param_3,int *param_4,
          int *param_5)

{
  int local_20;
  int local_1c;
  float local_10;
  float local_c;
  undefined4 local_8;

  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  st::fn_006E25D0(this,&local_20,&local_10,0.0,0.0,0.0,1);
  *param_4 = (local_20 >> 0x10) + this->field_0020;
  *param_5 = (local_1c >> 0x10) + this->field_0024;
  return;
}

// 006E2D00 ST3DSMAPContext::sub_006E2D00
#line 4 "decomp/ST.exe/functions/006E2D00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

ushort __thiscall st::fn_006E2D00(ST3DSMAPContext *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < this->field_0028)) && (-1 < param_2)) &&
     (param_2 < this->field_002C)) {
    return this->field_0014[this->field_0028 * param_2 + param_1];
  }
  return 0xffff;
}

// 006E3210 ST3DSMAPContext::sub_006E3210
#line 4 "decomp/ST.exe/functions/006E3210/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=8;
   incoming_edx_uses=2; incoming_stack_parameter_uses=11; direct_non_thunk_callers=6;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005F4FA0 -> 006E3210 @ 005F51FE; data at 00807598 | 0060AA00 -> 006E3210 @ 0060ABCD;
   data at 00807598 */

float10 __thiscall st::fn_006E3210(ST3DSMAPContext *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;

  if ((-1 < param_2) && (-1 < param_3)) {
    iVar2 = param_1->field_0380 * 2;
    iVar3 = param_2 / iVar2;
    if ((-1 < iVar3) && (iVar1 = param_1->field_0284, iVar3 < iVar1)) {
      iVar4 = param_3 / iVar2;
      iVar6 = param_3 % iVar2;
      if ((-1 < iVar4) && (iVar4 < iVar1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = 5;
        piVar7 = (int *)(&param_1->field_0280[1].field_0xc +
                        (param_1->field_0288 * 5 + iVar3 + iVar1 * iVar4) * 4);
        do {
          if ((*piVar7 != 0) &&
             (uVar5 = (uint)*(byte *)(*(int *)(*piVar7 + 0x40) + param_1->field_0380 * iVar6 * 2 +
                                     param_2 % iVar2), uVar5 != 0)) {
            return (float10)(int)(((int)*(short *)(*piVar7 + 8) - (uint)*(byte *)(*piVar7 + 0x48)) *
                                  param_1->field_0384 + uVar5) * (float10)param_1->field_03A4 *
                   (float10)_DAT_0079dfa8 + (float10)param_1->field_0394;
          }
          piVar7 = piVar7 + -param_1->field_0288;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + -1;
        } while (0 < param_3);
      }
    }
  }
  return (float10)_DAT_0079034c;
}

// 006E3310 ST3DSMAPContext::sub_006E3310
#line 4 "decomp/ST.exe/functions/006E3310/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=7;
   incoming_edx_uses=2; incoming_stack_parameter_uses=15; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int * __thiscall
st::fn_006E3310
          (ST3DSMAPContext *this,int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;

  if (param_4 != nullptr) {
    *param_4 = 0;
  }
  piVar4 = param_4;
  if ((-1 < param_1) && (piVar4 = param_2, -1 < (int)param_2)) {
    iVar2 = this->field_0380 * 2;
    iVar3 = param_1 / iVar2;
    piVar4 = (int *)(param_1 / iVar2);
    if ((-1 < iVar3) && (iVar1 = this->field_0284, iVar3 < iVar1)) {
      piVar4 = (int *)((int)param_2 / iVar2);
      if ((-1 < (int)piVar4) && ((int)piVar4 < iVar1)) {
        iVar6 = 5;
        piVar5 = (int *)(&this->field_0280[1].field_0xc +
                        (this->field_0288 * 5 + iVar3 + iVar1 * (int)piVar4) * 4);
        do {
          piVar4 = (int *)*piVar5;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((piVar4 != nullptr) &&
              (*(char *)(piVar4[0x10] + this->field_0380 * ((int)param_2 % iVar2) * 2 +
                        param_1 % iVar2) != '\0')) &&
             (piVar4 = (int *)(iVar6 - (uint)*(byte *)(piVar4 + 0x12)), (int)piVar4 <= param_3)) {
            if (iVar6 < 1) {
              return piVar4;
            }
            if (param_4 != nullptr) {
              *param_4 = iVar6;
            }
            return (int *)this;
          }
          iVar6 = iVar6 + -1;
          piVar5 = piVar5 + -this->field_0288;
        } while (0 < iVar6);
      }
    }
  }
  return piVar4;
}

// 006E6400 ST3DSMAPContext::sub_006E6400
#line 4 "decomp/ST.exe/functions/006E6400/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006E6400
          (ST3DSMAPContext *this,undefined4 *param_1,undefined4 param_2,int param_3,
          undefined4 param_4)

{
  this->field_03DC = param_3;
  this->field_0424 = param_3;
  this->field_043E = param_2;
  this->field_0418 = 0xffffffff;
  this->field_03E4 = param_4;
  this->field_03E0 = 1;
  if (param_1 != nullptr) {
    this->field_0428 = *param_1;
    this->field_042C = param_1[1];
    this->field_0430 = param_1[2];
    this->field_0434 = param_1[3];
  }
  return;
}

// 006E6500 ST3DSMAPContext::sub_006E6500
#line 4 "decomp/ST.exe/functions/006E6500/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E6500(ST3DSMAPContext *this,undefined4 *param_1)

{
  if (param_1 == nullptr) {
    this->field_0456 = nullptr;
    this->field_045A = nullptr;
    this->field_045E = nullptr;
    this->field_0462 = nullptr;
    return;
  }
  this->field_0456 = (void *)*param_1;
  this->field_045A = (void *)param_1[1];
  this->field_045E = (void *)param_1[2];
  this->field_0462 = (void *)param_1[3];
  return;
}

// 006E6710 ST3DSMAPContext::sub_006E6710
#line 4 "decomp/ST.exe/functions/006E6710/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041CE40 -> 006E6710 @ 0041CEFD | 0041CFF0 -> 006E6710 @ 0041D0B4 | 0041D1A0 ->
   006E6710 @ 0041D264 | 0041D3E0 -> 006E6710 @ 0041D4A4 | 0041DD00 -> 006E6710 @ 0041DE41 |
   0041DD00 -> 006E6710 @ 0041DECC | 00479600 -> 006E6710 @ 0047A8AF

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=5; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=8;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006E6710
          (ST3DSMAPContext *this,float param_1,float param_2,uint param_3,undefined4 param_4,
          int param_5)

{
  AnonPointee_ST3DSMAPContext_044E *pAVar1;
  longlong lVar2;

  pAVar1 = this->field_044E;
  do {
    if (pAVar1 == nullptr) {
LAB_006e673a:
      pAVar1 = st::fn_006AAC10(0x18);
      if (pAVar1 != nullptr) {
        st::fn_006B9910(&this->field_044E,(int)pAVar1);
LAB_006e674e:
        pAVar1->field_0004 = param_5;
        lVar2 = st::fn_0072E288();
        pAVar1->field_0008 = (int)lVar2;
        pAVar1->field_000C = param_1;
        pAVar1->field_0010 = param_2;
        *(undefined4 *)&pAVar1->field_0014 = param_4;
      }
      return;
    }
    if (pAVar1->field_0004 == param_5) {
      if (pAVar1 != nullptr) goto LAB_006e674e;
      goto LAB_006e673a;
    }
    pAVar1 = (AnonPointee_ST3DSMAPContext_044E *)pAVar1->field_0000;
  } while( true );
}

// 006E6780 ST3DSMAPContext::sub_006E6780
#line 4 "decomp/ST.exe/functions/006E6780/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E6780(ST3DSMAPContext *this,int param_1)

{
  AnonPointee_ST3DSMAPContext_044E *pAVar1;

  pAVar1 = this->field_044E;
  if (pAVar1 != nullptr) {
    while (pAVar1->field_0004 != param_1) {
      pAVar1 = (AnonPointee_ST3DSMAPContext_044E *)pAVar1->field_0000;
      if (pAVar1 == nullptr) {
        return;
      }
    }
    if (pAVar1 != nullptr) {
      st::fn_006B98C0((int *)&this->field_044E,(int *)pAVar1);
      st::fn_006A5E90((short *)pAVar1);
    }
  }
  return;
}

// 006E68C0 ST3DSMAPContext::sub_006E68C0
#line 4 "decomp/ST.exe/functions/006E68C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=1; incoming_stack_parameter_uses=48; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
st::fn_006E68C0
          (ST3DSMAPContext *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  float local_8;

  fVar3 = _DAT_0079034c;
  *param_3 = 0;
  *param_4 = 0;
  iVar6 = this->field_03DC;
  fVar4 = _DAT_0079dfd0 / (float)iVar6;
  iVar5 = iVar6 / 2;
  iVar7 = (int)*(short *)this->field_0280;
  local_8 = 0.0;
  fVar2 = (float)iVar7 * (float)this->field_00C8;
  switch(this->field_00A8) {
  case CASE_0:
    fVar3 = (float)((param_1 - iVar5) + param_2) * fVar2 * fVar4;
    local_8 = (float)((iVar5 - param_1) + param_2) * fVar2 * fVar4;
    break;
  case CASE_1:
    fVar3 = (float)((iVar5 - param_2) + param_1) * fVar2 * fVar4;
    local_8 = (float)((param_1 - iVar5) + param_2) * fVar2 * fVar4;
    break;
  case CASE_2:
    iVar1 = ((iVar6 - iVar5) - param_2) + -1 + param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = ((iVar6 - param_1) - param_2) + -1 + iVar5;
    goto LAB_006e6a01;
  case CASE_3:
    iVar1 = ((iVar6 - param_1) - param_2) + -1 + iVar5;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = ((iVar6 - iVar5) - param_1) + -1 + param_2;
LAB_006e6a01:
    fVar3 = (float)param_2 * fVar2 * fVar4;
    local_8 = (float)iVar1 * fVar2 * fVar4;
  }
  uVar8 = 1;
  fVar3 = fVar3 / (float)this->field_00C8;
  if (_DAT_0079034c <= fVar3) {
    if (fVar3 < (float)iVar7) {
      st::fn_0072E150(SUB84((double)fVar3,0),(uint)((ulonglong)(double)fVar3 >> 0x20));
      lVar9 = st::fn_0072E288();
      *param_3 = (int)lVar9;
    }
    else {
      uVar8 = 0;
      *param_3 = iVar7 + -1;
    }
  }
  else {
    *param_3 = 0;
    uVar8 = 0;
  }
  local_8 = local_8 / (float)this->field_00C8;
  if (_DAT_0079034c <= local_8) {
    iVar6 = (int)*(short *)&this->field_0280->field_0x2;
    if (local_8 < (float)iVar6) {
      st::fn_0072E150
                (SUB84((double)local_8,0),(uint)((ulonglong)(double)local_8 >> 0x20));
      lVar9 = st::fn_0072E288();
      *param_4 = (int)lVar9;
      return uVar8;
    }
    *param_4 = iVar6 + -1;
    return 0;
  }
  *param_4 = 0;
  return 0;
}

// 006E6AF0 ST3DSMAPContext::sub_006E6AF0
#line 4 "decomp/ST.exe/functions/006E6AF0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006E6AF0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=5; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
st::fn_006E6AF0(ST3DSMAPContext *this,AnonShape_006E6AF0_D2F012A7 *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  AnonShape_006E6AF0_D2F012A7 *pAVar10;
  longlong lVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  ST3DSMAPContext *local_20;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  iVar9 = 0;
  pbVar4 = *(byte **)(param_1->field_0018 + (uint)(byte)param_1->field_0x16 * 4);
  iVar1 = 0;
  local_20 = this;
  switch(this->field_00A8) {
  case CASE_0:
    lVar11 = st::fn_0072E288();
    iVar9 = (int)lVar11;
    break;
  case CASE_1:
    lVar11 = st::fn_0072E288();
    iVar9 = (int)lVar11;
    break;
  case CASE_2:
    lVar11 = st::fn_0072E288();
    iVar9 = (int)lVar11;
    break;
  case CASE_3:
    lVar11 = st::fn_0072E288();
    iVar9 = (int)lVar11;
    break;
  default:
    goto switchD_006e6b1d_default;
  }
  lVar11 = st::fn_0072E288();
  iVar1 = (int)lVar11;
switchD_006e6b1d_default:
  iVar9 = ((int)*(short *)(pbVar4 + 0xe) - (int)param_1->field_000E) + iVar9;
  iVar1 = ((int)*(short *)(pbVar4 + 0x10) - (int)param_1->field_0010) + iVar1;
  local_30 = (int)*(short *)(pbVar4 + 0x12);
  local_2c = (int)*(short *)(pbVar4 + 0x14);
  local_38 = iVar9;
  local_34 = iVar1;
  iVar2 = st::fn_006B0460(&local_38,&local_38,(int *)&DAT_00856d90);
  if (iVar2 != 0) {
    local_24 = local_38 - iVar9;
    iVar1 = local_34 - iVar1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_006E6AF0_D2F012A7 *)((DAT_00856d88 - DAT_00856d8c * local_34) + local_38);
    if (DAT_00856d84 < local_34) {
      iVar9 = local_34 - DAT_00856d84;
      local_8 = local_20->field_03DC - local_34;
    }
    else {
      iVar9 = DAT_00856d84 - local_34;
      local_8 = local_34;
    }
    local_8 = DAT_00856d84 + local_8;
    local_14 = iVar9;
    if (iVar1 < 1) {
      pbVar3 = pbVar4 + (pbVar4[0xd] >> 1 & 0xe) + 0x16;
    }
    else {
      pbVar3 = st::fn_006CFE10(pbVar4,iVar1);
    }
    iVar1 = (int)*(short *)(pbVar4 + 0x12);
    while (local_2c = local_2c + -1, -1 < local_2c) {
      local_10 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (local_10 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 - DAT_00856d8c);
      }
      else {
        local_c = 0;
        local_20 = (ST3DSMAPContext *)local_24;
        if (local_38 < iVar9) {
          iVar9 = iVar9 - local_38;
          local_20 = (ST3DSMAPContext *)iVar1;
          if (local_24 + iVar9 < iVar1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 + iVar9);
            local_20 = (ST3DSMAPContext *)(local_24 + iVar9);
            local_c = iVar9;
          }
        }
        iVar9 = (int)local_20;
        if (iVar1 <= (int)local_20) {
          do {
            if ((local_10 & 0x80) == 0) {
              uVar8 = local_10 & 0x7f;
              if ((int)local_20 <= (int)uVar8) goto LAB_006e6f08;
            }
            else {
              uVar8 = local_10 & 0x3f;
              if ((int)local_20 < (int)uVar8) goto LAB_006e6f08;
              if ((local_10 & 0x40) == 0) {
                pbVar3 = pbVar3 + uVar8;
              }
              else {
                pbVar3 = pbVar3 + 1;
              }
            }
            local_20 = (ST3DSMAPContext *)((int)local_20 - uVar8);
            if ((int)local_20 < 1) goto LAB_006e6f08;
            local_10 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
          } while( true );
        }
        while( true ) {
          while ((local_10 & 0x80) == 0) {
            uVar8 = local_10 & 0x7f;
            if (iVar9 < (int)uVar8) goto LAB_006e6d68;
            iVar9 = iVar9 - uVar8;
            bVar7 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            local_10 = (uint)bVar7;
          }
          uVar8 = local_10 & 0x3f;
          if (iVar9 < (int)uVar8) break;
          if ((local_10 & 0x40) == 0) {
            iVar9 = iVar9 - uVar8;
            local_10 = (uint)pbVar3[uVar8];
            pbVar3 = pbVar3 + uVar8 + 1;
          }
          else {
            iVar9 = iVar9 - uVar8;
            local_10 = (uint)pbVar3[1];
            pbVar3 = pbVar3 + 2;
          }
        }
LAB_006e6d68:
        uVar8 = uVar8 - iVar9;
        if ((local_10 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar9;
        }
        iVar9 = local_30;
        iVar2 = local_c;
        if (local_8 < local_30 + local_38) {
          iVar9 = local_8 - local_c;
          iVar2 = local_38;
        }
        uVar5 = iVar9 - iVar2;
        pAVar10 = param_1;
        if ((int)uVar5 < 1) {
          if ((local_10 & 0xc0) == 0xc0) {
            pbVar3 = pbVar3 + 1;
          }
        }
        else {
          local_c = local_c + uVar5;
          local_20 = (ST3DSMAPContext *)((int)local_20 + uVar5);
          if ((int)uVar8 <= (int)uVar5) {
            do {
              uVar5 = uVar5 - uVar8;
              if ((local_10 & 0x80) == 0) {
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&pAVar10->field_0x0 + uVar8);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = pAVar10;
              }
              else if ((local_10 & 0x40) == 0) {
                if (-1 < (int)(uVar8 - 1)) {
                  do {
                    *(byte *)pAVar10 = *pbVar3;
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                    pbVar3 = pbVar3 + 1;
                    uVar8 = uVar8 - 1;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = pAVar10;
                  } while (uVar8 != 0);
                }
              }
              else {
                bVar7 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                if (-1 < (int)(uVar8 - 1)) {
                  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(uint *)pAVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x4;
                  }
                  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)pAVar10 = bVar7;
                    pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                  }
                  pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&param_1->field_0x0 + uVar8);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = pAVar10;
                }
              }
              if ((int)uVar5 < 1) {
                uVar8 = 0;
                break;
              }
              bVar7 = *pbVar3;
              local_10 = (uint)bVar7;
              pbVar3 = pbVar3 + 1;
              if ((bVar7 & 0x80) == 0) {
                uVar8 = local_10 & 0x7f;
              }
              else {
                uVar8 = local_10 & 0x3f;
              }
            } while ((int)uVar8 <= (int)uVar5);
          }
          uVar8 = uVar8 - uVar5;
          if ((local_10 & 0x80) == 0) {
            pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&pAVar10->field_0x0 + uVar5);
          }
          else if ((local_10 & 0x40) == 0) {
            if (-1 < (int)(uVar5 - 1)) {
              do {
                *(byte *)pAVar10 = *pbVar3;
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
                pbVar3 = pbVar3 + 1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
          }
          else if (0 < (int)uVar5) {
            bVar7 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            if (-1 < (int)(uVar5 - 1)) {
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(uint *)pAVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x4;
              }
              for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(byte *)pAVar10 = bVar7;
                pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)&pAVar10->field_0x1;
              }
              pAVar10 = (AnonShape_006E6AF0_D2F012A7 *)(&param_1->field_0x0 + uVar5);
            }
          }
        }
        bVar7 = (byte)local_10;
        iVar9 = iVar1 - (int)local_20;
        if ((int)uVar8 < iVar9) {
          do {
            iVar9 = iVar9 - uVar8;
            pbVar4 = pbVar3;
            if (((byte)local_10 & 0xc0) == 0x80) {
              pbVar4 = pbVar3 + uVar8;
            }
            bVar7 = *pbVar4;
            local_10 = (uint)bVar7;
            pbVar3 = pbVar4 + 1;
            uVar8 = local_10;
            if (((bVar7 & 0x80) != 0) && (uVar8 = local_10 & 0x3f, (bVar7 & 0x40) != 0)) {
              pbVar3 = pbVar4 + 2;
            }
          } while ((int)uVar8 < iVar9);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = pAVar10;
        if ((bVar7 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar9;
        }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006e6f08:
        param_1 = (AnonShape_006E6AF0_D2F012A7 *)((int)param_1 - (DAT_00856d8c + local_c));
        iVar9 = local_14;
      }
      local_34 = local_34 + 1;
      if (DAT_00856d84 < local_34) {
        iVar9 = iVar9 + 1;
        local_8 = local_8 + -1;
        local_14 = iVar9;
      }
      else {
        iVar9 = iVar9 + -1;
        local_8 = local_8 + 1;
        local_14 = iVar9;
      }
    }
  }
  return;
}

// 006E6FB0 ST3DSMAPContext::sub_006E6FB0
#line 4 "decomp/ST.exe/functions/006E6FB0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006E6FB0 -> 006B5B10 @ 006E77B4 | 006E6FB0 -> 006B5B10 @ 006E809F | 006E6FB0 ->
   006B5B10 @ 006E80EC | 006E6FB0 -> 006B5B10 @ 006E812A | 006E6FB0 -> 006B5B10 @ 006E8169

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=95;
   incoming_edx_uses=0; incoming_stack_parameter_uses=19; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void __thiscall
st::fn_006E6FB0
          (ST3DSMAPContext *this,RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,
          int param_4)

{
  double dVar1;
  AnonShape_006E6AF0_D2F012A7 *pAVar2;
  AnonPointee_ST3DSMAPContext_0452 *pAVar3;
  AnonPointee_ST3DSMAPContext_044E *pAVar4;
  void *pvVar5;
  AnonShape_006E6AF0_D2F012A7 *pAVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  longlong lVar18;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (((int)this->field_00A8 < 4) && (this->field_0280 != nullptr))
  {
    _DAT_00856d90 = 0;
    _DAT_00856d94 = 0;
    _DAT_00856d98 = this->field_03DC;
    _DAT_00856d9c = this->field_03DC;
    if (param_4 != 0) {
      iVar8 = param_1->field_0008;
      DAT_00856d8c = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
      iVar7 = st::fn_006B4FA0((int *)param_1);
      local_2c = ((iVar8 - param_3) + -1) * DAT_00856d8c + param_2 + iVar7;
      local_4c = this->field_041C;
      if ((int)this->field_0310 < this->field_041C) {
        local_4c = this->field_0310;
      }
      local_1c = (&this->field_0428)[this->field_00A8];
      DAT_00856d88 = local_2c;
      if (local_1c != 0) {
        if ((this->field_0466 == 0) || ((&this->field_04A2)[this->field_00A8] == 0)) {
          local_20 = 0;
          iVar7 = this->field_03DC / 2;
          iVar8 = iVar7;
          DAT_00856d84 = iVar7;
          if (-1 < iVar7) {
            local_20 = iVar7 + 1;
            local_40 = local_20;
            do {
              if (iVar7 <= iVar8) {
                puVar11 = (undefined1 *)(local_2c + iVar7);
                iVar12 = (iVar8 - iVar7) + 1;
                do {
                  *puVar11 = puVar11[local_1c - local_2c];
                  puVar11 = puVar11 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              iVar7 = iVar7 + -1;
              iVar8 = iVar8 + 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
          if (local_20 < this->field_03DC) {
            do {
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + -1;
              if (iVar7 <= iVar8) {
                puVar11 = (undefined1 *)(local_2c + iVar7);
                iVar12 = (iVar8 - iVar7) + 1;
                do {
                  *puVar11 = puVar11[local_1c - local_2c];
                  puVar11 = puVar11 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              local_20 = local_20 + 1;
            } while (local_20 < this->field_03DC);
          }
        }
        else {
          iVar16 = this->field_03DC / 2;
          iVar7 = (int)*(short *)&this->field_0280->field_0x2;
          iVar12 = (int)*(short *)this->field_0280;
          iVar8 = ((iVar7 + iVar12) * 0xb505) / this->field_03DC;
          switch(this->field_00A8) {
          case CASE_0:
            iVar7 = 0x87c3c;
            iVar13 = (this->field_04B2 * 0x10000) / 2;
            break;
          case CASE_1:
            iVar13 = (iVar12 + 0xc) * 0xb505;
            iVar7 = (int)(this->field_04B6 << 0x10) / 2 + iVar12 * -0xb505;
            break;
          case CASE_2:
            iVar13 = (this->field_04B2 * 0x10000) / 2;
            iVar7 = this->field_04B6 * 0x10000 + (iVar7 + iVar12) * -0xb505 + -0x97c3c;
            break;
          case CASE_3:
            iVar13 = this->field_04B2 * 0x10000 + iVar7 * -0xb505 + -0x97c3c;
            iVar7 = (int)(this->field_04B6 << 0x10) / 2 + iVar7 * -0xb505;
            break;
          default:
            iVar13 = 0;
            iVar7 = 0;
          }
          local_20 = 0;
          DAT_00856d84 = iVar16;
          local_8 = iVar16;
          if (-1 < iVar16) {
            local_20 = iVar16 + 1;
            local_3c = local_20;
            do {
              iVar12 = this->field_04B2;
              iVar10 = (&this->field_04A2)[this->field_00A8];
              if (iVar16 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar16);
                local_40 = (local_8 - iVar16) + 1;
                local_28 = iVar13;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar10 + (iVar7 >> 0x10) * iVar12) == '\0') {
                    *local_38 = this->field_049E;
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar8;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar7 = iVar7 + iVar8;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              iVar16 = iVar16 + -1;
              local_8 = local_8 + 1;
              iVar13 = iVar13 - iVar8;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
          }
          iVar16 = iVar16 + 1;
          local_8 = local_8 + -1;
          iVar13 = iVar13 + iVar8;
          if (local_20 < this->field_03DC) {
            do {
              iVar16 = iVar16 + 1;
              local_8 = local_8 + -1;
              iVar13 = iVar13 + iVar8;
              iVar12 = this->field_04B2;
              iVar10 = (&this->field_04A2)[this->field_00A8];
              if (iVar16 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar16);
                local_40 = (local_8 - iVar16) + 1;
                local_28 = iVar13;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar10 + (iVar7 >> 0x10) * iVar12) == '\0') {
                    *local_38 = this->field_049E;
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar8;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar7 = iVar7 + iVar8;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              local_20 = local_20 + 1;
            } while (local_20 < this->field_03DC);
          }
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_044A;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          st::fn_006E6AF0(this,pAVar2);
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0446;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          st::fn_006E6AF0(this,pAVar2);
        }
      }
      DAT_00856d84 = this->field_03DC / 2;
      _DAT_00856d80 =
           (float)_DAT_0079cd88 / ((float)(int)*(short *)this->field_0280 * (float)this->field_00C8);
      for (pAVar3 = this->field_0452; pAVar3 != nullptr;
          pAVar3 = (AnonPointee_ST3DSMAPContext_0452 *)pAVar3->field_0000) {
        switch(this->field_00A8) {
        case CASE_0:
          lVar18 = st::fn_0072E288();
          local_18 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          local_8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar7 = (int)lVar18;
          break;
        case CASE_1:
          lVar18 = st::fn_0072E288();
          local_18 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          local_8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar7 = (int)lVar18;
          break;
        case CASE_2:
          lVar18 = st::fn_0072E288();
          local_18 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          local_8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar7 = (int)lVar18;
          break;
        case CASE_3:
          lVar18 = st::fn_0072E288();
          local_18 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          local_8 = (int)lVar18;
          lVar18 = st::fn_0072E288();
          iVar7 = (int)lVar18;
          break;
        default:
          goto switchD_006e74ad_default;
        }
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        iVar12 = this->field_03DC;
        if (iVar12 + -2 <= iVar8) {
          iVar8 = iVar12 + -3;
        }
        if (DAT_00856d84 < iVar8) {
          iVar16 = (DAT_00856d84 - iVar12) + iVar8;
          if (local_18 <= iVar16 + 1) {
            local_18 = iVar16 + 2;
          }
          iVar16 = (iVar12 - iVar8) + DAT_00856d84;
          if (iVar16 + -2 <= local_18) {
            local_18 = iVar16 + -3;
          }
        }
        else {
          if (local_18 < DAT_00856d84 - iVar8) {
            local_18 = DAT_00856d84 - iVar8;
          }
          if (DAT_00856d84 + iVar8 <= local_18) {
            local_18 = DAT_00856d84 + iVar8 + -1;
          }
        }
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        if (iVar12 + -2 <= iVar7) {
          iVar7 = iVar12 + -3;
        }
        if (DAT_00856d84 < iVar7) {
          iVar16 = (DAT_00856d84 - iVar12) + iVar7;
          if (local_8 <= iVar16 + 1) {
            local_8 = iVar16 + 2;
          }
          iVar12 = (iVar12 - iVar7) + DAT_00856d84;
          if (iVar12 + -2 <= local_8) {
            local_8 = iVar12 + -3;
          }
        }
        else {
          if (local_8 < DAT_00856d84 - iVar7) {
            local_8 = DAT_00856d84 - iVar7;
          }
          if (DAT_00856d84 + iVar7 <= local_8) {
            local_8 = DAT_00856d84 + iVar7 + -1;
          }
        }
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,local_18 + param_2,iVar8 + param_3,
                     local_8 + param_2,iVar7 + param_3,(byte)pAVar3->field_0018,0xd);
switchD_006e74ad_default:
      }
      for (pAVar4 = this->field_044E; pAVar4 != nullptr;
          pAVar4 = (AnonPointee_ST3DSMAPContext_044E *)pAVar4->field_0000) {
        if (this->field_00C8 <= (double)pAVar4->field_0008) {
          dVar1 = ((double)pAVar4->field_0008 / this->field_00C8) *
                  (((double)this->field_03DC * _DAT_0079df60) /
                  (double)(int)*(short *)this->field_0280);
          st::fn_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
          lVar18 = st::fn_0072E288();
          iVar8 = (int)lVar18;
          switch(this->field_00A8) {
          case CASE_0:
            lVar18 = st::fn_0072E288();
            local_30 = (int)lVar18;
            lVar18 = st::fn_0072E288();
            iVar7 = (int)lVar18;
            break;
          case CASE_1:
            lVar18 = st::fn_0072E288();
            local_30 = (int)lVar18;
            lVar18 = st::fn_0072E288();
            iVar7 = (int)lVar18;
            break;
          case CASE_2:
            lVar18 = st::fn_0072E288();
            local_30 = (int)lVar18;
            lVar18 = st::fn_0072E288();
            iVar7 = (int)lVar18;
            break;
          case CASE_3:
            lVar18 = st::fn_0072E288();
            local_30 = (int)lVar18;
            lVar18 = st::fn_0072E288();
            iVar7 = (int)lVar18;
            break;
          default:
            iVar7 = 0;
            local_30 = 0;
          }
          iVar16 = local_30;
          iVar13 = iVar8 * iVar8;
          iVar12 = iVar13 * 2;
          iVar10 = 0;
          local_48 = -iVar8;
          local_34 = 0;
          local_18 = (local_48 + 1) * iVar13 + ((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2);
          local_2c = iVar12 * iVar8;
          local_3c = iVar7 + local_48;
          local_40 = iVar7 + iVar8;
          local_24 = DAT_00856d88 - local_3c * DAT_00856d8c;
          local_28 = DAT_00856d88 - local_40 * DAT_00856d8c;
          if (local_3c < DAT_00856d84) {
            local_8 = (DAT_00856d84 - iVar7) + iVar8;
            local_c = iVar7 + DAT_00856d84 + local_48;
          }
          else {
            local_8 = (DAT_00856d84 - this->field_03DC) + iVar7 + 1 + local_48;
            local_c = (this->field_03DC - iVar7) + iVar8 + -1 + DAT_00856d84;
          }
          if (local_40 < DAT_00856d84) {
            local_10 = (DAT_00856d84 - iVar7) + local_48;
            local_14 = DAT_00856d84 + iVar8 + iVar7;
          }
          else {
            local_10 = (DAT_00856d84 - this->field_03DC) + iVar8 + 1 + iVar7;
            local_14 = (this->field_03DC - iVar7) + DAT_00856d84 + -1 + local_48;
          }
          if (0 < local_2c) {
            do {
              if ((local_8 <= iVar16 + iVar10) && (iVar16 + iVar10 <= local_c)) {
                *(undefined1 *)(local_24 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)((local_24 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if ((local_10 <= iVar16 + iVar10) && (iVar16 + iVar10 <= local_14)) {
                *(undefined1 *)(local_28 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)((local_28 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if (0 < local_18) {
                local_48 = local_48 + 1;
                local_3c = local_3c + 1;
                local_40 = local_40 + -1;
                local_24 = local_24 - DAT_00856d8c;
                local_28 = local_28 + DAT_00856d8c;
                local_2c = local_2c + iVar13 * -2;
                local_18 = local_18 - local_2c;
                if (DAT_00856d84 < local_3c) {
                  local_8 = local_8 + 1;
                  local_c = local_c + -1;
                }
                else {
                  local_8 = local_8 + -1;
                  local_c = local_c + 1;
                }
                if (DAT_00856d84 < local_40) {
                  local_10 = local_10 + -1;
                  local_14 = local_14 + 1;
                }
                else {
                  local_10 = local_10 + 1;
                  local_14 = local_14 + -1;
                }
              }
              iVar10 = iVar10 + 1;
              local_30 = local_30 + -1;
              local_34 = local_34 + iVar12;
              local_18 = local_18 + local_34 + iVar13;
            } while (local_34 < local_2c);
          }
          local_18 = local_18 - (local_34 + local_2c) / 2;
          if (local_48 < 1) {
            local_3c = iVar7 + local_48;
            local_40 = iVar7 - local_48;
            local_20 = iVar16 - iVar10;
            local_30 = iVar16 + iVar10;
            local_48 = 1 - local_48;
            do {
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)(local_24 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_8 <= local_20) && (local_20 <= local_c)) {
                *(undefined1 *)((local_24 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)(local_28 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_10 <= local_20) && (local_20 <= local_14)) {
                *(undefined1 *)((local_28 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              local_3c = local_3c + 1;
              local_40 = local_40 + -1;
              if (DAT_00856d84 < local_3c) {
                local_8 = local_8 + 1;
                local_c = local_c + -1;
              }
              else {
                local_8 = local_8 + -1;
                local_c = local_c + 1;
              }
              if (DAT_00856d84 < local_40) {
                local_10 = local_10 + -1;
                local_14 = local_14 + 1;
              }
              else {
                local_10 = local_10 + 1;
                local_14 = local_14 + -1;
              }
              local_24 = local_24 - DAT_00856d8c;
              local_28 = local_28 + DAT_00856d8c;
              if (local_18 < 0) {
                iVar10 = iVar10 + 1;
                local_30 = local_30 + 1;
                local_20 = local_20 + -1;
                local_34 = local_34 + iVar12;
                local_18 = local_18 + local_34;
              }
              local_2c = local_2c + iVar13 * -2;
              local_18 = local_18 + (iVar13 - local_2c);
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
        }
      }
      puVar14 = (uint *)this->field_031C;
      pbVar17 = this->field_0420;
      if (0 < local_4c) {
        do {
          if (((pbVar17[3] & 1) != 0) && ((*pbVar17 & (byte)this->field_0418) != 0)) {
            if (((*puVar14 & 0x800000) != 0) || (this->field_03E0 != 0)) {
              dVar1 = (double)((float)puVar14[0x1d] / (float)this->field_00C8);
              st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = st::fn_0072E288();
              *(byte *)(puVar14 + 0x44) = (byte)lVar18;
              if (*(short *)this->field_0280 <= (short)(ushort)(byte)lVar18) {
                *(char *)(puVar14 + 0x44) = *(char *)this->field_0280 + -1;
              }
              dVar1 = (double)((float)puVar14[0x1e] / (float)this->field_00C8);
              st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = st::fn_0072E288();
              STField<byte>(puVar14,0x111) = (byte)lVar18;
              if (*(short *)&this->field_0280->field_0x2 <= (short)(ushort)(byte)lVar18) {
                STField<char>(puVar14,0x111) = this->field_0280->field_0x2 + -1;
              }
              dVar1 = (double)((float)puVar14[0x1f] / (float)this->field_00D0);
              st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = st::fn_0072E288();
              STField<byte>(puVar14,0x112) = (byte)lVar18;
              if (4 < (byte)lVar18) {
                STField<undefined1>(puVar14,0x112) = 4;
              }
              switch(this->field_00A8) {
              case CASE_0:
                lVar18 = st::fn_0072E288();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_1:
                lVar18 = st::fn_0072E288();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_2:
                lVar18 = st::fn_0072E288();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_3:
                lVar18 = st::fn_0072E288();
                puVar14[0x42] = (uint)lVar18;
                break;
              default:
                goto switchD_006e7e25_default;
              }
              lVar18 = st::fn_0072E288();
              puVar14[0x43] = (uint)lVar18;
switchD_006e7e25_default:
              if ((int)puVar14[0x43] < 1) {
                puVar14[0x43] = 1;
              }
              if (this->field_03DC + -2 <= (int)puVar14[0x43]) {
                puVar14[0x43] = this->field_03DC - 3;
              }
              uVar15 = puVar14[0x43];
              if (DAT_00856d84 < (int)uVar15) {
                if ((int)puVar14[0x42] <= (int)((uVar15 - this->field_03DC) + 1 + DAT_00856d84)) {
                  puVar14[0x42] = (puVar14[0x43] - this->field_03DC) + 2 + DAT_00856d84;
                }
                if ((int)((this->field_03DC - puVar14[0x43]) + -2 + DAT_00856d84) <=
                    (int)puVar14[0x42]) {
                  uVar15 = (this->field_03DC - puVar14[0x43]) + -3 + DAT_00856d84;
                  goto LAB_006e7ff9;
                }
              }
              else {
                if ((int)puVar14[0x42] < (int)(DAT_00856d84 - uVar15)) {
                  puVar14[0x42] = DAT_00856d84 - puVar14[0x43];
                }
                if ((int)(puVar14[0x43] + DAT_00856d84) <= (int)puVar14[0x42]) {
                  uVar15 = (puVar14[0x43] - 1) + DAT_00856d84;
LAB_006e7ff9:
                  puVar14[0x42] = uVar15;
                }
              }
              *puVar14 = *puVar14 & 0xff7fffff;
            }
            pbVar9 = (byte *)((puVar14[0x42] - puVar14[0x43] * DAT_00856d8c) + DAT_00856d88);
            *pbVar9 = pbVar17[1];
            pbVar9[1] = pbVar17[1];
            pbVar9[-DAT_00856d8c] = pbVar17[1];
            pbVar9[1 - DAT_00856d8c] = pbVar17[1];
          }
          pbVar17 = pbVar17 + 4;
          puVar14 = puVar14 + 0x45;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      if (0 < this->field_03E8) {
        iVar8 = this->field_03F0 + param_2;
        iVar7 = this->field_03EC + param_2;
        if (iVar7 < iVar8) {
          iVar12 = this->field_03E8 + param_3;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar7,iVar12,iVar8,iVar12,
                       (byte)this->field_03E4,0xd);
        }
      }
      if ((this->field_03F4 < this->field_03DC + -1) && (this->field_03F8 < this->field_03FC)) {
        iVar8 = this->field_03F4 + param_3;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,this->field_03F8 + param_2,iVar8,
                     this->field_03FC + param_2,iVar8,(byte)this->field_03E4,0xd);
      }
      if ((0 < this->field_0400) && (this->field_0404 < this->field_0408)) {
        iVar8 = this->field_0400 + param_2;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar8,this->field_0404 + param_3,iVar8
                     ,this->field_0408 + param_3,(byte)this->field_03E4,0xd);
      }
      if (this->field_040C < this->field_03DC + -1) {
        if (this->field_0410 < this->field_0414) {
          iVar8 = param_2 + this->field_040C;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar8,this->field_0410 + param_3,
                       iVar8,this->field_0414 + param_3,(byte)this->field_03E4,0xd);
        }
      }
      uVar15 = -this->field_00A8 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        st::fn_006D25E0((byte *)((DAT_00856d84 -
                              (DAT_00856d8c + 1) * ((int)STField<short>(pvVar5,0x12) / 2)) +
                             DAT_00856d88),-DAT_00856d8c,
                     (byte *)((STField<byte>(pvVar5,0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)STField<short>(pvVar5,0x12),(int)STField<short>(pvVar5,0x14));
      }
      uVar15 = uVar15 + 1 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        iVar8 = (int)STField<short>(pvVar5,0x14) / 2;
        st::fn_006D25E0((byte *)((DAT_00856d88 - (DAT_00856d84 - iVar8) * DAT_00856d8c) + iVar8),
                     -DAT_00856d8c,
                     (byte *)((STField<byte>(pvVar5,0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)STField<short>(pvVar5,0x12),(int)STField<short>(pvVar5,0x14));
      }
      uVar15 = uVar15 + 1 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        iVar8 = (int)STField<short>(pvVar5,0x12);
        st::fn_006D25E0((byte *)((-(((this->field_03DC - iVar8 / 2) -
                                 (int)STField<short>(pvVar5,0x14)) * DAT_00856d8c) - iVar8 / 2) +
                              DAT_00856d84 + DAT_00856d88),-DAT_00856d8c,
                     (byte *)((STField<byte>(pvVar5,0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),iVar8,
                     (int)STField<short>(pvVar5,0x14));
      }
      pvVar5 = (&this->field_0456)[uVar15 + 1 & 3];
      if (pvVar5 != nullptr) {
        iVar8 = (int)STField<short>(pvVar5,0x14);
        st::fn_006D25E0((byte *)(((-((DAT_00856d84 - iVar8 / 2) * DAT_00856d8c) - iVar8 / 2) -
                              (int)STField<short>(pvVar5,0x12)) + DAT_00856d88 + this->field_03DC
                             ),-DAT_00856d8c,
                     (byte *)((STField<byte>(pvVar5,0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)STField<short>(pvVar5,0x12),iVar8);
      }
    }
    pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0442;
    while (pAVar2 != nullptr) {
      if (param_4 != 0) {
        st::fn_006E6AF0(this,pAVar2);
      }
      *(short *)&pAVar2->field_0x14 = *(short *)&pAVar2->field_0x14 + -1;
      if (*(short *)&pAVar2->field_0x14 < 1) {
        *(undefined2 *)&pAVar2->field_0x14 = *(undefined2 *)&pAVar2->field_0x12;
        pAVar2->field_0x16 = pAVar2->field_0x16 + '\x01';
      }
      if ((byte)pAVar2->field_0x16 < (byte)pAVar2->field_0x17) {
        pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2;
      }
      else {
        pAVar6 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2;
        st::fn_006B98C0((int *)&this->field_0442,(int *)pAVar2);
        st::fn_006A5E90((short *)pAVar2);
        pAVar2 = pAVar6;
      }
    }
    if (param_4 != 0) {
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_044A;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          st::fn_006E6AF0(this,pAVar2);
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0446;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          st::fn_006E6AF0(this,pAVar2);
        }
      }
    }
    this->field_03E0 = 0;
  }
  return;
}

// 006E8580 ST3DSMAPContext::sub_006E8580
#line 4 "decomp/ST.exe/functions/006E8580/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E8580(ST3DSMAPContext *this,int *param_1)

{
  this->field_0000 = param_1;
  param_1[0x8a] = (int)FUN_006eb4b0;
  this->field_0000[0x8c] = (int)FUN_006eb540;
  this->field_0000[0x8b] = (int)FUN_006eb570;
  this->field_0000[0x8d] = (int)this;
  if (DAT_007ee1ac < 0) {
    st::fn_006CFF10
              (param_1,(uint *)&DAT_007ee1ac,0,0,this->field_0004->field_001C - 0xd,0xfa,0x10,
               0xffffff,0xffffffff);
  }
  if (DAT_007ee1b0 < 0) {
    st::fn_006CFF10
              (param_1,(uint *)&DAT_007ee1b0,0,this->field_0004->field_0018 - 0xfa,
               this->field_0004->field_001C - 0xd,0xfa,0x10,0xffffff,0xffffffff);
  }
  return;
}

// 006E8630 ST3DSMAPContext::sub_006E8630
#line 4 "decomp/ST.exe/functions/006E8630/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E8630(ST3DSMAPContext *this,undefined4 param_1)

{
  this->field_02D0 = param_1;
  return;
}

// 006E8640 ST3DSMAPContext::sub_006E8640
#line 4 "decomp/ST.exe/functions/006E8640/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00533D10 -> 006E8640 @ 00534E78 | 005776D0 -> 006E8640 @ 00577B98

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E8640(ST3DSMAPContext *this,char *text,char *param_2)

{
  this->field_02A0 = text;
  this->field_02A4 = param_2;
  return;
}

// 006E8660 ST3DSMAPContext::sub_006E8660
#line 4 "decomp/ST.exe/functions/006E8660/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=31; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=34;
   incoming_ecx_receiver_callers=3; attributed_named_callers=25; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_006E8660
          (ST3DSMAPContext *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7,uint param_8)

{
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  AnonShape_006E8840_CF3FA5BA *pAVar4;
  AnonShape_006E8840_CF3FA5BA *pAVar5;
  int local_8;

  *param_1 = -1;
  pAVar5 = (AnonShape_006E8840_CF3FA5BA *)this->field_02E8;
  pAVar4 = nullptr;
  if (pAVar5 == nullptr) {
    local_8 = this->field_0314;
  }
  else {
    this->field_02E8 = *(undefined4 *)&pAVar5->field_0x8;
    if (pAVar5 == (AnonShape_006E8840_CF3FA5BA *)this->field_02EC) {
      this->field_02EC = 0;
      this->field_02E8 = 0;
    }
    local_8 = ((int)pAVar5 - (int)this->field_031C) / 0x114;
    pAVar4 = pAVar5;
  }
  if (local_8 < this->field_0314) {
    pAVar5 = pAVar4;
    for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_006E8840_CF3FA5BA *)&pAVar5->field_0x4;
    }
  }
  else {
    if (this->field_0318 <= this->field_0314) {
      pbVar1 = st::fn_006ACF50(this->field_031C,(this->field_0318 + 10) * 0x114);
      if (pbVar1 == nullptr) {
        return 0xfffffffe;
      }
      this->field_031C = pbVar1;
      pbVar1 = pbVar1 + this->field_0314 * 0x114;
      for (iVar3 = 0x2b2; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1 = pbVar1 + 4;
      }
      this->field_0318 = this->field_0318 + 10;
    }
    local_8 = this->field_0314;
    this->field_0314 = local_8 + 1;
    pAVar4 = (AnonShape_006E8840_CF3FA5BA *)(this->field_031C + local_8 * 0x114);
  }
  if ((int)this->field_0310 <= local_8) {
    this->field_0310 = local_8 + 1;
  }
  *(uint *)&pAVar4->field_0x84 = param_6;
  *(uint *)&pAVar4->field_0x88 = param_7;
  *(undefined **)pAVar4 = &DAT_00818000;
  *(undefined4 *)&pAVar4->field_0x8 = 1;
  pAVar4->field_0034 = param_4;
  pAVar4->field_0038 = param_5;
  pAVar4->field_0094 = param_2;
  pAVar4->field_00A0 = (int *)param_3;
  *(uint *)&pAVar4->field_0x18 = param_8;
  *(undefined4 *)&pAVar4->field_0x8c = 0xffffffff;
  if (0 < (int)param_2) {
    pvVar2 = st::fn_006AAC10(param_2 << 2);
    *(void **)(pAVar4 + 1) = pvVar2;
    if (pvVar2 == nullptr) {
      return 0xfffffffe;
    }
  }
  if ((0 < (int)param_4) && (0 < (int)param_5)) {
    *(uint *)pAVar4 = *(uint *)pAVar4 | 0x1000;
    *param_1 = local_8;
    return 0;
  }
  st::fn_006E8840(pAVar4);
  *param_1 = local_8;
  return 0;
}

// 006E88C0 ST3DSMAPContext::sub_006E88C0
#line 4 "decomp/ST.exe/functions/006E88C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 9.
   Evidence: 0061DFE0 -> 006E88C0 @ 0061E082; unproven partial register write at 0061E054 | 0061E7F0
   -> 006E88C0 @ 0061EDAF; literal 172 at 0061ED7C

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall
st::fn_006E88C0
          (ST3DSMAPContext *this,int *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,byte param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar2 = st::fn_006E8660(this,param_1,0,0,0,0,0,0,0);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    pbVar1 = this->field_031C;
    puVar3 = st::fn_006AAC70(0x49);
    *(undefined4 **)(pbVar1 + iVar2 * 0x114 + 0xa0) = puVar3;
    if (puVar3 == nullptr) {
      return -2;
    }
    *puVar3 = param_2;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 4) = param_3;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 8) = param_4;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0xc) = param_5;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x14) = param_7;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x18) = param_8;
    *(byte *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x1c) = param_9;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x1d) = param_10;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x21) = param_11;
    *(undefined4 *)(*(int *)(pbVar1 + iVar2 * 0x114 + 0xa0) + 0x25) = param_12;
    *(uint *)(pbVar1 + iVar2 * 0x114 + 4) = *(uint *)(pbVar1 + iVar2 * 0x114 + 4) | 0x4005;
    iVar2 = 0;
  }
  return iVar2;
}

// 006E8EA0 ST3DSMAPContext::sub_006E8EA0
#line 4 "decomp/ST.exe/functions/006E8EA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006E8EA0(ST3DSMAPContext *this,AnonShape_006E8EA0_96B71903 *param_1)

{
  int iVar1;
  int iVar2;
  int local_50 [4];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_30 = this->field_0030;
  local_2c = this->field_0034;
  local_28 = this->field_0038 - local_30;
  local_24 = this->field_003C - local_2c;
  iVar1 = param_1->field_0020;
  local_18 = -1;
  local_14 = -1;
  if (iVar1 != 0) {
    local_18 = *(int *)(iVar1 + 4);
    local_14 = *(int *)(iVar1 + 8);
  }
  iVar1 = param_1->field_0024;
  if (iVar1 != 0) {
    if (local_18 < *(int *)(iVar1 + 4)) {
      local_18 = *(int *)(iVar1 + 4);
    }
    if (local_14 < *(int *)(iVar1 + 8)) {
      local_14 = *(int *)(iVar1 + 8);
    }
  }
  local_10 = (float)param_1->field_0008;
  local_c = param_1->field_000C;
  local_8 = param_1->field_0010;
  st::fn_006E25D0(this,&local_40,&local_10,0.0,0.0,0.0,0);
  iVar1 = this->field_02F0;
  if ((iVar1 == 100) && (this->field_02F4 == 100)) {
    local_20 = -(int)param_1->field_001C;
    local_1c = -(int)param_1->field_001E;
  }
  else {
    iVar2 = (int)((ulonglong)((longlong)(param_1->field_001C * iVar1) * -0x51eb851f) >> 0x20);
    local_20 = (iVar2 >> 5) - (iVar2 >> 0x1f);
    iVar2 = (int)((ulonglong)((longlong)((int)param_1->field_001E * this->field_02F4) * -0x51eb851f)
                 >> 0x20);
    local_1c = (iVar2 >> 5) - (iVar2 >> 0x1f);
    local_18 = (iVar1 * local_18) / 100;
    local_14 = (this->field_02F4 * local_14) / 100;
  }
  local_1c = (local_3c >> 0x10) + local_1c;
  local_20 = (local_40 >> 0x10) + local_20;
  st::fn_006B0460(local_50,&local_20,&local_30);
  return;
}

// 006E9000 ST3DSMAPContext::sub_006E9000
#line 4 "decomp/ST.exe/functions/006E9000/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=006E903A MOV AX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=006E9030 MOV CX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated return.
   Evidence: 006E9000 returns forwarded through return of STManRuinC::sub_00630C50 @ 00630F22

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=6; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=5;
   incoming_ecx_receiver_callers=1; attributed_named_callers=3; owner_evidence_coverage=adequate */

ushort * __thiscall
st::fn_006E9000
          (ST3DSMAPContext *this,int param_1,ushort param_2,ushort param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  AnonShape_006E8EA0_96B71903 *pAVar1;
  int iVar2;
  longlong lVar3;

  pAVar1 = st::fn_006AAC10(0x2c);
  pAVar1->field_0008 = param_4;
  pAVar1->field_000C = param_5;
  pAVar1->field_0010 = param_6;
  lVar3 = st::fn_0072E288();
  *(int *)&pAVar1->field_0x18 = (int)lVar3;
  pAVar1->field_001E = param_3;
  pAVar1->field_001C = param_2;
  pAVar1->field_0020 = param_1;
  pAVar1->field_0024 = param_7;
  st::fn_006B9910(&this->field_0294,(int)pAVar1);
  iVar2 = st::fn_006E8EA0(this,pAVar1);
  if (iVar2 != 0) {
    this->field_0134 = 1;
  }
  return (ushort *)pAVar1;
}

// 006E91D0 ST3DSMAPContext::sub_006E91D0
#line 4 "decomp/ST.exe/functions/006E91D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_006E91D0(ST3DSMAPContext *this,int *param_1)

{
  int iVar1;

  iVar1 = st::fn_006E8EA0(this,(AnonShape_006E8EA0_96B71903 *)param_1);
  if (iVar1 != 0) {
    this->field_0134 = 1;
  }
  st::fn_006B98C0(&this->field_0294,param_1);
  st::fn_006A5E90((short *)param_1);
  return;
}

// 006E98E0 ST3DSMAPContext::sub_006E98E0
#line 4 "decomp/ST.exe/functions/006E98E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00556170 -> 006E98E0 @ 00556296; MOVSX at 00556284 establishes signed source width 2 |
   00556760 -> 006E98E0 @ 00556AD6; MOVSX at 00556AC1 establishes signed source width 2

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=37; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=31;
   incoming_ecx_receiver_callers=0; attributed_named_callers=25; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_006E98E0
          (ST3DSMAPContext *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  AnonShape_006E8840_CF3FA5BA *pAVar1;
  byte *pbVar2;
  int *piVar3;

  if ((param_1 < (uint)this->field_0310) &&
     (pAVar1 = (AnonShape_006E8840_CF3FA5BA *)(this->field_031C + param_1 * 0x114),
     (*(uint *)(this->field_031C + param_1 * 0x114) & 0x8000) != 0)) {
    if ((uint)pAVar1->field_0094 <= param_2) {
      st::fn_006E91A0();
      return 0;
    }
    if (pAVar1->field_00A0 == nullptr) {
      piVar3 = st::fn_006AAC10(pAVar1->field_0094 * 8);
      pAVar1->field_00A0 = piVar3;
      if (piVar3 == nullptr) {
        return 0xfffffffe;
      }
      *(uint *)&pAVar1->field_0x4 = *(uint *)&pAVar1->field_0x4 | 1;
    }
    if (param_4 != pAVar1->field_00A0[param_2 * 2 + 1]) {
      *(uint *)pAVar1 = *(uint *)pAVar1 & 0xff87ffff | 0x4c;
      *(undefined2 *)(*(int *)(pAVar1 + 1) + 2 + param_2 * 4) = 0;
    }
    pAVar1->field_00A0[param_2 * 2] = param_3;
    pAVar1->field_00A0[param_2 * 2 + 1] = param_4;
    if ((*(uint *)pAVar1 & 0x1000) == 0) {
      st::fn_006E8840(pAVar1);
    }
    if (param_4 != 0) {
      pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 0x80;
      if (param_5 != 0) {
        pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
        *pbVar2 = *pbVar2 | 0x40;
      }
      st::fn_006E9A10((uint *)pAVar1,param_2,0xfffffffe);
      return 0;
    }
  }
  else if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return 0;
}

// 006E9CB0 ST3DSMAPContext::sub_006E9CB0
#line 4 "decomp/ST.exe/functions/006E9CB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=5;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

uint * __thiscall st::fn_006E9CB0(ST3DSMAPContext *this,uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = (uint *)this->field_0310;
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(this->field_031C + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0)) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)st::fn_006E91A0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        pbVar1 = (byte *)(uVar2 + 3 + param_2 * 4);
        *pbVar1 = *pbVar1 | 0x40;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)st::fn_006E8C50();
  }
  return puVar3;
}

// 006E9D40 ST3DSMAPContext::sub_006E9D40
#line 4 "decomp/ST.exe/functions/006E9D40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=8; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

uint * __thiscall st::fn_006E9D40(ST3DSMAPContext *this,uint *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = (uint *)this->field_0310;
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(this->field_031C + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0)) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)st::fn_006E91A0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        puVar1 = (ushort *)(uVar2 + 2 + param_2 * 4);
        *puVar1 = *puVar1 & 0xbfff;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)st::fn_006E8C50();
  }
  return puVar3;
}

// 006E9EF0 ST3DSMAPContext::sub_006E9EF0
#line 4 "decomp/ST.exe/functions/006E9EF0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00575CB0 -> 006E9EF0 @ 0057644C; literal 30000 at 00576436 | 00575CB0 -> 006E9EF0 @
   0057649F; literal 30000 at 0057648C | 005F6F60 -> 006E9EF0 @ 005F7D6A; literal 30000 at 005F7D51
   | 005FAA10 -> 006E9EF0 @ 005FAB6C; literal 30000 at 005FAB58 | 006029C0 -> 006E9EF0 @ 00602B0F;
   literal 30000 at 00602B01

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006E9EF0
          (ST3DSMAPContext *this,uint param_1,uint param_2,int param_3,int param_4,uint param_5,
          ushort param_6)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  void *pvVar4;
  byte *pbVar5;
  int iVar6;

  if (param_1 < (uint)this->field_0310) {
    puVar1 = (uint *)(this->field_031C + param_1 * 0x114);
    uVar3 = *(uint *)(this->field_031C + param_1 * 0x114);
    if ((uVar3 & 0x8000) != 0) {
      if (puVar1[0x25] <= param_2) {
        st::fn_006E91A0();
        return;
      }
      if (param_3 != 0) {
        if ((uVar3 & 0x200) != 0) {
          return;
        }
        if (puVar1[0x2a] == 0) {
          pvVar4 = st::fn_006AAC10(puVar1[0x25] * 8);
          puVar1[0x2a] = (uint)pvVar4;
          if (pvVar4 == nullptr) {
            return;
          }
        }
        *(short *)(puVar1[0x2a] + param_2 * 8) = (short)param_5;
        *(ushort *)(puVar1[0x2a] + 2 + param_2 * 8) = param_6;
        if (param_4 == 0) {
          param_4 = 1;
        }
        *(short *)(puVar1[0x2a] + 4 + param_2 * 8) = (short)param_4;
        pbVar5 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
        *pbVar5 = *pbVar5 | 0x20;
        *puVar1 = *puVar1 | 0x100;
        st::fn_006E9A10(puVar1,param_2,param_5);
        return;
      }
      puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar2 = *puVar2 & 0xffdf;
      iVar6 = 0;
      if (0 < (int)puVar1[0x25]) {
        pbVar5 = (byte *)(puVar1[0x29] + 2);
        do {
          if ((*pbVar5 & 0x20) != 0) break;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 4;
        } while (iVar6 < (int)puVar1[0x25]);
      }
      if ((*puVar1 & 0x100) != 0) {
        st::fn_006AB060((void **)(puVar1 + 0x2a));
      }
      if (iVar6 < (int)puVar1[0x25]) {
        return;
      }
      *puVar1 = *puVar1 & 0xfffffeff;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return;
}

// 006EA270 ST3DSMAPContext::sub_006EA270
#line 4 "decomp/ST.exe/functions/006EA270/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00556760 -> 006EA270 @ 00556B06 | 006377B0 -> 006EA270 @ 00637831 | 00637930 ->
   006EA270 @ 006379CD

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=57; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=47;
   incoming_ecx_receiver_callers=0; attributed_named_callers=35; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006EA270(ST3DSMAPContext *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if (puVar1[0x28] != 0) {
      if (param_2 < puVar1[0x25]) {
        st::fn_006E9A10(puVar1,param_2,param_3);
        return;
      }
      st::fn_006E91A0();
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return;
}

// 006EA5E0 ST3DSMAPContext::sub_006EA5E0
#line 4 "decomp/ST.exe/functions/006EA5E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=5;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

byte __thiscall
st::fn_006EA5E0(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  byte bVar4;

  if (((uint)this->field_0310 <= param_1) ||
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      st::fn_006E8C50();
    }
    return 0;
  }
  if ((int)puVar1[0x25] <= param_2) {
    st::fn_006E91A0();
    return 0;
  }
  puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
  uVar3 = *puVar2;
  bVar4 = (byte)~(byte)uVar3 >> 1 & 1;
  if (param_3 != 0) {
    *puVar2 = uVar3 & 0xfffd;
    return bVar4;
  }
  *puVar2 = uVar3 | 2;
  return bVar4;
}

// 006EA6D0 ST3DSMAPContext::sub_006EA6D0
#line 4 "decomp/ST.exe/functions/006EA6D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006EA6D0(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      st::fn_006E91A0();
      return;
    }
    if (param_3 == 0) {
      puVar3 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      uVar4 = *puVar3;
      if ((uVar4 & 4) != 0) {
        *puVar3 = uVar4 & 0xfffb;
        uVar5 = puVar1[0x24];
        puVar1[0x24] = uVar5 - 1;
        if ((int)(uVar5 - 1) < 0) {
          puVar1[0x24] = 0;
          return;
        }
      }
    }
    else {
      pbVar2 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
      if ((*pbVar2 & 4) == 0) {
        puVar1[0x24] = puVar1[0x24] + 1;
        *pbVar2 = *pbVar2 | 4;
        return;
      }
    }
  }
  else if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return;
}

// 006EA800 ST3DSMAPContext::sub_006EA800
#line 4 "decomp/ST.exe/functions/006EA800/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006EA800(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      st::fn_006E91A0();
      return;
    }
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    if (param_3 == 0) {
      *puVar2 = *puVar2 & 0xffef;
    }
    else {
      *(byte *)puVar2 = (byte)*puVar2 | 0x10;
    }
    if ((puVar1[2] == 0) && ((*puVar1 & 0x10001) != 0)) {
      *puVar1 = *puVar1 & 0xff87ffff | 4;
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return;
}

// 006EA8A0 ST3DSMAPContext::sub_006EA8A0
#line 4 "decomp/ST.exe/functions/006EA8A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 006364B0 -> 006EA8A0 @ 006365B8; data at 008032B8 */

void __thiscall
st::fn_006EA8A0
          (ST3DSMAPContext *this,uint param_1,int param_2,uint param_3,ushort *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  ushort *puVar3;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      st::fn_006E91A0();
      return;
    }
    if ((int)param_3 < 1) {
      puVar3 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar3 = *puVar3 & 0xfeff;
    }
    else {
      pbVar2 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 1;
      puVar1[0x26] = param_3;
      puVar1[0x27] = (uint)param_4;
    }
    if ((puVar1[2] == 0) && ((*puVar1 & 0x10001) != 0)) {
      *puVar1 = *puVar1 & 0xff87ffff | 4;
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    st::fn_006E8C50();
  }
  return;
}

// 006EB310 ST3DSMAPContext::sub_006EB310
#line 4 "decomp/ST.exe/functions/006EB310/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_006EB310(ST3DSMAPContext *this,uint param_1)

{
  if ((param_1 < (uint)this->field_0310) &&
     ((*(uint *)(this->field_031C + param_1 * 0x114) & 0x8000) != 0)) {
    return *(uint *)(this->field_031C + param_1 * 0x114) & 1;
  }
  return 0;
}

// 006EB350 ST3DSMAPContext::sub_006EB350
#line 4 "decomp/ST.exe/functions/006EB350/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int __thiscall
st::fn_006EB350(ST3DSMAPContext *this,int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar5;
  int iVar6;
  AnonShape_006EB350_D4715C71 *pAVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short *local_c;
  AnonShape_006EB350_D4715C71 *local_8;

  local_1c = 0;
  iVar4 = st::fn_006EAFF0(this,param_1,param_2,&local_c,&local_14);
  if (iVar4 != 0) {
    return 0;
  }
  local_10 = 0;
  pAVar7 = nullptr;
  if (0 < local_14) {
    local_18 = 0;
    do {
      local_8 = (AnonShape_006EB350_D4715C71 *)
                (this->field_031C + *(int *)(local_18 + (int)local_c) * 0x114);
      if (((local_8->field_00A0 != 0) && (param_3 < local_8->field_0094)) &&
         (iVar4 = *(int *)(local_8->field_00A0 + 4 + param_3 * 8), iVar4 != 0)) {
        pbVar1 = *(byte **)(iVar4 + *(short *)(local_8->field_00A4 + param_3 * 4) * 4);
        iVar4 = *(int *)(local_18 + 8 + (int)local_c);
        iVar6 = (int)*(short *)(pbVar1 + 0xe);
        if ((iVar6 <= iVar4) && (iVar4 < *(short *)(pbVar1 + 0x12) + iVar6)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar2 = *(int *)(local_18 + 0xc + (int)local_c);
          iVar5 = (int)*(short *)(pbVar1 + 0x10);
          if ((iVar5 <= iVar2) &&
             ((iVar2 < *(short *)(pbVar1 + 0x14) + iVar5 &&
              (iVar4 = st::fn_006CFD90(pbVar1,iVar4 - iVar6,iVar2 - iVar5), iVar4 != 0)))) {
            pAVar7 = local_8;
            if (local_10 < local_14) {
              local_1c = *(int *)(local_c + local_10 * 10 + 2);
            }
            break;
          }
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + 0x14;
      pAVar7 = local_8;
    } while (local_10 < local_14);
  }
  st::fn_006A5E90(local_c);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((local_1c != 0) && (param_4 != 0)) &&
     (uVar3 = st::fn_006E2D00(this,param_1,param_2),
     CONCAT22(extraout_var,uVar3) < *(int *)&pAVar7->field_0x10)) {
    return 0;
  }
  return local_1c;
}

// 00709470 ST3DSMAPContext::sub_00709470
#line 4 "decomp/ST.exe/functions/00709470/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0044C130 -> 00709470 @ 0044C2AB; literal 255 at 0044C29C | 0044C130 -> 00709470 @
   0044C48C; literal 255 at 0044C47D | 00709670 -> 00709470 @ 0070976B; FUN_00709670 parameter
   param_4

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00709470
          (ST3DSMAPContext *this,int *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_414;
  ST3DSMAPContext *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar7 = 0;
    iVar11 = 0;
    local_8 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    piVar8 = param_1;
    iVar13 = param_2;
    if (0 < param_2) {
      do {
        iVar3 = *piVar8;
        if (((iVar3 != 0) && (iVar10 = *(int *)(iVar3 + 4), 0 < iVar10)) &&
           (iVar3 = *(int *)(iVar3 + 8), 0 < iVar3)) {
          if (iVar7 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar11 < iVar3) {
            iVar11 = iVar3;
          }
        }
        iVar13 = iVar13 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar13 != 0);
    }
  }
  else {
    iVar13 = 32000;
    iVar7 = -32000;
    local_8 = 32000;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 32000;
    iVar11 = -32000;
    if (0 < param_2) {
      local_c = param_2;
      piVar8 = param_1;
      do {
        iVar3 = *piVar8;
        if ((iVar3 != 0) && (0 < *(short *)(iVar3 + 0x12))) {
          sVar2 = *(short *)(iVar3 + 0x14);
          local_10 = STReplaceLowWord((uint32_t)(piVar8), (uint16_t)(sVar2));
          if (0 < sVar2) {
            iVar10 = (int)*(short *)(iVar3 + 0xe);
            if (iVar10 < iVar13) {
              iVar13 = iVar10;
            }
            iVar10 = iVar10 + *(short *)(iVar3 + 0x12);
            if (iVar7 < iVar10) {
              iVar7 = iVar10;
            }
            iVar3 = (int)*(short *)(iVar3 + 0x10);
            if (iVar3 < param_3) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = iVar3;
            }
            if (iVar11 < iVar3 + sVar2) {
              iVar11 = iVar3 + sVar2;
            }
          }
        }
        piVar8 = piVar8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      local_8 = iVar13;
    }
    iVar7 = iVar7 - local_8;
    iVar11 = iVar11 - param_3;
  }
  local_14 = this;
  st::fn_006B0BA0(this->field_0004,&local_414,0,0x100);
  puVar4 = (undefined1 *)((int)&local_414 + 2);
  iVar13 = 0x100;
  do {
    uVar1 = puVar4[-2];
    puVar4[-2] = *puVar4;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar7 = iVar7 + param_4 * 2;
  if ((0 < iVar7) && (iVar11 = iVar11 + param_4 * 2, 0 < iVar11)) {
    pRVar5 = (RecoveredSourceFamily_dibcopy *)st::fn_006B50C0(iVar7,iVar11,8,0x100,&local_414,1);
    uVar12 = pRVar5[1].field_0004;
    if (uVar12 == 0) {
      uVar12 = ((uint)pRVar5->field_000E * pRVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pRVar5->field_0008;
    }
    pbVar6 = (byte *)st::fn_006B4FA0((int *)pRVar5);
    for (uVar9 = uVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(uint *)pbVar6 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
      pbVar6 = pbVar6 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pbVar6 = param_5;
      pbVar6 = pbVar6 + 1;
    }
    if (-1 < param_2 + -1) {
      piVar8 = param_1 + param_2 + -1;
      do {
        pbVar6 = (byte *)*piVar8;
        if (((pbVar6 != nullptr) && (0 < *(int *)(pbVar6 + 4))) && (0 < *(int *)(pbVar6 + 8))) {
          st::fn_006B84D0(pRVar5,0,param_4 - local_8,param_4 - param_3,pbVar6);
        }
        piVar8 = piVar8 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return (uint)pRVar5;
  }
  return 0;
}

// 00717870 ST3DSMAPContext::sub_00717870
#line 4 "decomp/ST.exe/functions/00717870/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00558840 -> 00717870 @ 005588CB

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00717870(ST3DSMAPContext *this)

{
  int iVar1;

  iVar1 = 0;
  this->field_04BA = 0;
  this->field_04A2 = 0;
  do {
    st::fn_006A5E90(*(short **)((int)this->field_0472 + iVar1));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x140);
  st::fn_006AB060(&this->field_0472);
  st::fn_006AB060(&this->field_046E);
  this->field_0466 = 0;
  return;
}

// 007178C0 ST3DSMAPContext::sub_007178C0
#line 4 "decomp/ST.exe/functions/007178C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_007178C0(ST3DSMAPContext *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == this->field_04BA) {
    uVar2 = this->field_04B2 * param_3 + param_2 ^ 7;
    pbVar1 = (byte *)((int)this->field_046E + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    this->field_046A = 1;
  }
  return;
}

