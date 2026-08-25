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
  int local_EAX_42;
  int local_EAX_76;
  int local_EAX_112;
  LRESULT LVar2;
  uint uVar3;
  HCURSOR pHVar4;
  int iVar2;
  STMessage local_cc;
  tagPAINTSTRUCT local_ac;
  undefined4 local_6c [4];
  undefined4 local_5c;
  InternalExceptionFrame local_4c;
  LRESULT local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_42 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x3aa,0,local_EAX_42,"%s",
                               "STAppC::MainWindowProc");
    if (iVar2 == 0) {
      return local_8;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_EAX_76 = AppClassTy::DecodeMessage(g_app_00806728,param_2,param_3,param_4);
  if ((local_EAX_76 != 0) &&
     (local_EAX_112 =
           ReportDebugMessage("E:\\__titans\\tapp.cpp",0x330,0,-0x5001fff8,"%s",
                              "STAppC::MainWindowProc"), local_EAX_112 != 0)) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      /* ST_CALLSITE[0056CE2E]: CALL dword ptr [0x0085be30] */
      pHVar4 = LoadCursorA(g_hInstance_00856D70,&DAT_00000066);
      /* ST_CALLSITE[0056CE35]: CALL dword ptr [0x0085be2c] */
      SetCursor(pHVar4);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    switch(param_2) {
    case CASE_5:
      memset(local_6c, 0, 0x20); /* compiler bulk-zero initialization */
      local_5c = 0x66;
      AppClassTy::SendMessage(g_app_00806728,3,1,(int)local_6c);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_F:
      /* ST_CALLSITE[0056CC82]: CALL dword ptr [0x0085be38] */
      BeginPaint(hWnd,&local_ac);
      if (g_ddxContext_008075A8 != nullptr) {
        FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      }
      if ((g_parentSystem_0081163C != nullptr) &&
         (g_sT3DSMAPContext_00807598 != nullptr)) {
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      if (g_cLoading_00802A58 != nullptr) {
        /* ST_CALLSITE[0056CCD9]: CALL 0x00402185; direct=00402185 cLoadingTy::sub_00554A50 */
        cLoadingTy::sub_00554A50(g_cLoading_00802A58);
      }
      /* ST_CALLSITE[0056CCE6]: CALL dword ptr [0x0085be34] */
      EndPaint(hWnd,&local_ac);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_10:
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_1C:
      if (param_3 == 0) {
        if (g_dDXContext_0080759C != nullptr) {
          FUN_006ba760((int)g_dDXContext_0080759C);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          FUN_006dc310();
        }
        uVar3 = thunk_FUN_00567060(0x807658);
        if (uVar3 != 0) {
          thunk_FUN_005713b0(0x807620);
        }
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_CALLSITE[0056CDD8]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
          CursorClassTy::sub_0054B540(g_cursorClass_00802A30);
        }
        /* ST_CALLSITE[0056CDE9]: CALL dword ptr [0x0085be30] */
        pHVar4 = LoadCursorA(g_hInstance_00856D70,&DAT_00007f00);
        /* ST_CALLSITE[0056CDF0]: CALL dword ptr [0x0085be2c] */
        SetCursor(pHVar4);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if (g_dDXContext_0080759C != nullptr) {
        FUN_006ba740((int)g_dDXContext_0080759C);
      }
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        FUN_006dc300((int)g_sT3DSMAPContext_00807598);
      }
      thunk_FUN_00573240();
      thunk_FUN_00571320(&DAT_00807620,hWnd);
      /* ST_CALLSITE[0056CD7C]: CALL dword ptr [0x0085be30] */
      pHVar4 = LoadCursorA(g_hInstance_00856D70,&DAT_00000066);
      /* ST_CALLSITE[0056CD83]: CALL dword ptr [0x0085be2c] */
      SetCursor(pHVar4);
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
        if (g_cursorClass_00802A30 == nullptr) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        local_cc.id = MESS_CURSORCLASSTY_A100;
        /* ST_CALLSITE[0056CEC0]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage(&local_cc);
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
    Library::DKW::DV::FUN_006c4110(g_anonShape_006C3FC0_72DDFA27_008075A0);
    if ((g_anonShape_006C3FC0_72DDFA27_008075A0->field_0004 & 0x40000000) != 0) {
      FUN_006c3f00((int)g_anonShape_006C3FC0_72DDFA27_008075A0);
    }
    if (DAT_00806738 != 8) {
      DAT_00806738 = 8;
      Library::DKW::DDX::FUN_006b9b40
                (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,8,g_nWidth_00806730
                 ,DAT_00806734,0,0,0);
      Library::DKW::DDX::FUN_006b1470((int *)g_ddxContext_008075A8);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    Library::DKW::DDX::FUN_006bab60(g_dDXContext_0080759C,0x1000000);
    Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
    g_app_00806728->field_4EFA = 0;
    thunk_FUN_00567180(&g_app_00806728->field_0x38,hWnd);
    FUN_006e3db0((int)&g_app_00806728->field_0x113a);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  /* ST_CALLSITE[0056CF3D]: CALL dword ptr [0x0085be28] */
  LVar2 = DefWindowProcA(hWnd,param_2,param_3,param_4);
  g_currentExceptionFrame = local_4c.previous;
  return LVar2;
}

