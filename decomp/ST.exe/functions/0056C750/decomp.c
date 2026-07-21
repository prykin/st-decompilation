#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::DoneApp */

void __thiscall STAppC::DoneApp(STAppC *this)

{
  code *pcVar1;
  int *piVar2;
  STAppC *pSVar3;
  int iVar4;
  int iVar5;
  cMf32 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar6;
  undefined4 *this_01;
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
    if (PTR_00806740 != (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0) {
      DArrayDestroy((DArrayTy *)PTR_00806740);
    }
    PTR_00806740 = (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0;
    thunk_FUN_005711d0(pSVar3,(int *)&PTR_0081163c);
    thunk_FUN_005711d0(pSVar3,(int *)&PTR_0081176c);
    CloseGameDBs(pSVar3);
    DestroyBaseSystem();
    if ((DArrayTy *)pSVar3->field_4EE2 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar3->field_4EE2);
    }
    pSVar3->field_4EE2 = 0;
    if ((DArrayTy *)pSVar3->field_4EE6 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar3->field_4EE6);
    }
    pSVar3->field_4EE6 = 0;
    if (PTR_008075a0 != (AnonShape_006C3FC0_72DDFA27 *)0x0) {
      FUN_006c3aa0((int *)PTR_008075a0);
      PTR_008075a0 = (AnonShape_006C3FC0_72DDFA27 *)0x0;
    }
    if (g_int_008075A4 != (int *)0x0) {
      FUN_006c2ac0(g_int_008075A4);
      g_int_008075A4 = (int *)0x0;
    }
    if (DAT_008075a8 != (int *)0x0) {
      Library::DKW::DDX::FUN_006b3cc0(DAT_008075a8);
      DAT_008075a8 = (int *)0x0;
    }
    if (DAT_0080759c != (undefined4 *)0x0) {
      FUN_006ba600(DAT_0080759c);
      DAT_0080759c = (undefined4 *)0x0;
    }
    thunk_FUN_0055d910();
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      cMf32::delete(this_00,g_cMf32_00806758);
    }
    g_cMf32_00806758 = (cMf32 *)0x0;
    pcVar6 = (cMf32 *)0x0;
    if (g_cMf32_00806760 != (cMf32 *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806760,&DAT_0080679c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar6 = extraout_ECX;
      if (DAT_00806764 != 0) {
        FUN_0070a300(&DAT_00806764);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar6 = extraout_ECX_00;
      }
      cMf32::delete(pcVar6,g_cMf32_00806760);
      g_cMf32_00806760 = (cMf32 *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar6 = extraout_ECX_01;
    }
    if (DAT_00806784 != 0) {
      FUN_0070a300(&DAT_00806784);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar6 = extraout_ECX_02;
    }
    if (g_cMf32_00806780 != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_00806780);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar6 = extraout_ECX_03;
    }
    g_cMf32_00806780 = (cMf32 *)0x0;
    if (g_cMf32_00806798 != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_00806798);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar6 = extraout_ECX_04;
    }
    g_cMf32_00806798 = (cMf32 *)0x0;
    if (g_cMf32_0080675C != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_0080675C);
    }
    g_cMf32_0080675C = (cMf32 *)0x0;
    if ((DArrayTy *)pSVar3->field_4EDE != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar3->field_4EDE);
    }
    pSVar3->field_4EDE = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EA7 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EA7);
    }
    pSVar3->field_4EA7 = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EAB != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EAB);
    }
    pSVar3->field_4EAB = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EDA != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EDA);
    }
    pSVar3->field_4EDA = 0;
    if (pSVar3->field_7D12 != 0) {
      FreeAndNull((void **)&pSVar3->field_7D12);
    }
    if (pSVar3->field_76F2 != 0) {
      FreeAndNull((void **)&pSVar3->field_76F2);
    }
    thunk_FUN_005713b0((int)pSVar3);
    this_01 = &pSVar3->field_0038;
    thunk_FUN_00572920(this_01,1);
    thunk_FUN_005672e0((AnonShape_005672E0_9A0A2ED1 *)this_01);
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    local_c = this_01;
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
    if (local_8->field_115A != (AnonPointee_STAppC_115A *)0x0) {
      FreeAndNull(&local_8->field_115A);
    }
    AppClassTy::DoneApp((AppClassTy *)pSVar3);
    if (DAT_008030d4 != 0) {
      FreeAndNull((void **)&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      FreeAndNull((void **)&DAT_00802ad0);
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

