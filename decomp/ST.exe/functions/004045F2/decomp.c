
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  AppClassTy *pAVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  STAppC SVar5;
  ATOM AVar6;
  int iVar7;
  undefined3 extraout_var;
  HWND hWnd;
  uint *puVar8;
  DWORD DVar9;
  cMf32 *pcVar10;
  HANDLE hFile;
  char *pcVar11;
  void *pvVar12;
  LPCSTR pCVar13;
  LPCSTR pCVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  cMf32 *this_00;
  cMf32 *this_01;
  STAppC *pSVar19;
  STAppC *pSVar20;
  undefined4 unaff_ESI;
  STAppC *pSVar21;
  void *unaff_EDI;
  WNDCLASSA *pWVar22;
  char *pcVar23;
  STAppC *pSVar24;
  AppClassTy *pAVar25;
  undefined4 *puVar26;
  undefined *puVar27;
  UINT UVar28;
  InternalExceptionFrame IStack_248;
  InternalExceptionFrame IStack_204;
  InternalExceptionFrame IStack_1c0;
  InternalExceptionFrame IStack_17c;
  InternalExceptionFrame IStack_138;
  InternalExceptionFrame IStack_f4;
  InternalExceptionFrame IStack_b0;
  WNDCLASSA WStack_6c;
  DWORD DStack_44;
  HWND pHStack_40;
  AppClassTy *pAStack_3c;
  int iStack_38;
  AppClassTy *pAStack_34;
  int iStack_30;
  undefined4 auStack_2c [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  STAppC *pSStack_c;
  AppClassTy *pAStack_8;
  
  IStack_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b0;
  pSStack_c = this;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iStack_30 = iVar7;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_b0.previous;
    (**(code **)(*(int *)pSStack_c + 4))();
    switch(iVar7) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar28 = 0;
      pCVar13 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar14 = (LPCSTR)FUN_006b0140(0x264b,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar14,pCVar13,UVar28);
      break;
    default:
      iVar15 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar7,&DAT_007a4ccc,
                                  s_STAppC__InitApp_007ca0a4);
      if (iVar15 != 0) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return uVar16;
      }
      break;
    case -0x5001fff3:
      UVar28 = 0;
      pCVar13 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar14 = (LPCSTR)FUN_006b0140(0x264c,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar14,pCVar13,UVar28);
    }
    RaiseInternalException(iVar7,0,s_E____titans_tapp_cpp_007ca0c8,0x2cc);
    return 0;
  }
  bVar4 = thunk_FUN_0056a5c0();
  if (CONCAT31(extraout_var,bVar4) != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA(s_STWindowClass_007c9e3c,(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x13e);
  }
  AppClassTy::InitApp((AppClassTy *)pSStack_c,param_1);
  pWVar22 = &WStack_6c;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pWVar22->style = 0;
    pWVar22 = (WNDCLASSA *)&pWVar22->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  DAT_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  WStack_6c.lpfnWndProc = (WNDPROC)&LAB_0040251d;
  WStack_6c.hInstance = param_1;
  WStack_6c.hbrBackground = CreateSolidBrush(0);
  WStack_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  WStack_6c.lpszClassName = s_STWindowClass_007c9e3c;
  AVar6 = RegisterClassA(&WStack_6c);
  if (AVar6 == 0) {
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
  pAStack_34 = (AppClassTy *)(pSStack_c + 0x38);
  pHStack_40 = DAT_00806748;
  IStack_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_138;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_138.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar25 = pAStack_34;
  if (iVar7 == 0) {
    *(undefined4 *)pAStack_34 = 1;
    iVar7 = Library::DKW::SND::FUN_006b7920((undefined4 *)(pAStack_34 + 4),(DWORD_PTR)pHStack_40);
    if (iVar7 != 0) {
      *(undefined4 *)pAVar25 = 0;
    }
    g_currentExceptionFrame = IStack_138.previous;
  }
  else {
    g_currentExceptionFrame = IStack_138.previous;
    *(undefined4 *)pAStack_34 = 0;
  }
  iVar7 = thunk_FUN_00571e40((AppClassTy *)(pSStack_c + 0x38),1);
  if (iVar7 == 0) {
    RaiseInternalException(-0x5001fff6,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x159);
  }
  IStack_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_248;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_248.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar20 = pSStack_c;
  if (iVar7 == 0) {
    pAVar25 = (AppClassTy *)(pSStack_c + 0x60);
    pAVar1 = (AppClassTy *)(pSStack_c + 0x7d1a);
    wsprintfA((LPSTR)pAVar1,s__s_s_s_007c6edc,pAVar25,PTR_s_SYSTEM__0079b030,s_INTER_007ca0c0);
    DAT_00806780 = FUN_006f0ec0(0x345,(byte *)pAVar1,0,0,0);
    DAT_00806784 = FUN_007097c0((int)DAT_00806780);
    wsprintfA((LPSTR)pAVar1,&DAT_007c6ee4,(AppClassTy *)(pSVar20 + 0x470),PTR_s_TASKS_0079b048);
    DAT_00806798 = FUN_006f0ec0(0x345,(byte *)pAVar1,0,0,0);
    wsprintfA((LPSTR)pAVar1,s__s_s_s_007c6edc,pAVar25,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c
             );
    DAT_0080675c = FUN_006f0ec0(0x345,(byte *)pAVar1,0,0,0);
    puVar8 = thunk_FUN_0067e7e0((int)DAT_0080675c,0);
    *(uint **)(pSVar20 + 0x4ee2) = puVar8;
    puVar8 = thunk_FUN_0067e7e0((int)DAT_0080675c,1);
    *(uint **)(pSVar20 + 0x4ee6) = puVar8;
    if ((*(int *)(*(int *)(pSVar20 + 0x4ee2) + 0xc) == 0) || (puVar8[3] == 0)) {
      RaiseInternalException(-0x5001fff3,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x167);
    }
    g_currentExceptionFrame = IStack_248.previous;
  }
  else {
    g_currentExceptionFrame = IStack_248.previous;
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
  FUN_006b9b20(&DAT_0080759c,DAT_00806748,(int *)(pSVar20 + 0x115a));
  Library::DKW::DDX::FUN_006b9b40
            (DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,DAT_00806738,DAT_00806730,
             DAT_00806734,0,0,0x100);
  Library::DKW::DDX::FUN_006b1300((int *)&DAT_008075a8,(int)DAT_0080759c);
  FUN_006bbb20((int)DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  Library::DKW::DV::FUN_006c3800(&DAT_008075a0,DAT_0080759c,(int)DAT_00856d78,0x2660);
  IStack_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_1c0;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_1c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 == 0) {
    FUN_006c2a80(&DAT_008075a4,DAT_0080759c);
  }
  g_currentExceptionFrame = IStack_1c0.previous;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar9 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar9);
  thunk_FUN_005672a0((AppClassTy *)(pSStack_c + 0x38),DAT_00856d78);
  IStack_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_f4;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar20 = pSStack_c;
  if ((iVar7 == 0) && (iVar7 = Library::DKW::DDX::FUN_006b6d50(&DAT_00811764,0x20), iVar7 == 0)) {
    DAT_00811768 = '\x01';
    pSVar19 = pSVar20 + 0x7bd;
    *(undefined4 *)(pSVar20 + 0x115f) = *(undefined4 *)(DAT_00811764 + 0x38);
    pSVar21 = pSVar19;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar21 = 0;
      pSVar21 = pSVar21 + 4;
    }
    pcVar11 = *(char **)(DAT_00811764 + 0x34);
    uVar17 = 0xffffffff;
    pcVar23 = pcVar11;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar2 != '\0');
    if (~uVar17 - 1 < 0x40) {
      uVar17 = 0xffffffff;
      do {
        pcVar23 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar23 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar23;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pSVar21 = (STAppC *)(pcVar23 + -uVar17);
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pSVar19 = *(undefined4 *)pSVar21;
        pSVar21 = pSVar21 + 4;
        pSVar19 = pSVar19 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pSVar19 = *pSVar21;
        pSVar21 = pSVar21 + 1;
        pSVar19 = pSVar19 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy((char *)pSVar19,pcVar11,0x3f);
    }
  }
  g_currentExceptionFrame = IStack_f4.previous;
  thunk_FUN_00572510(pSVar20 + 0x38);
  if (((DAT_00811768 != '\0') && (pSVar20[0xe26] == (STAppC)0x0)) &&
     (iVar7 = thunk_FUN_005738d0(pSVar20 + 0x38), iVar7 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  thunk_FUN_00576bb0();
  puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)(pSVar20 + 0x4eda) = puVar8;
  puVar26 = auStack_2c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar26 = 0;
    puVar26 = puVar26 + 1;
  }
  if (DAT_00811768 != '\0') {
    iStack_1c = 0x6102;
    goto LAB_0056c034;
  }
  iStack_1c = 0x6123;
  bVar4 = false;
  pcVar11 = *(char **)(DAT_00857168 + 4);
  if (pcVar11 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar26 = (undefined4 *)&stack0xfffffaa0;
      for (iVar7 = 0xc6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + 1;
      }
      wsprintfA((LPSTR)(pSVar20 + 0x7d1a),&DAT_007c6ee4,pSVar20 + 0x164,PTR_s_STARTUP_VPS_0079b040);
      puVar8 = thunk_FUN_00683c70((uint *)(pSVar20 + 0x7d1a),&stack0xfffffaa0,&iStack_38,(int *)0x0,
                                  (undefined *)0x0);
      if ((iStack_38 == 0x40) && (puVar8 != (uint *)0x0)) {
        iStack_1c = 0x7101;
        uStack_18 = 1;
        DAT_00806740 = puVar8;
      }
    }
    goto LAB_0056c034;
  }
  switch(pcVar11[1]) {
  case 'A':
  case 'a':
    iStack_1c = 0x611f;
    uStack_18 = 3;
    break;
  case 'B':
  case 'b':
    iStack_1c = 0x611f;
    uStack_18 = 1;
    break;
  case 'C':
  case 'c':
    iStack_1c = 0x6122;
    uStack_18 = 0;
    break;
  case 'D':
  case 'd':
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar23 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar23 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar23;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pSVar19 = pSVar20 + 0x7b06;
      pSVar21 = (STAppC *)(pcVar23 + -uVar17);
      pSVar24 = pSVar19;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pSVar24 = *(undefined4 *)pSVar21;
        pSVar21 = pSVar21 + 4;
        pSVar24 = pSVar24 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pSVar24 = *pSVar21;
        pSVar21 = pSVar21 + 1;
        pSVar24 = pSVar24 + 1;
      }
      FUN_006b60b0((char *)pSVar19,(char *)pSVar19);
      pSVar19 = pSVar20 + 0x7b06;
      FUN_006c2980((char *)pSVar19,(char *)pSVar19);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        SVar5 = *pSVar19;
        pSVar19 = pSVar19 + 1;
      } while (SVar5 != (STAppC)0x0);
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x60;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar20 + 0x76f6;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x7bd;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar24 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar24 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar24;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar24 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        FUN_006b8280((char *)(pSVar20 + 0x76f6),(char *)(pSVar20 + 0x76f6));
        uVar17 = 0xffffffff;
        pcVar11 = PTR_DAT_0079b050;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x7b06;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar24 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar24 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar24;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar24 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar20 + 0x7b06;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = &DAT_007ca0b8;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x7b06;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        *(undefined4 *)(pSVar20 + 0x1185) = 1;
        ReadCmdPlay(pSVar20,1);
        if (*(int *)(pSVar20 + 0x1185) != 0) {
          if (*(char *)(*(int *)(DAT_00857168 + 4) + 1) != 'd') {
            bVar4 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar17 = 0xffffffff;
          pcVar11 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar23 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar23 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar23;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          pSVar19 = (STAppC *)(pcVar23 + -uVar17);
          pSVar21 = pSVar20 + 0x78fe;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
            pSVar19 = pSVar19 + 4;
            pSVar21 = pSVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pSVar21 = *pSVar19;
            pSVar19 = pSVar19 + 1;
            pSVar21 = pSVar21 + 1;
          }
          uVar17 = 0xffffffff;
          pSVar19 = pSVar20 + 0x7bd;
          do {
            pSVar21 = pSVar19;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pSVar21 = pSVar19 + 1;
            SVar5 = *pSVar19;
            pSVar19 = pSVar21;
          } while (SVar5 != (STAppC)0x0);
          uVar17 = ~uVar17;
          iVar7 = -1;
          pSVar19 = pSVar20 + 0x78fe;
          do {
            pSVar24 = pSVar19;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pSVar24 = pSVar19 + 1;
            SVar5 = *pSVar19;
            pSVar19 = pSVar24;
          } while (SVar5 != (STAppC)0x0);
          pSVar19 = pSVar21 + -uVar17;
          pSVar21 = pSVar24 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
            pSVar19 = pSVar19 + 4;
            pSVar21 = pSVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pSVar21 = *pSVar19;
            pSVar19 = pSVar19 + 1;
            pSVar21 = pSVar21 + 1;
          }
          FUN_006b8280((char *)(pSVar20 + 0x78fe),(char *)(pSVar20 + 0x78fe));
          uVar17 = 0xffffffff;
          pcVar11 = PTR_DAT_0079b050;
          do {
            pcVar23 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar23 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar23;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pSVar19 = pSVar20 + 0x78fe;
          do {
            pSVar21 = pSVar19;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pSVar21 = pSVar19 + 1;
            SVar5 = *pSVar19;
            pSVar19 = pSVar21;
          } while (SVar5 != (STAppC)0x0);
          pSVar19 = (STAppC *)(pcVar23 + -uVar17);
          pSVar21 = pSVar21 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
            pSVar19 = pSVar19 + 4;
            pSVar21 = pSVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pSVar21 = *pSVar19;
            pSVar19 = pSVar19 + 1;
            pSVar21 = pSVar21 + 1;
          }
          uVar17 = 0xffffffff;
          pSVar19 = pSVar20 + 0x7b06;
          do {
            pSVar21 = pSVar19;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pSVar21 = pSVar19 + 1;
            SVar5 = *pSVar19;
            pSVar19 = pSVar21;
          } while (SVar5 != (STAppC)0x0);
          uVar17 = ~uVar17;
          iVar7 = -1;
          pSVar19 = pSVar20 + 0x78fe;
          do {
            pSVar24 = pSVar19;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pSVar24 = pSVar19 + 1;
            SVar5 = *pSVar19;
            pSVar19 = pSVar24;
          } while (SVar5 != (STAppC)0x0);
          pSVar19 = pSVar21 + -uVar17;
          pSVar21 = pSVar24 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
            pSVar19 = pSVar19 + 4;
            pSVar21 = pSVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pSVar21 = *pSVar19;
            pSVar19 = pSVar19 + 1;
            pSVar21 = pSVar21 + 1;
          }
          pvVar12 = (void *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pvVar12 != (void *)0x0) {
            thunk_FUN_005da610(pvVar12,pSVar20);
          }
          (**(code **)*DAT_0081176c)();
          AppClassTy::AddSystem((AppClassTy *)pSVar20,DAT_0081176c,0);
          iStack_1c = 0x60ff;
          *(undefined4 *)(pSVar20 + 0x7d0e) = 1;
          *(undefined4 *)(pSVar20 + 0x117c) = 1;
          pSVar20[0x1163] = (STAppC)0x1;
          if (*(undefined1 **)(DAT_00857168 + 0xc) != (undefined1 *)0x0) {
            switch(**(undefined1 **)(DAT_00857168 + 0xc)) {
            case 0x4d:
            case 0x6d:
              pSVar20[0x1163] = (STAppC)0x3;
              break;
            case 0x53:
            case 0x73:
              pSVar20[0x1163] = (STAppC)0x2;
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
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if (((4 < ~uVar17 - 1) && (*(int *)(DAT_00857168 + 8) != 0)) &&
       (*(int *)(DAT_00857168 + 0xc) != 0)) {
      iStack_1c = 0x6104;
      *(undefined4 *)(pSVar20 + 0x854e) = 1;
      uStack_18 = 1;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      SVar5 = (STAppC)(*pcVar11 - 0x30);
      pSVar20[0x112e] = SVar5;
      if ((SVar5 == (STAppC)0x0) || (3 < (byte)SVar5)) {
        pSVar20[0x112e] = (STAppC)0x1;
      }
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)(pSVar20 + 0x8552) = *pcVar11 + -0x30;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)(pSVar20 + 0x4f0e),&DAT_007a4ccc,pcVar11);
      wsprintfA((LPSTR)(pSVar20 + 0x76f6),&DAT_007c6ee4,pSVar20 + 0x60,pSVar20 + 0x4f0e);
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar23 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar23 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar23;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pSVar19 = (STAppC *)(pcVar23 + -uVar17);
      pSVar21 = pSVar20 + 0x6ce3;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
        pSVar19 = pSVar19 + 4;
        pSVar21 = pSVar21 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pSVar21 = *pSVar19;
        pSVar19 = pSVar19 + 1;
        pSVar21 = pSVar21 + 1;
      }
    }
    break;
  case 'F':
  case 'f':
    iStack_1c = 0x610a;
    break;
  case 'G':
  case 'g':
switchD_0056b4ce_caseD_47:
    uVar17 = 0xffffffff;
    pcVar11 = *(char **)(DAT_00857168 + 4);
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if (6 < ~uVar17 - 1) {
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),6);
      wsprintfA((LPSTR)(pSVar20 + 0x78fe),&DAT_007a4ccc,pcVar11);
      wsprintfA((LPSTR)(pSVar20 + 0x76f6),&DAT_007c6ee4,pSVar20 + 0x60,pSVar20 + 0x78fe);
      pSVar20[0x1195] = (STAppC)0x1;
      DAT_00807340 = *(char *)(*(int *)(DAT_00857168 + 4) + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)(pSVar20 + 0x8552) = *(char *)(*(int *)(DAT_00857168 + 4) + 5) + -0x30;
      cVar2 = *(char *)(*(int *)(DAT_00857168 + 4) + 4);
      pSVar20[0x1180] = (STAppC)0x8;
      pSVar20[0x112d] = (STAppC)(cVar2 + -0x30);
      iVar7 = thunk_FUN_0056e9e0(pSVar20,1);
      if (iVar7 == 0) {
        RaiseInternalException(iStack_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,600);
      }
      else {
        switch(*(undefined1 *)(*(int *)(DAT_00857168 + 4) + 2)) {
        case 0x41:
        case 0x61:
          pSVar20[0x1180] = (STAppC)0x3;
          pSVar20[0x1163] = (STAppC)0x2;
          break;
        case 0x42:
        case 0x62:
          pSVar20[0x1180] = (STAppC)0x1;
          pSVar20[0x1163] = (STAppC)0x2;
          IStack_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &IStack_204;
          iVar7 = Library::MSVCRT::__setjmp3(IStack_204.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pSVar20 = pSStack_c;
          if (iVar7 == 0) {
            pcVar10 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x76f6),0,0,0);
            pAStack_3c = (AppClassTy *)(pSVar20 + 0x1196);
            cMf32::RecGet(pcVar10,0,PTR_s_DESCRIPTOR_0079b080,(int *)&pAStack_3c,0);
            cMf32::delete(this_01,(undefined4 *)pcVar10);
            g_currentExceptionFrame = IStack_204.previous;
          }
          else {
            g_currentExceptionFrame = IStack_204.previous;
            RaiseInternalException(iVar7,0,s_E____titans_tapp_cpp_007ca0c8,0x23e);
          }
          thunk_FUN_0056ef50((int)pSVar20);
          thunk_FUN_0056f040((int)pSVar20);
          thunk_FUN_0056ebe0((int)pSVar20);
          *(undefined4 *)(pSVar20 + 0x7d0e) = 0;
          break;
        default:
          RaiseInternalException(iStack_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pSVar20[0x1180] = (STAppC)0x8;
          pSVar20[0x1163] = (STAppC)0x1;
          break;
        case 0x53:
        case 0x73:
          pSVar20[0x1180] = (STAppC)0x2;
          pSVar20[0x1163] = (STAppC)0x2;
        }
        pAVar25 = (AppClassTy *)(pSVar20 + 0x4f02);
        for (iVar7 = 0x9fc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pAVar25 = 0;
          pAVar25 = pAVar25 + 4;
        }
        cVar2 = *(char *)(*(int *)(DAT_00857168 + 4) + 1);
        if (((cVar2 == 'G') || (cVar2 == 'D')) || (cVar2 == 'W')) {
          pvVar12 = (void *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pvVar12 != (void *)0x0) {
            thunk_FUN_005da610(pvVar12,pSVar20);
          }
          (**(code **)*DAT_0081176c)();
          AppClassTy::AddSystem((AppClassTy *)pSVar20,DAT_0081176c,0);
          iStack_1c = 0x60ff;
        }
        else {
          iStack_1c = 0x6104;
          uStack_18 = 0;
        }
      }
    }
    break;
  case 'L':
  case 'l':
    iStack_1c = 0x611f;
    uStack_18 = 9;
    break;
  case 'N':
  case 'n':
    iStack_1c = 0x6105;
    uStack_18 = 0;
    uStack_14 = 1;
    break;
  case 'P':
  case 'p':
    uVar17 = 0xffffffff;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar17 - 1) {
      *(undefined4 *)(pSVar20 + 0x854e) = 1;
      iStack_1c = 0x6104;
      uStack_18 = 0;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      SVar5 = (STAppC)(*pcVar11 - 0x30);
      pSVar20[0x112e] = SVar5;
      if ((SVar5 == (STAppC)0x0) || (3 < (byte)SVar5)) {
        pSVar20[0x112e] = (STAppC)0x1;
      }
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)(pSVar20 + 0x8552) = *pcVar11 + -0x30;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)(pSVar20 + 0x76f6),&DAT_007c6ee4,pSVar20 + 0x60,pcVar11);
    }
    break;
  case 'R':
  case 'r':
    iStack_1c = 0x6103;
    uStack_18 = 1;
    break;
  case 'S':
  case 's':
    iStack_1c = 0x611f;
    uStack_18 = 2;
    break;
  case 'T':
  case 't':
    iStack_1c = 0x6124;
    break;
  case 'W':
  case 'w':
switchD_0056b4ce_caseD_57:
    if (bVar4) goto switchD_0056b4ce_caseD_47;
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar23 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar23 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar23;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pSVar19 = pSVar20 + 0x7b06;
      pSVar21 = (STAppC *)(pcVar23 + -uVar17);
      pSVar24 = pSVar19;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pSVar24 = *(undefined4 *)pSVar21;
        pSVar21 = pSVar21 + 4;
        pSVar24 = pSVar24 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pSVar24 = *pSVar21;
        pSVar21 = pSVar21 + 1;
        pSVar24 = pSVar24 + 1;
      }
      FUN_006b60b0((char *)pSVar19,(char *)pSVar19);
      pSVar19 = pSVar20 + 0x7b06;
      FUN_006c2980((char *)pSVar19,(char *)pSVar19);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        SVar5 = *pSVar19;
        pSVar19 = pSVar19 + 1;
      } while (SVar5 != (STAppC)0x0);
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x60;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar20 + 0x76f6;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x7bd;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar24 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar24 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar24;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar24 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        FUN_006b8280((char *)(pSVar20 + 0x76f6),(char *)(pSVar20 + 0x76f6));
        uVar17 = 0xffffffff;
        pcVar11 = PTR_DAT_0079b050;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x7b06;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar24 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar24 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar24;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar24 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pSVar19 = pSVar20 + 0x76f6;
        do {
          pSVar21 = pSVar19;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        uVar17 = ~uVar17;
        pSVar19 = pSVar21 + -uVar17;
        pSVar21 = pSVar20 + 0x7b06;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = &DAT_007ca0b8;
        do {
          pcVar23 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pSVar19 = pSVar20 + 0x7b06;
        do {
          pSVar21 = pSVar19;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pSVar21 = pSVar19 + 1;
          SVar5 = *pSVar19;
          pSVar19 = pSVar21;
        } while (SVar5 != (STAppC)0x0);
        pSVar19 = (STAppC *)(pcVar23 + -uVar17);
        pSVar21 = pSVar21 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pSVar21 = *(undefined4 *)pSVar19;
          pSVar19 = pSVar19 + 4;
          pSVar21 = pSVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pSVar21 = *pSVar19;
          pSVar19 = pSVar19 + 1;
          pSVar21 = pSVar21 + 1;
        }
        hFile = CreateFileA((LPCSTR)(pSVar20 + 0x7b06),0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,
                            0x80,(HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar9 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar9 != 0xffffffff)) {
          WriteFile(hFile,pSVar20 + 0x1134,4,&DStack_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)(pSVar20 + 0x1181) = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (*(int *)(DAT_00857168 + 8) != 0) {
      pSVar19 = pSVar20 + 0x76f6;
      puVar27 = &DAT_007c6ee4;
      wsprintfA((LPSTR)pSVar19,&DAT_007c6ee4,pSVar20 + 0x60,*(int *)(DAT_00857168 + 8));
      IStack_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_17c;
      iVar7 = Library::MSVCRT::__setjmp3(IStack_17c.jumpBuffer,0,pSVar19,puVar27);
      pSVar20 = pSStack_c;
      if (iVar7 == 0) {
        pcVar10 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x76f6),2,0,0);
        pAStack_8 = (AppClassTy *)(pSVar20 + 0x1196);
        cMf32::RecGet(pcVar10,0,PTR_s_DESCRIPTOR_0079b080,(int *)&pAStack_8,0);
        *(undefined4 *)(pSVar20 + 0x119a) = 0x8f000805;
        cMf32::RecPut(pcVar10,0,PTR_s_DESCRIPTOR_0079b080,(byte *)(pSVar20 + 0x1196),0x1999,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(this_00,(undefined4 *)pcVar10);
      }
      g_currentExceptionFrame = IStack_17c.previous;
      RaiseInternalException(-0x5001fff4,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x1e5);
    }
  }
  if ((*(AppClassTy *)(pSVar20 + 0xe26) == (AppClassTy)0x0) && (iStack_1c != 0x6104)) {
    iStack_1c = 0x6123;
  }
LAB_0056c034:
  (**(code **)(*(int *)pSVar20 + 0x18))();
  g_currentExceptionFrame = IStack_b0.previous;
  return 1;
}

