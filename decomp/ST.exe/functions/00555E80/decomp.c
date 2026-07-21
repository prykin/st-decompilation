#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksExec */

void __thiscall TraksClassTy::TraksExec(TraksClassTy *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  TraksClassTy *this_00;
  int iVar4;
  void *pvVar5;
  int iVar6;
  AnonShape_00555910_7455F960 *pAVar7;
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
      pAVar7 = (AnonShape_00555910_7455F960 *)0x0;
    }
    else {
      pAVar7 = local_8->field_0024->data;
    }
    uVar8 = 0;
    if (0 < (int)dVar1) {
      do {
        if (-1 < (int)pAVar7->field_0032) {
          if (pAVar7->field_0038 == 0) {
            DrawTrakSprite(this_00,pAVar7);
          }
          else {
            FUN_006e8ba0(PTR_00807598,pAVar7->field_0032);
            pAVar7->field_0032 = 0xffffffff;
            pDVar2 = this_00->field_0024;
            if (uVar8 < pDVar2->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar8) (runtime stride) */
              pvVar5 = (void *)(pDVar2->elementSize * uVar8 + (int)pDVar2->data);
            }
            else {
              pvVar5 = (void *)0x0;
            }
            *(undefined4 *)((int)pvVar5 + 0x32) = 0xffffffff;
            iVar4 = this_00->field_0828;
            if (iVar4 < 0x3ff) {
              this_00->field_0828 = iVar4 + 1;
              *(short *)(&this_00->field_0x2a + iVar4 * 2) = (short)uVar8;
            }
          }
        }
        pAVar7 = pAVar7 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)this_00->field_0024->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,200,0,iVar4,&DAT_007a4ccc,
                             s_TraksClassTy__TraksExec_error_007c9184);
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_grig_traks_cpp_007c9104,0xc9);
  return;
}

