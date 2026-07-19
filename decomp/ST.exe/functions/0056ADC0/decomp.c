
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  STAppC SVar4;
  ATOM AVar5;
  int iVar6;
  undefined3 extraout_var;
  HWND hWnd;
  uint *puVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  HANDLE hFile;
  char *pcVar10;
  void *pvVar11;
  LPCSTR pCVar12;
  LPCSTR pCVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  cMf32 *this_00;
  cMf32 *this_01;
  STAppC *pSVar18;
  STAppC *pSVar19;
  undefined4 unaff_ESI;
  STAppC *pSVar20;
  void *unaff_EDI;
  WNDCLASSA *pWVar21;
  char *pcVar22;
  STAppC *pSVar23;
  undefined *puVar24;
  UINT UVar25;
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
  STAppC *local_3c;
  int local_38;
  STAppC *local_34;
  int local_30;
  undefined4 local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  STAppC *local_c;
  STAppC *local_8;
  
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  iVar6 = __setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_30 = iVar6;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    (**(code **)(*(int *)local_c + 4))();
    switch(iVar6) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar25 = 0;
      pCVar12 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar13 = (LPCSTR)FUN_006b0140(0x264b,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar13,pCVar12,UVar25);
      break;
    default:
      iVar14 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar6,&DAT_007a4ccc,
                                  s_STAppC__InitApp_007ca0a4);
      if (iVar14 != 0) {
        pcVar2 = (code *)swi(3);
        uVar15 = (*pcVar2)();
        return uVar15;
      }
      break;
    case -0x5001fff3:
      UVar25 = 0;
      pCVar12 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar13 = (LPCSTR)FUN_006b0140(0x264c,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar13,pCVar12,UVar25);
    }
    RaiseInternalException(iVar6,0,s_E____titans_tapp_cpp_007ca0c8,0x2cc);
    return 0;
  }
  bVar3 = thunk_FUN_0056a5c0();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    InterlockedDecrement(&DAT_0085e000);
    hWnd = FindWindowA(s_STWindowClass_007c9e3c,(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SetForegroundWindow(hWnd);
      ShowWindow(hWnd,9);
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x13e);
  }
  FUN_006e3510(param_1);
  pWVar21 = &local_6c;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pWVar21->style = 0;
    pWVar21 = (WNDCLASSA *)&pWVar21->lpfnWndProc;
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
  AVar5 = RegisterClassA(&local_6c);
  if (AVar5 == 0) {
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
  local_34 = local_c + 0x38;
  local_40 = DAT_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  iVar6 = __setjmp3(local_138.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar19 = local_34;
  if (iVar6 == 0) {
    *(int *)local_34 = 1;
    iVar6 = FUN_006b7920((undefined4 *)(local_34 + 4),(DWORD_PTR)local_40);
    if (iVar6 != 0) {
      *(int *)pSVar19 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *(int *)local_34 = 0;
  }
  iVar6 = thunk_FUN_00571e40(local_c + 0x38,1);
  if (iVar6 == 0) {
    RaiseInternalException(-0x5001fff6,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar6 = __setjmp3(local_248.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar19 = local_c;
  if (iVar6 == 0) {
    pSVar18 = local_c + 0x60;
    pSVar20 = local_c + 0x7d1a;
    wsprintfA((LPSTR)pSVar20,s__s_s_s_007c6edc,pSVar18,PTR_s_SYSTEM__0079b030,s_INTER_007ca0c0);
    DAT_00806780 = FUN_006f0ec0(0x345,(byte *)pSVar20,0,0,0);
    DAT_00806784 = FUN_007097c0((int)DAT_00806780);
    wsprintfA((LPSTR)pSVar20,&DAT_007c6ee4,pSVar19 + 0x470,PTR_s_TASKS_0079b048);
    DAT_00806798 = FUN_006f0ec0(0x345,(byte *)pSVar20,0,0,0);
    wsprintfA((LPSTR)pSVar20,s__s_s_s_007c6edc,pSVar18,PTR_s_SYSTEM__0079b030,
              PTR_s_STRATEGS_0079b04c);
    DAT_0080675c = FUN_006f0ec0(0x345,(byte *)pSVar20,0,0,0);
    puVar7 = thunk_FUN_0067e7e0((int)DAT_0080675c,0);
    *(uint **)(pSVar19 + 0x4ee2) = puVar7;
    puVar7 = thunk_FUN_0067e7e0((int)DAT_0080675c,1);
    *(uint **)(pSVar19 + 0x4ee6) = puVar7;
    if ((*(int *)(*(int *)(pSVar19 + 0x4ee2) + 0xc) == 0) || (puVar7[3] == 0)) {
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
  FUN_006b9b20(&DAT_0080759c,DAT_00806748,(int *)(pSVar19 + 0x115a));
  FUN_006b9b40(DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,DAT_00806738,DAT_00806730,
               DAT_00806734,0,0,0x100);
  FUN_006b1300((int *)&DAT_008075a8,(int)DAT_0080759c);
  FUN_006bbb20((int)DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  FUN_006c3800(&DAT_008075a0,DAT_0080759c,(int)DAT_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  iVar6 = __setjmp3(local_1c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 == 0) {
    FUN_006c2a80(&DAT_008075a4,DAT_0080759c);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar8 = timeGetTime();
  FUN_0072e6b0(DVar8);
  thunk_FUN_005672a0(local_c + 0x38,DAT_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar6 = __setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar19 = local_c;
  if ((iVar6 == 0) && (iVar6 = FUN_006b6d50(&DAT_00811764,0x20), iVar6 == 0)) {
    DAT_00811768 = '\x01';
    pSVar18 = pSVar19 + 0x7bd;
    *(undefined4 *)(pSVar19 + 0x115f) = *(undefined4 *)(DAT_00811764 + 0x38);
    pSVar20 = pSVar18;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar20 = 0;
      pSVar20 = pSVar20 + 4;
    }
    pcVar10 = *(char **)(DAT_00811764 + 0x34);
    uVar16 = 0xffffffff;
    pcVar22 = pcVar10;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar1 != '\0');
    if (~uVar16 - 1 < 0x40) {
      uVar16 = 0xffffffff;
      do {
        pcVar22 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar22 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pSVar20 = (STAppC *)(pcVar22 + -uVar16);
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pSVar18 = *(undefined4 *)pSVar20;
        pSVar20 = pSVar20 + 4;
        pSVar18 = pSVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pSVar18 = *pSVar20;
        pSVar20 = pSVar20 + 1;
        pSVar18 = pSVar18 + 1;
      }
    }
    else {
      _strncpy((char *)pSVar18,pcVar10,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510(pSVar19 + 0x38);
  if (((DAT_00811768 != '\0') && (pSVar19[0xe26] == (STAppC)0x0)) &&
     (iVar6 = thunk_FUN_005738d0(pSVar19 + 0x38), iVar6 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  thunk_FUN_00576bb0();
  puVar7 = FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)(pSVar19 + 0x4eda) = puVar7;
  puVar9 = local_2c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto LAB_0056c034;
  }
  local_1c = 0x6123;
  bVar3 = false;
  pcVar10 = *(char **)(DAT_00857168 + 4);
  if (pcVar10 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar9 = (undefined4 *)&stack0xfffffaa0;
      for (iVar6 = 0xc6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      wsprintfA((LPSTR)(pSVar19 + 0x7d1a),&DAT_007c6ee4,pSVar19 + 0x164,PTR_s_STARTUP_VPS_0079b040);
      puVar7 = thunk_FUN_00683c70((uint *)(pSVar19 + 0x7d1a),&stack0xfffffaa0,&local_38,(int *)0x0,
                                  (undefined *)0x0);
      if ((local_38 == 0x40) && (puVar7 != (uint *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        DAT_00806740 = puVar7;
      }
    }
    goto LAB_0056c034;
  }
  switch(pcVar10[1]) {
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
      uVar16 = 0xffffffff;
      pcVar10 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar22 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar22 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pSVar18 = pSVar19 + 0x7b06;
      pSVar20 = (STAppC *)(pcVar22 + -uVar16);
      pSVar23 = pSVar18;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pSVar23 = *(undefined4 *)pSVar20;
        pSVar20 = pSVar20 + 4;
        pSVar23 = pSVar23 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pSVar23 = *pSVar20;
        pSVar20 = pSVar20 + 1;
        pSVar23 = pSVar23 + 1;
      }
      FUN_006b60b0((char *)pSVar18,(char *)pSVar18);
      pSVar18 = pSVar19 + 0x7b06;
      FUN_006c2980((char *)pSVar18,(char *)pSVar18);
      iVar6 = -1;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        SVar4 = *pSVar18;
        pSVar18 = pSVar18 + 1;
      } while (SVar4 != (STAppC)0x0);
      if (iVar6 != -2) {
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x60;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar19 + 0x76f6;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar10 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x7bd;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar23 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar23 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar23;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar23 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        FUN_006b8280((char *)(pSVar19 + 0x76f6),(char *)(pSVar19 + 0x76f6));
        uVar16 = 0xffffffff;
        pcVar10 = PTR_DAT_0079b050;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x7b06;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar23 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar23 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar23;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar23 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar19 + 0x7b06;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar10 = &DAT_007ca0b8;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x7b06;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        *(undefined4 *)(pSVar19 + 0x1185) = 1;
        ReadCmdPlay(pSVar19,1);
        if (*(int *)(pSVar19 + 0x1185) != 0) {
          if (*(char *)(*(int *)(DAT_00857168 + 4) + 1) != 'd') {
            bVar3 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar16 = 0xffffffff;
          pcVar10 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar22 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar22 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          pSVar18 = (STAppC *)(pcVar22 + -uVar16);
          pSVar20 = pSVar19 + 0x78fe;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pSVar20 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar20 = pSVar20 + 1;
          }
          uVar16 = 0xffffffff;
          pSVar18 = pSVar19 + 0x7bd;
          do {
            pSVar20 = pSVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pSVar20 = pSVar18 + 1;
            SVar4 = *pSVar18;
            pSVar18 = pSVar20;
          } while (SVar4 != (STAppC)0x0);
          uVar16 = ~uVar16;
          iVar6 = -1;
          pSVar18 = pSVar19 + 0x78fe;
          do {
            pSVar23 = pSVar18;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pSVar23 = pSVar18 + 1;
            SVar4 = *pSVar18;
            pSVar18 = pSVar23;
          } while (SVar4 != (STAppC)0x0);
          pSVar18 = pSVar20 + -uVar16;
          pSVar20 = pSVar23 + -1;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pSVar20 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar20 = pSVar20 + 1;
          }
          FUN_006b8280((char *)(pSVar19 + 0x78fe),(char *)(pSVar19 + 0x78fe));
          uVar16 = 0xffffffff;
          pcVar10 = PTR_DAT_0079b050;
          do {
            pcVar22 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar22 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          iVar6 = -1;
          pSVar18 = pSVar19 + 0x78fe;
          do {
            pSVar20 = pSVar18;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pSVar20 = pSVar18 + 1;
            SVar4 = *pSVar18;
            pSVar18 = pSVar20;
          } while (SVar4 != (STAppC)0x0);
          pSVar18 = (STAppC *)(pcVar22 + -uVar16);
          pSVar20 = pSVar20 + -1;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pSVar20 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar20 = pSVar20 + 1;
          }
          uVar16 = 0xffffffff;
          pSVar18 = pSVar19 + 0x7b06;
          do {
            pSVar20 = pSVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pSVar20 = pSVar18 + 1;
            SVar4 = *pSVar18;
            pSVar18 = pSVar20;
          } while (SVar4 != (STAppC)0x0);
          uVar16 = ~uVar16;
          iVar6 = -1;
          pSVar18 = pSVar19 + 0x78fe;
          do {
            pSVar23 = pSVar18;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pSVar23 = pSVar18 + 1;
            SVar4 = *pSVar18;
            pSVar18 = pSVar23;
          } while (SVar4 != (STAppC)0x0);
          pSVar18 = pSVar20 + -uVar16;
          pSVar20 = pSVar23 + -1;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pSVar20 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar20 = pSVar20 + 1;
          }
          pvVar11 = (void *)FUN_0072e530(0x6b6);
          if (pvVar11 != (void *)0x0) {
            thunk_FUN_005da610(pvVar11,pSVar19);
          }
          (**(code **)*DAT_0081176c)();
          FUN_006e4650(DAT_0081176c,0);
          local_1c = 0x60ff;
          *(undefined4 *)(pSVar19 + 0x7d0e) = 1;
          *(undefined4 *)(pSVar19 + 0x117c) = 1;
          pSVar19[0x1163] = (STAppC)0x1;
          if (*(undefined1 **)(DAT_00857168 + 0xc) != (undefined1 *)0x0) {
            switch(**(undefined1 **)(DAT_00857168 + 0xc)) {
            case 0x4d:
            case 0x6d:
              pSVar19[0x1163] = (STAppC)0x3;
              break;
            case 0x53:
            case 0x73:
              pSVar19[0x1163] = (STAppC)0x2;
            }
          }
        }
      }
    }
    break;
  case 'E':
  case 'e':
    uVar16 = 0xffffffff;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (((4 < ~uVar16 - 1) && (*(int *)(DAT_00857168 + 8) != 0)) &&
       (*(int *)(DAT_00857168 + 0xc) != 0)) {
      local_1c = 0x6104;
      *(undefined4 *)(pSVar19 + 0x854e) = 1;
      local_18 = 1;
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      SVar4 = (STAppC)(*pcVar10 - 0x30);
      pSVar19[0x112e] = SVar4;
      if ((SVar4 == (STAppC)0x0) || (3 < (byte)SVar4)) {
        pSVar19[0x112e] = (STAppC)0x1;
      }
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)(pSVar19 + 0x8552) = *pcVar10 + -0x30;
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)(pSVar19 + 0x4f0e),&DAT_007a4ccc,pcVar10);
      wsprintfA((LPSTR)(pSVar19 + 0x76f6),&DAT_007c6ee4,pSVar19 + 0x60,pSVar19 + 0x4f0e);
      uVar16 = 0xffffffff;
      pcVar10 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar22 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar22 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pSVar18 = (STAppC *)(pcVar22 + -uVar16);
      pSVar20 = pSVar19 + 0x6ce3;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
        pSVar18 = pSVar18 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pSVar20 = *pSVar18;
        pSVar18 = pSVar18 + 1;
        pSVar20 = pSVar20 + 1;
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
    uVar16 = 0xffffffff;
    pcVar10 = *(char **)(DAT_00857168 + 4);
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (6 < ~uVar16 - 1) {
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),6);
      wsprintfA((LPSTR)(pSVar19 + 0x78fe),&DAT_007a4ccc,pcVar10);
      wsprintfA((LPSTR)(pSVar19 + 0x76f6),&DAT_007c6ee4,pSVar19 + 0x60,pSVar19 + 0x78fe);
      pSVar19[0x1195] = (STAppC)0x1;
      DAT_00807340 = *(char *)(*(int *)(DAT_00857168 + 4) + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)(pSVar19 + 0x8552) = *(char *)(*(int *)(DAT_00857168 + 4) + 5) + -0x30;
      cVar1 = *(char *)(*(int *)(DAT_00857168 + 4) + 4);
      pSVar19[0x1180] = (STAppC)0x8;
      pSVar19[0x112d] = (STAppC)(cVar1 + -0x30);
      iVar6 = thunk_FUN_0056e9e0(pSVar19,1);
      if (iVar6 == 0) {
        RaiseInternalException(local_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,600);
      }
      else {
        switch(*(undefined1 *)(*(int *)(DAT_00857168 + 4) + 2)) {
        case 0x41:
        case 0x61:
          pSVar19[0x1180] = (STAppC)0x3;
          pSVar19[0x1163] = (STAppC)0x2;
          break;
        case 0x42:
        case 0x62:
          pSVar19[0x1180] = (STAppC)0x1;
          pSVar19[0x1163] = (STAppC)0x2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          iVar6 = __setjmp3(local_204.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pSVar19 = local_c;
          if (iVar6 == 0) {
            puVar9 = FUN_006f0ec0(0x345,(byte *)(local_c + 0x76f6),0,0,0);
            local_3c = pSVar19 + 0x1196;
            FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(this_01,puVar9);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar6,0,s_E____titans_tapp_cpp_007ca0c8,0x23e);
          }
          thunk_FUN_0056ef50((int)pSVar19);
          thunk_FUN_0056f040((int)pSVar19);
          thunk_FUN_0056ebe0((int)pSVar19);
          *(undefined4 *)(pSVar19 + 0x7d0e) = 0;
          break;
        default:
          RaiseInternalException(local_30,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pSVar19[0x1180] = (STAppC)0x8;
          pSVar19[0x1163] = (STAppC)0x1;
          break;
        case 0x53:
        case 0x73:
          pSVar19[0x1180] = (STAppC)0x2;
          pSVar19[0x1163] = (STAppC)0x2;
        }
        pSVar18 = pSVar19 + 0x4f02;
        for (iVar6 = 0x9fc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
        cVar1 = *(char *)(*(int *)(DAT_00857168 + 4) + 1);
        if (((cVar1 == 'G') || (cVar1 == 'D')) || (cVar1 == 'W')) {
          pvVar11 = (void *)FUN_0072e530(0x6b6);
          if (pvVar11 != (void *)0x0) {
            thunk_FUN_005da610(pvVar11,pSVar19);
          }
          (**(code **)*DAT_0081176c)();
          FUN_006e4650(DAT_0081176c,0);
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
    uVar16 = 0xffffffff;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (4 < ~uVar16 - 1) {
      *(undefined4 *)(pSVar19 + 0x854e) = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      SVar4 = (STAppC)(*pcVar10 - 0x30);
      pSVar19[0x112e] = SVar4;
      if ((SVar4 == (STAppC)0x0) || (3 < (byte)SVar4)) {
        pSVar19[0x112e] = (STAppC)0x1;
      }
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)(pSVar19 + 0x8552) = *pcVar10 + -0x30;
      pcVar10 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)(pSVar19 + 0x76f6),&DAT_007c6ee4,pSVar19 + 0x60,pcVar10);
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
    if (bVar3) goto switchD_0056b4ce_caseD_47;
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar16 = 0xffffffff;
      pcVar10 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar22 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar22 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pSVar18 = pSVar19 + 0x7b06;
      pSVar20 = (STAppC *)(pcVar22 + -uVar16);
      pSVar23 = pSVar18;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pSVar23 = *(undefined4 *)pSVar20;
        pSVar20 = pSVar20 + 4;
        pSVar23 = pSVar23 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pSVar23 = *pSVar20;
        pSVar20 = pSVar20 + 1;
        pSVar23 = pSVar23 + 1;
      }
      FUN_006b60b0((char *)pSVar18,(char *)pSVar18);
      pSVar18 = pSVar19 + 0x7b06;
      FUN_006c2980((char *)pSVar18,(char *)pSVar18);
      iVar6 = -1;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        SVar4 = *pSVar18;
        pSVar18 = pSVar18 + 1;
      } while (SVar4 != (STAppC)0x0);
      if (iVar6 != -2) {
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x60;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar19 + 0x76f6;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar10 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x7bd;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar23 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar23 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar23;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar23 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        FUN_006b8280((char *)(pSVar19 + 0x76f6),(char *)(pSVar19 + 0x76f6));
        uVar16 = 0xffffffff;
        pcVar10 = PTR_DAT_0079b050;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x7b06;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar23 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar23 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar23;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar23 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pSVar18 = pSVar19 + 0x76f6;
        do {
          pSVar20 = pSVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        uVar16 = ~uVar16;
        pSVar18 = pSVar20 + -uVar16;
        pSVar20 = pSVar19 + 0x7b06;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar10 = &DAT_007ca0b8;
        do {
          pcVar22 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar22 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar6 = -1;
        pSVar18 = pSVar19 + 0x7b06;
        do {
          pSVar20 = pSVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pSVar20 = pSVar18 + 1;
          SVar4 = *pSVar18;
          pSVar18 = pSVar20;
        } while (SVar4 != (STAppC)0x0);
        pSVar18 = (STAppC *)(pcVar22 + -uVar16);
        pSVar20 = pSVar20 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pSVar20 = *pSVar18;
          pSVar18 = pSVar18 + 1;
          pSVar20 = pSVar20 + 1;
        }
        hFile = CreateFileA((LPCSTR)(pSVar19 + 0x7b06),0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,
                            0x80,(HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar8 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar8 != 0xffffffff)) {
          WriteFile(hFile,pSVar19 + 0x1134,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)(pSVar19 + 0x1181) = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (*(int *)(DAT_00857168 + 8) != 0) {
      pSVar18 = pSVar19 + 0x76f6;
      puVar24 = &DAT_007c6ee4;
      wsprintfA((LPSTR)pSVar18,&DAT_007c6ee4,pSVar19 + 0x60,*(int *)(DAT_00857168 + 8));
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar6 = __setjmp3(local_17c.jumpBuffer,0,pSVar18,puVar24);
      pSVar19 = local_c;
      if (iVar6 == 0) {
        puVar9 = FUN_006f0ec0(0x345,(byte *)(local_c + 0x76f6),2,0,0);
        local_8 = pSVar19 + 0x1196;
        FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)(pSVar19 + 0x119a) = 0x8f000805;
        FUN_006f13f0(0,PTR_s_DESCRIPTOR_0079b080,(byte *)(pSVar19 + 0x1196),0x1999,(undefined4 *)0x0
                     ,'\0',(uint *)0x0);
        cMf32::delete(this_00,puVar9);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException(-0x5001fff4,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x1e5);
    }
  }
  if ((pSVar19[0xe26] == (STAppC)0x0) && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
LAB_0056c034:
  (**(code **)(*(int *)pSVar19 + 0x18))();
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

