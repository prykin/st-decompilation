#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DoneWait */

void __thiscall WaitTy::DoneWait(WaitTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pWVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    if (pWVar2->field_004D == 0x6105) {
      if (DAT_00811768 == '\x02') {
        pWVar2->field_004D = 0x6102;
        DarkScreen(DAT_0080759c,10,2);
      }
      thunk_FUN_005dac60();
    }
    if (pWVar2->field_004D == 0x610a) {
      DarkScreen(DAT_0080759c,10,2);
      thunk_FUN_005dac60();
    }
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pWVar2->field_1AF8 != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1AF8);
      Library::MSVCRT::FUN_0072e2b0(pWVar2->field_1AF8);
      pWVar2->field_1AF8 = (HoloTy *)0x0;
    }
    puVar5 = &pWVar2->field_1A94;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0((int *)PTR_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pWVar2->field_1B00 != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1B00);
      Library::MSVCRT::FUN_0072e2b0(pWVar2->field_1B00);
      pWVar2->field_1B00 = (HoloTy *)0x0;
    }
    if (pWVar2->field_1A64 == 0) {
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
    if (pWVar2->field_1AFC != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1AFC);
      Library::MSVCRT::FUN_0072e2b0(pWVar2->field_1AFC);
      pWVar2->field_1AFC = (HoloTy *)0x0;
    }
    if (pWVar2->field_1A64 == 0) {
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
    if (pWVar2->field_1AF0 != (DArrayTy *)0x0) {
      FUN_006b5570(pWVar2->field_1AF0);
    }
    pWVar2->field_1AF0 = (DArrayTy *)0x0;
    if (pWVar2->field_1AEC != (ushort *)0x0) {
      FreeAndNull(&pWVar2->field_1AEC);
    }
    if (pWVar2->field_1A83 != (byte *)0x0) {
      FreeAndNull(&pWVar2->field_1A83);
    }
    if ((pWVar2->field_004D == 0x6102) &&
       (this_00 = pWVar2->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pWVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pWVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pWVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xd5,0,iVar3,"%s",
                             "WaitTy::DoneWait");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\wait_obj.cpp",0xd5);
  return;
}

