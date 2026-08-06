#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::DoneApp */

void __thiscall STAppC::DoneApp(STAppC *this)

{
  int *piVar2;
  STAppC *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 *this_00;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  int *local_c;
  STAppC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1189 != (LPVOID)0x0) {
      FreeAndNull(&local_8->field_1189);
    }
    pSVar3->field_118D = 0;
    if (PTR_00806740 != nullptr) {
      DArrayDestroy(PTR_00806740);
    }
    PTR_00806740 = nullptr;
    thunk_FUN_005711d0(pSVar3,(int *)&g_parentSystem_0081163C);
    thunk_FUN_005711d0(pSVar3,(int *)&g_startSystem_0081176C);
    CloseGameDBs(pSVar3);
    DestroyBaseSystem();
    if ((DArrayTy *)pSVar3->field_4EE2 != nullptr) {
      DArrayDestroy((DArrayTy *)pSVar3->field_4EE2);
    }
    pSVar3->field_4EE2 = nullptr;
    if ((DArrayTy *)pSVar3->field_4EE6 != nullptr) {
      DArrayDestroy((DArrayTy *)pSVar3->field_4EE6);
    }
    pSVar3->field_4EE6 = nullptr;
    if (g_anonShape_006C3FC0_72DDFA27_008075A0 != nullptr) {
      FUN_006c3aa0((int *)g_anonShape_006C3FC0_72DDFA27_008075A0);
      g_anonShape_006C3FC0_72DDFA27_008075A0 = nullptr;
    }
    if (g_int_008075A4 != nullptr) {
      FUN_006c2ac0(g_int_008075A4);
      g_int_008075A4 = nullptr;
    }
    if (g_ddxContext_008075A8 != nullptr) {
      Library::DKW::DDX::FUN_006b3cc0((int *)g_ddxContext_008075A8);
      g_ddxContext_008075A8 = nullptr;
    }
    if (g_dDXContext_0080759C != nullptr) {
      FUN_006ba600((undefined4 *)g_dDXContext_0080759C);
      g_dDXContext_0080759C = nullptr;
    }
    thunk_FUN_0055d910();
    if (g_cMf32_00806758 != nullptr) {
      cMf32::delete(g_cMf32_00806758);
    }
    g_cMf32_00806758 = nullptr;
    if (g_cMf32_00806760 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806760,(uint *)&PTR_0080679c);
      if (PTR_00806764 != nullptr) {
        FUN_0070a300((int *)&PTR_00806764);
      }
      cMf32::delete(g_cMf32_00806760);
      g_cMf32_00806760 = nullptr;
    }
    if (PTR_00806784 != nullptr) {
      FUN_0070a300((int *)&PTR_00806784);
    }
    if (g_cMf32_00806780 != nullptr) {
      cMf32::delete(g_cMf32_00806780);
    }
    g_cMf32_00806780 = nullptr;
    if (g_cMf32_00806798 != nullptr) {
      cMf32::delete(g_cMf32_00806798);
    }
    g_cMf32_00806798 = nullptr;
    if (g_cMf32_0080675C != nullptr) {
      cMf32::delete(g_cMf32_0080675C);
    }
    g_cMf32_0080675C = nullptr;
    if (pSVar3->field_4EDE != nullptr) {
      DArrayDestroy(pSVar3->field_4EDE);
    }
    pSVar3->field_4EDE = nullptr;
    if ((DArrayTy *)pSVar3->field_4EA7 != nullptr) {
      FUN_006b5570((DArrayTy *)pSVar3->field_4EA7);
    }
    pSVar3->field_4EA7 = nullptr;
    if ((DArrayTy *)pSVar3->field_4EAB != nullptr) {
      FUN_006b5570((DArrayTy *)pSVar3->field_4EAB);
    }
    pSVar3->field_4EAB = nullptr;
    if (pSVar3->field_4EDA != nullptr) {
      FUN_006b5570(pSVar3->field_4EDA);
    }
    pSVar3->field_4EDA = nullptr;
    if (pSVar3->field_7D12 != nullptr) {
      FreeAndNull(&pSVar3->field_7D12);
    }
    if (pSVar3->field_76F2 != nullptr) {
      FreeAndNull(&pSVar3->field_76F2);
    }
    thunk_FUN_005713b0((int)pSVar3);
    this_00 = &pSVar3->field_0038;
    thunk_FUN_00572920(this_00,1);
    thunk_FUN_005672e0((AnonShape_005672E0_9A0A2ED1 *)this_00);
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    local_c = this_00;
    iVar4 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
    piVar2 = local_c;
    if ((iVar4 == 0) && (*local_c != 0)) {
      FUN_006b81d0((undefined4 *)local_c[1]);
      piVar2[1] = 0;
    }
    g_currentExceptionFrame = local_94.previous;
    DestroyWindow(g_hWnd_00806748);
    g_hWnd_00806748 = (HWND)0x0;
    UnregisterClassA("STWindowClass",g_hInstance_00856D70);
    pSVar3 = local_8;
    if (local_8->field_115A != nullptr) {
      FreeAndNull(&local_8->field_115A);
    }
    AppClassTy::DoneApp((AppClassTy *)pSVar3);
    if (DAT_008030d4 != 0) {
      FreeAndNull(&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      FreeAndNull(&DAT_00802ad0);
    }
    InterlockedDecrement(&DAT_0085e000);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x31c,0,iVar4,"%s",
                             "STAppC::DoneApp");
  if (iVar5 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\tapp.cpp",0x31d);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

