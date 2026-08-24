#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SndUnderAttMenegC.cpp

// 0061F8B0 SndUnderAttMenegC::sub_0061F8B0
#line 4 "decomp/ST.exe/functions/0061F8B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_0061F8B0(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  SoundPosition local_14;
  uint local_8;

  local_8 = g_playSystem_00802A38->field_00E4;
  if ((((DAT_0080874d == param_3) && (this->field_00B5 <= local_8)) &&
      (((param_1 + 1 < g_sT3DSMAPContext_00807598->field_0048 ||
        (((g_sT3DSMAPContext_00807598->field_0058 < param_1 + -1 ||
          (param_2 + 1 < g_sT3DSMAPContext_00807598->field_0044)) ||
         (g_sT3DSMAPContext_00807598->field_0054 < param_2 + -1)))) ||
       (iVar1 = st::fn_006DDBD0(), iVar1 == 0)))) &&
     /* ST_CALLSITE[0061F933]: CALL 0x00402b8f; direct=00402B8F SndUnderAttMenegC::sub_0061FA40 */
     (((uVar2 = st::fn_00402B8F(this,local_8,param_1,param_2), (int)uVar2 < 0 &&
       /* ST_CALLSITE[0061F948]: CALL 0x00405cfe; direct=00405CFE SndUnderAttMenegC::sub_0061FB70 */
       (uVar2 = st::fn_00405CFE(this,local_8,param_1,param_2,param_3), -1 < (int)uVar2)) ||
      (uVar2 == 2)))) {
    if (DAT_0080874e == '\x01') {
      iVar1 = 0x3b;
    }
    else if (DAT_0080874e == '\x02') {
      iVar1 = 0x3c;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      iVar1 = 0x3d;
    }
    local_14.unknown = 0;
    local_14.x = -1;
    local_14.y = -1;
    /* ST_CALLSITE[0061F9A1]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar1,&local_14,0);
    st::fn_00402D5B(1,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                       (float)param_2 * _DAT_007904f8 + _DAT_007904f4);
    this->field_00B5 = local_8 + 0xfa;
  }
  return;
}

// 0061FA40 SndUnderAttMenegC::sub_0061FA40
#line 4 "decomp/ST.exe/functions/0061FA40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0061FA40(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00B9DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00B9 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00B9->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00B9;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 0061FB70 SndUnderAttMenegC::sub_0061FB70
#line 4 "decomp/ST.exe/functions/0061FB70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_0061FB70
          (SndUnderAttMenegC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00B9DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00B9 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00B9DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00B9 = pSVar1;
  }
  if (this->field_00B9 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00B9,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 0061FCC0 SndUnderAttMenegC::sub_0061FCC0
#line 4 "decomp/ST.exe/functions/0061FCC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0061FCC0(SndUnderAttMenegC *this)

{
  if (this->field_00B9 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00B9);
    this->field_00B9 = nullptr;
  }
  if (this->field_00C5 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00C5);
    this->field_00C5 = nullptr;
  }
  if (this->field_00D1 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00D1);
    this->field_00D1 = nullptr;
  }
  if (this->field_00DD != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00DD);
    this->field_00DD = nullptr;
  }
  if (this->field_00E9 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00E9);
    this->field_00E9 = nullptr;
  }
  if (this->field_00F5 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00F5);
    this->field_00F5 = nullptr;
  }
  if (this->field_0101 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_0101);
    this->field_0101 = nullptr;
  }
  if (this->field_010A != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_010A);
    this->field_010A = nullptr;
  }
  return;
}

// 0061FE80 SndUnderAttMenegC::sub_0061FE80
#line 4 "decomp/ST.exe/functions/0061FE80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_0061FE80
          (SndUnderAttMenegC *this,int param_1,int param_2,uint param_3,undefined4 param_4,
          int param_5)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_3) {
    return;
  }
  if (this->field_00C1 <= uVar1) {
    /* ST_CALLSITE[0061FEC1]: CALL 0x0040119f; direct=0040119F SndUnderAttMenegC::sub_00620030 */
    uVar2 = st::fn_0040119F(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[0061FED6]: CALL 0x0040599d; direct=0040599D SndUnderAttMenegC::sub_00620160 */
        (uVar2 = st::fn_0040599D(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      if (param_5 == 0xa6) {
        soundId = 0x86;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x89;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8c;
      }
    }
    else if (DAT_0080874e == '\x02') {
      if (param_5 == 0xa6) {
        soundId = 0x87;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8a;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8d;
      }
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      if (param_5 == 0xa6) {
        soundId = 0x88;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8b;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8e;
      }
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[0061FF9B]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[0061FFAF]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    st::fn_00405D62(this,param_1,param_2,0x8e);
    this->field_00C1 = uVar1 + 0xfa;
    return;
  }
  return;
}

// 00620030 SndUnderAttMenegC::sub_00620030
#line 4 "decomp/ST.exe/functions/00620030/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00620030(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00C5DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00C5 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00C5->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00C5;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620160 SndUnderAttMenegC::sub_00620160
#line 4 "decomp/ST.exe/functions/00620160/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0061FE80 -> 00620160 @ 0061FED6; FUN_0061fe80 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00620160
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00C5DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00C5 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00C5DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00C5 = pSVar1;
  }
  if (this->field_00C5 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00C5,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 006202B0 SndUnderAttMenegC::sub_006202B0
#line 4 "decomp/ST.exe/functions/006202B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006202B0
          (SndUnderAttMenegC *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_4) {
    return;
  }
  if (uVar1 < this->field_00CD) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x40;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x8f;
  }
  else {
    if (DAT_0080874e != '\x03') goto LAB_0062030e;
    iVar3 = 0x4d;
  }
  st::fn_0040186B((uint)DAT_0080874d,iVar3);
LAB_0062030e:
  /* ST_CALLSITE[0062031A]: CALL 0x00404e8f; direct=00404E8F SndUnderAttMenegC::sub_006203F0 */
  uVar2 = st::fn_00404E8F(this,uVar1,param_1,param_2);
  if (((-1 < (int)uVar2) ||
      /* ST_CALLSITE[0062032F]: CALL 0x0040152d; direct=0040152D SndUnderAttMenegC::sub_00620520 */
      (uVar2 = st::fn_0040152D(this,uVar1,param_1,param_2,param_4), (int)uVar2 < 0)) && (uVar2 != 2)) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x80;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x81;
  }
  else {
    if (DAT_0080874e != '\x03') {
      return;
    }
    iVar3 = 0x82;
  }
  local_10.unknown = 0;
  local_10.x = -1;
  local_10.y = -1;
  /* ST_CALLSITE[00620384]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar3,&local_10,0);
  /* ST_CALLSITE[00620392]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
  st::fn_00405D62(this,param_1,param_2,0x28);
  this->field_00C1 = uVar1 + 0xfa;
  return;
}

// 006203F0 SndUnderAttMenegC::sub_006203F0
#line 4 "decomp/ST.exe/functions/006203F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_006203F0(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00D1DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00D1 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00D1->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00D1;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620520 SndUnderAttMenegC::sub_00620520
#line 4 "decomp/ST.exe/functions/00620520/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006202B0 -> 00620520 @ 0062032F; FUN_006202b0 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00620520
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00D1DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00D1 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00D1DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00D1 = pSVar1;
  }
  if (this->field_00D1 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00D1,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620670 SndUnderAttMenegC::sub_00620670
#line 4 "decomp/ST.exe/functions/00620670/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00620670(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d != param_3) {
    return;
  }
  if (this->field_00D9 <= uVar1) {
    /* ST_CALLSITE[006206B1]: CALL 0x00403af8; direct=00403AF8 SndUnderAttMenegC::sub_00620780 */
    uVar2 = st::fn_00403AF8(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[006206C6]: CALL 0x004052d1; direct=004052D1 SndUnderAttMenegC::sub_006208B0 */
        (uVar2 = st::fn_004052D1(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x83;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x84;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x85;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[0062071B]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    this->field_00C1 = uVar1 + 0xfa;
    return;
  }
  return;
}

// 00620780 SndUnderAttMenegC::sub_00620780
#line 4 "decomp/ST.exe/functions/00620780/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00620780(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00DDDArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00DD != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00DD->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00DD;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 006208B0 SndUnderAttMenegC::sub_006208B0
#line 4 "decomp/ST.exe/functions/006208B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_006208B0
          (SndUnderAttMenegC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00DDDArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00DD == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00DDDArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00DD = pSVar1;
  }
  if (this->field_00DD != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00DD,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620A00 SndUnderAttMenegC::sub_00620A00
#line 4 "decomp/ST.exe/functions/00620A00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00620A00(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_3) {
    return;
  }
  if (this->field_00E5 <= uVar1) {
    /* ST_CALLSITE[00620A41]: CALL 0x00404fa7; direct=00404FA7 SndUnderAttMenegC::sub_00620B20 */
    uVar2 = st::fn_00404FA7(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[00620A56]: CALL 0x00404c19; direct=00404C19 SndUnderAttMenegC::sub_00620C50 */
        (uVar2 = st::fn_00404C19(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x95;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x96;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x97;
    }
    local_10.x = -1;
    local_10.y = -1;
    local_10.unknown = 0;
    /* ST_CALLSITE[00620AA9]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[00620ABA]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    st::fn_00405D62(this,param_1,param_2,0x8e);
    this->field_00E5 = uVar1 + 0xfa;
    return;
  }
  return;
}

// 00620B20 SndUnderAttMenegC::sub_00620B20
#line 4 "decomp/ST.exe/functions/00620B20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00620B20(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00E9DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00E9 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00E9->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00E9;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620C50 SndUnderAttMenegC::sub_00620C50
#line 4 "decomp/ST.exe/functions/00620C50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00620A00 -> 00620C50 @ 00620A56; FUN_00620a00 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00620C50
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00E9DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00E9 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00E9DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00E9 = pSVar1;
  }
  if (this->field_00E9 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00E9,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 00620DA0 SndUnderAttMenegC::sub_00620DA0
#line 4 "decomp/ST.exe/functions/00620DA0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061FE80 -> 00620DA0 @ 0061FFAF | 006202B0 -> 00620DA0 @ 00620392 | 00620A00 ->
   00620DA0 @ 00620ABA | 00620E40 -> 00620DA0 @ 00620EF8 | 006211E0 -> 00620DA0 @ 0062129A

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=5; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00620DA0
          (SndUnderAttMenegC *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;

  iVar1 = 0;
  pcVar2 = (char *)&this->field_0020;
  do {
    if (*pcVar2 == '\0') {
      (&this->field_0020)[iVar1 * 0x1d] = 1;
      *(int *)((int)&this->field_0021 + iVar1 * 0x1d) = param_1;
      *(undefined4 *)((int)&this->field_0025 + iVar1 * 0x1d) = param_2;
      *(undefined4 *)((int)&this->field_0029 + iVar1 * 0x1d) = param_3;
      *(int *)((int)&this->field_002D + iVar1 * 0x1d) = st::machine_word_boundary_cast<int>(this->field_001C * 10);
      *(uint *)((int)&this->field_0039 + iVar1 * 0x1d) = g_playSystem_00802A38->field_00E4;
      *(undefined4 *)((int)&this->field_0031 + iVar1 * 0x1d) = 0xf;
      *(float *)((int)&this->field_0035 + iVar1 * 0x1d) =
           (float)_DAT_0079cee0 / ((float)this->field_001C * (float)_DAT_0079cef0);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x1d;
  } while (iVar1 < 5);
  return 0;
}

// 00620E40 SndUnderAttMenegC::sub_00620E40
#line 4 "decomp/ST.exe/functions/00620E40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00620E40(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_3) {
    return;
  }
  if (this->field_00F1 <= uVar1) {
    /* ST_CALLSITE[00620E80]: CALL 0x00403b7a; direct=00403B7A SndUnderAttMenegC::sub_00620F60 */
    uVar2 = st::fn_00403B7A(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[00620E95]: CALL 0x00404b10; direct=00404B10 SndUnderAttMenegC::sub_00621090 */
        (uVar2 = st::fn_00404B10(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x8f;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x90;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x91;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[00620EEA]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[00620EF8]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    st::fn_00405D62(this,param_1,param_2,0x28);
    this->field_00F1 = uVar1 + 0xfa;
    return;
  }
  return;
}

// 00620F60 SndUnderAttMenegC::sub_00620F60
#line 4 "decomp/ST.exe/functions/00620F60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00620F60(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00F5DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00F5 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_00F5->count - 1), -1 < (int)index)) {
    do {
      array = this->field_00F5;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 00621090 SndUnderAttMenegC::sub_00621090
#line 4 "decomp/ST.exe/functions/00621090/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00620E40 -> 00621090 @ 00620E95; FUN_00620e40 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00621090
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00F5DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00F5 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00F5DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_00F5 = pSVar1;
  }
  if (this->field_00F5 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_00F5,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 006211E0 SndUnderAttMenegC::sub_006211E0
#line 4 "decomp/ST.exe/functions/006211E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006211E0(SndUnderAttMenegC *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d != param_3) {
    return;
  }
  if (this->field_00FD <= uVar1) {
    /* ST_CALLSITE[00621221]: CALL 0x004047d7; direct=004047D7 SndUnderAttMenegC::sub_00621300 */
    uVar2 = st::fn_004047D7(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        /* ST_CALLSITE[00621236]: CALL 0x004030d0; direct=004030D0 SndUnderAttMenegC::sub_00621430 */
        (uVar2 = st::fn_004030D0(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) && (uVar2 != 2))
    {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0xaa;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xab;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0xac;
    }
    local_10.x = -1;
    local_10.y = -1;
    local_10.unknown = 0;
    /* ST_CALLSITE[00621289]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    /* ST_CALLSITE[0062129A]: CALL 0x00405d62; direct=00405D62 SndUnderAttMenegC::sub_00620DA0 */
    st::fn_00405D62(this,param_1,param_2,0x8e);
    this->field_00FD = uVar1 + 0xfa;
    return;
  }
  return;
}

// 00621300 SndUnderAttMenegC::sub_00621300
#line 4 "decomp/ST.exe/functions/00621300/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00621300(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_0101DArray *array;
  uint index;
  int *piVar1;
  uint uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_0101 != nullptr) &&
     (index = st::machine_word_boundary_cast<uint>(this->field_0101->count - 1), -1 < (int)index)) {
    do {
      array = this->field_0101;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 00621430 SndUnderAttMenegC::sub_00621430
#line 4 "decomp/ST.exe/functions/00621430/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006211E0 -> 00621430 @ 00621236; FUN_006211e0 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_00621430
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_0101DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_0101 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_0101DArray *)
             st::fn_006AE290(nullptr,10,0x14,10);
    this->field_0101 = pSVar1;
  }
  if (this->field_0101 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_0101,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 00621580 SndUnderAttMenegC::sub_00621580
#line 4 "decomp/ST.exe/functions/00621580/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CEB00 -> 00621580 @ 004CEDDB; /TLOBaseTy+0x24

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=15; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=15, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00621580(SndUnderAttMenegC *this,byte *param_1,int param_2)

{
  uint uVar1;
  int local_8;

  local_8 = 0;
  if ((byte *)(uint)DAT_0080874d != param_1) {
    return;
  }
  if ((this->field_010A == nullptr) ||
     (uVar1 = st::fn_00405E1B(this,param_2,(undefined4 *)&local_8), (int)uVar1 < 0)) {
    /* ST_CALLSITE[006215BD]: CALL 0x00405b37; direct=00405B37 SndUnderAttMenegC::sub_006216E0 */
    uVar1 = st::fn_00405B37(this,param_2);
  }
  if ((local_8 != 0) && (-1 < (int)uVar1)) {
    if (10 < g_playSystem_00802A38->field_00E4 - this->field_0106) {
      /* ST_CALLSITE[006215E9]: CALL 0x00401073; direct=00401073 SndUnderAttMenegC::sub_00621780 */
      st::fn_00401073(this,uVar1);
      return;
    }
    this->field_0105 = 1;
  }
  return;
}

// 006216E0 SndUnderAttMenegC::sub_006216E0
#line 4 "decomp/ST.exe/functions/006216E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_006216E0(SndUnderAttMenegC *this,undefined4 param_1)

{
  SndUnderAttMenegC_field_010ADArray *pSVar1;
  uint uVar2;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;

  local_14 = 0;
  local_8 = (undefined1)((uint)param_1 >> 0x18);
  local_10 = st::machine_word_boundary_cast<int>(g_playSystem_00802A38->field_00E4 << 8);
  STPiece<0,1>(local_c) = (undefined1)(g_playSystem_00802A38->field_00E4 >> 0x18);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31((int3)param_1,(undefined1)local_c);
  if (this->field_010A == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_010ADArray *)
             st::fn_006AE290(nullptr,10,0xd,10);
    this->field_010A = pSVar1;
  }
  if (this->field_010A != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_010A,&local_14);
    return uVar2;
  }
  return 0xffffffff;
}

// 00621780 SndUnderAttMenegC::sub_00621780
#line 4 "decomp/ST.exe/functions/00621780/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00621780(SndUnderAttMenegC *this,uint param_1)

{
  SndUnderAttMenegC_field_010ADArray *pSVar1;
  char *text;
  int soundId;
  byte *puVar2;
  uint uVar3;
  SoundPosition local_10;

  pSVar1 = this->field_010A;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if ((param_1 < pSVar1->count) &&
     (puVar2 = &pSVar1->data->field_0000 + pSVar1->elementSize * param_1,
     puVar2 != nullptr)) {
    switch(*(undefined4 *)(puVar2 + 9)) {
    case 1:
      if (DAT_0080874e == '\x01') {
        soundId = 0x3e;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x3f;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x40;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x01') {
        soundId = 0x41;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x42;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x43;
      }
      break;
    case 3:
      if (DAT_0080874e == '\x01') {
        soundId = 0x44;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x45;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x46;
      }
      break;
    case 4:
      if (DAT_0080874e == '\x01') {
        soundId = 0x47;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x48;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x49;
      }
      break;
    case 5:
      if (DAT_0080874e == '\x01') {
        soundId = 0x4a;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x4b;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x4c;
      }
      break;
    case 6:
      if (DAT_0080874e == '\x01') {
        soundId = 0x4d;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x4e;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x4f;
      }
      break;
    case 7:
      if (DAT_0080874e == '\x01') {
        soundId = 0x50;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0x51;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0x52;
      }
      break;
    case 8:
      uVar3 = 8;
      text = st::fn_006B0140(0x274a,g_hINSTANCE_00807618);
      st::fn_004014D8(g_popUp_008016D8,text,uVar3);
      if (DAT_0080874e == '\x01') {
        soundId = 0xba;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xbb;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        soundId = 0xbc;
      }
      break;
    default:
      goto switchD_006217ba_default;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    /* ST_CALLSITE[00621972]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    *puVar2 = 1;
    *(uint *)(puVar2 + 1) = g_playSystem_00802A38->field_00E4;
    this->field_0106 = g_playSystem_00802A38->field_00E4;
  }
switchD_006217ba_default:
  return;
}

