#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SoundManagerTy.cpp

// 00566900 SoundManagerTy::sub_00566900
#line 4 "decomp/ST.exe/functions/00566900/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00566900(SoundManagerTy *this)

{
  st::fn_00401CDA(&g_sound,CASE_B);
  if (this->field_0018 != nullptr) {
    st::fn_006F1170(this->field_0018);
  }
  this->field_0018 = nullptr;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0030 = 0;
  this->field_0034 = 0;
  this->field_0039 = -1;
  return;
}

// 00566970 SoundManagerTy::sub_00566970
#line 4 "decomp/ST.exe/functions/00566970/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0038 uses
   /SubmarineTitans/Recovered/Enums/SoundManagerTy_field_0038State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall st::fn_00566970(SoundManagerTy *this,int param_1,int param_2)

{
  LPSTR pCVar1;
  int iVar2;
  char *text;
  undefined4 *puVar3;

  if (((this->field_0018 != nullptr) && (iVar2 = this->field_0028, iVar2 != 0)) &&
     (-1 < param_1)) {
    switch(this->field_0038) {
    case CASE_0:
    case CASE_1:
      if (this->field_002C <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PEACE_0079b014;
      break;
    case CASE_2:
      if (this->field_0030 <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_PWAR_0079b018;
      break;
    case CASE_3:
      if (this->field_0034 <= param_1) {
        return;
      }
      iVar2 = param_1 + iVar2 * 100;
      text = PTR_s_GM_WAR_0079b01c;
      break;
    default:
      goto switchD_005669a6_default;
    }
    puVar3 = nullptr;
    pCVar1 = st::fn_006F2C00(text,3,iVar2);
    iVar2 = st::fn_004010E6(&g_sound,this->field_0018,pCVar1,param_2,puVar3);
    if (iVar2 == 0) {
      if (this->field_0039 == param_1) {
        this->field_0039 = param_1;
        this->field_003D = st::machine_word_boundary_cast<int>(this->field_003D + 1);
        return;
      }
      this->field_003D = 1;
      this->field_0039 = param_1;
    }
  }
switchD_005669a6_default:
  return;
}

// 00566AA0 SoundManagerTy::sub_00566AA0
#line 4 "decomp/ST.exe/functions/00566AA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0038 uses
   /SubmarineTitans/Recovered/Enums/SoundManagerTy_field_0038State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall st::fn_00566AA0(SoundManagerTy *this)

{
  uint uVar1;
  uint uVar2;

  if ((this->field_0018 != nullptr) && (this->field_0028 != 0)) {
    switch(this->field_0038) {
    case CASE_0:
    case CASE_1:
      uVar2 = this->field_002C;
      break;
    case CASE_2:
      uVar2 = this->field_0030;
      break;
    case CASE_3:
      uVar2 = this->field_0034;
      break;
    default:
      goto switchD_00566ac8_default;
    }
    if (0 < (int)uVar2) {
      if (this->field_0039 < 0) {
        st::fn_00401AC3(this,0,2000);
      }
      else {
        uVar1 = st::fn_00404840(0x807658);
        if (uVar1 == 0) {
          if (((int)uVar2 < 2) || ((this->field_0038 != CASE_1 && (this->field_0038 != CASE_3)))) {
            uVar1 = st::fn_0072E6C0();
            uVar1 = uVar1 % uVar2;
            if ((uVar1 == this->field_0039) && (1 < this->field_003D)) {
              uVar1 = st::machine_word_boundary_cast<uint>(this->field_0039 + 1);
            }
            if ((int)uVar2 <= (int)uVar1) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = st::fn_0072E6C0();
            uVar1 = uVar1 % (uVar2 - 1) + 1;
            if ((uVar1 == this->field_0039) && (1 < this->field_003D)) {
              uVar1 = st::machine_word_boundary_cast<uint>(this->field_0039 + 1);
            }
            if ((int)uVar2 <= (int)uVar1) {
              st::fn_00401AC3(this,1,0);
              return;
            }
          }
          st::fn_00401AC3(this,uVar1,0);
          return;
        }
      }
    }
  }
switchD_00566ac8_default:
  return;
}

// 00566BD0 SoundManagerTy::sub_00566BD0
#line 4 "decomp/ST.exe/functions/00566BD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00566BD0(SoundManagerTy *this,int param_1)

{
  uint uVar1;

  if ((param_1 != 0) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = st::fn_006EB310(g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x1ed));
    if (uVar1 != 0) {
      this->field_0024 = this->field_001C;
    }
  }
  return;
}

