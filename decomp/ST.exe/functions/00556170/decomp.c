#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareAfterSave

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005564C0 -> 00556170 @ 00556566 */

void __thiscall TraksClassTy::PrepareAfterSave(TraksClassTy *this,ushort *param_1)

{
  TraksClassTy *pTVar2;
  int iVar3;
  TraksClassTy_field_0024DArray *pTVar4;
  char *text;
  ushort *puVar5;
  TraksClassTy_field_0024Element *element_0024;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  int local_10;
  TraksClassTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pTVar2 = local_c;
  if (iVar3 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c->field_001C = *(undefined4 *)(param_1 + 0xc);
    if ((char)param_1[0xe] == '\0') {
      pTVar4 = (TraksClassTy_field_0024DArray *)
               Library::DKW::TBL::DArrayCreate(nullptr,0x32,0x3c,0x32);
      pTVar2->field_0024 = pTVar4;
    }
    else {
      pTVar4 = (TraksClassTy_field_0024DArray *)FUN_006b0060(nullptr,(uint *)(param_1 + 0x2e));
      pTVar2->field_0024 = pTVar4;
      pTVar4->iteratorIndex = 0;
      while( true ) {
        pTVar4 = pTVar2->field_0024;
        uVar8 = pTVar4->iteratorIndex;
        if (uVar8 < pTVar4->count) {
          element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar4, uVar8);
          pTVar4->iteratorIndex = uVar8 + 1;
        }
        else {
          element_0024 = nullptr;
        }
        if (element_0024 == nullptr) break;
        piVar7 = PTR_00806764;
        if (*(int *)(&DAT_007c900c + element_0024->field_0000 * 0x18) != 1) {
          piVar7 = PTR_00806774;
        }
        puVar11 = nullptr;
        iVar10 = 0;
        iVar3 = 1;
        bVar9 = 0;
        uVar8 = 0xffffffff;
        text = thunk_FUN_00555840((int)element_0024->field_0000);
        puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                           (piVar7,CASE_1D,text,uVar8,bVar9,iVar3,iVar10,puVar11);
        element_0024->field_0036 = *puVar5;
        iVar3 = element_0024->field_0000 * 0x18;
        ST3DSMAPContext::sub_006E8660
                  (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)(&DAT_007c9000 + iVar3),
                   *(uint *)(&DAT_007c9004 + iVar3),*(uint *)(&DAT_007c8ff8 + iVar3),
                   *(uint *)(&DAT_007c8ffc + iVar3),0);
        element_0024->spriteHandle = local_8;
        ST3DSMAPContext::sub_006E98E0
                  (g_sT3DSMAPContext_00807598,local_8,0,(int)element_0024->field_0036,
                   STField<int>(puVar5,0x21),1);
        ST3DSMAPContext::sub_006EA270
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,0,(int)element_0024->field_0022);
        iVar3 = element_0024->field_0016;
        if (-1 < iVar3) {
          if (element_0024->field_001A == -1) {
            Library::Ourlib::ST3DSMAP::SprSetLevAfter
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar3);
          }
          else if (element_0024->field_001A == 1) {
            Library::Ourlib::ST3DSMAP::SprSetLevBefore
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar3);
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
        element_0024->field_0024 = pTVar2->field_0020;
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x11b,0,iVar3,"%s",
                              "TraksClassTy::PrepareAfterSave error");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\traks.cpp",0x11c);
  return;
}

