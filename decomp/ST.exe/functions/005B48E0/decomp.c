#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::AnimationMainMenu */

void __thiscall MainMenuTy::AnimationMainMenu(MainMenuTy *this)

{
  int *piVar1;
  AnonPointee_MainMenuTy_1AA7 *pAVar2;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  BITMAPINFO *pBVar7;
  int iVar8;
  MainMenuTy *pMVar9;
  AnonPointee_MainMenuTy_1AA7 **ppAVar10;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  MainMenuTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar9 = local_8;
  if (iVar5 == 0) {
    if (local_8->field_1ACF != 0) {
      ppAVar10 = &local_8->field_1AA7;
      iVar5 = 10;
      do {
        pAVar2 = *ppAVar10;
        if (pAVar2 != (AnonPointee_MainMenuTy_1AA7 *)0x0) {
          FUN_006b5f80((int *)PTR_008075a8,pAVar2->field_0000,pAVar2->field_0004,pAVar2->field_0008,
                       pAVar2->field_000C);
          Library::DKW::FLC::FUN_006c4ac0((int *)*ppAVar10);
        }
        ppAVar10 = ppAVar10 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    pMVar9->field_1ACF = (uint)(pMVar9->field_1ACF == 0);
    local_10 = 0;
    local_c = 0x244;
    do {
      pAVar3 = *(AnonShape_GLOBAL_0081175C_57F682DD **)((int)&PTR_0081176c->vtable + local_c);
      if (pAVar3 != (AnonShape_GLOBAL_0081175C_57F682DD *)0x0) {
        piVar1 = (int *)((int)&PTR_0081176c->field_025C + local_10);
        if ((&PTR_0081176c->field_0x270)[local_10] == '\0') {
          uVar6 = piVar1[2];
        }
        else {
          uVar6 = piVar1[3];
        }
        if (uVar6 <= pMVar9->field_0061 - piVar1[4]) {
          pBVar7 = (BITMAPINFO *)FUN_0070b3a0(pAVar3,(int)(short)pAVar3->field_0029);
          FUN_006b5f80((int *)PTR_008075a8,*piVar1,piVar1[1],(int)*(short *)(pAVar3 + 1),
                       (int)*(short *)&pAVar3[1].field_0x2);
          PutDDX(*piVar1,piVar1[1],'\x01',pBVar7);
          if ((char)piVar1[5] != '\0') {
            *(undefined1 *)(piVar1 + 5) = 0;
          }
          piVar1[4] = local_8->field_0061;
          switch(*(undefined2 *)((int)piVar1 + 0x15)) {
          case 0:
            pAVar3->field_0029 = pAVar3->field_0029 + 1;
            if (pAVar3->field_0023 <= (short)pAVar3->field_0029) {
              pAVar3->field_0029 = 0;
              *(undefined1 *)(piVar1 + 5) = 1;
            }
            break;
          case 1:
            pAVar3->field_0029 = pAVar3->field_0029 + -1;
            if ((short)pAVar3->field_0029 < 0) {
              pAVar3->field_0029 = pAVar3->field_0023 + -1;
              *(undefined1 *)(piVar1 + 5) = 1;
            }
            break;
          case 2:
            pAVar3->field_0029 = pAVar3->field_0029 + 1;
            if (pAVar3->field_0023 <= (short)pAVar3->field_0029) {
              pAVar3->field_0029 = pAVar3->field_0023 + -1;
              *(undefined1 *)(piVar1 + 5) = 1;
              *(undefined2 *)((int)piVar1 + 0x15) = 3;
            }
            break;
          case 3:
            pAVar3->field_0029 = pAVar3->field_0029 + -1;
            if ((short)pAVar3->field_0029 < 0) {
              pAVar3->field_0029 = 0;
              *(undefined1 *)(piVar1 + 5) = 1;
              *(undefined2 *)((int)piVar1 + 0x15) = 2;
            }
          }
        }
      }
      local_c = local_c + 4;
      local_10 = local_10 + 0x17;
      pMVar9 = local_8;
    } while (local_c < 0x25c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x1ba,0,iVar5,"%s",
                             "MainMenuTy::AnimationMainMenu");
  if (iVar8 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\main_obj.cpp",0x1ba);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

