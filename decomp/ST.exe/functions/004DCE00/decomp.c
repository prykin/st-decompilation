#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_jump.cpp
   Diagnostic line evidence: 88 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004dce00(int *param_1)

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
    pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar2 == nullptr) {
      this = nullptr;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(pAVar2);
    }
    STField<STT3DSprC *>(param_1,0x5ff) = this;
    iVar3 = STT3DSprC::Init(this,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      RaiseInternalException
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
    wsprintfA(local_108,"%s","jmpmine");
    iVar3 = STT3DSprC::LoadSequence
                      (STField<STT3DSprC *>(param_1,0x5ff),0xe,PTR_00806774,local_108,CASE_1D);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_jump.cpp",0x61);
    }
    thunk_FUN_004ad5e0(STField<STT3DSprC *>(param_1,0x5ff));
    uVar5 = 10;
    iVar3 = thunk_FUN_004ad650((STT3DSprC *)((int)param_1 + 0x1d5));
    uVar4 = thunk_FUN_004ad650(STField<STT3DSprC *>(param_1,0x5ff));
    FUN_006ea340(STField<void *>(param_1,0x211),uVar4,iVar3,uVar5);
    STT3DSprC::StartShow
              (STField<STT3DSprC *>(param_1,0x5ff),0xe,g_playSystem_00802A38->field_00E4);
    param_1[0x135] = 0;
    fVar1 = (float)(int)STField<short>(param_1,0x45) * _DAT_007904f8;
    uVar5 = g_playSystem_00802A38->field_00E4;
    param_1[0x137] = 1;
    fVar1 = fVar1 * _DAT_007904f0;
    param_1[0x136] = uVar5;
    local_8 = (int)STField<short>(param_1,0x41);
    STT3DSprC::sub_004AD3C0
              (STField<STT3DSprC *>(param_1,0x5ff),(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(param_1,0x43) * _DAT_007904f8 * _DAT_007904f0,
               fVar1 + _DAT_007904fc);
    thunk_FUN_004ad460(STField<void *>(param_1,0x5ff),1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x90))(3,0x3f4);
    return 0;
  }
  thunk_FUN_004ad430(STField<STT3DSprC *>(param_1,0x5ff));
  return 0;
}

