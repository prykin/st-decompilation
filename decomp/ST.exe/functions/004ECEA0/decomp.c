#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 63 | 88 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ecea0(RecoveredRecordView_004D9C80_63C53606 *param_1)

{
  STT3DSprC *pSVar1;
  int iVar3;
  STT3DSprC *iVar2;
  int uVar3;
  uint uVar4;

  if (param_1->field_05FF == 0) {
    /* ST_CALLSITE[004ECEB4]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004ECEC2]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
    }
    param_1->field_05FF = pSVar1;
    /* ST_CALLSITE[004ECEEB]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar3 = STT3DSprC::Init(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_vqb.cpp",0x3f);
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
    switch(*(undefined4 *)&param_1->field_0x4d0) {
    case 1:
      *(undefined4 *)&param_1->field_0x4d0 = 3;
      break;
    case 3:
      *(undefined4 *)&param_1->field_0x4d0 = 4;
      break;
    case 4:
      *(undefined4 *)&param_1->field_0x4d0 = 5;
      break;
    case 5:
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    param_1->field_0261 = 0;
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
  }
  if (*(int *)&param_1->field_0x4d0 == 4) {
    /* ST_CALLSITE[004ECFCC]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_05FF,0xe,PTR_00806774,"vacmine",CASE_1D);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_vqb.cpp",0x58);
    }
    thunk_FUN_004ad5e0((STT3DSprC *)param_1->field_05FF);
    uVar4 = 10;
    /* ST_CALLSITE[004ECFFC]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__fastcall;pointer:/STT3DSprC;pointer:/STT3DSprC */
    iVar2 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);

    uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_05FF);
    FUN_006ea340(param_1->field_0211,uVar3,(int)iVar2,uVar4);

    thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,0,0,'\0');
    /* ST_CALLSITE[004ED032]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',0);
    /* ST_CALLSITE[004ED04C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined4 *)&param_1->field_0x4d4 = 0;
    uVar4 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&param_1->field_0x4dc = 1;
    iVar3 = *(int *)&param_1->field_0x4d0 * 0x18;
    *(uint *)&param_1->field_0x4d8 = uVar4;
    /* ST_CALLSITE[004ED0F1]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)param_1->field_05FF,
               (float)(*(int *)(&DAT_0079aac0 + iVar3) + (int)param_1->field_0041) * _DAT_007904f8 *
               _DAT_007904f0,
               (float)(*(int *)(&DAT_0079aac4 + iVar3) + (int)param_1->field_0043) * _DAT_007904f8 *
               _DAT_007904f0,
               (float)(*(int *)(&DAT_0079aac8 + iVar3) + (int)param_1->field_0045) * _DAT_007904f8 *
               _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad460((void *)param_1->field_05FF,1);
    /* ST_CALLSITE[004ED10E]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0x90, 3, 0x42a);
    return 0;
  }
  /* ST_CALLSITE[004ED122]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
  STT3DSprC::sub_004AD430((STT3DSprC *)param_1->field_05FF);
  return 0;
}

