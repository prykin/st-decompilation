#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  SettMapTy *pSVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  uint *value;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
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
    iVar3 = pSVar2->field_004D;
    if (((iVar3 != 0x611f) && (iVar3 != 0x6109)) && (iVar3 != 0x6105)) {
      DarkScreen(g_dDXContext_0080759C,10,2);
    }
    if (pSVar2->field_21EC != nullptr) {
      HoloTy::Done(pSVar2->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21EC);
      pSVar2->field_21EC = nullptr;
    }
    if (pSVar2->field_0x21e2 != '\0') {
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
      HoloTy::Done(pSVar2->field_21F4);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F4);
      pSVar2->field_21F4 = nullptr;
    }
    if (pSVar2->field_21E8 != nullptr) {
      HoloTy::Done(pSVar2->field_21E8);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21E8);
      pSVar2->field_21E8 = nullptr;
    }
    if (pSVar2->field_21F0 != nullptr) {
      HoloTy::Done(pSVar2->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F0);
      pSVar2->field_21F0 = nullptr;
    }
    if (pSVar2->field_21F8 != nullptr) {
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
      FreeAndNull((void **)&pSVar2->field_1C67);
    }
    PTR_0081175c = nullptr;
    if (pSVar2->field_1F7C != nullptr) {
      DArrayDestroy(pSVar2->field_1F7C);
    }
    pDVar6 = pSVar2->field_1F84;
    pSVar2->field_1F7C = nullptr;
    if (pDVar6 != nullptr) {
      uVar7 = 0;
      if (0 < (int)pDVar6->count) {
        bVar8 = pDVar6->count != 0;
        do {
          if (bVar8) {
            pvVar4 = DArrayAt<void>(pDVar6, uVar7);
          }
          else {
            pvVar4 = nullptr;
          }
          if ((pvVar4 != nullptr) && (STField<DArrayTy *>(pvVar4,0x50) != nullptr)) {
            DArrayDestroy(STField<DArrayTy *>(pvVar4,0x50));
          }
          pDVar6 = pSVar2->field_1F84;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < pDVar6->count;
        } while ((int)uVar7 < (int)pDVar6->count);
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
    value = pSVar2->field_20F4;
    iVar3 = 10;
    do {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,(uint)value[-10]);
      if ((void *)*value != nullptr) {
        FreeAndNull((void **)value);
      }
      value = value + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pSVar2->field_1E1E != 0) {
      FreeAndNull((void **)&pSVar2->field_1E1E);
    }
    FUN_006b3bb0((int *)g_ddxContext_008075A8,pSVar2->field_1E22);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((pSVar2->field_21E7 != '\0') && (*(MMsgTy **)(pSVar2->field_1A5B + 0x2e6) != nullptr))
    {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::HideSprites(*(MMsgTy **)(pSVar2->field_1A5B + 0x2e6));
      *(undefined4 *)(*(int *)(pSVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
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

