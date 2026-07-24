#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DoneChooseMap */

void __thiscall ChooseMapTy::DoneChooseMap(ChooseMapTy *this)

{
  ChooseMapTy_field_1A5FState CVar1;
  MMsgTy *this_00;
  code *pcVar2;
  ChooseMapTy *pCVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (((pCVar3->field_004D != 0x6121) && (g_int_00811764 != (int *)0x0)) && (DAT_0080877e != '\0')
       ) {
      FUN_00715360(g_int_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if (pCVar3->field_1C8F != (HANDLE)0x0) {
      FindCloseChangeNotification(pCVar3->field_1C8F);
      pCVar3->field_1C8F = (HANDLE)0x0;
    }
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    iVar4 = pCVar3->field_004D;
    if (((iVar4 != 0x6120) && (iVar4 != 0x6121)) && (iVar4 != 0x6105)) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pCVar3->field_20B8 != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20B8);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20B8);
      pCVar3->field_20B8 = (HoloTy *)0x0;
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1A70);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B01);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B92);
    puVar6 = &pCVar3->field_1C23;
    iVar4 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0((int *)PTR_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pCVar3->field_1C87 != 0xffffffff) {
      FUN_006b3bb0((int *)PTR_008075a8,pCVar3->field_1C87);
    }
    pCVar3->field_1C87 = 0xffffffff;
    if (pCVar3->field_20BC != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20BC);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20BC);
      pCVar3->field_20BC = (HoloTy *)0x0;
    }
    if (pCVar3->field_0x20b4 != '\0') {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
      }
      if (-1 < g_startSystem_0081176C->field_0540) {
        FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0540);
      }
    }
    if (pCVar3->field_20C0 != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20C0);
      Library::MSVCRT::FUN_0072e2b0(pCVar3->field_20C0);
      pCVar3->field_20C0 = (HoloTy *)0x0;
    }
    if ((pCVar3->field_20B7 != '\0') &&
       (((CVar1 = pCVar3->field_1A5F, CVar1 == CASE_C || (CVar1 == CASE_4)) ||
        ((CVar1 == CASE_5 || (CVar1 == CASE_13)))))) {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
      if (-1 < g_startSystem_0081176C->field_0558) {
        FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0558);
      }
      if (-1 < g_startSystem_0081176C->field_0554) {
        FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0554);
      }
    }
    if (pCVar3->field_1C7B != (AnonPointee_ChooseMapTy_1C7B *)0x0) {
      FreeAndNull(&pCVar3->field_1C7B);
    }
    pCVar3->field_1C7F = (ushort *)0x0;
    if (pCVar3->field_1C8B != (AnonPointee_ChooseMapTy_1C8B *)0x0) {
      FreeAndNull(&pCVar3->field_1C8B);
    }
    if ((pCVar3->field_0x20b6 != '\0') &&
       (this_00 = pCVar3->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pCVar3->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pCVar3->field_1C97 != (DArrayTy *)0x0) {
      FUN_006b5570(pCVar3->field_1C97);
      pCVar3->field_1C97 = (DArrayTy *)0x0;
    }
    if (pCVar3->field_1C9B != (DArrayTy *)0x0) {
      DArrayDestroy(pCVar3->field_1C9B);
      pCVar3->field_1C9B = (DArrayTy *)0x0;
    }
    if (pCVar3->field_1C9F != (DArrayTy *)0x0) {
      FUN_006b5570(pCVar3->field_1C9F);
      pCVar3->field_1C9F = (DArrayTy *)0x0;
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

