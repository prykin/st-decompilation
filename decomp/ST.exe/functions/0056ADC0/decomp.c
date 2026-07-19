
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
  undefined3 extraout_var;
  HWND hWnd;
  uint *puVar9;
  DWORD DVar10;
  cMf32 *pcVar11;
  HANDLE hFile;
  char *pcVar12;
  StartSystemTy *pSVar13;
  LPCSTR pCVar14;
  LPCSTR pCVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  cMf32 *this_00;
  cMf32 *this_01;
  STAppC *pSVar20;
  undefined4 unaff_ESI;
  char *pcVar21;
  void *unaff_EDI;
  WNDCLASSA *pWVar22;
  char *pcVar23;
  undefined4 *puVar24;
  void *pvVar25;
  undefined *puVar26;
  UINT UVar27;
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
  
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_30 = iVar8;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    (*local_c->vtable->DoneApp)(local_c);
    switch(iVar8) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar27 = 0;
      pCVar14 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar15 = (LPCSTR)FUN_006b0140(0x264b,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar15,pCVar14,UVar27);
      break;
    default:
      iVar16 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar8,&DAT_007a4ccc,
                                  s_STAppC__InitApp_007ca0a4);
      if (iVar16 != 0) {
        pcVar4 = (code *)swi(3);
        uVar17 = (*pcVar4)();
        return uVar17;
      }
      break;
    case -0x5001fff3:
      UVar27 = 0;
      pCVar14 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar15 = (LPCSTR)FUN_006b0140(0x264c,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar15,pCVar14,UVar27);
    }
    RaiseInternalException(iVar8,0,s_E____titans_tapp_cpp_007ca0c8,0x2cc);
    return 0;
  }
  bVar5 = thunk_FUN_0056a5c0();
  if (CONCAT31(extraout_var,bVar5) != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA(s_STWindowClass_007c9e3c,(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x13e);
  }
  AppClassTy::InitApp((AppClassTy *)local_c,param_1);
  pWVar22 = &local_6c;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    pWVar22->style = 0;
    pWVar22 = (WNDCLASSA *)&pWVar22->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  DAT_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = (WNDPROC)&LAB_0040251d;
  local_6c.hInstance = param_1;
  local_6c.hbrBackground = CreateSolidBrush(0);
  local_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_6c.lpszClassName = s_STWindowClass_007c9e3c;
  AVar7 = RegisterClassA(&local_6c);
  if (AVar7 == 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x14e);
  }
  DAT_00806748 = CreateWindowExA(0,s_STWindowClass_007c9e3c,s_Submarine_Titans_007c9e4c,0x80000000,0
                                 ,0,DAT_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,param_1,
                                 (LPVOID)0x0);
  if (DAT_00806748 == (HWND)0x0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x152);
  }
  DAT_00856d78 = DAT_00806748;
  ShowWindow(DAT_00806748,param_4);
  UpdateWindow(DAT_00806748);
  local_34 = (undefined4 *)&local_c->field_0x38;
  local_40 = DAT_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  iVar8 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar24 = local_34;
  if (iVar8 == 0) {
    *local_34 = 1;
    iVar8 = Library::DKW::SND::FUN_006b7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar8 != 0) {
      *puVar24 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *local_34 = 0;
  }
  iVar8 = thunk_FUN_00571e40(&local_c->field_0x38,1);
  if (iVar8 == 0) {
    RaiseInternalException(-0x5001fff6,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar8 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar20 = local_c;
  if (iVar8 == 0) {
    puVar1 = &local_c->field_0x60;
    puVar2 = &local_c[1].field_0x2e1c;
    wsprintfA(puVar2,s__s_s_s_007c6edc,puVar1,PTR_s_SYSTEM__0079b030,s_INTER_007ca0c0);
    DAT_00806780 = FUN_006f0ec0(0x345,puVar2,0,0,0);
    DAT_00806784 = FUN_007097c0((int)DAT_00806780);
    wsprintfA(puVar2,&DAT_007c6ee4,&pSVar20->field_0x470,PTR_s_TASKS_0079b048);
    DAT_00806798 = FUN_006f0ec0(0x345,puVar2,0,0,0);
    wsprintfA(puVar2,s__s_s_s_007c6edc,puVar1,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c);
    DAT_0080675c = FUN_006f0ec0(0x345,puVar2,0,0,0);
    puVar9 = thunk_FUN_0067e7e0((int)DAT_0080675c,0);
    *(uint **)&pSVar20->field_0x4ee2 = puVar9;
    puVar9 = thunk_FUN_0067e7e0((int)DAT_0080675c,1);
    *(uint **)&pSVar20->field_0x4ee6 = puVar9;
    if ((*(int *)(*(int *)&pSVar20->field_0x4ee2 + 0xc) == 0) || (puVar9[3] == 0)) {
      RaiseInternalException(-0x5001fff3,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x167);
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
  FUN_006b9b20(&DAT_0080759c,DAT_00806748,(int *)&pSVar20->field_0x115a);
  Library::DKW::DDX::FUN_006b9b40
            (DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,DAT_00806738,DAT_00806730,
             DAT_00806734,0,0,0x100);
  Library::DKW::DDX::FUN_006b1300((int *)&DAT_008075a8,(int)DAT_0080759c);
  FUN_006bbb20((int)DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  Library::DKW::DV::FUN_006c3800(&DAT_008075a0,DAT_0080759c,(int)DAT_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  iVar8 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar8 == 0) {
    FUN_006c2a80(&DAT_008075a4,DAT_0080759c);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar10 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar10);
  thunk_FUN_005672a0(&local_c->field_0x38,DAT_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar8 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar20 = local_c;
  if ((iVar8 == 0) && (iVar8 = Library::DKW::DDX::FUN_006b6d50(&DAT_00811764,0x20), iVar8 == 0)) {
    DAT_00811768 = '\x01';
    pcVar12 = &pSVar20->field_0x7bd;
    *(undefined4 *)&pSVar20->field_0x115f = *(undefined4 *)(DAT_00811764 + 0x38);
    puVar24 = (undefined4 *)pcVar12;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar24 = 0;
      puVar24 = puVar24 + 1;
    }
    pcVar21 = *(char **)(DAT_00811764 + 0x34);
    uVar18 = 0xffffffff;
    pcVar23 = pcVar21;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar3 != '\0');
    if (~uVar18 - 1 < 0x40) {
      uVar18 = 0xffffffff;
      do {
        pcVar23 = pcVar21;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar23 = pcVar21 + 1;
        cVar3 = *pcVar21;
        pcVar21 = pcVar23;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      pcVar21 = pcVar23 + -uVar18;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar12 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(pcVar12,pcVar21,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510(&pSVar20->field_0x38);
  if (((DAT_00811768 != '\0') && (pSVar20->field_0xe26 == '\0')) &&
     (iVar8 = thunk_FUN_005738d0(&pSVar20->field_0x38), iVar8 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  thunk_FUN_00576bb0();
  puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)&pSVar20->field_0x4eda = puVar9;
  puVar24 = local_2c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar5 = false;
  pcVar12 = *(char **)(DAT_00857168 + 4);
  if (pcVar12 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar24 = (undefined4 *)&stack0xfffffaa0;
      for (iVar8 = 0xc6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + 1;
      }
      wsprintfA(&pSVar20[1].field_0x2e1c,&DAT_007c6ee4,&pSVar20->field_0x164,
                PTR_s_STARTUP_VPS_0079b040);
      puVar9 = thunk_FUN_00683c70((uint *)&pSVar20[1].field_0x2e1c,&stack0xfffffaa0,&local_38,
                                  (int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (puVar9 != (uint *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        DAT_00806740 = puVar9;
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
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar18 = 0xffffffff;
      pcVar12 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar12;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar21 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar21;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &pSVar20[1].field_0x2c08;
      pcVar12 = pcVar21 + -uVar18;
      pcVar21 = puVar1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar21 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
      }
      FUN_006b60b0(puVar1,puVar1);
      pcVar12 = &pSVar20[1].field_0x2c08;
      FUN_006c2980(pcVar12,pcVar12);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      if (iVar8 != -2) {
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20->field_0x60;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = &pSVar20[1].field_0x27f8;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20->field_0x7bd;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_006b8280(&pSVar20[1].field_0x27f8,&pSVar20[1].field_0x27f8);
        uVar18 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20[1].field_0x2c08;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = &pSVar20[1].field_0x2c08;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x2c08;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        *(undefined4 *)&pSVar20->field_0x1185 = 1;
        ReadCmdPlay(pSVar20,1);
        if (*(int *)&pSVar20->field_0x1185 != 0) {
          if (*(char *)(*(int *)(DAT_00857168 + 4) + 1) != 'd') {
            bVar5 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar18 = 0xffffffff;
          pcVar12 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar21 = pcVar12;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar21;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          pcVar12 = pcVar21 + -uVar18;
          pcVar21 = &pSVar20[1].field_0x2a00;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar21 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar18 = 0xffffffff;
          pcVar12 = &pSVar20->field_0x7bd;
          do {
            pcVar21 = pcVar12;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar21;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar12 = &pSVar20[1].field_0x2a00;
          do {
            pcVar23 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar23 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar23;
          } while (cVar3 != '\0');
          pcVar12 = pcVar21 + -uVar18;
          pcVar21 = pcVar23 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar21 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar21 = pcVar21 + 1;
          }
          FUN_006b8280(&pSVar20[1].field_0x2a00,&pSVar20[1].field_0x2a00);
          uVar18 = 0xffffffff;
          pcVar12 = PTR_DAT_0079b050;
          do {
            pcVar21 = pcVar12;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar21;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar12 = &pSVar20[1].field_0x2a00;
          do {
            pcVar23 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar23 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar23;
          } while (cVar3 != '\0');
          pcVar12 = pcVar21 + -uVar18;
          pcVar21 = pcVar23 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar21 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar18 = 0xffffffff;
          pcVar12 = &pSVar20[1].field_0x2c08;
          do {
            pcVar21 = pcVar12;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar21;
          } while (cVar3 != '\0');
          uVar18 = ~uVar18;
          iVar8 = -1;
          pcVar12 = &pSVar20[1].field_0x2a00;
          do {
            pcVar23 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar23 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar23;
          } while (cVar3 != '\0');
          pcVar12 = pcVar21 + -uVar18;
          pcVar21 = pcVar23 + -1;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar21 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar21 = pcVar21 + 1;
          }
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pSVar20);
          }
          (**(code **)*DAT_0081176c)();
          AppClassTy::AddSystem((AppClassTy *)pSVar20,DAT_0081176c,0);
          local_1c = 0x60ff;
          *(undefined4 *)&pSVar20[1].field_0x2e10 = 1;
          *(undefined4 *)&pSVar20->field_0x117c = 1;
          pSVar20->field_0x1163 = 1;
          if (*(undefined1 **)(DAT_00857168 + 0xc) != (undefined1 *)0x0) {
            switch(**(undefined1 **)(DAT_00857168 + 0xc)) {
            case 0x4d:
            case 0x6d:
              pSVar20->field_0x1163 = 3;
              break;
            case 0x53:
            case 0x73:
              pSVar20->field_0x1163 = 2;
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
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    if (((4 < ~uVar18 - 1) && (*(int *)(DAT_00857168 + 8) != 0)) &&
       (*(int *)(DAT_00857168 + 0xc) != 0)) {
      local_1c = 0x6104;
      *(undefined4 *)&pSVar20[1].field_0x3650 = 1;
      local_18 = 1;
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      bVar6 = *pcVar12 - 0x30;
      pSVar20->field_0x112e = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        pSVar20->field_0x112e = 1;
      }
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)&pSVar20[1].field_0x3654 = *pcVar12 + -0x30;
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA(&pSVar20[1].field_0x10,&DAT_007a4ccc,pcVar12);
      wsprintfA(&pSVar20[1].field_0x27f8,&DAT_007c6ee4,&pSVar20->field_0x60,&pSVar20[1].field_0x10);
      uVar18 = 0xffffffff;
      pcVar12 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar12;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar21 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar21;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      pcVar12 = pcVar21 + -uVar18;
      pcVar21 = &pSVar20[1].field_0x1de5;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar21 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
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
    pcVar12 = *(char **)(DAT_00857168 + 4);
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    if (6 < ~uVar18 - 1) {
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),6);
      wsprintfA(&pSVar20[1].field_0x2a00,&DAT_007a4ccc,pcVar12);
      wsprintfA(&pSVar20[1].field_0x27f8,&DAT_007c6ee4,&pSVar20->field_0x60,&pSVar20[1].field_0x2a00
               );
      pSVar20->field_0x1195 = 1;
      DAT_00807340 = *(char *)(*(int *)(DAT_00857168 + 4) + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)&pSVar20[1].field_0x3654 = *(char *)(*(int *)(DAT_00857168 + 4) + 5) + -0x30;
      cVar3 = *(char *)(*(int *)(DAT_00857168 + 4) + 4);
      pSVar20->field_0x1180 = 8;
      pSVar20->field_0x112d = cVar3 + -0x30;
      iVar8 = thunk_FUN_0056e9e0(pSVar20,1);
      if (iVar8 == 0) {
        RaiseInternalException(local_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,600);
      }
      else {
        switch(*(undefined1 *)(*(int *)(DAT_00857168 + 4) + 2)) {
        case 0x41:
        case 0x61:
          pSVar20->field_0x1180 = 3;
          pSVar20->field_0x1163 = 2;
          break;
        case 0x42:
        case 0x62:
          pSVar20->field_0x1180 = 1;
          pSVar20->field_0x1163 = 2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          iVar8 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pSVar20 = local_c;
          if (iVar8 == 0) {
            pcVar11 = (cMf32 *)FUN_006f0ec0(0x345,&local_c[1].field_0x27f8,0,0,0);
            local_3c = &pSVar20->field_0x1196;
            cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(this_01,(undefined4 *)pcVar11);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar8,0,s_E____titans_tapp_cpp_007ca0c8,0x23e);
          }
          thunk_FUN_0056ef50((int)pSVar20);
          thunk_FUN_0056f040((int)pSVar20);
          thunk_FUN_0056ebe0((int)pSVar20);
          *(undefined4 *)&pSVar20[1].field_0x2e10 = 0;
          break;
        default:
          RaiseInternalException(local_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pSVar20->field_0x1180 = 8;
          pSVar20->field_0x1163 = 1;
          break;
        case 0x53:
        case 0x73:
          pSVar20->field_0x1180 = 2;
          pSVar20->field_0x1163 = 2;
        }
        puVar24 = (undefined4 *)&pSVar20[1].field_0x4;
        for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
        cVar3 = *(char *)(*(int *)(DAT_00857168 + 4) + 1);
        if (((cVar3 == 'G') || (cVar3 == 'D')) || (cVar3 == 'W')) {
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pSVar20);
          }
          (**(code **)*DAT_0081176c)();
          AppClassTy::AddSystem((AppClassTy *)pSVar20,DAT_0081176c,0);
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
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    if (4 < ~uVar18 - 1) {
      *(undefined4 *)&pSVar20[1].field_0x3650 = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      bVar6 = *pcVar12 - 0x30;
      pSVar20->field_0x112e = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        pSVar20->field_0x112e = 1;
      }
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)&pSVar20[1].field_0x3654 = *pcVar12 + -0x30;
      pcVar12 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA(&pSVar20[1].field_0x27f8,&DAT_007c6ee4,&pSVar20->field_0x60,pcVar12);
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
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar18 = 0xffffffff;
      pcVar12 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar12;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar21 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar21;
      } while (cVar3 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &pSVar20[1].field_0x2c08;
      pcVar12 = pcVar21 + -uVar18;
      pcVar21 = puVar1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar21 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
      }
      FUN_006b60b0(puVar1,puVar1);
      pcVar12 = &pSVar20[1].field_0x2c08;
      FUN_006c2980(pcVar12,pcVar12);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      if (iVar8 != -2) {
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20->field_0x60;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = &pSVar20[1].field_0x27f8;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20->field_0x7bd;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_006b8280(&pSVar20[1].field_0x27f8,&pSVar20[1].field_0x27f8);
        uVar18 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20[1].field_0x2c08;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &pSVar20[1].field_0x27f8;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = &pSVar20[1].field_0x2c08;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar18 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar21 = pcVar12;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar21 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar3 != '\0');
        uVar18 = ~uVar18;
        iVar8 = -1;
        pcVar12 = &pSVar20[1].field_0x2c08;
        do {
          pcVar23 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar23;
        } while (cVar3 != '\0');
        pcVar12 = pcVar21 + -uVar18;
        pcVar21 = pcVar23 + -1;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        hFile = CreateFileA(&pSVar20[1].field_0x2c08,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar10 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar10 != 0xffffffff)) {
          WriteFile(hFile,&pSVar20->field_0x1134,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)&pSVar20->field_0x1181 = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (*(int *)(DAT_00857168 + 8) != 0) {
      pvVar25 = &pSVar20[1].field_0x27f8;
      puVar26 = &DAT_007c6ee4;
      wsprintfA(pvVar25,&DAT_007c6ee4,&pSVar20->field_0x60,*(int *)(DAT_00857168 + 8));
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar8 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0,pvVar25,puVar26);
      pSVar20 = local_c;
      if (iVar8 == 0) {
        pcVar11 = (cMf32 *)FUN_006f0ec0(0x345,&local_c[1].field_0x27f8,2,0,0);
        local_8 = &pSVar20->field_0x1196;
        cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)&pSVar20->field_0x119a = 0x8f000805;
        cMf32::RecPut(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,&pSVar20->field_0x1196,0x1999,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(this_00,(undefined4 *)pcVar11);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException(-0x5001fff4,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x1e5);
    }
  }
  if ((pSVar20->field_0xe26 == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  (*pSVar20->vtable->GetMessage)(pSVar20,(int)local_2c);
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

