#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::AnimationMainMenu */

void __thiscall MainMenuTy::AnimationMainMenu(MainMenuTy *this)

{
  int *piVar1;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar2;
  int iVar4;
  uint uVar4;
  BITMAPINFO *pBVar5;
  int iVar8;
  MainMenuTy *pMVar6;
  uint *puVar7;
  int iVar9;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  MainMenuTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar6 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1ACF != 0) {
      puVar7 = local_8->field_1AA7;
      iVar9 = 10;
      do {
        piVar1 = (int *)*puVar7;
        if (piVar1 != nullptr) {
          FUN_006b5f80((int *)g_ddxContext_008075A8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
          Library::DKW::FLC::FUN_006c4ac0((int *)*puVar7);
        }
        puVar7 = puVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    pMVar6->field_1ACF = (uint)(pMVar6->field_1ACF == 0);
    local_10 = 0;
    local_c = 0x244;
    do {
      pAVar2 = *(AnonShape_GLOBAL_0081175C_57F682DD **)
                ((int)&g_startSystem_0081176C->vtable + local_c);
      if (pAVar2 != nullptr) {
        piVar1 = (int *)((int)g_startSystem_0081176C->array_0244 + local_10 + 0x18);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)g_startSystem_0081176C->array_0244 + local_10 + 0x2c) == '\0') {
          uVar4 = piVar1[2];
        }
        else {
          uVar4 = piVar1[3];
        }
        if (uVar4 <= pMVar6->field_0061 - piVar1[4]) {
          pBVar5 = FUN_0070b3a0(pAVar2,(int)(short)pAVar2->field_0029);
          FUN_006b5f80((int *)g_ddxContext_008075A8,*piVar1,piVar1[1],(int)*(short *)(pAVar2 + 1),
                       (int)*(short *)&pAVar2[1].field_0x2);
          /* ST_CALLSITE[005B49F2]: CALL 0x00403738; direct=00403738 PutDDX */
          PutDDX(*piVar1,piVar1[1],'\x01',pBVar5);
          if ((char)piVar1[5] != '\0') {
            ((undefined1 *)piVar1)[5] = 0;
          }
          piVar1[4] = local_8->field_0061;
          switch(STField<undefined2>(piVar1,0x15)) {
          case 0:
            pAVar2->field_0029 = pAVar2->field_0029 + 1;
            if (pAVar2->field_0023 <= (short)pAVar2->field_0029) {
              pAVar2->field_0029 = 0;
              ((undefined1 *)piVar1)[5] = 1;
            }
            break;
          case 1:
            pAVar2->field_0029 = pAVar2->field_0029 + -1;
            if ((short)pAVar2->field_0029 < 0) {
              pAVar2->field_0029 = pAVar2->field_0023 + -1;
              ((undefined1 *)piVar1)[5] = 1;
            }
            break;
          case 2:
            pAVar2->field_0029 = pAVar2->field_0029 + 1;
            if (pAVar2->field_0023 <= (short)pAVar2->field_0029) {
              pAVar2->field_0029 = pAVar2->field_0023 + -1;
              ((undefined1 *)piVar1)[5] = 1;
              STField<undefined2>(piVar1,0x15) = 3;
            }
            break;
          case 3:
            pAVar2->field_0029 = pAVar2->field_0029 + -1;
            if ((short)pAVar2->field_0029 < 0) {
              pAVar2->field_0029 = 0;
              ((undefined1 *)piVar1)[5] = 1;
              STField<undefined2>(piVar1,0x15) = 2;
            }
          }
        }
      }
      local_c = local_c + 4;
      local_10 = local_10 + 0x17;
      pMVar6 = local_8;
    } while (local_c < 0x25c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x1ba,0,iVar4,"%s",
                             "MainMenuTy::AnimationMainMenu");
  if (iVar8 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\main_obj.cpp",0x1ba);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

