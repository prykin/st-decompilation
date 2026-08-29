#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_jump.cpp
   Diagnostic line evidence: 88 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004dce00(RecoveredRecordView_004DCE00_6036DD04 *param_1)

{
  float fVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  int uVar4;
  uint uVar5;
  CHAR local_108 [256];
  int local_8;

  if (param_1->field_05FF == nullptr) {
    /* ST_CALLSITE[004DCE18]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar2 = Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar2 == nullptr) {
      pSVar2 = nullptr;
    }
    else {
      /* ST_CALLSITE[004DCE26]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar2 = STT3DSprC::STT3DSprC(pSVar2);
    }
    param_1->field_05FF = pSVar2;
    /* ST_CALLSITE[004DCE50]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar3 = STT3DSprC::Init(pSVar2,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_jump.cpp",0x58);
    }
  }
  if (param_1->field_0245 == 5) {
    *(undefined4 *)&param_1->field_0x4d0 = 1;
  }
  else {
    *(undefined4 *)&param_1->field_0x4d0 = 0;
  }
  if (*(int *)&param_1->field_0x4d0 == 1) {
    /* ST_CALLSITE[004DCEAA]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_108,"%s","jmpmine");
    /* ST_CALLSITE[004DCECB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar3 = STT3DSprC::LoadSequence(param_1->field_05FF,0xe,PTR_00806774,local_108,CASE_1D);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_jump.cpp",0x61);
    }
    thunk_FUN_004ad5e0(param_1->field_05FF);
    uVar5 = 10;
    /* ST_CALLSITE[004DCEFB]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__fastcall;pointer:/STT3DSprC;pointer:/STT3DSprC */
    pSVar2 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);

    uVar4 = thunk_FUN_004ad650(param_1->field_05FF);
    FUN_006ea340(param_1->field_0211,uVar4,(int)pSVar2,uVar5);
    /* ST_CALLSITE[004DCF2D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    fVar1 = (float)(int)param_1->field_0045 * _DAT_007904f8;
    uVar5 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    fVar1 = fVar1 * _DAT_007904f0;
    *(uint *)&param_1->field_0x4d8 = uVar5;
    local_8 = (int)param_1->field_0041;
    /* ST_CALLSITE[004DCFB2]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (param_1->field_05FF,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)param_1->field_0043 * _DAT_007904f8 * _DAT_007904f0,fVar1 + _DAT_007904fc
              );
    thunk_FUN_004ad460(param_1->field_05FF,1);
    /* ST_CALLSITE[004DCFCF]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0x90, 3, 0x3f4);
    return 0;
  }
  /* ST_CALLSITE[004DCFE2]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
  STT3DSprC::sub_004AD430(param_1->field_05FF);
  return 0;
}

