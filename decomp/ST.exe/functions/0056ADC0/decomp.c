#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  LPSTR pCVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  AppClassTy *pAVar6;
  byte bVar7;
  ATOM AVar8;
  int iVar9;
  HWND hWnd;
  uint *puVar10;
  DWORD DVar11;
  cMf32 *pcVar12;
  HANDLE hFile;
  char *pcVar13;
  StartSystemTy *pSVar14;
  AnonShape_GLOBAL_00806740_0AFD1484 *pAVar15;
  char *pcVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  cMf32 *this_00;
  cMf32 *this_01;
  AppClassTy *pAVar21;
  WNDCLASSA *pWVar22;
  char *pcVar23;
  undefined4 *puVar24;
  UINT UVar25;
  undefined1 local_560 [792];
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
  AppClassTy *local_34;
  int local_30;
  undefined4 local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  AppClassTy *local_c;
  byte *local_8;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = (AppClassTy *)this;
  iVar9 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  local_30 = iVar9;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    (*local_c->vtable->DoneApp)(local_c);
    switch(iVar9) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar25 = 0;
      pcVar13 = LoadResourceString(0x2648,HINSTANCE_00807618);
      pcVar16 = LoadResourceString(0x264b,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pcVar16,pcVar13,UVar25);
      break;
    default:
      iVar17 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar9,&DAT_007a4ccc,
                                  s_STAppC__InitApp_007ca0a4);
      if (iVar17 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -0x5001fff3:
      UVar25 = 0;
      pcVar13 = LoadResourceString(0x2648,HINSTANCE_00807618);
      pcVar16 = LoadResourceString(0x264c,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pcVar16,pcVar13,UVar25);
    }
    RaiseInternalException(iVar9,0,s_E____titans_tapp_cpp_007ca0c8,0x2cc);
    return 0;
  }
  iVar9 = thunk_FUN_0056a5c0();
  if (iVar9 != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA(s_STWindowClass_007c9e3c,(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x13e);
  }
  AppClassTy::InitApp(local_c,param_1);
  pWVar22 = &local_6c;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    pWVar22->style = 0;
    pWVar22 = (WNDCLASSA *)&pWVar22->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  g_nWidth_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = (WNDPROC)&LAB_0040251d;
  local_6c.hInstance = param_1;
  local_6c.hbrBackground = CreateSolidBrush(0);
  local_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_6c.lpszClassName = s_STWindowClass_007c9e3c;
  AVar8 = RegisterClassA(&local_6c);
  if (AVar8 == 0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x14e);
  }
  g_hWnd_00806748 =
       CreateWindowExA(0,s_STWindowClass_007c9e3c,s_Submarine_Titans_007c9e4c,0x80000000,0,0,
                       g_nWidth_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (g_hWnd_00806748 == (HWND)0x0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x152);
  }
  HWND_00856d78 = g_hWnd_00806748;
  ShowWindow(g_hWnd_00806748,param_4);
  UpdateWindow(g_hWnd_00806748);
  local_34 = local_c + 1;
  local_40 = g_hWnd_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  iVar9 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0);
  pAVar21 = local_34;
  if (iVar9 == 0) {
    local_34->vtable = (AppClassTyVTable *)0x1;
    iVar9 = Library::DKW::SND::FUN_006b7920(&local_34->field_0004,(DWORD_PTR)local_40);
    if (iVar9 != 0) {
      pAVar21->vtable = (AppClassTyVTable *)0x0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    local_34->vtable = (AppClassTyVTable *)0x0;
  }
  iVar9 = thunk_FUN_00571e40(local_c + 1,(LPDWORD)0x1);
  if (iVar9 == 0) {
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar9 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0);
  pAVar21 = local_c;
  if (iVar9 == 0) {
    pAVar6 = local_c + 1;
    pbVar1 = (byte *)((int)&local_c[0x23b].field_0030 + 2);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,&pAVar6->field_0028,PTR_s_SYSTEM__0079b030,
              s_INTER_007ca0c0);
    g_cMf32_00806780 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    DAT_00806784 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806780);
    wsprintfA((LPSTR)pbVar1,&DAT_007c6ee4,&pAVar21[0x14].field_0010,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,&pAVar6->field_0028,PTR_s_SYSTEM__0079b030,
              PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    puVar10 = CreateArbList(g_cMf32_0080675C,0);
    *(uint **)((int)&pAVar21[0x168].field_0020 + 2) = puVar10;
    puVar10 = CreateArbList(g_cMf32_0080675C,1);
    *(uint **)((int)&pAVar21[0x168].field_0024 + 2) = puVar10;
    if ((*(int *)(*(int *)((int)&pAVar21[0x168].field_0020 + 2) + 0xc) == 0) || (puVar10[3] == 0)) {
      RaiseInternalException
                (-0x5001fff3,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x167);
    }
    g_currentExceptionFrame = local_248.previous;
  }
  else {
    g_currentExceptionFrame = local_248.previous;
    RaiseInternalException(-0x5001fff3,0,s_E____titans_tapp_cpp_007ca0c8,0x169);
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
  FUN_006b9b20(&DAT_0080759c,g_hWnd_00806748,(int *)((int)&pAVar21[0x4f].field_0010 + 2));
  Library::DKW::DDX::FUN_006b9b40
            ((undefined4 *)DAT_0080759c,0x10000001,g_nWidth_00806730,DAT_00806734,DAT_00806738,
             g_nWidth_00806730,DAT_00806734,0,0,0x100);
  Library::DKW::DDX::FUN_006b1300((int *)&DAT_008075a8,(int)DAT_0080759c);
  FUN_006bbb20(DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  Library::DKW::DV::FUN_006c3800(&PTR_008075a0,DAT_0080759c,HWND_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  iVar9 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0);
  if (iVar9 == 0) {
    FUN_006c2a80((int *)&g_int_008075A4,DAT_0080759c);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar11 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar11);
  thunk_FUN_005672a0(local_c + 1,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar9 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  pAVar21 = local_c;
  if ((iVar9 == 0) &&
     (iVar9 = Library::DKW::DDX::FUN_006b6d50((int *)&g_int_00811764,0x20), iVar9 == 0)) {
    DAT_00811768 = '\x01';
    pcVar13 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
    *(int *)((int)&pAVar21[0x4f].field_0014 + 3) = g_int_00811764[0xe];
    pcVar16 = pcVar13;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16 = pcVar16 + 4;
    }
    pcVar16 = (char *)g_int_00811764[0xd];
    uVar19 = 0xffffffff;
    pcVar23 = pcVar16;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar3 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar3 != '\0');
    if (~uVar19 - 1 < 0x40) {
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar16;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar16 + 1;
        cVar3 = *pcVar16;
        pcVar16 = pcVar23;
      } while (cVar3 != '\0');
      uVar19 = ~uVar19;
      pcVar16 = pcVar23 + -uVar19;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar13 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(pcVar13,pcVar16,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)(pAVar21 + 1));
  if (((DAT_00811768 != '\0') && (*(char *)((int)&pAVar21[0x40].field_0024 + 2) == '\0')) &&
     (iVar9 = thunk_FUN_005738d0((AnonShape_00572510_F06DC155 *)(pAVar21 + 1)), iVar9 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  CreateBaseSystem();
  puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)&pAVar21[0x168].field_0x1a = puVar10;
  puVar24 = local_2c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar5 = false;
  pcVar13 = (char *)PTR_00857168->field_0004;
  if (pcVar13 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar24 = (undefined4 *)local_560;
      for (iVar9 = 0xc6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + 1;
      }
      puVar10 = (uint *)((int)&pAVar21[0x23b].field_0030 + 2);
      wsprintfA((LPSTR)puVar10,&DAT_007c6ee4,&pAVar21[6].field_0014,PTR_s_STARTUP_VPS_0079b040);
      pAVar15 = (AnonShape_GLOBAL_00806740_0AFD1484 *)
                thunk_FUN_00683c70(puVar10,(AnonShape_00683C70_22193481 *)local_560,&local_38,
                                   (int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (pAVar15 != (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        PTR_00806740 = pAVar15;
      }
    }
    goto cf_common_exit_0056C034;
  }
  switch(pcVar13[1]) {
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
      uVar19 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar16 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar16 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar3 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      pcVar16 = pcVar16 + -uVar19;
      pcVar23 = pcVar13;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar23 = pcVar23 + 1;
      }
      FUN_006b60b0(pcVar13,pcVar13);
      pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      FUN_006c2980(pcVar13,pcVar13);
      iVar9 = -1;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      if (iVar9 != -2) {
        uVar19 = 0xffffffff;
        pcVar13 = (char *)&pAVar21[1].field_0028;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        pcVar16 = pcVar16 + -uVar19;
        pcVar23 = pcVar13;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar23 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar23 = pcVar23 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar16 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar23 = pcVar16;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar16 + 1;
          cVar3 = *pcVar16;
          pcVar16 = pcVar23;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        do {
          pcVar16 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        pcVar13 = pcVar23 + -uVar19;
        pcVar16 = pcVar16 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        pcVar23 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_006b8280(pcVar23,pcVar23);
        uVar19 = 0xffffffff;
        pcVar13 = PTR_DAT_0079b050;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        pcVar23 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = &DAT_007ca0b8;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        do {
          pcVar13 = pcVar23;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar13 = pcVar23 + 1;
          cVar3 = *pcVar23;
          pcVar23 = pcVar13;
        } while (cVar3 != '\0');
        pcVar16 = pcVar16 + -uVar19;
        pcVar13 = pcVar13 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar13 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *(undefined4 *)((int)&pAVar21[0x50].field_0004 + 1) = 1;
        ReadCmdPlay((STAppC *)pAVar21,1);
        if (*(int *)((int)&pAVar21[0x50].field_0004 + 1) != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar5 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar19 = 0xffffffff;
          pcVar13 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          pcVar16 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar23 = pcVar16;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar16 + 1;
            cVar3 = *pcVar16;
            pcVar16 = pcVar23;
          } while (cVar3 != '\0');
          uVar19 = ~uVar19;
          pcVar16 = pcVar23 + -uVar19;
          pcVar23 = pcVar13;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar23 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar23 = pcVar23 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar16 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
          do {
            pcVar23 = pcVar16;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar16 + 1;
            cVar3 = *pcVar16;
            pcVar16 = pcVar23;
          } while (cVar3 != '\0');
          uVar19 = ~uVar19;
          iVar9 = -1;
          do {
            pcVar16 = pcVar13;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar3 != '\0');
          pcVar13 = pcVar23 + -uVar19;
          pcVar16 = pcVar16 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          pcVar23 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_006b8280(pcVar23,pcVar23);
          uVar19 = 0xffffffff;
          pcVar13 = PTR_DAT_0079b050;
          do {
            pcVar16 = pcVar13;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar16 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar3 != '\0');
          uVar19 = ~uVar19;
          iVar9 = -1;
          pcVar13 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          do {
            pcVar23 = pcVar13;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar23 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar23;
          } while (cVar3 != '\0');
          pcVar13 = pcVar16 + -uVar19;
          pcVar16 = pcVar23 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
          do {
            pcVar16 = pcVar13;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar16 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar3 != '\0');
          uVar19 = ~uVar19;
          iVar9 = -1;
          pcVar13 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          do {
            pcVar23 = pcVar13;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar23 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar23;
          } while (cVar3 != '\0');
          pcVar13 = pcVar16 + -uVar19;
          pcVar16 = pcVar23 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          pSVar14 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar14 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar14,pAVar21);
          }
          (*PTR_0081176c->vtable->InitSystem)(PTR_0081176c);
          AppClassTy::AddSystem(pAVar21,(int *)PTR_0081176c,0);
          local_1c = 0x60ff;
          *(undefined4 *)((int)&pAVar21[0x23b].field_0024 + 2) = 1;
          pAVar21[0x4f].field_0034 = 1;
          pAVar21[0x4f].field_0x1b = 1;
          if ((undefined1 *)PTR_00857168->field_000C != (undefined1 *)0x0) {
            switch(*(undefined1 *)PTR_00857168->field_000C) {
            case 0x4d:
            case 0x6d:
              pAVar21[0x4f].field_0x1b = 3;
              break;
            case 0x53:
            case 0x73:
              pAVar21[0x4f].field_0x1b = 2;
            }
          }
        }
      }
    }
    break;
  case 'E':
  case 'e':
    uVar19 = 0xffffffff;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (((4 < ~uVar19 - 1) && (PTR_00857168->field_0008 != 0)) && (PTR_00857168->field_000C != 0)) {
      local_1c = 0x6104;
      *(undefined4 *)((int)&pAVar21[0x261].field_0014 + 2) = 1;
      local_18 = 1;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar7 = *pcVar13 - 0x30;
      *(byte *)((int)&pAVar21[0x4e].field_001C + 2) = bVar7;
      if ((bVar7 == 0) || (3 < bVar7)) {
        *(undefined1 *)((int)&pAVar21[0x4e].field_001C + 2) = 1;
      }
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar21[0x261].field_0x1a = *pcVar13 + -0x30;
      pCVar2 = (LPSTR)((int)&pAVar21[0x169].field_0014 + 2);
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA(pCVar2,&DAT_007a4ccc,pcVar13);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pCVar2);
      uVar19 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar16 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar16 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar3 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar16 + -uVar19;
      pcVar16 = (char *)((int)&pAVar21[0x1f1].field_0028 + 3);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar16 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar16 = pcVar16 + 1;
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
    uVar19 = 0xffffffff;
    pcVar13 = (char *)PTR_00857168->field_0004;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (6 < ~uVar19 - 1) {
      pCVar2 = (LPSTR)((int)&pAVar21[0x229].field_0004 + 2);
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,6);
      wsprintfA(pCVar2,&DAT_007a4ccc,pcVar13);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pCVar2);
      *(undefined1 *)((int)&pAVar21[0x50].field_0014 + 1) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_00807340 = *(char *)(PTR_00857168->field_0004 + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)&pAVar21[0x261].field_0x1a = *(char *)(PTR_00857168->field_0004 + 5) + -0x30;
      cVar3 = *(char *)(PTR_00857168->field_0004 + 4);
      *(undefined1 *)&pAVar21[0x50].vtable = 8;
      *(char *)((int)&pAVar21[0x4e].field_001C + 1) = cVar3 + -0x30;
      iVar9 = thunk_FUN_0056e9e0(pAVar21,1);
      if (iVar9 == 0) {
        RaiseInternalException
                  (local_30,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,600);
      }
      else {
        switch(*(undefined1 *)(PTR_00857168->field_0004 + 2)) {
        case 0x41:
        case 0x61:
          *(undefined1 *)&pAVar21[0x50].vtable = 3;
          pAVar21[0x4f].field_0x1b = 2;
          break;
        case 0x42:
        case 0x62:
          *(undefined1 *)&pAVar21[0x50].vtable = 1;
          pAVar21[0x4f].field_0x1b = 2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          iVar9 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0);
          pAVar21 = local_c;
          if (iVar9 == 0) {
            pcVar12 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                         (0x345,(byte *)((int)&local_c[0x21f].field_002C + 2),0,0,0)
            ;
            local_3c = (undefined1 *)((int)&pAVar21[0x50].field_0014 + 2);
            cMf32::RecGet(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(this_01,pcVar12);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar9,0,s_E____titans_tapp_cpp_007ca0c8,0x23e);
          }
          thunk_FUN_0056ef50((AnonShape_0056EF50_CAB83E9D *)pAVar21);
          thunk_FUN_0056f040((AnonShape_0056F040_86F75ABE *)pAVar21);
          thunk_FUN_0056ebe0((int)pAVar21);
          *(undefined4 *)((int)&pAVar21[0x23b].field_0024 + 2) = 0;
          break;
        default:
          RaiseInternalException
                    (local_30,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x24c);
          break;
        case 0x4d:
        case 0x6d:
          *(undefined1 *)&pAVar21[0x50].vtable = 8;
          pAVar21[0x4f].field_0x1b = 1;
          break;
        case 0x53:
        case 0x73:
          *(undefined1 *)&pAVar21[0x50].vtable = 2;
          pAVar21[0x4f].field_0x1b = 2;
        }
        puVar24 = (undefined4 *)((int)&pAVar21[0x169].field_0008 + 2);
        for (iVar9 = 0x9fc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
        cVar3 = *(char *)(PTR_00857168->field_0004 + 1);
        if (((cVar3 == 'G') || (cVar3 == 'D')) || (cVar3 == 'W')) {
          pSVar14 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar14 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar14,pAVar21);
          }
          (*PTR_0081176c->vtable->InitSystem)(PTR_0081176c);
          AppClassTy::AddSystem(pAVar21,(int *)PTR_0081176c,0);
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
    uVar19 = 0xffffffff;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (4 < ~uVar19 - 1) {
      *(undefined4 *)((int)&pAVar21[0x261].field_0014 + 2) = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar7 = *pcVar13 - 0x30;
      *(byte *)((int)&pAVar21[0x4e].field_001C + 2) = bVar7;
      if ((bVar7 == 0) || (3 < bVar7)) {
        *(undefined1 *)((int)&pAVar21[0x4e].field_001C + 2) = 1;
      }
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar21[0x261].field_0x1a = *pcVar13 + -0x30;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pcVar13);
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
    if (bVar5) goto switchD_0056b4ce_caseD_47;
    if ((char *)PTR_00857168->field_0008 != (char *)0x0) {
      uVar19 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar16 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar16 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar3 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      pcVar16 = pcVar16 + -uVar19;
      pcVar23 = pcVar13;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar23 = pcVar23 + 1;
      }
      FUN_006b60b0(pcVar13,pcVar13);
      pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      FUN_006c2980(pcVar13,pcVar13);
      iVar9 = -1;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      if (iVar9 != -2) {
        uVar19 = 0xffffffff;
        pcVar13 = (char *)&pAVar21[1].field_0028;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        pcVar16 = pcVar16 + -uVar19;
        pcVar23 = pcVar13;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar23 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar23 = pcVar23 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar16 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar23 = pcVar16;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar16 + 1;
          cVar3 = *pcVar16;
          pcVar16 = pcVar23;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        do {
          pcVar16 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        pcVar13 = pcVar23 + -uVar19;
        pcVar16 = pcVar16 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        pcVar23 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_006b8280(pcVar23,pcVar23);
        uVar19 = 0xffffffff;
        pcVar13 = PTR_DAT_0079b050;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar23 = pcVar13;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar23 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar3 != '\0');
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        pcVar23 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = pcVar16 + -uVar19;
        pcVar16 = pcVar23;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar13 = &DAT_007ca0b8;
        do {
          pcVar16 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar16 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar3 != '\0');
        uVar19 = ~uVar19;
        iVar9 = -1;
        do {
          pcVar13 = pcVar23;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar13 = pcVar23 + 1;
          cVar3 = *pcVar23;
          pcVar23 = pcVar13;
        } while (cVar3 != '\0');
        pcVar16 = pcVar16 + -uVar19;
        pcVar13 = pcVar13 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar13 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar13 = pcVar13 + 1;
        }
        hFile = CreateFileA((LPCSTR)((int)&pAVar21[0x232].field_0014 + 2),0x40000000,1,
                            (LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar11 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar11 != 0xffffffff)) {
          WriteFile(hFile,&pAVar21[0x4e].field_0024,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)((int)&pAVar21[0x50].vtable + 1) = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (PTR_00857168->field_0008 != 0) {
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                PTR_00857168->field_0008);
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar9 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0);
      pAVar21 = local_c;
      if (iVar9 == 0) {
        pcVar12 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                     (0x345,(byte *)((int)&local_c[0x21f].field_002C + 2),2,0,0);
        pbVar1 = (byte *)((int)&pAVar21[0x50].field_0014 + 2);
        local_8 = pbVar1;
        cMf32::RecGet(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)&pAVar21[0x50].field_0x1a = 0x8f000805;
        cMf32::RecPut(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,pbVar1,0x1999,(undefined4 *)0x0,'\0',
                      (uint *)0x0);
        cMf32::delete(this_00,pcVar12);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException
                (-0x5001fff4,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x1e5);
    }
  }
  if ((*(char *)((int)&pAVar21[0x40].field_0024 + 2) == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_0056C034:
  local_560._4_4_ = local_2c;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_560._0_4_ = 0x56c03f;
  (*pAVar21->vtable->vfunc_18)();
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

