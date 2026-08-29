#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareAfterSave

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005564C0 -> 00556170 @ 00556566 */

void __thiscall TraksClassTy::PrepareAfterSave(TraksClassTy *this,ushort *param_1)

{
  TraksClassTy_field_0024DArray *pTVar1;
  TraksClassTy *pTVar3;
  int iVar3;
  DArrayTy *pTVar3_mg0;
  char *text;
  ushort *piVar4_mg1;
  DArrayTy *pTVar3_mg0_2;
  int iVar9;
  TraksClassTy_field_0024Element *element_0024;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar10;
  uint *puVar11;
  InternalExceptionFrame local_54;
  int local_10;
  TraksClassTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pTVar3 = local_c;
  if (iVar3 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c->field_001C = *(undefined4 *)(param_1 + 0xc);
    if ((char)param_1[0xe] == '\0') {
      /* ST_CALLSITE[005563A1]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
      pTVar3_mg0_2 = Library::DKW::TBL::DArrayCreate(nullptr,0x32,0x3c,0x32);
      pTVar3->field_0024 = (TraksClassTy_field_0024DArray *)pTVar3_mg0_2;
    }
    else {
      /* ST_CALLSITE[005561C8]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
      pTVar3_mg0 = FUN_006b0060(nullptr,(uint *)(param_1 + 0x2e));
      pTVar3->field_0024 = (TraksClassTy_field_0024DArray *)pTVar3_mg0;
      pTVar3_mg0->iteratorIndex = 0;
      while( true ) {
        pTVar1 = pTVar3->field_0024;
        uVar6 = pTVar1->iteratorIndex;
        if (uVar6 < pTVar1->count) {
          element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar6);
          pTVar1->iteratorIndex = uVar6 + 1;
        }
        else {
          element_0024 = nullptr;
        }
        if (element_0024 == nullptr) break;
        piVar5 = PTR_00806764;
        if (*(int *)(&DAT_007c900c + element_0024->field_0000 * 0x18) != 1) {
          piVar5 = PTR_00806774;
        }
        puVar11 = nullptr;
        iVar10 = 0;
        iVar8 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        text = thunk_FUN_00555840((int)element_0024->field_0000);
        piVar4_mg1 = Library::Ourlib::MFRLOAD::mfRLoad
                               (piVar5,CASE_1D,text,uVar6,bVar7,iVar8,iVar10,puVar11);
        element_0024->field_0036 = *piVar4_mg1;
        iVar8 = element_0024->field_0000 * 0x18;

        ST3DSMAPContext::sub_006E8660
                  (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)(&DAT_007c9000 + iVar8),
                   *(uint *)(&DAT_007c9004 + iVar8),*(uint *)(&DAT_007c8ff8 + iVar8),
                   *(uint *)(&DAT_007c8ffc + iVar8),0);
        element_0024->spriteHandle = local_8;

        ST3DSMAPContext::sub_006E98E0
                  (g_sT3DSMAPContext_00807598,local_8,0,(int)element_0024->field_0036,
                   STField<int>(piVar4_mg1,0x21),1);
        ST3DSMAPContext::sub_006EA270
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,0,(int)element_0024->field_0022);
        iVar8 = element_0024->field_0016;
        if (-1 < iVar8) {
          if (element_0024->field_001A == -1) {
            Library::Ourlib::ST3DSMAP::SprSetLevAfter
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar8);
          }
          else if (element_0024->field_001A == 1) {
            Library::Ourlib::ST3DSMAP::SprSetLevBefore
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar8);
          }
        }

        Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,1,
                   *(int *)(&DAT_007c9000 + element_0024->field_0000 * 0x18) / 2,
                   *(int *)(&DAT_007c9004 + element_0024->field_0000 * 0x18) / 2);
        local_10 = (int)element_0024->field_0002;
        Library::Ourlib::ST3DSMAP::SprMove
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,
                   (float)local_10 * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)element_0024->positionY * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)element_0024->positionZ * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

        Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,element_0024->spriteHandle,0);
        element_0024->field_0024 = pTVar3->field_0020;
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar9 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x11b,0,iVar3,"%s",
                             "TraksClassTy::PrepareAfterSave error");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\traks.cpp",0x11c);
  return;
}

