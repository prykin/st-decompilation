
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  AppClassTy *pAVar4;
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
  AnonShape_GLOBAL_00806740_0AFD1484 *pAVar14;
  LPCSTR pCVar15;
  LPCSTR pCVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  cMf32 *this_00;
  cMf32 *this_01;
  AppClassTy *pAVar21;
  undefined4 unaff_ESI;
  char *pcVar22;
  void *unaff_EDI;
  WNDCLASSA *pWVar23;
  char *pcVar24;
  undefined4 *puVar25;
  LPSTR pCVar26;
  undefined *puVar27;
  UINT UVar28;
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
      UVar28 = 0;
      pCVar15 = (LPCSTR)FUN_006b0140(0x2648,HINSTANCE_00807618);
      pCVar16 = (LPCSTR)FUN_006b0140(0x264b,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pCVar16,pCVar15,UVar28);
      break;
    default:
      iVar17 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar8,&DAT_007a4ccc,
                                  s_STAppC__InitApp_007ca0a4);
      if (iVar17 != 0) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return uVar18;
      }
      break;
    case -0x5001fff3:
      UVar28 = 0;
      pCVar15 = (LPCSTR)FUN_006b0140(0x2648,HINSTANCE_00807618);
      pCVar16 = (LPCSTR)FUN_006b0140(0x264c,HINSTANCE_00807618);
      MessageBoxA((HWND)0x0,pCVar16,pCVar15,UVar28);
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
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x13e);
  }
  AppClassTy::InitApp(local_c,param_1);
  pWVar23 = &local_6c;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    pWVar23->style = 0;
    pWVar23 = (WNDCLASSA *)&pWVar23->lpfnWndProc;
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
  AVar7 = RegisterClassA(&local_6c);
  if (AVar7 == 0) {
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
  iVar8 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar21 = local_34;
  if (iVar8 == 0) {
    local_34->vtable = (AppClassTyVTable *)0x1;
    iVar8 = Library::DKW::SND::FUN_006b7920(&local_34->field_0004,(DWORD_PTR)local_40);
    if (iVar8 != 0) {
      pAVar21->vtable = (AppClassTyVTable *)0x0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    local_34->vtable = (AppClassTyVTable *)0x0;
  }
  iVar8 = thunk_FUN_00571e40(local_c + 1,(LPDWORD)0x1);
  if (iVar8 == 0) {
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  iVar8 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar21 = local_c;
  if (iVar8 == 0) {
    pAVar4 = local_c + 1;
    pbVar1 = (byte *)((int)&local_c[0x23b].field_0030 + 2);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,&pAVar4->field_0028,PTR_s_SYSTEM__0079b030,
              s_INTER_007ca0c0);
    g_cMf32_00806780 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    DAT_00806784 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806780);
    wsprintfA((LPSTR)pbVar1,&DAT_007c6ee4,&pAVar21[0x14].field_0010,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,&pAVar4->field_0028,PTR_s_SYSTEM__0079b030,
              PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,pbVar1,0,0,0);
    puVar9 = CreateArbList(g_cMf32_0080675C,0);
    *(uint **)((int)&pAVar21[0x168].field_0020 + 2) = puVar9;
    puVar9 = CreateArbList(g_cMf32_0080675C,1);
    *(uint **)((int)&pAVar21[0x168].field_0024 + 2) = puVar9;
    if ((*(int *)(*(int *)((int)&pAVar21[0x168].field_0020 + 2) + 0xc) == 0) || (puVar9[3] == 0)) {
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
  iVar8 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar8 == 0) {
    FUN_006c2a80((int *)&g_int_008075A4,DAT_0080759c);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar10 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar10);
  thunk_FUN_005672a0(local_c + 1,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar8 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar21 = local_c;
  if ((iVar8 == 0) &&
     (iVar8 = Library::DKW::DDX::FUN_006b6d50((int *)&g_int_00811764,0x20), iVar8 == 0)) {
    DAT_00811768 = '\x01';
    pcVar12 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
    *(int *)((int)&pAVar21[0x4f].field_0014 + 3) = g_int_00811764[0xe];
    pcVar22 = pcVar12;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar22[0] = '\0';
      pcVar22[1] = '\0';
      pcVar22[2] = '\0';
      pcVar22[3] = '\0';
      pcVar22 = pcVar22 + 4;
    }
    pcVar22 = (char *)g_int_00811764[0xd];
    uVar19 = 0xffffffff;
    pcVar24 = pcVar22;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar2 = *pcVar24;
      pcVar24 = pcVar24 + 1;
    } while (cVar2 != '\0');
    if (~uVar19 - 1 < 0x40) {
      uVar19 = 0xffffffff;
      do {
        pcVar24 = pcVar22;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar22 + 1;
        cVar2 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar22 = pcVar24 + -uVar19;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar12 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(pcVar12,pcVar22,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)(pAVar21 + 1));
  if (((DAT_00811768 != '\0') && (*(char *)((int)&pAVar21[0x40].field_0024 + 2) == '\0')) &&
     (iVar8 = thunk_FUN_005738d0((AnonShape_00572510_F06DC155 *)(pAVar21 + 1)), iVar8 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  CreateBaseSystem();
  puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)&pAVar21[0x168].field_0x1a = puVar9;
  puVar25 = local_2c;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar25 = 0;
    puVar25 = puVar25 + 1;
  }
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar5 = false;
  pcVar12 = (char *)PTR_00857168->field_0004;
  if (pcVar12 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar25 = (undefined4 *)local_560;
      for (iVar8 = 0xc6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar25 = 0;
        puVar25 = puVar25 + 1;
      }
      puVar9 = (uint *)((int)&pAVar21[0x23b].field_0030 + 2);
      wsprintfA((LPSTR)puVar9,&DAT_007c6ee4,&pAVar21[6].field_0014,PTR_s_STARTUP_VPS_0079b040);
      pAVar14 = (AnonShape_GLOBAL_00806740_0AFD1484 *)
                thunk_FUN_00683c70(puVar9,(AnonShape_00683C70_22193481 *)local_560,&local_38,
                                   (int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (pAVar14 != (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        PTR_00806740 = pAVar14;
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
      uVar19 = 0xffffffff;
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar22 = pcVar12;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar22 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar22;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      pcVar22 = pcVar22 + -uVar19;
      pcVar24 = pcVar12;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_006b60b0(pcVar12,pcVar12);
      pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      FUN_006c2980(pcVar12,pcVar12);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      if (iVar8 != -2) {
        uVar19 = 0xffffffff;
        pcVar12 = (char *)&pAVar21[1].field_0028;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        pcVar22 = pcVar22 + -uVar19;
        pcVar24 = pcVar12;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar24 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar22 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar24 = pcVar22;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        do {
          pcVar22 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        pcVar12 = pcVar24 + -uVar19;
        pcVar22 = pcVar22 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        pcVar24 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        FUN_006b8280(pcVar24,pcVar24);
        uVar19 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        pcVar24 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        do {
          pcVar12 = pcVar24;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar12 = pcVar24 + 1;
          cVar2 = *pcVar24;
          pcVar24 = pcVar12;
        } while (cVar2 != '\0');
        pcVar22 = pcVar22 + -uVar19;
        pcVar12 = pcVar12 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar12 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined4 *)((int)&pAVar21[0x50].field_0004 + 1) = 1;
        ReadCmdPlay((STAppC *)pAVar21,1);
        if (*(int *)((int)&pAVar21[0x50].field_0004 + 1) != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar5 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar19 = 0xffffffff;
          pcVar12 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          pcVar22 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar24 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar22 + 1;
            cVar2 = *pcVar22;
            pcVar22 = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar24 + -uVar19;
          pcVar24 = pcVar12;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar24 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar24 = pcVar24 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar22 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
          do {
            pcVar24 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar22 + 1;
            cVar2 = *pcVar22;
            pcVar22 = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          iVar8 = -1;
          do {
            pcVar22 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          pcVar12 = pcVar24 + -uVar19;
          pcVar22 = pcVar22 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar22 = pcVar22 + 4;
          }
          pcVar24 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar22 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar22 = pcVar22 + 1;
          }
          FUN_006b8280(pcVar24,pcVar24);
          uVar19 = 0xffffffff;
          pcVar12 = PTR_DAT_0079b050;
          do {
            pcVar22 = pcVar12;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          iVar8 = -1;
          pcVar12 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          do {
            pcVar24 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar24 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar24;
          } while (cVar2 != '\0');
          pcVar12 = pcVar22 + -uVar19;
          pcVar22 = pcVar24 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar22 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar22 = pcVar22 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
          do {
            pcVar22 = pcVar12;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar22 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          iVar8 = -1;
          pcVar12 = (char *)((int)&pAVar21[0x229].field_0004 + 2);
          do {
            pcVar24 = pcVar12;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar24 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar24;
          } while (cVar2 != '\0');
          pcVar12 = pcVar22 + -uVar19;
          pcVar22 = pcVar24 + -1;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar22 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar22 = pcVar22 + 1;
          }
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pAVar21);
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
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (((4 < ~uVar19 - 1) && (PTR_00857168->field_0008 != 0)) && (PTR_00857168->field_000C != 0)) {
      local_1c = 0x6104;
      *(undefined4 *)((int)&pAVar21[0x261].field_0014 + 2) = 1;
      local_18 = 1;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar6 = *pcVar12 - 0x30;
      *(byte *)((int)&pAVar21[0x4e].field_001C + 2) = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        *(undefined1 *)((int)&pAVar21[0x4e].field_001C + 2) = 1;
      }
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar21[0x261].field_0x1a = *pcVar12 + -0x30;
      pCVar26 = (LPSTR)((int)&pAVar21[0x169].field_0014 + 2);
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA(pCVar26,&DAT_007a4ccc,pcVar12);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pCVar26);
      uVar19 = 0xffffffff;
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar22 = pcVar12;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar22 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar22;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar12 = pcVar22 + -uVar19;
      pcVar22 = (char *)((int)&pAVar21[0x1f1].field_0028 + 3);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar22 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar22 = pcVar22 + 1;
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
    pcVar12 = (char *)PTR_00857168->field_0004;
    do {
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (6 < ~uVar19 - 1) {
      pCVar26 = (LPSTR)((int)&pAVar21[0x229].field_0004 + 2);
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,6);
      wsprintfA(pCVar26,&DAT_007a4ccc,pcVar12);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pCVar26);
      *(undefined1 *)((int)&pAVar21[0x50].field_0014 + 1) = 1;
      DAT_00807340 = *(char *)(PTR_00857168->field_0004 + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)&pAVar21[0x261].field_0x1a = *(char *)(PTR_00857168->field_0004 + 5) + -0x30;
      cVar2 = *(char *)(PTR_00857168->field_0004 + 4);
      *(undefined1 *)&pAVar21[0x50].vtable = 8;
      *(char *)((int)&pAVar21[0x4e].field_001C + 1) = cVar2 + -0x30;
      iVar8 = thunk_FUN_0056e9e0(pAVar21,1);
      if (iVar8 == 0) {
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
          iVar8 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pAVar21 = local_c;
          if (iVar8 == 0) {
            pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                         (0x345,(byte *)((int)&local_c[0x21f].field_002C + 2),0,0,0)
            ;
            local_3c = (undefined1 *)((int)&pAVar21[0x50].field_0014 + 2);
            cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(this_01,pcVar11);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(iVar8,0,s_E____titans_tapp_cpp_007ca0c8,0x23e);
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
        puVar25 = (undefined4 *)((int)&pAVar21[0x169].field_0008 + 2);
        for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar25 = 0;
          puVar25 = puVar25 + 1;
        }
        cVar2 = *(char *)(PTR_00857168->field_0004 + 1);
        if (((cVar2 == 'G') || (cVar2 == 'D')) || (cVar2 == 'W')) {
          pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar13 != (StartSystemTy *)0x0) {
            StartSystemTy::StartSystemTy(pSVar13,pAVar21);
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
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar19 - 1) {
      *(undefined4 *)((int)&pAVar21[0x261].field_0014 + 2) = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar6 = *pcVar12 - 0x30;
      *(byte *)((int)&pAVar21[0x4e].field_001C + 2) = bVar6;
      if ((bVar6 == 0) || (3 < bVar6)) {
        *(undefined1 *)((int)&pAVar21[0x4e].field_001C + 2) = 1;
      }
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      *(int *)&pAVar21[0x261].field_0x1a = *pcVar12 + -0x30;
      pcVar12 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      wsprintfA((LPSTR)((int)&pAVar21[0x21f].field_002C + 2),&DAT_007c6ee4,&pAVar21[1].field_0028,
                pcVar12);
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
      pcVar12 = (char *)PTR_00857168->field_0008;
      do {
        pcVar22 = pcVar12;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar22 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar22;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      pcVar22 = pcVar22 + -uVar19;
      pcVar24 = pcVar12;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_006b60b0(pcVar12,pcVar12);
      pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
      FUN_006c2980(pcVar12,pcVar12);
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      if (iVar8 != -2) {
        uVar19 = 0xffffffff;
        pcVar12 = (char *)&pAVar21[1].field_0028;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        pcVar22 = pcVar22 + -uVar19;
        pcVar24 = pcVar12;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar24 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar22 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar24 = pcVar22;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        do {
          pcVar22 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        pcVar12 = pcVar24 + -uVar19;
        pcVar22 = pcVar22 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x23].field_0014 + 1);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        pcVar24 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        FUN_006b8280(pcVar24,pcVar24);
        uVar19 = 0xffffffff;
        pcVar12 = PTR_DAT_0079b050;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar24 = pcVar12;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar24 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar24;
        } while (cVar2 != '\0');
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        pcVar24 = (char *)((int)&pAVar21[0x232].field_0014 + 2);
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = (char *)((int)&pAVar21[0x21f].field_002C + 2);
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar12 = pcVar22 + -uVar19;
        pcVar22 = pcVar24;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar12 = &DAT_007ca0b8;
        do {
          pcVar22 = pcVar12;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar22 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar8 = -1;
        do {
          pcVar12 = pcVar24;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar12 = pcVar24 + 1;
          cVar2 = *pcVar24;
          pcVar24 = pcVar12;
        } while (cVar2 != '\0');
        pcVar22 = pcVar22 + -uVar19;
        pcVar12 = pcVar12 + -1;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar12 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar12 = pcVar12 + 1;
        }
        hFile = CreateFileA((LPCSTR)((int)&pAVar21[0x232].field_0014 + 2),0x40000000,1,
                            (LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar10 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar10 != 0xffffffff)) {
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
      pCVar26 = (LPSTR)((int)&pAVar21[0x21f].field_002C + 2);
      puVar27 = &DAT_007c6ee4;
      wsprintfA(pCVar26,&DAT_007c6ee4,&pAVar21[1].field_0028,PTR_00857168->field_0008);
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      iVar8 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0,pCVar26,puVar27);
      pAVar21 = local_c;
      if (iVar8 == 0) {
        pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                     (0x345,(byte *)((int)&local_c[0x21f].field_002C + 2),2,0,0);
        pbVar1 = (byte *)((int)&pAVar21[0x50].field_0014 + 2);
        local_8 = pbVar1;
        cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)&pAVar21[0x50].field_0x1a = 0x8f000805;
        cMf32::RecPut(pcVar11,0,PTR_s_DESCRIPTOR_0079b080,pbVar1,0x1999,(undefined4 *)0x0,'\0',
                      (uint *)0x0);
        cMf32::delete(this_00,pcVar11);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException
                (-0x5001fff4,g_overwriteContext_007ED77C,s_E____titans_tapp_cpp_007ca0c8,0x1e5);
    }
  }
  if ((*(char *)((int)&pAVar21[0x40].field_0024 + 2) == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  local_560._4_4_ = local_2c;
  local_560._0_4_ = 0x56c03f;
  (*pAVar21->vtable->vfunc_18)();
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

