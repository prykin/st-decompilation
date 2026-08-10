#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_tls.cpp

// 004EAA20 TLOBaseTy::sub_004EAA20
#line 4 "decomp/ST.exe/functions/004EAA20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_tls.cpp
   Diagnostic line evidence: 86 | 99 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall st::fn_004EAA20(AnonShape_004D9C80_80F657D3 *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int iVar3;
  int iVar2;
  int uVar3;
  uint uVar4;
  CHAR local_108 [256];
  int local_8;

  if (param_1->field_05FF == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar1 == nullptr) {
      this = nullptr;
    }
    else {
      this = (STT3DSprC *)st::fn_00401316(pAVar1);
    }
    param_1->field_05FF = st::machine_word_boundary_cast<undefined4>(this);
    iVar3 = st::fn_0040537B(this,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tls.cpp"),0x56);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    if (*(int *)&param_1->field_0x4d0 == 3) {
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    if (*(int *)&param_1->field_0x4d0 == 1) {
      param_1->field_0261 = 1;
    }
    break;
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    *(undefined4 *)&param_1->field_0x4d0 = 3;
    param_1->field_0261 = 0;
    param_1->field_0265 = st::machine_word_boundary_cast<uint>(param_1->field_0265 & 0xfffffffd);
    param_1->field_026D = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x279);
  }
  if ((*(int *)&param_1->field_0x4d0 != 1) && (*(int *)&param_1->field_0x4d0 != 3)) {
    st::fn_00403D0F((STT3DSprC *)param_1->field_05FF);
    return 0;
  }
  st::external_00000080(local_108,st::mutable_c_string("%s"),"trmmine");
  iVar3 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,local_108,CASE_1D);
  if (iVar3 != 0) {
    st::fn_006A5E40
              (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_tls.cpp"),99);
  }
  uVar4 = 10;
  iVar2 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
  uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340(param_1->field_0211,uVar3,iVar2,uVar4);
  st::fn_00401EBA((void *)param_1->field_05FF,0xe,0x28,
                     (-(uint)(*(int *)&param_1->field_0x4d0 != 3) & 0xffffffed) + 0x3b,'\0');
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',0x28);
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  *(undefined4 *)&param_1->field_0x4d4 = 0;
  uVar4 = g_playSystem_00802A38->field_00E4;
  *(undefined4 *)&param_1->field_0x4dc = 1;
  *(uint *)&param_1->field_0x4d8 = uVar4;
  iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
  local_8 = *(int *)(&DAT_0079aa18 + iVar3) + (int)param_1->field_0041;
  st::fn_004045D9
            ((STT3DSprC *)param_1->field_05FF,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa1c + iVar3) + (int)param_1->field_0043) * _DAT_007904f8 *
             _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa20 + iVar3) + (int)param_1->field_0045) * _DAT_007904f8 *
             _DAT_007904f0 + _DAT_007904fc);
  st::fn_00402982((void *)param_1->field_05FF,1);
  if (*(int *)&param_1->field_0x4d0 == 3) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x279);
  }
  return 0;
}

