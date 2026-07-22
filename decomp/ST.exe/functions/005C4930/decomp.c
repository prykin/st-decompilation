#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  DArrayTy *array;
  MMsgTy *this_00;
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  cMf32 *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  cMf32 *this_02;
  uint uVar5;
  void **value;
  bool bVar6;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    this_02 = this_01;
    if (*(cMf32 **)&pMVar2[0x23].field_0x36 != (cMf32 *)0x0) {
      cMf32::delete(this_01,*(cMf32 **)&pMVar2[0x23].field_0x36);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_02 = extraout_ECX;
    }
    *(undefined4 *)&pMVar2[0x23].field_0x36 = 0;
    if (*(cMf32 **)&pMVar2[0x23].field_0x3a != (cMf32 *)0x0) {
      cMf32::delete(this_02,*(cMf32 **)&pMVar2[0x23].field_0x3a);
    }
    *(undefined4 *)&pMVar2[0x23].field_0x3a = 0;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    iVar3 = *(int *)&pMVar2->field_0x4d;
    if (((iVar3 != 0x611f) && (iVar3 != 0x6109)) && (iVar3 != 0x6105)) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (*(HoloTy **)&pMVar2[0x26].field_0x3a != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x26].field_0x3a);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x26].field_0x3a);
      *(undefined4 *)&pMVar2[0x26].field_0x3a = 0;
    }
    if (pMVar2[0x26].field_0x30 != '\0') {
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
    if (*(HoloTy **)&pMVar2[0x26].field_0x42 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x26].field_0x42);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x26].field_0x42);
      *(undefined4 *)&pMVar2[0x26].field_0x42 = 0;
    }
    if (*(HoloTy **)&pMVar2[0x26].field_0x36 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x26].field_0x36);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x26].field_0x36);
      *(undefined4 *)&pMVar2[0x26].field_0x36 = 0;
    }
    if (*(HoloTy **)&pMVar2[0x26].field_0x3e != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x26].field_0x3e);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x26].field_0x3e);
      *(undefined4 *)&pMVar2[0x26].field_0x3e = 0;
    }
    if (*(HoloTy **)&pMVar2[0x26].field_0x46 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x26].field_0x46);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x26].field_0x46);
      *(undefined4 *)&pMVar2[0x26].field_0x46 = 0;
    }
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (*(int *)&pMVar2[0x22].field_0x5 != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&pMVar2[0x22].field_0x5);
    }
    if (*(int *)&pMVar2[0x20].field_0x7 != 0) {
      FreeAndNull((void **)&pMVar2[0x20].field_0x7);
    }
    PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)0x0;
    if (*(DArrayTy **)&pMVar2[0x23].field_0x73 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&pMVar2[0x23].field_0x73);
    }
    iVar3 = *(int *)&pMVar2[0x23].field_0x7b;
    *(undefined4 *)&pMVar2[0x23].field_0x73 = 0;
    if (iVar3 != 0) {
      uVar5 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar6 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar6) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(DArrayTy **)(iVar3 + 0x50) != (DArrayTy *)0x0)) {
            DArrayDestroy(*(DArrayTy **)(iVar3 + 0x50));
          }
          iVar3 = *(int *)&pMVar2[0x23].field_0x7b;
          uVar5 = uVar5 + 1;
          bVar6 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
      DArrayDestroy(*(DArrayTy **)&pMVar2[0x23].field_0x7b);
      *(undefined4 *)&pMVar2[0x23].field_0x7b = 0;
    }
    array = *(DArrayTy **)((int)&pMVar2[0x22].field_0008 + 1);
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
    *(undefined4 *)((int)&pMVar2[0x22].field_0008 + 1) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)((int)&pMVar2[0x20].field_0008 + 3));
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2[0x20].field_0x9c);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2[0x21].field_0x4a);
    value = (void **)&pMVar2[0x25].field_0x25;
    iVar3 = 10;
    do {
      FUN_006b3bb0((int *)PTR_008075a8,(uint)value[-10]);
      if (*value != (void *)0x0) {
        FreeAndNull(value);
      }
      value = value + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)&pMVar2[0x21].field_0xdb != 0) {
      FreeAndNull((void **)&pMVar2[0x21].field_0xdb);
    }
    FUN_006b3bb0((int *)PTR_008075a8,*(uint *)&pMVar2[0x21].field_0xdf);
    if ((pMVar2[0x26].field_0x35 != '\0') &&
       (this_00 = *(MMsgTy **)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6), this_00 != (MMsgTy *)0x0))
    {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)&pMVar2->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x1ce,0,iVar3,"%s",
                             "SettMapTy::DoneSettMap");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sett_obj.cpp",0x1ce);
  return;
}

