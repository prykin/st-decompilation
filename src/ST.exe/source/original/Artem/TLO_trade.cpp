#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_trade.cpp

// 004EC050 FUN_004ec050
#line 4 "decomp/ST.exe/functions/004EC050/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004EC050(int param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int exceptionCode;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x5ff) == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar1 == nullptr) {
      this = nullptr;
    }
    else {
      this = (STT3DSprC *)st::fn_00401316(pAVar1);
    }
    *(STT3DSprC **)(param_1 + 0x5ff) = this;
    exceptionCode = st::fn_0040537B(this,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,
                 st::mutable_c_string("E:\\__titans\\Artem\\TLO_trade.cpp"),0x11b);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00402A90(*(STT3DSprC **)(param_1 + 0x5ff));
  }
  return 0;
}

// 004EC0F0 FUN_004ec0f0
#line 4 "decomp/ST.exe/functions/004EC0F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004EC0F0(AnonShape_004EC0F0_C371FA68 *param_1)

{
  int iVar1;
  int uVar2;
  uint uVar3;

  iVar1 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,
                     *(char **)(&DAT_007cde6c + param_1->field_050C * 4),CASE_1D);
  if (iVar1 != 0) {
    st::fn_006A5E40
              (iVar1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_trade.cpp"),0x126);
  }
  uVar3 = 10;
  iVar1 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
  uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340(param_1->field_0211,uVar2,iVar1,uVar3);
  st::fn_004045D9
            ((STT3DSprC *)param_1->field_05FF,
             (float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0504 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  iVar1 = st::fn_0040581C();
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    uVar3 = DAT_0079aa90;
    break;
  case 1:
    uVar3 = DAT_0079aa94;
    break;
  case 2:
    uVar3 = DAT_0079aa98;
    break;
  case 3:
    uVar3 = DAT_0079aa9c;
  }
  st::fn_00402982((void *)param_1->field_05FF,1);
  st::fn_00401EBA((void *)param_1->field_05FF,0xe,uVar3,uVar3,'\0');
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',uVar3);
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  return 0;
}

