#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  MMsgTy *this_00;
  SettMapTy *pSVar2;
  int iVar3;
  void *pvVar3;
  int iVar5;
  DArrayTy *pDVar4;
  int iVar6;
  uint uVar7;
  void **slotStorage;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005C496B]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (pSVar2->field_1F3F != nullptr) {
      cMf32::delete(pSVar2->field_1F3F);
    }
    pSVar2->field_1F3F = nullptr;
    if (pSVar2->field_1F43 != nullptr) {
      cMf32::delete(pSVar2->field_1F43);
    }
    pSVar2->field_1F43 = nullptr;
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    iVar6 = pSVar2->field_004D;
    if (((iVar6 != 0x611f) && (iVar6 != 0x6109)) && (iVar6 != 0x6105)) {
      /* ST_CALLSITE[005C49F6]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,10,2);
    }
    if (pSVar2->field_21EC != nullptr) {
      /* ST_CALLSITE[005C4A08]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pSVar2->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21EC);
      pSVar2->field_21EC = nullptr;
    }
    if (pSVar2->field_21E2 != '\0') {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0540) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (pSVar2->field_21F4 != nullptr) {
      /* ST_CALLSITE[005C4AAD]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pSVar2->field_21F4);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F4);
      pSVar2->field_21F4 = nullptr;
    }
    if (pSVar2->field_21E8 != nullptr) {
      /* ST_CALLSITE[005C4AD1]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pSVar2->field_21E8);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21E8);
      pSVar2->field_21E8 = nullptr;
    }
    if (pSVar2->field_21F0 != nullptr) {
      /* ST_CALLSITE[005C4AF5]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pSVar2->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F0);
      pSVar2->field_21F0 = nullptr;
    }
    if (pSVar2->field_21F8 != nullptr) {
      /* ST_CALLSITE[005C4B19]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pSVar2->field_21F8);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F8);
      pSVar2->field_21F8 = nullptr;
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pSVar2->field_1E2B != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&pSVar2->field_1E2B);
    }
    if (pSVar2->field_1C67 != 0) {
      FreeAndNull(&pSVar2->field_1C67);
    }
    PTR_0081175c = nullptr;
    if (pSVar2->field_1F7C != nullptr) {
      DArrayDestroy(pSVar2->field_1F7C);
    }
    pDVar4 = pSVar2->field_1F84;
    pSVar2->field_1F7C = nullptr;
    if (pDVar4 != nullptr) {
      uVar7 = 0;
      if (0 < (int)pDVar4->count) {
        bVar8 = pDVar4->count != 0;
        do {
          if (bVar8) {
            pvVar3 = DArrayAt<void>(pDVar4, uVar7);
          }
          else {
            pvVar3 = nullptr;
          }
          if ((pvVar3 != nullptr) && (STField<DArrayTy *>(pvVar3,0x50) != nullptr)) {
            DArrayDestroy(STField<DArrayTy *>(pvVar3,0x50));
          }
          pDVar4 = pSVar2->field_1F84;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < pDVar4->count;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
      DArrayDestroy(pSVar2->field_1F84);
      pSVar2->field_1F84 = nullptr;
    }
    if (pSVar2->field_1E2F != nullptr) {
      DArrayDestroy(pSVar2->field_1E2F);
    }
    pSVar2->field_1E2F = nullptr;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1c6b);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1cfc);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1d8d);
    slotStorage = pSVar2->field_20F4;
    iVar6 = 10;
    do {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,(uint)slotStorage[-10]);
      if (*slotStorage != nullptr) {
        FreeAndNull(slotStorage);
      }
      slotStorage = slotStorage + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pSVar2->field_1E1E != 0) {
      FreeAndNull(&pSVar2->field_1E1E);
    }
    FUN_006b3bb0((int *)g_ddxContext_008075A8,pSVar2->field_1E22);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((pSVar2->field_21E7 != '\0') &&
       (this_00 = *(MMsgTy **)(pSVar2->array_00BC[0xc].field_01DB + 0x2e6), this_00 != nullptr
       )) {
      /* ST_CALLSITE[005C4C99]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pSVar2->array_00BC[0xc].field_01DB + 0x2e6) + 0x1cab) = 0;
    }
    if (pSVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x1ce,0,iVar3,"%s",
                             "SettMapTy::DoneSettMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sett_obj.cpp",0x1ce);
  return;
}

