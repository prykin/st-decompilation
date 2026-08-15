#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_htech.cpp

// 004D9C80 FUN_004d9c80
#line 4 "decomp/ST.exe/functions/004D9C80/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_htech.cpp
   Diagnostic line evidence: 62 | 87 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D9C80(AnonShape_004D9C80_80F657D3 *param_1)

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
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_htech.cpp"),0x3e);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    param_1->field_0261 = 0;
    iVar3 = *(int *)&param_1->field_0x4d0;
    if (iVar3 == 4) {
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    }
    if (iVar3 != 5) {
      if (iVar3 == 1) {
        param_1->field_0261 = 1;
      }
      break;
    }
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    iVar3 = *(int *)&param_1->field_0x4d0;
    if (iVar3 == 1) {
      *(undefined4 *)&param_1->field_0x4d0 = 3;
    }
    else if (iVar3 == 3) {
      *(undefined4 *)&param_1->field_0x4d0 = 4;
    }
    else if (iVar3 == 5) {
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    param_1->field_0261 = 0;
    param_1->field_0265 = st::machine_word_boundary_cast<uint>(param_1->field_0265 & 0xfffffffd);
    param_1->field_026D = 0;
  }
  if (*(int *)&param_1->field_0x4d0 == 4) {
    st::external_00000080(local_108,st::mutable_c_string("%s"),"lasbom");
    iVar3 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,local_108,CASE_1D);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_htech.cpp"),0x57);
    }
    st::fn_00402A90((STT3DSprC *)param_1->field_05FF);
    uVar4 = 10;
    iVar2 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
    uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
    st::fn_006EA340(param_1->field_0211,uVar3,iVar2,uVar4);
    st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    uVar4 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
    *(uint *)&param_1->field_0x4d8 = uVar4;
    local_8 = *(int *)(&DAT_00798eb8 + iVar3) + (int)param_1->field_0041;
    st::fn_004045D9
              ((STT3DSprC *)param_1->field_05FF,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(*(int *)(&DAT_00798ebc + iVar3) + (int)param_1->field_0043) * _DAT_007904f8 *
               _DAT_007904f0,
               (float)(*(int *)(&DAT_00798ec0 + iVar3) + (int)param_1->field_0045) * _DAT_007904f8 *
               _DAT_007904f0 + _DAT_007904fc);
    st::fn_00402982((void *)param_1->field_05FF,1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x347);
    return 0;
  }
  st::fn_00403D0F((STT3DSprC *)param_1->field_05FF);
  return 0;
}

// 004DA230 FUN_004da230
#line 4 "decomp/ST.exe/functions/004DA230/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_htech.cpp
   Diagnostic line evidence: 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004DA230(int param_1)

{
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 0:
  case 1:
  case 4:
    uVar3 = 1;
    break;
  case 2:
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_htech.cpp"),0x8d,0,0,st::mutable_c_string("%s"),
                               "Please Fill this case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return uVar3;
}

// 004DA2B0 FUN_004da2b0
#line 4 "decomp/ST.exe/functions/004DA2B0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_htech.cpp
   Diagnostic line evidence: 153 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004DA2B0(int param_1)

{
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 2:
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_htech.cpp"),0x99,0,0,st::mutable_c_string("%s"),
                               "Please Fill thid case !");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 4:
    if (*(int *)(param_1 + 0x4d4) < DAT_00798eb0) {
      return 0;
    }
  case 0:
  case 1:
    uVar3 = 1;
  }
  return uVar3;
}

