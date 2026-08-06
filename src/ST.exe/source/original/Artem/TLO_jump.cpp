#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_jump.cpp

// 004DCE00 FUN_004dce00
#line 4 "decomp/ST.exe/functions/004DCE00/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_jump.cpp
   Diagnostic line evidence: 88 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004DCE00(int *param_1)

{
  float fVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  STT3DSprC *this;
  int iVar3;
  int uVar4;
  uint uVar5;
  CHAR local_108 [256];
  int local_8;

  if (STField<int>(param_1,0x5ff) == 0) {
    pAVar2 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar2 == nullptr) {
      this = nullptr;
    }
    else {
      this = (STT3DSprC *)st::fn_00401316(pAVar2);
    }
    STField<STT3DSprC *>(param_1,0x5ff) = this;
    iVar3 = st::fn_0040537B(this,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_jump.cpp",0x58);
    }
  }
  if (STField<int>(param_1,0x245) == 5) {
    param_1[0x134] = 1;
  }
  else {
    param_1[0x134] = 0;
  }
  if (param_1[0x134] == 1) {
    st::external_00000080(local_108,"%s","jmpmine");
    iVar3 = st::fn_00404183
                      (STField<STT3DSprC *>(param_1,0x5ff),0xe,PTR_00806774,local_108,0x1d);
    if (iVar3 != 0) {
      st::fn_006A5E40
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_jump.cpp",0x61);
    }
    st::fn_00402A90(STField<STT3DSprC *>(param_1,0x5ff));
    uVar5 = 10;
    iVar3 = st::fn_004052CC((STT3DSprC *)((int)param_1 + 0x1d5));
    uVar4 = st::fn_004052CC(STField<STT3DSprC *>(param_1,0x5ff));
    st::fn_006EA340(STField<void *>(param_1,0x211),uVar4,iVar3,uVar5);
    st::fn_00405240
              (STField<STT3DSprC *>(param_1,0x5ff),0xe,g_playSystem_00802A38->field_00E4);
    param_1[0x135] = 0;
    fVar1 = (float)(int)STField<short>(param_1,0x45) * _DAT_007904f8;
    uVar5 = g_playSystem_00802A38->field_00E4;
    param_1[0x137] = 1;
    fVar1 = fVar1 * _DAT_007904f0;
    param_1[0x136] = uVar5;
    local_8 = (int)STField<short>(param_1,0x41);
    st::fn_004045D9
              (STField<STT3DSprC *>(param_1,0x5ff),(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(param_1,0x43) * _DAT_007904f8 * _DAT_007904f0,
               fVar1 + _DAT_007904fc);
    st::fn_00402982(STField<void *>(param_1,0x5ff),1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x90))(3,0x3f4);
    return 0;
  }
  st::fn_00403D0F(STField<STT3DSprC *>(param_1,0x5ff));
  return 0;
}

