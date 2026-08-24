#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol pcVar12 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> EXTERNAL:00000089 @ 0056AEB3 | 00575A10 -> 0056ADC0 @ 00575AD0;
   FUN_00575a10 parameter param_1

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8;CASE_9=9;CASE_B=11;CASE_C=12 */

undefined4 __thiscall
STAppC::InitApp(STAppC *this,HINSTANCE hInstance,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *puVar1;
  char cVar2;
  bool bVar4;
  byte bVar5;
  ATOM AVar6;
  int local_EAX_47;
  int iVar7;
  HWND hWnd;
  int local_EAX_458;
  int local_EAX_613;
  uint *puVar7;
  int local_EAX_1207;
  DWORD DVar8;
  int local_EAX_1470;
  int local_EAX_1496;
  DArrayTy *pDVar10;
  int local_EAX_2043;
  cMf32 *pcVar9;
  HANDLE hFile;
  char *local_EAX_3567;
  int local_EAX_3793;
  StartSystemTy *pSVar10;
  char *local_EAX_4229;
  char *local_EAX_4270;
  char *local_EAX_4298;
  char *local_EAX_4408;
  char *local_EAX_4449;
  char *local_EAX_4483;
  DArrayTy *pDVar11;
  char *local_EAX_4813;
  char *local_EAX_4831;
  char *local_EAX_4860;
  char *local_EAX_4878;
  int iVar15;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  STAppC *pSVar16;
  char *pcVar17;
  char *pcVar18;
  WNDCLASSA *pWVar19;
  char *pcVar20;
  uint *puVar21;
  AnonShape_00683C70_22193481 **ppAVar22;
  UINT UVar23;
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
  byte *local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  STAppC *local_c;
  byte *local_8;
  char *pcVar12;
  char *pcVar13;
  char *temp_103f1147536a;
  char *temp_3fcb2a3bcd;
  byte *puVar2;
  char *temp_103fc2eb3361;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  local_EAX_47 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  local_30 = local_EAX_47;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    /* ST_CALLSITE[0056C06A]: CALL dword ptr [EAX + 0x4] */
    local_c->DoneApp();
    switch(local_EAX_47) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar23 = 0;
      local_EAX_4860 = LoadResourceString(0x2648,g_hINSTANCE_00807618);
      local_EAX_4878 = LoadResourceString(0x264b,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0056C0D6]: CALL dword ptr [0x0085bdec] */
      MessageBoxA((HWND)0x0,local_EAX_4878,local_EAX_4860,UVar23);
      break;
    default:
      iVar15 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x2c9,0,local_EAX_47,"%s"
                                  ,"STAppC::InitApp");
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -0x5001fff3:
      UVar23 = 0;
      local_EAX_4813 = LoadResourceString(0x2648,g_hINSTANCE_00807618);
      local_EAX_4831 = LoadResourceString(0x264c,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0056C0A7]: CALL dword ptr [0x0085bdec] */
      MessageBoxA((HWND)0x0,local_EAX_4831,local_EAX_4813,UVar23);
    }
    RaiseInternalException(local_EAX_47,0,"E:\\__titans\\tapp.cpp",0x2cc);
    return 0;
  }
  iVar7 = thunk_FUN_0056a5c0();
  if (iVar7 != 0) {
    /* ST_CALLSITE[0056AE12]: CALL dword ptr [0x0085bc70] */
    InterlockedDecrement(&DAT_0085e000);
    /* ST_CALLSITE[0056AE1E]: CALL dword ptr [0x0085be18] */
    hWnd = FindWindowA("STWindowClass",(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      /* ST_CALLSITE[0056AE2B]: CALL dword ptr [0x0085be14] */
      SetForegroundWindow(hWnd);
      /* ST_CALLSITE[0056AE34]: CALL dword ptr [0x0085be10] */
      ShowWindow(hWnd,9);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x13e);
  }
  AppClassTy::InitApp((AppClassTy *)local_c,hInstance);
  pWVar19 = &local_6c;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    pWVar19->style = 0;
    pWVar19 = (WNDCLASSA *)&pWVar19->lpfnWndProc;
  }
  _DAT_00806744 = hInstance;
  g_nWidth_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = MainWindowProc;
  local_6c.hInstance = hInstance;
  /* ST_CALLSITE[0056AEA7]: CALL dword ptr [0x0085ba74] */
  local_6c.hbrBackground = CreateSolidBrush(0);
  /* ST_CALLSITE[0056AEB3]: CALL dword ptr [0x0085be0c] */
  local_6c.hIcon = LoadIconA(hInstance,&DAT_00000065);
  local_6c.lpszClassName = "STWindowClass";
  /* ST_CALLSITE[0056AEC7]: CALL dword ptr [0x0085be08] */
  AVar6 = RegisterClassA(&local_6c);
  if (AVar6 == 0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x14e);
  }
  /* ST_CALLSITE[0056AF13]: CALL dword ptr [0x0085be04] */
  g_hWnd_00806748 =
       CreateWindowExA(0,"STWindowClass","Submarine Titans",0x80000000,0,0,
                       g_nWidth_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  if (g_hWnd_00806748 == (HWND)0x0) {
    RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x152);
  }
  HWND_00856d78 = g_hWnd_00806748;
  /* ST_CALLSITE[0056AF46]: CALL dword ptr [0x0085be10] */
  ShowWindow(g_hWnd_00806748,param_4);
  /* ST_CALLSITE[0056AF53]: CALL dword ptr [0x0085be00] */
  UpdateWindow(g_hWnd_00806748);
  local_34 = &local_c->field_0038;
  local_40 = g_hWnd_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  local_EAX_458 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0);
  puVar21 = local_34;
  if (local_EAX_458 == 0) {
    *local_34 = 1;
    iVar13 = Library::DKW::SND::FUN_006b7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar13 != 0) {
      *puVar21 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *local_34 = 0;
  }
  iVar13 = thunk_FUN_00571e40(&local_c->field_0038,(LPDWORD)0x1);
  if (iVar13 == 0) {
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  local_EAX_613 = Library::MSVCRT::__setjmp3(local_248.jumpBuffer,0);
  pSVar16 = local_c;
  if (local_EAX_613 == 0) {
    puVar1 = &local_c->field_0x60;
    puVar2 = (byte *)&local_c->field_7D1A;
    /* ST_CALLSITE[0056B053]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,"INTER");
    g_cMf32_00806780 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    PTR_00806784 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806780);
    /* ST_CALLSITE[0056B08E]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)puVar2,"%s%s",&pSVar16->field_0x470,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    /* ST_CALLSITE[0056B0C1]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)puVar2,"%s%s%s",puVar1,PTR_s_SYSTEM__0079b030,PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar2,0,0,0);
    /* ST_CALLSITE[0056B0E0]: CALL 0x00403387; direct=00403387 CreateArbList */
    puVar7 = CreateArbList(g_cMf32_0080675C,0);
    pSVar16->field_4EE2 = puVar7;
    /* ST_CALLSITE[0056B0F4]: CALL 0x00403387; direct=00403387 CreateArbList */
    puVar7 = CreateArbList(g_cMf32_0080675C,1);
    pSVar16->field_4EE6 = puVar7;
    if ((pSVar16->field_4EE2[3] == 0) || (puVar7[3] == 0)) {
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
  FUN_006b9b20(&g_dDXContext_0080759C,g_hWnd_00806748,(int *)&pSVar16->field_115A);
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
  local_EAX_1207 = Library::MSVCRT::__setjmp3(local_1c0.jumpBuffer,0);
  if (local_EAX_1207 == 0) {
    FUN_006c2a80((int *)&g_int_008075A4,g_dDXContext_0080759C);
  }
  g_currentExceptionFrame = local_1c0.previous;
  FUN_006b1980((int *)g_ddxContext_008075A8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  FUN_006b1cc0(g_ddxContext_008075A8,2,DAT_00807568,DAT_0080756c,nullptr);
  FUN_006b1980((int *)g_ddxContext_008075A8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  FUN_006b1cc0(g_ddxContext_008075A8,3,0,0,nullptr);
  FUN_006ad270(g_dDXContext_0080759C);
  /* ST_CALLSITE[0056B33E]: CALL dword ptr [0x0085bedc] */
  DVar8 = timeGetTime();
  Library::MSVCRT::FUN_0072e6b0(DVar8);
  thunk_FUN_005672a0(&local_c->field_0038,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  local_EAX_1470 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  pSVar16 = local_c;
  if ((local_EAX_1470 == 0) &&
     (local_EAX_1496 = Library::DKW::DDX::FUN_006b6d50((int *)&g_int_00811764,0x20),
     local_EAX_1496 == 0)) {
    DAT_00811768 = '\x01';
    pcVar12 = &pSVar16->field_07BD;
    pSVar16->field_115F = g_int_00811764[0xe];
    pcVar17 = pcVar12;
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)pcVar17 = 0;
      pcVar17 = pcVar17 + 4;
    }
    pcVar13 = (char *)g_int_00811764[0xd];
    uVar14 = 0xffffffff;
    pcVar17 = pcVar13;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    if (~uVar14 - 1 < 0x40) {
      uVar14 = 0xffffffff;
      do {
        pcVar17 = pcVar13;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar17 = pcVar13 + 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = pcVar17 + -uVar14;
      memmove(pcVar12, pcVar17, uVar14); /* compiler REP MOVS byte copy */
      pcVar12 = (char *)((byte *)pcVar12 + uVar14);
      uVar15 = 0;
    }
    else {
      Library::MSVCRT::_strncpy(pcVar12,pcVar13,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&pSVar16->field_0038);
  if (((DAT_00811768 != '\0') && (pSVar16->field_0E26 == '\0')) &&
     (iVar13 = thunk_FUN_005738d0((AnonShape_005738D0_F693E267 *)&pSVar16->field_0038), iVar13 == 0)
     ) {
    DAT_00811768 = '\0';
  }
  FUN_006c18b0((uint)DAT_00807363);
  /* ST_CALLSITE[0056B46D]: CALL 0x004043c7; direct=004043C7 CreateBaseSystem */
  CreateBaseSystem();
  pDVar10 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
  pSVar16->field_4EDA = pDVar10;
  memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
  iVar13 = 0;
  if (DAT_00811768 != '\0') {
    local_1c = 0x6102;
    goto cf_common_exit_0056C034;
  }
  local_1c = 0x6123;
  bVar4 = false;
  pcVar17 = (char *)PTR_00857168->field_0004;
  if (pcVar17 == nullptr) {
    if ((DAT_00807330 & 1) != 0) {
      ppAVar22 = &local_560;
      for (iVar13 = 0xc6; iVar13 != 0; iVar13 = iVar13 + -1) {
        *ppAVar22 = nullptr;
        ppAVar22 = ppAVar22 + 1;
      }
      /* ST_CALLSITE[0056BFEE]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar16->field_7D1A,"%s%s",&pSVar16->field_0x164,PTR_s_STARTUP_VPS_0079b040);
      pDVar11 = (DArrayTy *)
                thunk_FUN_00683c70(&pSVar16->field_7D1A,(AnonShape_00683C70_22193481 *)&local_560,
                                   &local_38,nullptr,nullptr);
      if ((local_38 == 0x40) && (pDVar11 != nullptr)) {
        local_1c = 0x7101;
        local_18 = 1;
        PTR_00806740 = pDVar11;
      }
    }
    goto cf_common_exit_0056C034;
  }
  switch(pcVar17[1]) {
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
    if ((char *)PTR_00857168->field_0008 != nullptr) {
      uVar14 = 0xffffffff;
      pcVar17 = (char *)PTR_00857168->field_0008;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = &pSVar16->field_7B06;
      pcVar18 = pcVar18 + -uVar14;
      pcVar20 = pcVar17;
      memmove(pcVar20, pcVar18, uVar14); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      FUN_006b60b0(pcVar17,pcVar17);
      pcVar17 = &pSVar16->field_7B06;
      FUN_006c2980(pcVar17,pcVar17);
      iVar13 = -1;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar2 != '\0');
      if (iVar13 != -2) {
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_0x60;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = &pSVar16->field_76F6;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        temp_103f1147536a = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar17 = temp_103f1147536a;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = temp_103f1147536a + 1;
          cVar2 = *temp_103f1147536a;
          temp_103f1147536a = pcVar17;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar18 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar18 + 1;
          cVar2 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar17 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_07BD;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        FUN_006b8280(&pSVar16->field_76F6,&pSVar16->field_76F6);
        uVar14 = 0xffffffff;
        pcVar17 = PTR_DAT_0079b050;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_7B06;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = &pSVar16->field_7B06;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &CHAR___007ca0b8;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_7B06;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        pSVar16->field_1185 = 1;
        /* ST_CALLSITE[0056B80A]: CALL 0x00404aa2; direct=00404AA2 STAppC::ReadCmdPlay */
        ReadCmdPlay(pSVar16,1);
        if (pSVar16->field_1185 != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar4 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar14 = 0xffffffff;
          temp_3fcb2a3bcd = PTR_s_SAVEGAME__0079b02c;
          do {
            pcVar17 = temp_3fcb2a3bcd;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = temp_3fcb2a3bcd + 1;
            cVar2 = *temp_3fcb2a3bcd;
            temp_3fcb2a3bcd = pcVar17;
          } while (cVar2 != '\0');
          uVar14 = ~uVar14;
          pcVar17 = pcVar17 + -uVar14;
          pcVar18 = &pSVar16->field_78FE;
          memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
          uVar15 = 0;
          uVar14 = 0xffffffff;
          pcVar17 = &pSVar16->field_07BD;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          uVar14 = ~uVar14;
          iVar13 = -1;
          pcVar17 = &pSVar16->field_78FE;
          do {
            pcVar20 = pcVar17;
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            pcVar20 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar20;
          } while (cVar2 != '\0');
          pcVar17 = pcVar18 + -uVar14;
          pcVar18 = pcVar20 + -1;
          memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
          uVar15 = 0;
          FUN_006b8280(&pSVar16->field_78FE,&pSVar16->field_78FE);
          uVar14 = 0xffffffff;
          pcVar17 = PTR_DAT_0079b050;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          uVar14 = ~uVar14;
          iVar13 = -1;
          pcVar17 = &pSVar16->field_78FE;
          do {
            pcVar20 = pcVar17;
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            pcVar20 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar20;
          } while (cVar2 != '\0');
          pcVar17 = pcVar18 + -uVar14;
          pcVar18 = pcVar20 + -1;
          memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
          uVar15 = 0;
          uVar14 = 0xffffffff;
          pcVar17 = &pSVar16->field_7B06;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          uVar14 = ~uVar14;
          iVar13 = -1;
          pcVar17 = &pSVar16->field_78FE;
          do {
            pcVar20 = pcVar17;
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            pcVar20 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar20;
          } while (cVar2 != '\0');
          pcVar17 = pcVar18 + -uVar14;
          pcVar18 = pcVar20 + -1;
          memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
          pcVar17 = (char *)((byte *)pcVar17 + uVar14);
          uVar15 = 0;
          pSVar10 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar10 != nullptr) {
            /* ST_CALLSITE[0056B905]: CALL 0x00405cd6; direct=00405CD6 StartSystemTy::StartSystemTy */
            StartSystemTy::StartSystemTy(pSVar10,(AppClassTy *)pSVar16);
          }
          /* ST_CALLSITE[0056B912]: CALL dword ptr [EAX] */
          g_startSystem_0081176C->InitSystem();
          /* ST_CALLSITE[0056B91F]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
          AppClassTy::AddSystem((AppClassTy *)pSVar16,(int *)g_startSystem_0081176C,0);
          local_1c = 0x60ff;
          pSVar16->field_7D0E = 1;
          pSVar16->field_117C = 1;
          pSVar16->field_1163 = 1;
          if ((undefined1 *)PTR_00857168->field_000C != nullptr) {
            switch(*STField<undefined1 *>(PTR_00857168,0xC)) {
            case 0x4d:
            case 0x6d:
              pSVar16->field_1163 = 3;
              break;
            case 0x53:
            case 0x73:
              pSVar16->field_1163 = 2;
            }
          }
        }
      }
    }
    break;
  case 'E':
  case 'e':
    uVar14 = 0xffffffff;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    if (((4 < ~uVar14 - 1) && (PTR_00857168->field_0008 != 0)) && (PTR_00857168->field_000C != 0)) {
      local_1c = 0x6104;
      pSVar16->field_854E = 1;
      local_18 = 1;
      local_EAX_4408 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *local_EAX_4408 - 0x30;
      pSVar16->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar16->field_112E = 1;
      }
      local_EAX_4449 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      pSVar16->field_8552 = *local_EAX_4449 + -0x30;
      local_EAX_4483 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      /* ST_CALLSITE[0056BF55]: CALL EDI */
      wsprintfA(&pSVar16->field_4F0E,"%s",local_EAX_4483);
      /* ST_CALLSITE[0056BF68]: CALL EDI */
      wsprintfA(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,&pSVar16->field_4F0E);
      uVar14 = 0xffffffff;
      pcVar17 = (char *)PTR_00857168->field_0008;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = pcVar18 + -uVar14;
      pcVar18 = &pSVar16->field_0x6ce3;
      memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
      uVar15 = 0;
    }
    break;
  case 'F':
  case 'f':
    local_1c = 0x610a;
    break;
  case 'G':
  case 'g':
switchD_0056b4ce_caseD_47:
    uVar14 = 0xffffffff;
    pcVar17 = (char *)PTR_00857168->field_0004;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    if (6 < ~uVar14 - 1) {
      local_EAX_3567 = FUN_006b8240((char *)PTR_00857168->field_0004,6);
      /* ST_CALLSITE[0056BBC1]: CALL EDI */
      wsprintfA(&pSVar16->field_78FE,"%s",local_EAX_3567);
      /* ST_CALLSITE[0056BBD4]: CALL EDI */
      wsprintfA(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,&pSVar16->field_78FE);
      pSVar16->field_1195 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_00807340 = *(char *)(PTR_00857168->field_0004 + 3) - 0x30;
      if (3 < DAT_00807340) {
        DAT_00807340 = 3;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pSVar16->field_8552 = *(char *)(PTR_00857168->field_0004 + 5) + -0x30;
      cVar2 = *(char *)(PTR_00857168->field_0004 + 4);
      pSVar16->field_1180 = CASE_8;
      pSVar16->field_112D = cVar2 + -0x30;
      /* ST_CALLSITE[0056BC2E]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
      iVar13 = sub_0056E9E0(pSVar16,1);
      if (iVar13 == 0) {
        RaiseInternalException
                  (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",600);
      }
      else {
        switch(*(undefined1 *)(PTR_00857168->field_0004 + 2)) {
        case 0x41:
        case 0x61:
          pSVar16->field_1180 = CASE_3;
          pSVar16->field_1163 = 2;
          break;
        case 0x42:
        case 0x62:
          pSVar16->field_1180 = CASE_1;
          pSVar16->field_1163 = 2;
          local_204.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_204;
          local_EAX_3793 = Library::MSVCRT::__setjmp3(local_204.jumpBuffer,0);
          pSVar16 = local_c;
          if (local_EAX_3793 == 0) {
            pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&local_c->field_76F6,0,0,0);
            local_3c = &pSVar16->field_0x1196;
            cMf32::RecGet(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            cMf32::delete(pcVar9);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            RaiseInternalException(local_EAX_3793,0,"E:\\__titans\\tapp.cpp",0x23e);
          }
          /* ST_CALLSITE[0056BD11]: CALL 0x004025b3; direct=004025B3 STAppC::sub_0056EF50 */
          sub_0056EF50(pSVar16);
          /* ST_CALLSITE[0056BD18]: CALL 0x004039ae; direct=004039AE STAppC::sub_0056F040 */
          sub_0056F040(pSVar16);
          /* ST_CALLSITE[0056BD1F]: CALL 0x004025b8; direct=004025B8 STAppC::sub_0056EBE0 */
          sub_0056EBE0(pSVar16);
          pSVar16->field_7D0E = 0;
          break;
        default:
          RaiseInternalException
                    (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x24c);
          break;
        case 0x4d:
        case 0x6d:
          pSVar16->field_1180 = CASE_8;
          pSVar16->field_1163 = 1;
          break;
        case 0x53:
        case 0x73:
          pSVar16->field_1180 = CASE_2;
          pSVar16->field_1163 = 2;
        }
        memset(&pSVar16->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        cVar2 = *(char *)(PTR_00857168->field_0004 + 1);
        if (((cVar2 == 'G') || (cVar2 == 'D')) || (cVar2 == 'W')) {
          pSVar10 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
          if (pSVar10 != nullptr) {
            /* ST_CALLSITE[0056BDC8]: CALL 0x00405cd6; direct=00405CD6 StartSystemTy::StartSystemTy */
            StartSystemTy::StartSystemTy(pSVar10,(AppClassTy *)pSVar16);
          }
          /* ST_CALLSITE[0056BDD5]: CALL dword ptr [EAX] */
          g_startSystem_0081176C->InitSystem();
          /* ST_CALLSITE[0056BDE2]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
          AppClassTy::AddSystem((AppClassTy *)pSVar16,(int *)g_startSystem_0081176C,0);
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
    uVar14 = 0xffffffff;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar14 - 1) {
      pSVar16->field_854E = 1;
      local_1c = 0x6104;
      local_18 = 0;
      local_EAX_4229 = FUN_006b8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *local_EAX_4229 - 0x30;
      pSVar16->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar16->field_112E = 1;
      }
      local_EAX_4270 = FUN_006b8240((char *)PTR_00857168->field_0004,3);
      pSVar16->field_8552 = *local_EAX_4270 + -0x30;
      local_EAX_4298 = FUN_006b8240((char *)PTR_00857168->field_0004,4);
      /* ST_CALLSITE[0056BEA0]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,local_EAX_4298);
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
    if ((char *)PTR_00857168->field_0008 != nullptr) {
      uVar14 = 0xffffffff;
      pcVar17 = (char *)PTR_00857168->field_0008;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = &pSVar16->field_7B06;
      pcVar18 = pcVar18 + -uVar14;
      pcVar20 = pcVar17;
      memmove(pcVar20, pcVar18, uVar14); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      FUN_006b60b0(pcVar17,pcVar17);
      pcVar17 = &pSVar16->field_7B06;
      FUN_006c2980(pcVar17,pcVar17);
      iVar13 = -1;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar2 != '\0');
      if (iVar13 != -2) {
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_0x60;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = &pSVar16->field_76F6;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        temp_103fc2eb3361 = PTR_s_SAVEGAME__0079b02c;
        do {
          pcVar17 = temp_103fc2eb3361;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = temp_103fc2eb3361 + 1;
          cVar2 = *temp_103fc2eb3361;
          temp_103fc2eb3361 = pcVar17;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar18 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar18 + 1;
          cVar2 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar17 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_07BD;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        FUN_006b8280(&pSVar16->field_76F6,&pSVar16->field_76F6);
        uVar14 = 0xffffffff;
        pcVar17 = PTR_DAT_0079b050;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_7B06;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &pSVar16->field_76F6;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = &pSVar16->field_7B06;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar14 = 0xffffffff;
        pcVar17 = &CHAR___007ca0b8;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar13 = -1;
        pcVar17 = &pSVar16->field_7B06;
        do {
          pcVar20 = pcVar17;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        pcVar17 = pcVar18 + -uVar14;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar17, uVar14); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[0056BB3A]: CALL dword ptr [0x0085bc80] */
        hFile = CreateFileA(&pSVar16->field_7B06,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           /* ST_CALLSITE[0056BB52]: CALL dword ptr [0x0085bc74] */
           (DVar8 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar8 != 0xffffffff)) {
          /* ST_CALLSITE[0056BB71]: CALL dword ptr [0x0085bc90] */
          WriteFile(hFile,&pSVar16->field_1134,4,&local_44,(LPOVERLAPPED)0x0);
          /* ST_CALLSITE[0056BB78]: CALL dword ptr [0x0085bbc8] */
          CloseHandle(hFile);
          pSVar16->field_1181 = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (PTR_00857168->field_0008 != 0) {
      /* ST_CALLSITE[0056B595]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,PTR_00857168->field_0008);
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      local_EAX_2043 = Library::MSVCRT::__setjmp3(local_17c.jumpBuffer,0);
      pSVar16 = local_c;
      if (local_EAX_2043 == 0) {
        pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                    (0x345,(byte *)&local_c->field_76F6,2,0,0);
        local_8 = &pSVar16->field_0x1196;
        cMf32::RecGet(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        pSVar16->field_119A = 0x8f000805;
        cMf32::RecPut(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,&pSVar16->field_0x1196,0x1999,
                      nullptr,'\0',nullptr);
        cMf32::delete(pcVar9);
      }
      g_currentExceptionFrame = local_17c.previous;
      RaiseInternalException
                (-0x5001fff4,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x1e5);
    }
  }
  if ((pSVar16->field_0E26 == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  local_560 = (AnonShape_00683C70_22193481 *)0x56c03f;
  /* ST_CALLSITE[0056C03C]: CALL dword ptr [EDX + 0x18] */
  pSVar16->GetMessage((int)local_2c);
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

