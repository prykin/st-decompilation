#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::MainWindowProc

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAppC_MainWindowProc_param_2Enum. Cases:
   CASE_5=5;CASE_F=15;CASE_10=16;CASE_1C=28

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056CBD0 -> EXTERNAL:00000090 @ 0056CF3D | 0056CBD0 -> EXTERNAL:00000094 @ 0056CC82 */

LRESULT __thiscall
STAppC::MainWindowProc
          (STAppC *this,HWND hWnd,STAppC_MainWindowProc_param_2Enum param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  HCURSOR pHVar5;
  undefined4 *puVar6;
  undefined1 local_cc [16];
  undefined4 local_bc;
  tagPAINTSTRUCT local_ac;
  undefined4 local_6c [4];
  undefined4 local_5c;
  InternalExceptionFrame local_4c;
  LRESULT local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x3aa,0,iVar2,"%s",
                               "STAppC::MainWindowProc");
    if (iVar2 == 0) {
      return local_8;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar2 = AppClassTy::DecodeMessage(g_appClass_00806728,param_2,param_3,param_4);
  if ((iVar2 != 0) &&
     (iVar2 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x330,0,-0x5001fff8,"%s",
                                 "STAppC::MainWindowProc"), iVar2 != 0)) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      pHVar5 = LoadCursorA(g_hInstance_00856D70,(LPCSTR)0x66);
      SetCursor(pHVar5);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    switch(param_2) {
    case CASE_5:
      puVar6 = local_6c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_5c = 0x66;
      AppClassTy::SendMessage(g_appClass_00806728,3,1,(int)local_6c);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_F:
      BeginPaint(hWnd,&local_ac);
      if (DAT_008075a8 != (int *)0x0) {
        FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
      }
      if ((PTR_0081163c != (AnonShape_00577690_10255A81 *)0x0) &&
         (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        thunk_FUN_00554a50(&PTR_00802a58->field_0000);
      }
      EndPaint(hWnd,&local_ac);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_10:
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_1C:
      if (param_3 == 0) {
        if (DAT_0080759c != (undefined4 *)0x0) {
          FUN_006ba760((int)DAT_0080759c);
        }
        if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
          FUN_006dc310();
        }
        uVar4 = thunk_FUN_00567060(0x807658);
        if (uVar4 != 0) {
          thunk_FUN_005713b0(0x807620);
        }
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          thunk_FUN_0054b540(PTR_00802a30);
        }
        pHVar5 = LoadCursorA(g_hInstance_00856D70,(LPCSTR)0x7f00);
        SetCursor(pHVar5);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if (DAT_0080759c != (undefined4 *)0x0) {
        FUN_006ba740((int)DAT_0080759c);
      }
      if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
        FUN_006dc300((int)PTR_00807598);
      }
      thunk_FUN_00573240();
      thunk_FUN_00571320(&DAT_00807620,hWnd);
      pHVar5 = LoadCursorA(g_hInstance_00856D70,(LPCSTR)0x66);
      SetCursor(pHVar5);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
  }
  else if (param_2 < 0x3ba) {
    if (param_2 == 0x3b9) {
      if (param_3 != 1) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if (param_4 >> 0x10 != 0x4453) {
        thunk_FUN_00566f30(&g_sound,hWnd);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      thunk_FUN_00566f30(&g_sound,hWnd);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
    if (param_2 == 0x100) {
      if (param_3 == 0x13) {
        if (PTR_00802a30 == (CursorClassTy *)0x0) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        local_bc = 0xa100;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)PTR_00802a30->field_0000)(local_cc);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
    }
    else if (param_2 == 0x112) {
      if ((param_3 & 0xfff0) == 0xf140) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if ((param_3 & 0xfff0) == 0xf170) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
    }
  }
  else if (param_2 == 0x2660) {
    Library::DKW::DV::FUN_006c4110(PTR_008075a0);
    if ((PTR_008075a0->field_0004 & 0x40000000) != 0) {
      FUN_006c3f00((int)PTR_008075a0);
    }
    if (DAT_00806738 != 8) {
      DAT_00806738 = 8;
      Library::DKW::DDX::FUN_006b9b40
                (DAT_0080759c,0x10000001,g_nWidth_00806730,DAT_00806734,8,g_nWidth_00806730,
                 DAT_00806734,0,0,0);
      Library::DKW::DDX::FUN_006b1470(DAT_008075a8);
    }
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    Library::DKW::DDX::FUN_006bab60((int)DAT_0080759c,0x1000000);
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    g_appClass_00806728->field_4EFA = 0;
    thunk_FUN_00567180(&g_appClass_00806728->field_0x38,hWnd);
    FUN_006e3db0((int)&g_appClass_00806728->field_0x113a);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  LVar3 = DefWindowProcA(hWnd,param_2,param_3,param_4);
  g_currentExceptionFrame = local_4c.previous;
  return LVar3;
}

