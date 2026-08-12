#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DoneChooseMap */

void __thiscall ChooseMapTy::DoneChooseMap(ChooseMapTy *this)

{
  char cVar1;
  MMsgTy *this_00;
  ChooseMapTy *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (((pCVar3->field_004D != 0x6121) && (g_int_00811764 != nullptr)) && (DAT_0080877e != '\0')
       ) {
      FUN_00715360(g_int_00811764,0,'\x10',nullptr,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if (pCVar3->field_1C8F != (HANDLE)0x0) {
      FindCloseChangeNotification(pCVar3->field_1C8F);
      pCVar3->field_1C8F = (HANDLE)0x0;
    }
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    iVar6 = pCVar3->field_004D;
    if (((iVar6 != 0x6120) && (iVar6 != 0x6121)) && (iVar6 != 0x6105)) {
      DarkScreen(g_dDXContext_0080759C,10,2);
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pCVar3->field_20B8 != nullptr) {
      HoloTy::Done(pCVar3->field_20B8);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20B8);
      pCVar3->field_20B8 = nullptr;
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->array_00BC[0xc].field_01F0);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B01);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B92);
    puVar7 = &pCVar3->field_1C23;
    iVar6 = 0x16;
    do {
      if (*puVar7 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,*puVar7);
        *puVar7 = 0xffffffff;
      }
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pCVar3->field_1C87 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,pCVar3->field_1C87);
    }
    pCVar3->field_1C87 = 0xffffffff;
    if (pCVar3->field_20BC != nullptr) {
      HoloTy::Done(pCVar3->field_20BC);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20BC);
      pCVar3->field_20BC = nullptr;
    }
    if (pCVar3->field_20B4 != '\0') {
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
    if (pCVar3->field_20C0 != nullptr) {
      HoloTy::Done(pCVar3->field_20C0);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20C0);
      pCVar3->field_20C0 = nullptr;
    }
    if ((pCVar3->field_20B7 != '\0') &&
       (((cVar1 = pCVar3->array_00BC[0xc].field_01DF, cVar1 == '\f' || (cVar1 == '\x04')) ||
        ((cVar1 == '\x05' || (cVar1 == '\x13')))))) {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0558) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0554) {
        FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
    }
    if (pCVar3->field_1C7B != nullptr) {
      FreeAndNull(&pCVar3->field_1C7B);
    }
    pCVar3->field_1C7F = nullptr;
    if (pCVar3->field_1C8B != nullptr) {
      FreeAndNull(&pCVar3->field_1C8B);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((pCVar3->field_20B6 != '\0') &&
       (this_00 = *(MMsgTy **)(pCVar3->array_00BC[0xc].field_01DB + 0x2e6), this_00 != nullptr
       )) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pCVar3->array_00BC[0xc].field_01DB + 0x2e6) + 0x1cab) = 0;
    }
    if (pCVar3->field_1C97 != nullptr) {
      FUN_006b5570(pCVar3->field_1C97);
      pCVar3->field_1C97 = nullptr;
    }
    if (pCVar3->field_1C9B != nullptr) {
      DArrayDestroy(pCVar3->field_1C9B);
      pCVar3->field_1C9B = nullptr;
    }
    if (pCVar3->field_1C9F != nullptr) {
      FUN_006b5570(pCVar3->field_1C9F);
      pCVar3->field_1C9F = nullptr;
    }
    if (pCVar3->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar3->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x191,0,iVar4,"%s",
                             "ChooseMapTy::DoneChooseMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\load_obj.cpp",0x191);
  return;
}

