#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  ATOM AVar6;
  int iVar7;
  HWND hWnd;
  uint *puVar8;
  DWORD DVar9;
  DArrayTy *pDVar10;
  cMf32 *pcVar11;
  HANDLE hFile;
  char *pcVar12;
  StartSystemTy *pSVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  STAppC *pSVar19;
  byte *pbVar20;
  WNDCLASSA *pWVar21;
  char *pcVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  AnonShape_00683C70_22193481 **ppAVar25;
  UINT UVar26;
  AnonShape_00683C70_22193481 *local_560;
  InternalExceptionFrame local_248;
  InternalExceptionFrame local_204;
  InternalExceptionFrame local_1c0;
  InternalExceptionFrame local_17c;
  InternalExceptionFrame local_138;
  InternalExceptionFrame local_f4;
  InternalExceptionFrame local_b0;
  WNDCLASSA local_6c;
  DWORD local_44;
  HWND local_40;
  undefined1 *local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  STAppC *local_c;
  byte *local_8;
  byte *puVar2;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  local_30 = iVar7;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    local_c->DoneApp();
    switch(iVar7) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar26 = 0;
      pcVar12 = LoadResourceString(0x2648,g_module_00807618);
      pcVar14 = LoadResourceString(0x264b,g_module_00807618);
      MessageBoxA((HWND)0x0,pcVar14,pcVar12,UVar26);
      break;
    default:
      iVar15 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x2c9,0,iVar7,"%s",
                                  "STAppC::InitApp");
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -0x5001fff3:
      UVar26 = 0;
      pcVar12 = LoadResourceString(0x2648,g_module_00807618);
      pcVar14 = LoadResourceString(0x264c,g_module_00807618);
      MessageBoxA((HWND)0x0,pcVar14,pcVar12,UVar26);
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\tapp.cpp",0x2cc);
    return 0;
  }
  iVar7 = thunk_FUN_0056a5c0();
  if (iVar7 != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA("STWindowClass",(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x13e);
  }
  AppClassTy::InitApp((AppClassTy *)local_c,param_1);
  pWVar21 = &local_6c;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pWVar21->style = 0;
    pWVar21 = (WNDCLASSA *)&pWVar21->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  g_nWidth_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = MainWindowProc;
  local_6c.hInstance = param_1;
  local_6c.hbrBackground = CreateSolidBrush(0);
  local_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_6c.lpszClassName = "STWindowClass";
  AVar6 = RegisterClassA(&local_6c);
  if (AVar6 == 0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x14e);
  }
  g_hWnd_00806748 =
       CreateWindowExA(0,"STWindowClass","Submarine Titans",0x80000000,0,0,
                       g_nWidth_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (g_hWnd_00806748 == (HWND)0x0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x152);
  }
  HWND_00856d78 = g_hWnd_00806748;
  ShowWindow(g_hWnd_00806748,param_4);
  UpdateWindow(g_hWnd_00806748);
  local_34 = &local_c->field_0038;
  local_40 = g_hWnd_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  iVar7 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0);
  puVar24 = local_34;
  if (iVar7 == 0) {
    *local_34 = 1;
    iVar7 = Library::DKW::SND::FUN_006b7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar7 != 0) {
      *puVar24 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *local_34 = 0;
  }
  iVar7 = thunk_FUN_00571e40(&local_c->field_0038,(LPDWORD)0x1);
  if (iVar7 == 0) {
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar7 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0);
  pSVar19 = local_c;
  if (iVar7 == 0) {
    puVar1 = &local_c->field_0x60;
    puVar2 = &local_c->field_7D1A;
    wsprintfA((LPSTR)puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,"INTER");
    g_cMf32_00806780 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    DAT_00806784 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806780);
    wsprintfA((LPSTR)puVar2,"%s%s",&pSVar19->field_0x470,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    wsprintfA((LPSTR)puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    puVar8 = CreateArbList(g_cMf32_0080675C,0);
    pSVar19->field_4EE2 = puVar8;
    puVar8 = CreateArbList(g_cMf32_0080675C,1);
    pSVar19->field_4EE6 = puVar8;
    if ((pSVar19->field_4EE2[3] == 0) || (puVar8[3] == 0)) {
      RaiseInternalException
                (-0x5001fff3,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x167);
    }
    g_currentExceptionFrame = local_248.previous;
  }
  else {
    g_currentExceptionFrame = local_248.previous;
    RaiseInternalException(-0x5001fff3,0,"E:\\__titans\\tapp.cpp",0x169);
  }
  DAT_00807568 = 0xc;
  DAT_0080756c = 0x1e;
  DAT_00807570 = 0x2f8;
  DAT_00807574 = 0x21a;
  _DAT_00807578 = 0xc;
  _DAT_0080757c = 0x1e;
  _DAT_00807580 = 0x3d8;
  _DAT_00807584 = 0x2c2;
  _DAT_00807588 = 0xc;
  _DAT_0080758c = 0x1e;
  _DAT_00807590 = 0x4d8;
  _DAT_00807594 = 0x3c2;
  FUN_006b9b20(&g_dDXContext_0080759C,g_hWnd_00806748,(int *)&pSVar19->field_115A);
  Library::DKW::DDX::FUN_006b9b40
            (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,DAT_00806738,
             g_nWidth_00806730,DAT_00806734,0,0,0x100);
  Library::DKW::DDX::FUN_006b1300((int *)&g_ddxContext_008075A8,g_dDXContext_0080759C);
  FUN_006bbb20(g_dDXContext_0080759C,1);
  FUN_006ba780(g_dDXContext_0080759C,1);
  Library::DKW::DV::FUN_006c3800
            (&g_anonShape_006C3FC0_72DDFA27_008075A0,g_dDXContext_0080759C,HWND_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  iVar7 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0);
  if (iVar7 == 0) {
    FUN_006c2a80((int *)&g_int_008075A4,g_dDXContext_0080759C);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980((int *)g_ddxContext_008075A8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  FUN_006b1cc0(g_ddxContext_008075A8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980((int *)g_ddxContext_008075A8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  FUN_006b1cc0(g_ddxContext_008075A8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(g_dDXContext_0080759C);
  DVar9 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar9);
  thunk_FUN_005672a0(&local_c->field_0038,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar7 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  pSVar19 = local_c;
  if ((iVar7 == 0) &&
     (iVar7 = Library::DKW::DDX::FUN_006b6d50((int *)&g_int_00811764,0x20), iVar7 == 0)) {
    DAT_00811768 = '\x01';
    pcVar12 = &pSVar19->field_07BD;
    pSVar19->field_115F = g_int_00811764[0xe];
    pcVar14 = pcVar12;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar14 = 0;
      pcVar14 = pcVar14 + 4;
    }
    pcVar14 = (char *)g_int_00811764[0xd];
    uVar17 = 0xffffffff;
    pcVar22 = pcVar14;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar2 != '\0');
    if (~uVar17 - 1 < 0x40) {
      uVar17 = 0xffffffff;
      do {
        pcVar22 = pcVar14;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar14 = pcVar22 + -uVar17;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar12 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(pcVar12,pcVar14,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&pSVar19->field_0038);
  if (((DAT_00811768 != '\0') && (pSVar19->field_0E26 == '\0')) &&
     (iVar7 = thunk_FUN_005738d0(&pSVar19->field_0038), iVar7 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  CreateBaseSystem();
  pDVar10 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
  pSVar19->field_4EDA = pDVar10;
  memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
  iVar7 = 0;
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar4 = false;
  pcVar12 = (char *)PTR_00857168->field_0004;
  if (pcVar12 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      ppAVar25 = &local_560;
      for (iVar7 = 0xc6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppAVar25 = (AnonShape_00683C70_22193481 *)0x0;
        ppAVar25 = ppAVar25 + 1;
      }
      wsprintfA(&pSVar19->field_7D1A,"%s%s",&pSVar19->field_0x164,PTR_s_STARTUP_VPS_0079b040);
      pDVar10 = (DArrayTy *)
                thunk_FUN_00683c70(&pSVar19->field_7D1A,(AnonShape_00683C70_22193481 *)&local_560,
                                   &local_38,(int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (pDVar10 != (DArrayTy *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        PTR_00806740 = pDVar10;
      }
    }
    goto cf_common_exit_0056C034;
  }
  switch(pcVar12[1]) {
  case 'A':
  case 'a':
    local_1c = 0x611f;
    local_18 = 3;
    break;
  case 'B':
  case 'b':
    local_1c = 0x611f;
    local_18 = 1;
    break;
  case 'C':
  case 'c':
    local_1c = 0x6122;
    local_18 = 0;
    break;
  case 'D':
  case 'd':
    if ((char *)PTR_00857168->field_0008 != (char *)0x0) {
      uVar17 = 0xffffffff;
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar14 = pcVar12;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar14 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar12 = &pSVar19->field_7B06;
      pcVar14 = pcVar14 + -uVar17;
      pcVar22 = pcVar12;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar22 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar22 = pcVar22 + 1;
      }
      FUN_006b60b0(pcVar12,pcVar12);
      pcVar12 = &pSVar19->field_7B06;
      FUN_006c2980(pcVar12,pcVar12);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_0x60;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pbVar20 = (byte *)(pcVar14 + -uVar17);
        pbVar23 = &pSVar19->field_76F6;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pbVar23 = *(undefined4 *)pbVar20;
          pbVar20 = pbVar20 + 4;
          pbVar23 = pbVar23 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pbVar23 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          pbVar23 = pbVar23 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_07BD;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_006b8280((char *)&pSVar19->field_76F6,(char *)&pSVar19->field_76F6);
        uVar17 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_7B06;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        uVar17 = ~uVar17;
        pbVar20 = pbVar23 + -uVar17;
        pcVar12 = &pSVar19->field_7B06;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pbVar20;
          pbVar20 = pbVar20 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar12 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar12 = &pSVar19->field_7B06;
        do {
          pcVar22 = pcVar12;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = pcVar22 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pSVar19->field_1185 = 1;
        ReadCmdPlay(pSVar19,1);
        if (pSVar19->field_1185 != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar4 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar17 = 0xffffffff;
          pcVar12 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar14 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar14 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar14 + -uVar17;
          pcVar14 = &pSVar19->field_78FE;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
          uVar17 = 0xffffffff;
          pcVar12 = &pSVar19->field_07BD;
          do {
            pcVar14 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar14 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar12 = &pSVar19->field_78FE;
          do {
            pcVar22 = pcVar12;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          pcVar12 = pcVar14 + -uVar17;
          pcVar14 = pcVar22 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
          FUN_006b8280(&pSVar19->field_78FE,&pSVar19->field_78FE);
          uVar17 = 0xffffffff;
          pcVar12 = PTR_DAT_0079b050;
          do {
            pcVar14 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar14 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar12 = &pSVar19->field_78FE;
          do {
            pcVar22 = pcVar12;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          pcVar12 = pcVar14 + -uVar17;
          pcVar14 = pcVar22 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
          uVar17 = 0xffffffff;
          pcVar12 = &pSVar19->field_7B06;
          do {
            pcVar14 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar14 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar12 = &pSVar19->field_78FE;
          do {
            pcVar22 = pcVar12;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          pcVar12 = pcVar14 + -uVar17;
          pcVar14 = pcVar22 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pSVar19);
          }
          g_startSystem_0081176C->InitSystem();
          AppClassTy::AddSystem((AppClassTy *)pSVar19,(int *)g_startSystem_0081176C,0);
          local_1c = 0x60ff;
          pSVar19->field_7D0E = 1;
          pSVar19->field_117C = 1;
          pSVar19->field_1163 = 1;
          if ((undefined1 *)PTR_00857168->field_000C != (undefined1 *)0x0) {
            switch(*(undefined1 *)PTR_00857168->field_000C) {
            case 0x4d:
            case 0x6d:
              pSVar19->field_1163 = 3;
              break;
            case 0x53:
            case 0x73:
              pSVar19->field_1163 = 2;
            }
          }
        }
      }
    }
    break;
  case 'E':
  case 'e':
    uVar17 = 0xffffffff;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (((4 < ~uVar17 - 1) && (PTR_00857168->field_0008 != 0)) && (PTR_00857168->field_000C != 0)) {
      local_1c = 0x6104;
      pSVar19->field_854E = 1;
      local_18 = 1;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *pcVar12 - 0x30;
      pSVar19->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar19->field_112E = 1;
      }
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      pSVar19->field_8552 = *pcVar12 + -0x30;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA(&pSVar19->field_0x4f0e,"%s",pcVar12);
      wsprintfA((LPSTR)&pSVar19->field_76F6,"%s%s",&pSVar19->field_0x60,
                &pSVar19->field_0x4f0e);
      uVar17 = 0xffffffff;
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar14 = pcVar12;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar14 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar12 = pcVar14 + -uVar17;
      pcVar14 = &pSVar19->field_0x6ce3;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    break;
  case 'F':
  case 'f':
    local_1c = 0x610a;
    break;
  case 'G':
  case 'g':
switchD_0056b4ce_caseD_47:
    uVar17 = 0xffffffff;
    pcVar12 = (char *)PTR_00857168->field_0004;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (6 < ~uVar17 - 1) {
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,6);
      wsprintfA(&pSVar19->field_78FE,"%s",pcVar12);
      wsprintfA((LPSTR)&pSVar19->field_76F6,"%s%s",&pSVar19->field_0x60,&pSVar19->field_78FE);
      pSVar19->field_1195 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_00807340 = *(char *)(PTR_00857168->field_0004 + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pSVar19->field_8552 = *(char *)(PTR_00857168->field_0004 + 5) + -0x30;
      cVar2 = *(char *)(PTR_00857168->field_0004 + 4);
      pSVar19->field_1180 = CASE_8;
      pSVar19->field_112D = cVar2 + -0x30;
      iVar7 = sub_0056E9E0(pSVar19,1);
      if (iVar7 == 0) {
        RaiseInternalException
                  (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",600);
      }
      else {
        switch(*(undefined1 *)(PTR_00857168->field_0004 + 2)) {
        case 0x41:
        case 0x61:
          pSVar19->field_1180 = CASE_3;
          pSVar19->field_1163 = 2;
          break;
        case 0x42:
        case 0x62:
          pSVar19->field_1180 = CASE_1;
          pSVar19->field_1163 = 2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          iVar7 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0);
          pSVar19 = local_c;
          if (iVar7 == 0) {
            pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                         (0x345,&local_c->field_76F6,0,0,0);
            local_3c = &pSVar19->field_0x1196;
            cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(pcVar11);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar7,0,"E:\\__titans\\tapp.cpp",0x23e);
          }
          sub_0056EF50(pSVar19);
          sub_0056F040(pSVar19);
          sub_0056EBE0(pSVar19);
          pSVar19->field_7D0E = 0;
          break;
        default:
          RaiseInternalException
                    (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pSVar19->field_1180 = CASE_8;
          pSVar19->field_1163 = 1;
          break;
        case 0x53:
        case 0x73:
          pSVar19->field_1180 = CASE_2;
          pSVar19->field_1163 = 2;
        }
        memset(&pSVar19->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        cVar2 = *(char *)(PTR_00857168->field_0004 + 1);
        if (((cVar2 == 'G') || (cVar2 == 'D')) || (cVar2 == 'W')) {
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pSVar19);
          }
          g_startSystem_0081176C->InitSystem();
          AppClassTy::AddSystem((AppClassTy *)pSVar19,(int *)g_startSystem_0081176C,0);
          local_1c = 0x60ff;
        }
        else {
          local_1c = 0x6104;
          local_18 = 0;
        }
      }
    }
    break;
  case 'L':
  case 'l':
    local_1c = 0x611f;
    local_18 = 9;
    break;
  case 'N':
  case 'n':
    local_1c = 0x6105;
    local_18 = 0;
    local_14 = 1;
    break;
  case 'P':
  case 'p':
    uVar17 = 0xffffffff;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar17 - 1) {
      pSVar19->field_854E = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *pcVar12 - 0x30;
      pSVar19->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar19->field_112E = 1;
      }
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      pSVar19->field_8552 = *pcVar12 + -0x30;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA((LPSTR)&pSVar19->field_76F6,"%s%s",&pSVar19->field_0x60,pcVar12);
    }
    break;
  case 'R':
  case 'r':
    local_1c = 0x6103;
    local_18 = 1;
    break;
  case 'S':
  case 's':
    local_1c = 0x611f;
    local_18 = 2;
    break;
  case 'T':
  case 't':
    local_1c = 0x6124;
    break;
  case 'W':
  case 'w':
switchD_0056b4ce_caseD_57:
    if (bVar4) goto switchD_0056b4ce_caseD_47;
    if ((char *)PTR_00857168->field_0008 != (char *)0x0) {
      uVar17 = 0xffffffff;
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar14 = pcVar12;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar14 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar12 = &pSVar19->field_7B06;
      pcVar14 = pcVar14 + -uVar17;
      pcVar22 = pcVar12;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar22 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar22 = pcVar22 + 1;
      }
      FUN_006b60b0(pcVar12,pcVar12);
      pcVar12 = &pSVar19->field_7B06;
      FUN_006c2980(pcVar12,pcVar12);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_0x60;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pbVar20 = (byte *)(pcVar14 + -uVar17);
        pbVar23 = &pSVar19->field_76F6;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pbVar23 = *(undefined4 *)pbVar20;
          pbVar20 = pbVar20 + 4;
          pbVar23 = pbVar23 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pbVar23 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          pbVar23 = pbVar23 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_07BD;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_006b8280((char *)&pSVar19->field_76F6,(char *)&pSVar19->field_76F6);
        uVar17 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &pSVar19->field_7B06;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = (char *)(pbVar23 + -1);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar17 = 0xffffffff;
        pbVar20 = &pSVar19->field_76F6;
        do {
          pbVar23 = pbVar20;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pbVar23 = pbVar20 + 1;
          bVar5 = *pbVar20;
          pbVar20 = pbVar23;
        } while (bVar5 != 0);
        uVar17 = ~uVar17;
        pbVar20 = pbVar23 + -uVar17;
        pcVar12 = &pSVar19->field_7B06;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pbVar20;
          pbVar20 = pbVar20 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar12 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar14 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar14 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar12 = &pSVar19->field_7B06;
        do {
          pcVar22 = pcVar12;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        pcVar12 = pcVar14 + -uVar17;
        pcVar14 = pcVar22 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        hFile = CreateFileA(&pSVar19->field_7B06,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar9 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar9 != 0xffffffff)) {
          WriteFile(hFile,&pSVar19->field_1134,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          pSVar19->field_1181 = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (PTR_00857168->field_0008 != 0) {
      wsprintfA((LPSTR)&pSVar19->field_76F6,"%s%s",&pSVar19->field_0x60,
                PTR_00857168->field_0008);
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar7 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0);
      pSVar19 = local_c;
      if (iVar7 == 0) {
        pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_76F6,2,0,0);
        local_8 = &pSVar19->field_0x1196;
        cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        pSVar19->field_119A = 0x8f000805;
        cMf32::RecPut(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,&pSVar19->field_0x1196,0x1999,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(pcVar11);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException
                (-0x5001fff4,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x1e5);
    }
  }
  if ((pSVar19->field_0E26 == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  local_560 = (AnonShape_00683C70_22193481 *)0x56c03f;
  pSVar19->GetMessage((int)local_2c);
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

