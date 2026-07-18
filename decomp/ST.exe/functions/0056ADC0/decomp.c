
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0056adc0(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  ATOM AVar6;
  int iVar7;
  undefined3 extraout_var;
  HWND hWnd;
  uint *puVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  HANDLE hFile;
  char *pcVar11;
  void *pvVar12;
  LPCSTR pCVar13;
  LPCSTR pCVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  LPSTR pCVar19;
  int *piVar20;
  undefined4 unaff_ESI;
  char *pcVar21;
  void *unaff_EDI;
  WNDCLASSA *pWVar22;
  char *pcVar23;
  int *piVar24;
  int *piVar25;
  undefined *puVar26;
  UINT UVar27;
  undefined4 **local_248;
  undefined4 local_244 [16];
  undefined4 **local_204;
  undefined4 local_200 [16];
  undefined4 **local_1c0;
  undefined4 local_1bc [16];
  undefined4 **local_17c;
  undefined4 local_178 [16];
  undefined4 **local_138;
  undefined4 local_134 [16];
  undefined4 **local_f4;
  undefined4 local_f0 [16];
  undefined4 **local_b0;
  undefined4 local_ac [16];
  WNDCLASSA local_6c;
  DWORD local_44;
  HWND local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_c;
  byte *local_8;
  
  local_b0 = DAT_00858df8;
  DAT_00858df8 = &local_b0;
  iVar7 = __setjmp3(local_ac,0,unaff_EDI,unaff_ESI);
  local_30 = iVar7;
  if (iVar7 != 0) {
    DAT_00858df8 = local_b0;
    (**(code **)(*local_c + 4))();
    switch(iVar7) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar27 = 0;
      pCVar13 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar14 = (LPCSTR)FUN_006b0140(0x264b,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar14,pCVar13,UVar27);
      break;
    default:
      iVar15 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x2c9,0,iVar7,&DAT_007a4ccc);
      if (iVar15 != 0) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return uVar16;
      }
      break;
    case -0x5001fff3:
      UVar27 = 0;
      pCVar13 = (LPCSTR)FUN_006b0140(0x2648,DAT_00807618);
      pCVar14 = (LPCSTR)FUN_006b0140(0x264c,DAT_00807618);
      MessageBoxA((HWND)0x0,pCVar14,pCVar13,UVar27);
    }
    FUN_006a5e40(iVar7,0,0x7ca0c8,0x2cc);
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
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7ca0c8,0x13e);
  }
  FUN_006e3510(param_1);
  pWVar22 = &local_6c;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
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
  AVar6 = RegisterClassA(&local_6c);
  if (AVar6 == 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ca0c8,0x14e);
  }
  DAT_00806748 = CreateWindowExA(0,s_STWindowClass_007c9e3c,s_Submarine_Titans_007c9e4c,0x80000000,0
                                 ,0,DAT_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,param_1,
                                 (LPVOID)0x0);
  if (DAT_00806748 == (HWND)0x0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ca0c8,0x152);
  }
  DAT_00856d78 = DAT_00806748;
  ShowWindow(DAT_00806748,param_4);
  UpdateWindow(DAT_00806748);
  local_34 = local_c + 0xe;
  local_40 = DAT_00806748;
  local_138 = DAT_00858df8;
  DAT_00858df8 = &local_138;
  iVar7 = __setjmp3(local_134,0,unaff_EDI,unaff_ESI);
  piVar20 = local_34;
  if (iVar7 == 0) {
    *local_34 = 1;
    iVar7 = FUN_006b7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar7 != 0) {
      *piVar20 = 0;
    }
    DAT_00858df8 = local_138;
  }
  else {
    DAT_00858df8 = local_138;
    *local_34 = 0;
  }
  iVar7 = thunk_FUN_00571e40(local_c + 0xe,1);
  if (iVar7 == 0) {
    FUN_006a5e40(-0x5001fff6,DAT_007ed77c,0x7ca0c8,0x159);
  }
  local_248 = DAT_00858df8;
  DAT_00858df8 = &local_248;
  iVar7 = __setjmp3(local_244,0,unaff_EDI,unaff_ESI);
  piVar20 = local_c;
  if (iVar7 == 0) {
    piVar24 = local_c + 0x18;
    pbVar1 = (byte *)((int)local_c + 0x7d1a);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,piVar24,PTR_s_SYSTEM__0079b030,s_INTER_007ca0c0);
    DAT_00806780 = FUN_006f0ec0(0x345,pbVar1,0,0,0);
    DAT_00806784 = FUN_007097c0((int)DAT_00806780);
    wsprintfA((LPSTR)pbVar1,&DAT_007c6ee4,piVar20 + 0x11c,PTR_s_TASKS_0079b048);
    DAT_00806798 = FUN_006f0ec0(0x345,pbVar1,0,0,0);
    wsprintfA((LPSTR)pbVar1,s__s_s_s_007c6edc,piVar24,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c
             );
    DAT_0080675c = FUN_006f0ec0(0x345,pbVar1,0,0,0);
    puVar8 = thunk_FUN_0067e7e0((int)DAT_0080675c,0);
    *(uint **)((int)piVar20 + 0x4ee2) = puVar8;
    puVar8 = thunk_FUN_0067e7e0((int)DAT_0080675c,1);
    *(uint **)((int)piVar20 + 0x4ee6) = puVar8;
    if ((*(int *)(*(int *)((int)piVar20 + 0x4ee2) + 0xc) == 0) || (puVar8[3] == 0)) {
      FUN_006a5e40(-0x5001fff3,DAT_007ed77c,0x7ca0c8,0x167);
    }
    DAT_00858df8 = local_248;
  }
  else {
    DAT_00858df8 = local_248;
    FUN_006a5e40(-0x5001fff3,0,0x7ca0c8,0x169);
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
  FUN_006b9b20(&DAT_0080759c,DAT_00806748,(int *)((int)piVar20 + 0x115a));
  FUN_006b9b40(DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,DAT_00806738,DAT_00806730,
               DAT_00806734,0,0,0x100);
  FUN_006b1300((int *)&DAT_008075a8,(int)DAT_0080759c);
  FUN_006bbb20((int)DAT_0080759c,1);
  FUN_006ba780((int)DAT_0080759c,1);
  FUN_006c3800(&DAT_008075a0,DAT_0080759c,(int)DAT_00856d78,0x2660);
  local_1c0 = DAT_00858df8;
  DAT_00858df8 = &local_1c0;
  iVar7 = __setjmp3(local_1bc,0,unaff_EDI,unaff_ESI);
  if (iVar7 == 0) {
    FUN_006c2a80(&DAT_008075a4,DAT_0080759c);
  }
  DAT_00858df8 = local_1c0;
  FUN_006b1980(DAT_008075a8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,2,DAT_00807568,DAT_0080756c,(undefined4 *)0x0);
  FUN_006b1980(DAT_008075a8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574);
  FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
  FUN_006ad270(DAT_0080759c);
  DVar9 = timeGetTime();
  FUN_0072e6b0(DVar9);
  thunk_FUN_005672a0(local_c + 0xe,DAT_00856d78);
  local_f4 = DAT_00858df8;
  DAT_00858df8 = &local_f4;
  iVar7 = __setjmp3(local_f0,0,unaff_EDI,unaff_ESI);
  piVar20 = local_c;
  if ((iVar7 == 0) && (iVar7 = FUN_006b6d50(&DAT_00811764,0x20), iVar7 == 0)) {
    DAT_00811768 = '\x01';
    pcVar11 = (char *)((int)piVar20 + 0x7bd);
    *(undefined4 *)((int)piVar20 + 0x115f) = *(undefined4 *)(DAT_00811764 + 0x38);
    pcVar21 = pcVar11;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[2] = '\0';
      pcVar21[3] = '\0';
      pcVar21 = pcVar21 + 4;
    }
    pcVar21 = *(char **)(DAT_00811764 + 0x34);
    uVar17 = 0xffffffff;
    pcVar23 = pcVar21;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar2 != '\0');
    if (~uVar17 - 1 < 0x40) {
      uVar17 = 0xffffffff;
      do {
        pcVar23 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar23 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar23;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar21 = pcVar23 + -uVar17;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar11 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    else {
      _strncpy(pcVar11,pcVar21,0x3f);
    }
  }
  DAT_00858df8 = local_f4;
  thunk_FUN_00572510(piVar20 + 0xe);
  if (((DAT_00811768 != '\0') && (*(char *)((int)piVar20 + 0xe26) == '\0')) &&
     (iVar7 = thunk_FUN_005738d0(piVar20 + 0xe), iVar7 == 0)) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  thunk_FUN_00576bb0();
  puVar8 = FUN_006b54f0((uint *)0x0,1,1);
  *(uint **)((int)piVar20 + 0x4eda) = puVar8;
  puVar10 = local_2c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto LAB_0056c034;
  }
  local_1c = 0x6123;
  bVar4 = false;
  pcVar11 = *(char **)(DAT_00857168 + 4);
  if (pcVar11 == (char *)0x0) {
    if ((DAT_00807330 & 1) != 0) {
      puVar10 = (undefined4 *)&stack0xfffffaa0;
      for (iVar7 = 0xc6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      wsprintfA((LPSTR)((int)piVar20 + 0x7d1a),&DAT_007c6ee4,piVar20 + 0x59,
                PTR_s_STARTUP_VPS_0079b040);
      puVar8 = thunk_FUN_00683c70((uint *)((int)piVar20 + 0x7d1a),&stack0xfffffaa0,&local_38,
                                  (int *)0x0,(undefined *)0x0);
      if ((local_38 == 0x40) && (puVar8 != (uint *)0x0)) {
        local_1c = 0x7101;
        local_18 = 1;
        DAT_00806740 = puVar8;
      }
    }
    goto LAB_0056c034;
  }
  switch(pcVar11[1]) {
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
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar21 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar21;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar11 = (char *)((int)piVar20 + 0x7b06);
      pcVar21 = pcVar21 + -uVar17;
      pcVar23 = pcVar11;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar23 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar23 = pcVar23 + 1;
      }
      FUN_006b60b0(pcVar11,pcVar11);
      pcVar11 = (char *)((int)piVar20 + 0x7b06);
      FUN_006c2980(pcVar11,pcVar11);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        piVar24 = piVar20 + 0x18;
        do {
          piVar25 = piVar24;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          piVar25 = (int *)((int)piVar24 + 1);
          iVar7 = *piVar24;
          piVar24 = piVar25;
        } while ((char)iVar7 != '\0');
        uVar17 = ~uVar17;
        pcVar11 = (char *)((int)piVar25 - uVar17);
        pcVar21 = (char *)((int)piVar20 + 0x76f6);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x7bd);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_006b8280((char *)((int)piVar20 + 0x76f6),(char *)((int)piVar20 + 0x76f6));
        uVar17 = 0xffffffff;
        pcVar11 = PTR_DAT_0079b050;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x7b06);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = (char *)((int)piVar20 + 0x7b06);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = &DAT_007ca0b8;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x7b06);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        *(undefined4 *)((int)piVar20 + 0x1185) = 1;
        thunk_FUN_00571400(1);
        if (*(int *)((int)piVar20 + 0x1185) != 0) {
          if (*(char *)(*(int *)(DAT_00857168 + 4) + 1) != 'd') {
            bVar4 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar17 = 0xffffffff;
          pcVar11 = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar21 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          pcVar11 = pcVar21 + -uVar17;
          pcVar21 = (char *)((int)piVar20 + 0x78fe);
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar17 = 0xffffffff;
          pcVar11 = (char *)((int)piVar20 + 0x7bd);
          do {
            pcVar21 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar11 = (char *)((int)piVar20 + 0x78fe);
          do {
            pcVar23 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar23 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar23;
          } while (cVar2 != '\0');
          pcVar11 = pcVar21 + -uVar17;
          pcVar21 = pcVar23 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar21 = pcVar21 + 1;
          }
          FUN_006b8280((char *)((int)piVar20 + 0x78fe),(char *)((int)piVar20 + 0x78fe));
          uVar17 = 0xffffffff;
          pcVar11 = PTR_DAT_0079b050;
          do {
            pcVar21 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar11 = (char *)((int)piVar20 + 0x78fe);
          do {
            pcVar23 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar23 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar23;
          } while (cVar2 != '\0');
          pcVar11 = pcVar21 + -uVar17;
          pcVar21 = pcVar23 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar17 = 0xffffffff;
          pcVar11 = (char *)((int)piVar20 + 0x7b06);
          do {
            pcVar21 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          iVar7 = -1;
          pcVar11 = (char *)((int)piVar20 + 0x78fe);
          do {
            pcVar23 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar23 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar23;
          } while (cVar2 != '\0');
          pcVar11 = pcVar21 + -uVar17;
          pcVar21 = pcVar23 + -1;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar21 = pcVar21 + 1;
          }
          pvVar12 = (void *)FUN_0072e530(0x6b6);
          if (pvVar12 != (void *)0x0) {
            thunk_FUN_005da610(pvVar12,piVar20);
          }
          (**(code **)*DAT_0081176c)();
          FUN_006e4650(DAT_0081176c,0);
          local_1c = 0x60ff;
          *(undefined4 *)((int)piVar20 + 0x7d0e) = 1;
          piVar20[0x45f] = 1;
          *(undefined1 *)((int)piVar20 + 0x1163) = 1;
          if (*(undefined1 **)(DAT_00857168 + 0xc) != (undefined1 *)0x0) {
            switch(**(undefined1 **)(DAT_00857168 + 0xc)) {
            case 0x4d:
            case 0x6d:
              *(undefined1 *)((int)piVar20 + 0x1163) = 3;
              break;
            case 0x53:
            case 0x73:
              *(undefined1 *)((int)piVar20 + 0x1163) = 2;
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
      local_1c = 0x6104;
      *(undefined4 *)((int)piVar20 + 0x854e) = 1;
      local_18 = 1;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      bVar5 = *pcVar11 - 0x30;
      *(byte *)((int)piVar20 + 0x112e) = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        *(undefined1 *)((int)piVar20 + 0x112e) = 1;
      }
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)((int)piVar20 + 0x8552) = *pcVar11 + -0x30;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)((int)piVar20 + 0x4f0e),&DAT_007a4ccc,pcVar11);
      wsprintfA((LPSTR)((int)piVar20 + 0x76f6),&DAT_007c6ee4,piVar20 + 0x18,
                (LPSTR)((int)piVar20 + 0x4f0e));
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar21 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar21;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar11 = pcVar21 + -uVar17;
      pcVar21 = (char *)((int)piVar20 + 0x6ce3);
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar21 = *pcVar11;
        pcVar11 = pcVar11 + 1;
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
      wsprintfA((LPSTR)((int)piVar20 + 0x78fe),&DAT_007a4ccc,pcVar11);
      wsprintfA((LPSTR)((int)piVar20 + 0x76f6),&DAT_007c6ee4,piVar20 + 0x18,
                (LPSTR)((int)piVar20 + 0x78fe));
      *(undefined1 *)((int)piVar20 + 0x1195) = 1;
      DAT_00807340 = *(char *)(*(int *)(DAT_00857168 + 4) + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      *(int *)((int)piVar20 + 0x8552) = *(char *)(*(int *)(DAT_00857168 + 4) + 5) + -0x30;
      cVar2 = *(char *)(*(int *)(DAT_00857168 + 4) + 4);
      *(undefined1 *)(piVar20 + 0x460) = 8;
      *(char *)((int)piVar20 + 0x112d) = cVar2 + -0x30;
      iVar7 = thunk_FUN_0056e9e0(piVar20,1);
      if (iVar7 == 0) {
        FUN_006a5e40(local_30,DAT_007ed77c,0x7ca0c8,600);
      }
      else {
        switch(*(undefined1 *)(*(int *)(DAT_00857168 + 4) + 2)) {
        case 0x41:
        case 0x61:
          *(undefined1 *)(piVar20 + 0x460) = 3;
          *(undefined1 *)((int)piVar20 + 0x1163) = 2;
          break;
        case 0x42:
        case 0x62:
          *(undefined1 *)(piVar20 + 0x460) = 1;
          *(undefined1 *)((int)piVar20 + 0x1163) = 2;
          local_204 = DAT_00858df8;
          DAT_00858df8 = &local_204;
          iVar7 = __setjmp3(local_200,0,unaff_EDI,unaff_ESI);
          if (iVar7 == 0) {
            puVar10 = FUN_006f0ec0(0x345,(byte *)((int)local_c + 0x76f6),0,0,0);
            local_3c = (int)local_c + 0x1196;
            FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,&local_3c,0);
            FUN_006f1170(puVar10);
            DAT_00858df8 = local_204;
          }
          else {
            DAT_00858df8 = local_204;
            FUN_006a5e40(iVar7,0,0x7ca0c8,0x23e);
          }
          thunk_FUN_0056ef50((int)local_c);
          thunk_FUN_0056f040((int)local_c);
          thunk_FUN_0056ebe0((int)local_c);
          *(undefined4 *)((int)local_c + 0x7d0e) = 0;
          piVar20 = local_c;
          break;
        default:
          FUN_006a5e40(local_30,DAT_007ed77c,0x7ca0c8,0x24c);
          break;
        case 0x4d:
        case 0x6d:
          *(undefined1 *)(piVar20 + 0x460) = 8;
          *(undefined1 *)((int)piVar20 + 0x1163) = 1;
          break;
        case 0x53:
        case 0x73:
          *(undefined1 *)(piVar20 + 0x460) = 2;
          *(undefined1 *)((int)piVar20 + 0x1163) = 2;
        }
        puVar10 = (undefined4 *)((int)piVar20 + 0x4f02);
        for (iVar7 = 0x9fc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        cVar2 = *(char *)(*(int *)(DAT_00857168 + 4) + 1);
        if (((cVar2 == 'G') || (cVar2 == 'D')) || (cVar2 == 'W')) {
          pvVar12 = (void *)FUN_0072e530(0x6b6);
          if (pvVar12 != (void *)0x0) {
            thunk_FUN_005da610(pvVar12,piVar20);
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
    uVar17 = 0xffffffff;
    do {
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar17 - 1) {
      *(undefined4 *)((int)piVar20 + 0x854e) = 1;
      local_1c = 0x6104;
      local_18 = 0;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),2);
      bVar5 = *pcVar11 - 0x30;
      *(byte *)((int)piVar20 + 0x112e) = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        *(undefined1 *)((int)piVar20 + 0x112e) = 1;
      }
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),3);
      *(int *)((int)piVar20 + 0x8552) = *pcVar11 + -0x30;
      pcVar11 = FUN_006b8240(*(char **)(DAT_00857168 + 4),4);
      wsprintfA((LPSTR)((int)piVar20 + 0x76f6),&DAT_007c6ee4,piVar20 + 0x18,pcVar11);
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
    if (*(char **)(DAT_00857168 + 8) != (char *)0x0) {
      uVar17 = 0xffffffff;
      pcVar11 = *(char **)(DAT_00857168 + 8);
      do {
        pcVar21 = pcVar11;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar21 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar21;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar11 = (char *)((int)piVar20 + 0x7b06);
      pcVar21 = pcVar21 + -uVar17;
      pcVar23 = pcVar11;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar23 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar23 = pcVar23 + 1;
      }
      FUN_006b60b0(pcVar11,pcVar11);
      pcVar11 = (char *)((int)piVar20 + 0x7b06);
      FUN_006c2980(pcVar11,pcVar11);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        uVar17 = 0xffffffff;
        piVar24 = piVar20 + 0x18;
        do {
          piVar25 = piVar24;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          piVar25 = (int *)((int)piVar24 + 1);
          iVar7 = *piVar24;
          piVar24 = piVar25;
        } while ((char)iVar7 != '\0');
        uVar17 = ~uVar17;
        pcVar11 = (char *)((int)piVar25 - uVar17);
        pcVar21 = (char *)((int)piVar20 + 0x76f6);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x7bd);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_006b8280((char *)((int)piVar20 + 0x76f6),(char *)((int)piVar20 + 0x76f6));
        uVar17 = 0xffffffff;
        pcVar11 = PTR_DAT_0079b050;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x7b06);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = (char *)((int)piVar20 + 0x76f6);
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = (char *)((int)piVar20 + 0x7b06);
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar17 = 0xffffffff;
        pcVar11 = &DAT_007ca0b8;
        do {
          pcVar21 = pcVar11;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar7 = -1;
        pcVar11 = (char *)((int)piVar20 + 0x7b06);
        do {
          pcVar23 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar23;
        } while (cVar2 != '\0');
        pcVar11 = pcVar21 + -uVar17;
        pcVar21 = pcVar23 + -1;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
        hFile = CreateFileA((LPCSTR)((int)piVar20 + 0x7b06),0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,
                            2,0x80,(HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar9 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar9 != 0xffffffff)) {
          WriteFile(hFile,piVar20 + 0x44d,4,&local_44,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          *(undefined4 *)((int)piVar20 + 0x1181) = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (*(int *)(DAT_00857168 + 8) != 0) {
      pCVar19 = (LPSTR)((int)piVar20 + 0x76f6);
      puVar26 = &DAT_007c6ee4;
      wsprintfA(pCVar19,&DAT_007c6ee4,piVar20 + 0x18,*(int *)(DAT_00857168 + 8));
      local_17c = DAT_00858df8;
      DAT_00858df8 = &local_17c;
      iVar7 = __setjmp3(local_178,0,pCVar19,puVar26);
      if (iVar7 == 0) {
        puVar10 = FUN_006f0ec0(0x345,(byte *)((int)local_c + 0x76f6),2,0,0);
        local_8 = (byte *)((int)local_c + 0x1196);
        FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        *(undefined4 *)((int)local_c + 0x119a) = 0x8f000805;
        FUN_006f13f0(0,PTR_s_DESCRIPTOR_0079b080,(byte *)((int)local_c + 0x1196),0x1999,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f1170(puVar10);
      }
      DAT_00858df8 = local_17c;
      FUN_006a5e40(-0x5001fff4,DAT_007ed77c,0x7ca0c8,0x1e5);
      piVar20 = local_c;
    }
  }
  if ((*(char *)((int)piVar20 + 0xe26) == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
LAB_0056c034:
  (**(code **)(*piVar20 + 0x18))();
  DAT_00858df8 = local_b0;
  return 1;
}

