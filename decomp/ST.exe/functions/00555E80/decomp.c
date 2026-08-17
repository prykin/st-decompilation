#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksExec */

void __thiscall TraksClassTy::TraksExec(TraksClassTy *this)

{
  dword dVar1;
  TraksClassTy_field_0024DArray *pTVar2;
  TraksClassTy *this_00;
  int iVar4;
  TraksClassTy_field_0024Element *element_0024;
  int iVar6;
  RecoveredRecord_TraksClassTy_00555910 *pRVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  TraksClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    dVar1 = local_8->field_0024->count;
    if (dVar1 == 0) {
      pRVar7 = nullptr;
    }
    else {
      pRVar7 = (RecoveredRecord_TraksClassTy_00555910 *)local_8->field_0024->data;
    }
    uVar8 = 0;
    if (0 < (int)dVar1) {
      do {
        if (-1 < (int)pRVar7->field_0032) {
          if (pRVar7->field_0038 == 0) {
            /* ST_CALLSITE[00555F25]: CALL 0x00401127; direct=00401127 TraksClassTy::DrawTrakSprite */
            DrawTrakSprite(this_00,pRVar7);
          }
          else {
            Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,pRVar7->field_0032);
            pRVar7->field_0032 = 0xffffffff;
            pTVar2 = this_00->field_0024;
            if (uVar8 < pTVar2->count) {
              element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar2, uVar8);
            }
            else {
              element_0024 = nullptr;
            }
            element_0024->spriteHandle = 0xffffffff;
            iVar4 = this_00->field_0828;
            if (iVar4 < 0x3ff) {
              this_00->field_0828 = iVar4 + 1;
              *(short *)(&this_00->field_0x2a + iVar4 * 2) = (short)uVar8;
            }
          }
        }
        pRVar7 = pRVar7 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)this_00->field_0024->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",200,0,iVar4,"%s",
                             "TraksClassTy::TraksExec error");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\grig\\traks.cpp",0xc9);
  return;
}

