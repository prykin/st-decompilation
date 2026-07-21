#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  ATOM AVar7;
  int iVar8;
  HWND hWnd;
  uint *puVar9;
  DWORD DVar10;
  DArrayTy *pDVar11;
  cMf32 *pcVar12;
  HANDLE hFile;
  char *pcVar13;
  StartSystemTy *pSVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  cMf32 *this_00;
  cMf32 *this_01;
  AppClassTy *pAVar20;
  WNDCLASSA *pWVar21;
  char *pcVar22;
  undefined4 *puVar23;
  UINT UVar24;
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
  AppClassTy *local_c;
  byte *local_8;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = (AppClassTy *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  local_30 = iVar8;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    (*local_c->vtable->DoneApp)(local_c);
    switch(iVar8) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar24 = 0;
      pcVar13 = LoadResourceString(0x2648,HINSTANCE_00807618);
      pcVar15 = LoadResourceString(0x264b,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pcVar15,pcVar13,UVar24);
      break;
    default:
      iVar16 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x2c9,0,iVar8,"%s",
                                  "STAppC::InitApp");
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -0x5001fff3:
      UVar24 = 0;
      pcVar13 = LoadResourceString(0x2648,HINSTANCE_00807618);
      pcVar15 = LoadResourceString(0x264c,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pcVar15,pcVar13,UVar24);
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\tapp.cpp",0x2cc);
    return 0;
  }
  iVar8 = thunk_FUN_0056a5c0();
  if (iVar8 != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA("STWindowClass",(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x13e);
  }
  AppClassTy::InitApp(local_c,param_1);
  pWVar21 = &local_6c;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    pWVar21->style = 0;
    pWVar21 = (WNDCLASSA *)&pWVar21->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  g_nWidth_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = (WNDPROC)&LAB_0040251d;
  local_6c.hInstance = param_1;
  local_6c.hbrBackground = CreateSolidBrush(0);
  local_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_6c.lpszClassName = "STWindowClass";
  AVar7 = RegisterClassA(&local_6c);
  if (AVar7 == 0) {
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
  local_34 = (undefined4 *)&local_c->field_0x38;
  local_40 = g_hWnd_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  iVar8 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0);
  puVar23 = local_34;
  if (iVar8 == 0) {
    *local_34 = 1;
    iVar8 = Library::DKW::SND::FUN_006b7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar8 != 0) {
      *puVar23 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *local_34 = 0;
  }
  iVar8 = thunk_FUN_00571e40(&local_c->field_0x38,(LPDWORD)0x1);
  if (iVar8 == 0) {
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar8 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0);
  pAVar20 = local_c;
  if (iVar8 == 0) {
    puVar1 = &local_c->field_0x60;
    puVar2 = &local_c[1].field_0x2e1c;
    wsprintfA(puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,"INTER");
    g_cMf32_00806780 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    DAT_00806784 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806780);
    wsprintfA(puVar2,"%s%s",&pAVar20->field_0x470,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    wsprintfA(puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    puVar9 = CreateArbList(g_cMf32_0080675C,0);
    *(uint **)&pAVar20->field_0x4ee2 = puVar9;
    puVar9 = CreateArbList(g_cMf32_0080675C,1);
    *(uint **)&pAVar20->field_0x4ee6 = puVar9;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)(*(int *)&pAVar20->field_0x4ee2 + 0xc) == 0) || (puVar9[3] == 0)) {
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
  FUN_006b9b20(&DAT_0080759c,g_hWnd_00806748,(int *)&pAVar20->field_0x115a);
  Library::DKW::DDX::FUN_006b9b40
            ((undefined4 *)DAT_0080759c,0x10000001,g_nWidth_00806730,DAT_00806734,DAT_00806738,
             g_nWidth_00806730,DAT_00806734,0,0,0x100);
  Library::DKW::DDX::FUN_006b1300((int *)&PTR_008075a8,(int)DAT_0080759c);
  FUN_006bbb20(DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  Library::DKW::DV::FUN_006c3800(&PTR_008075a0,DAT_0080759c,HWND_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  iVar8 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0);
  if (iVar8 == 0) {
    FUN_006c2a80((int *)&g_int_008075A4,DAT_0080759c);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980((int *)PTR_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)PTR_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980((int *)PTR_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)PTR_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar10 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar10);
  thunk_FUN_005672a0(&local_c->field_0x38,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar8 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  pAVar20 = local_c;
  if ((iVar8 == 0) &&
     (iVar8 = Library::DKW::DDX::FUN_006b6d50((int *)&g_int_00811764,0x20), iVar8 == 0)) {
    DAT_00811768 = '\x01';
    pcVar13 = &pAVar20->field_0x7bd;
    *(int *)&pAVar20->field_0x115f = g_int_00811764[0xe];
    memset((void *)pcVar13, 0, 0x40); /* compiler bulk-zero initialization */
    iVar8 = 0;
    pcVar15 = (char *)g_int_00811764[0xd];
    uVar18 = 0xffffffff;
    pcVar22 = pcVar15;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar3 != '\0');
    if (~uVar18 - 1 < 0x40) {
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar15;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar15 + 1;
        cVar3 = *pcVar15;
        pcVar15 = pcVar22;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      pcVar15 = pcVar22 + -uVar18;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(pcVar13,pcVar15,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&pAVar20->field_0x38);
  if (((DAT_00811768 != '\0') && (pAVar20->field_0xe26 == '\0')) &&
     (iVar8 = thunk_FUN_005738d0(&pAVar20->field_0x38), iVar8 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  CreateBaseSystem();
  pDVar11 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
  *(DArrayTy **)&pAVar20->field_0x4eda = pDVar11;
  memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
  iVar8 = 0;
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar5 = false;
  pcVar13 = (char *)PTR_00857168->field_0004;
  if (pcVar13 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      memset(&stack0xfffffaa0, 0, 0x318); /* compiler bulk-zero initialization */
      wsprintfA(&pAVar20[1].field_0x2e1c,"%s%s",&pAVar20->field_0x164,
                PTR_s_STARTUP_VPS_0079b040);
      pDVar11 = (DArrayTy *)
                thunk_FUN_00683c70((uint *)&pAVar20[1].field_0x2e1c,
                                   (AnonShape_00683C70_22193481 *)&stack0xfffffaa0,&local_38,
                                   (int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (pDVar11 != (DArrayTy *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        PTR_00806740 = pDVar11;
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
      uVar18 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar15 = pcVar13;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar15 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &pAVar20[1].field_0x2c08;
      pcVar13 = pcVar15 + -uVar18;
      pcVar15 = puVar1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_006b60b0(puVar1,puVar1);
      pcVar13 = &pAVar20[1].field_0x2c08;
      FUN_006c2980(pcVar13,pcVar13);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      if (iVar8 != -2) {
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20->field_0x60;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = &pAVar20[1].field_0x27f8;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20->field_0x7bd;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_006b8280(&pAVar20[1].field_0x27f8,&pAVar20[1].field_0x27f8);
        uVar18 = 0xffffffff;
        pcVar13 = PTR_DAT_0079b050;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20[1].field_0x2c08;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = &pAVar20[1].field_0x2c08;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &DAT_007ca0b8;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x2c08;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        *(undefined4 *)&pAVar20->field_0x1185 = 1;
        ReadCmdPlay((STAppC *)pAVar20,1);
        if (*(int *)&pAVar20->field_0x1185 != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar5 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar18 = 0xffffffff;
          pcVar13 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar15 = pcVar13;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar15 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          pcVar13 = pcVar15 + -uVar18;
          pcVar15 = &pAVar20[1].field_0x2a00;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar15 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar15 = pcVar15 + 1;
          }
          uVar18 = 0xffffffff;
          pcVar13 = &pAVar20->field_0x7bd;
          do {
            pcVar15 = pcVar13;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar15 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar13 = &pAVar20[1].field_0x2a00;
          do {
            pcVar22 = pcVar13;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar22 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar22;
          } while (cVar3 != '\0');
          pcVar13 = pcVar15 + -uVar18;
          pcVar15 = pcVar22 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar15 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar15 = pcVar15 + 1;
          }
          FUN_006b8280(&pAVar20[1].field_0x2a00,&pAVar20[1].field_0x2a00);
          uVar18 = 0xffffffff;
          pcVar13 = PTR_DAT_0079b050;
          do {
            pcVar15 = pcVar13;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar15 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar13 = &pAVar20[1].field_0x2a00;
          do {
            pcVar22 = pcVar13;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar22 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar22;
          } while (cVar3 != '\0');
          pcVar13 = pcVar15 + -uVar18;
          pcVar15 = pcVar22 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar15 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar15 = pcVar15 + 1;
          }
          uVar18 = 0xffffffff;
          pcVar13 = &pAVar20[1].field_0x2c08;
          do {
            pcVar15 = pcVar13;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar15 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar13 = &pAVar20[1].field_0x2a00;
          do {
            pcVar22 = pcVar13;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar22 = pcVar13 + 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar22;
          } while (cVar3 != '\0');
          pcVar13 = pcVar15 + -uVar18;
          pcVar15 = pcVar22 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar15 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar15 = pcVar15 + 1;
          }
          pSVar14 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar14 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar14,pAVar20);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)PTR_0081176c->vtable)();
          AppClassTy::AddSystem(pAVar20,(int *)PTR_0081176c,0);
          local_1c = 0x60ff;
          *(undefined4 *)&pAVar20[1].field_0x2e10 = 1;
          *(undefined4 *)&pAVar20->field_0x117c = 1;
          pAVar20->field_0x1163 = 1;
          if ((undefined1 *)PTR_00857168->field_000C != (undefined1 *)0x0) {
            switch(*(undefined1 *)PTR_00857168->field_000C) {
            case 0x4d:
            case 0x6d:
              pAVar20->field_0x1163 = 3;
              break;
            case 0x53:
            case 0x73:
              pAVar20->field_0x1163 = 2;
            }
          }
        }
      }
    }
    break;
  case 'E':
  case 'e':
    uVar18 = 0xffffffff;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (((4 < ~uVar18 - 1) && (PTR_00857168->field_0008 != 0)) && (PTR_00857168->field_000C != 0)) {
      local_1c = 0x6104;
      *(undefined4 *)&pAVar20[1].field_0x3650 = 1;
      local_18 = 1;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar6 = *pcVar13 - 0x30;
      pAVar20->field_0x112e = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        pAVar20->field_0x112e = 1;
      }
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar20[1].field_0x3654 = *pcVar13 + -0x30;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA((LPSTR)&pAVar20[1].field_0010,"%s",pcVar13);
      wsprintfA(&pAVar20[1].field_0x27f8,"%s%s",&pAVar20->field_0x60,&pAVar20[1].field_0010);
      uVar18 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar15 = pcVar13;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar15 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      pcVar13 = pcVar15 + -uVar18;
      pcVar15 = &pAVar20[1].field_0x1de5;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
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
    uVar18 = 0xffffffff;
    pcVar13 = (char *)PTR_00857168->field_0004;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (6 < ~uVar18 - 1) {
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,6);
      wsprintfA(&pAVar20[1].field_0x2a00,"%s",pcVar13);
      wsprintfA(&pAVar20[1].field_0x27f8,"%s%s",&pAVar20->field_0x60,&pAVar20[1].field_0x2a00
               );
      pAVar20->field_0x1195 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_00807340 = *(char *)(PTR_00857168->field_0004 + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)&pAVar20[1].field_0x3654 = *(char *)(PTR_00857168->field_0004 + 5) + -0x30;
      cVar3 = *(char *)(PTR_00857168->field_0004 + 4);
      pAVar20->field_0x1180 = 8;
      pAVar20->field_0x112d = cVar3 + -0x30;
      iVar8 = thunk_FUN_0056e9e0(pAVar20,1);
      if (iVar8 == 0) {
        RaiseInternalException
                  (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",600);
      }
      else {
        switch(*(undefined1 *)(PTR_00857168->field_0004 + 2)) {
        case 0x41:
        case 0x61:
          pAVar20->field_0x1180 = 3;
          pAVar20->field_0x1163 = 2;
          break;
        case 0x42:
        case 0x62:
          pAVar20->field_0x1180 = 1;
          pAVar20->field_0x1163 = 2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          iVar8 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0);
          pAVar20 = local_c;
          if (iVar8 == 0) {
            pcVar12 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                         (0x345,&local_c[1].field_0x27f8,0,0,0);
            local_3c = &pAVar20->field_0x1196;
            cMf32::RecGet(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(this_01,pcVar12);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar8,0,"E:\\__titans\\tapp.cpp",0x23e);
          }
          thunk_FUN_0056ef50((AnonShape_0056EF50_CAB83E9D *)pAVar20);
          thunk_FUN_0056f040((AnonShape_0056F040_86F75ABE *)pAVar20);
          thunk_FUN_0056ebe0((int)pAVar20);
          *(undefined4 *)&pAVar20[1].field_0x2e10 = 0;
          break;
        default:
          RaiseInternalException
                    (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pAVar20->field_0x1180 = 8;
          pAVar20->field_0x1163 = 1;
          break;
        case 0x53:
        case 0x73:
          pAVar20->field_0x1180 = 2;
          pAVar20->field_0x1163 = 2;
        }
        memset(&pAVar20[1].field_0004, 0, 0x27f0); /* compiler bulk-zero initialization */
        cVar3 = *(char *)(PTR_00857168->field_0004 + 1);
        if (((cVar3 == 'G') || (cVar3 == 'D')) || (cVar3 == 'W')) {
          pSVar14 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar14 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar14,pAVar20);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)PTR_0081176c->vtable)();
          AppClassTy::AddSystem(pAVar20,(int *)PTR_0081176c,0);
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
    uVar18 = 0xffffffff;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (4 < ~uVar18 - 1) {
      *(undefined4 *)&pAVar20[1].field_0x3650 = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar6 = *pcVar13 - 0x30;
      pAVar20->field_0x112e = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        pAVar20->field_0x112e = 1;
      }
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar20[1].field_0x3654 = *pcVar13 + -0x30;
      pcVar13 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA(&pAVar20[1].field_0x27f8,"%s%s",&pAVar20->field_0x60,pcVar13);
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
      uVar18 = 0xffffffff;
      pcVar13 = (char *)PTR_00857168->field_0008;
      do {
        pcVar15 = pcVar13;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar15 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &pAVar20[1].field_0x2c08;
      pcVar13 = pcVar15 + -uVar18;
      pcVar15 = puVar1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_006b60b0(puVar1,puVar1);
      pcVar13 = &pAVar20[1].field_0x2c08;
      FUN_006c2980(pcVar13,pcVar13);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      if (iVar8 != -2) {
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20->field_0x60;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = &pAVar20[1].field_0x27f8;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20->field_0x7bd;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_006b8280(&pAVar20[1].field_0x27f8,&pAVar20[1].field_0x27f8);
        uVar18 = 0xffffffff;
        pcVar13 = PTR_DAT_0079b050;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20[1].field_0x2c08;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &pAVar20[1].field_0x27f8;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = &pAVar20[1].field_0x2c08;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar13 = &DAT_007ca0b8;
        do {
          pcVar15 = pcVar13;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar15 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar13 = &pAVar20[1].field_0x2c08;
        do {
          pcVar22 = pcVar13;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar22;
        } while (cVar3 != '\0');
        pcVar13 = pcVar15 + -uVar18;
        pcVar15 = pcVar22 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        hFile = CreateFileA(&pAVar20[1].field_0x2c08,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar10 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar10 != 0xffffffff)) {
          WriteFile(hFile,&pAVar20->field_0x1134,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)&pAVar20->field_0x1181 = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (PTR_00857168->field_0008 != 0) {
      wsprintfA(&pAVar20[1].field_0x27f8,"%s%s",&pAVar20->field_0x60,PTR_00857168->field_0008
               );
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar8 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0);
      pAVar20 = local_c;
      if (iVar8 == 0) {
        pcVar12 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                     (0x345,&local_c[1].field_0x27f8,2,0,0);
        local_8 = &pAVar20->field_0x1196;
        cMf32::RecGet(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)&pAVar20->field_0x119a = 0x8f000805;
        cMf32::RecPut(pcVar12,0,PTR_s_DESCRIPTOR_0079b080,&pAVar20->field_0x1196,0x1999,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(this_00,pcVar12);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException
                (-0x5001fff4,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x1e5);
    }
  }
  if ((pAVar20->field_0xe26 == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  (*pAVar20->vtable->vfunc_18)();
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

