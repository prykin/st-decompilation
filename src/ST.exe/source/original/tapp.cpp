#include "st/generated.hpp"
// Generated translation unit: source/original/tapp.cpp

// 0056ADC0 STAppC::InitApp
#line 4 "decomp/ST.exe/functions/0056ADC0/decomp.c"
/* WARNING: Unable to use type for symbol pcVar12 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::InitApp */

undefined4 __thiscall
st::fn_0056ADC0(STAppC *this,HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
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
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  STAppC *pSVar16;
  char *pcVar17;
  char *pcVar18;
  WNDCLASSA *pWVar19;
  char *pcVar20;
  undefined4 *puVar21;
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
  char *pcVar12;
  char *pcVar13;
  char *temp_103f1147536a;
  char *temp_3fcb2a3bcd;
  byte *puVar2;
  char *temp_103fc2eb3361;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  local_EAX_47 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  local_30 = local_EAX_47;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    local_c->DoneApp();
    switch(local_EAX_47) {
    case -0x5001fff7:
    case -0x5001fff4:
      break;
    case -0x5001fff6:
      UVar23 = 0;
      local_EAX_4860 = st::fn_006B0140(0x2648,g_hINSTANCE_00807618);
      local_EAX_4878 = st::fn_006B0140(0x264b,g_hINSTANCE_00807618);
      st::external_00000081((HWND)0x0,local_EAX_4878,local_EAX_4860,UVar23);
      break;
    default:
      iVar15 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x2c9,0,local_EAX_47,"%s"
                                  ,"STAppC::InitApp");
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -0x5001fff3:
      UVar23 = 0;
      local_EAX_4813 = st::fn_006B0140(0x2648,g_hINSTANCE_00807618);
      local_EAX_4831 = st::fn_006B0140(0x264c,g_hINSTANCE_00807618);
      st::external_00000081((HWND)0x0,local_EAX_4831,local_EAX_4813,UVar23);
    }
    st::fn_006A5E40(local_EAX_47,0,"E:\\__titans\\tapp.cpp",0x2cc);
    return 0;
  }
  iVar7 = st::fn_00405BE1();
  if (iVar7 != 0) {
    st::external_00000051(&DAT_0085e000);
    hWnd = st::external_0000008C("STWindowClass",(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      st::external_0000008B(hWnd);
      st::external_0000008A(hWnd,9);
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x13e);
  }
  st::fn_006E3510((AppClassTy *)local_c,param_1);
  pWVar19 = &local_6c;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    pWVar19->style = 0;
    pWVar19 = (WNDCLASSA *)&pWVar19->lpfnWndProc;
  }
  _DAT_00806744 = param_1;
  g_nWidth_00806730 = 800;
  DAT_00806734 = 600;
  DAT_00806738 = 8;
  local_6c.lpfnWndProc = MainWindowProc;
  local_6c.hInstance = param_1;
  local_6c.hbrBackground = st::external_000000A5(0);
  local_6c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_6c.lpszClassName = "STWindowClass";
  AVar6 = st::external_00000088(&local_6c);
  if (AVar6 == 0) {
    st::fn_006A5E40(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x14e);
  }
  g_hWnd_00806748 =
       st::external_00000087(0,"STWindowClass","Submarine Titans",0x80000000,0,0,
                       g_nWidth_00806730,DAT_00806734,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (g_hWnd_00806748 == (HWND)0x0) {
    st::fn_006A5E40(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x152);
  }
  HWND_00856d78 = g_hWnd_00806748;
  st::external_0000008A(g_hWnd_00806748,param_4);
  st::external_00000086(g_hWnd_00806748);
  local_34 = &local_c->field_0038;
  local_40 = g_hWnd_00806748;
  local_138.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_138;
  local_EAX_458 = st::fn_0072D7F0(local_138.jumpBuffer,0);
  puVar21 = local_34;
  if (local_EAX_458 == 0) {
    *local_34 = 1;
    iVar13 = st::fn_006B7920(local_34 + 1,(DWORD_PTR)local_40);
    if (iVar13 != 0) {
      *puVar21 = 0;
    }
    g_currentExceptionFrame = local_138.previous;
  }
  else {
    g_currentExceptionFrame = local_138.previous;
    *local_34 = 0;
  }
  iVar13 = st::fn_00402617(&local_c->field_0038,(LPDWORD)0x1);
  if (iVar13 == 0) {
    st::fn_006A5E40
              (-0x5001fff6,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x159);
  }
  local_248.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_248;
  local_EAX_613 = st::fn_0072D7F0(local_248.jumpBuffer,0);
  pSVar16 = local_c;
  if (local_EAX_613 == 0) {
    puVar1 = &local_c->field_0x60;
    puVar2 = (byte *)&local_c->field_7D1A;
    st::external_00000080((LPSTR)puVar2,"%s%s%s",puVar1,st_global_0079B030,"INTER");
    g_cMf32_00806780 = (cMf32 *)st::fn_006F0EC0(0x345,puVar2,0,0,0);
    PTR_00806784 = st::fn_007097C0((int)g_cMf32_00806780);
    st::external_00000080((LPSTR)puVar2,"%s%s",&pSVar16->field_0x470,PTR_s_TASKS_0079b048);
    g_cMf32_00806798 = (cMf32 *)st::fn_006F0EC0(0x345,puVar2,0,0,0);
    st::external_00000080((LPSTR)puVar2,"%s%s%s",puVar1,st_global_0079B030,PTR_s_STRATEGS_0079b04c);
    g_cMf32_0080675C = (cMf32 *)st::fn_006F0EC0(0x345,puVar2,0,0,0);
    puVar7 = st::fn_00403387(g_cMf32_0080675C,0);
    pSVar16->field_4EE2 = puVar7;
    puVar7 = st::fn_00403387(g_cMf32_0080675C,1);
    pSVar16->field_4EE6 = puVar7;
    if ((pSVar16->field_4EE2[3] == 0) || (puVar7[3] == 0)) {
      st::fn_006A5E40
                (-0x5001fff3,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x167);
    }
    g_currentExceptionFrame = local_248.previous;
  }
  else {
    g_currentExceptionFrame = local_248.previous;
    st::fn_006A5E40(-0x5001fff3,0,"E:\\__titans\\tapp.cpp",0x169);
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
  st::fn_006B9B20(&g_dDXContext_0080759C,g_hWnd_00806748,(int *)&pSVar16->field_115A);
  st::fn_006B9B40
            (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,DAT_00806738,
             g_nWidth_00806730,DAT_00806734,0,0,0x100);
  st::fn_006B1300((int *)&g_ddxContext_008075A8,g_dDXContext_0080759C);
  st::fn_006BBB20(g_dDXContext_0080759C,1);
  st::fn_006BA780(g_dDXContext_0080759C,1);
  st::fn_006C3800
            (&g_anonShape_006C3FC0_72DDFA27_008075A0,g_dDXContext_0080759C,HWND_00856d78,0x2660);
  local_1c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c0;
  local_EAX_1207 = st::fn_0072D7F0(local_1c0.jumpBuffer,0);
  if (local_EAX_1207 == 0) {
    st::fn_006C2A80((int *)&g_int_008075A4,g_dDXContext_0080759C);
  }
  g_currentExceptionFrame = local_1c0.previous;
  st::fn_006B1980((int *)g_ddxContext_008075A8,2,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  st::fn_006B1CC0(g_ddxContext_008075A8,2,DAT_00807568,DAT_0080756c,nullptr);
  st::fn_006B1980((int *)g_ddxContext_008075A8,3,-1,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574
              );
  st::fn_006B1CC0(g_ddxContext_008075A8,3,0,0,nullptr);
  st::fn_006AD270(g_dDXContext_0080759C);
  DVar8 = st::external_000000DA();
  st::fn_0072E6B0(DVar8);
  st::fn_00403DEB(&local_c->field_0038,HWND_00856d78);
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  local_EAX_1470 = st::fn_0072D7F0(local_f4.jumpBuffer,0);
  pSVar16 = local_c;
  if ((local_EAX_1470 == 0) &&
     (local_EAX_1496 = st::fn_006B6D50((int *)&g_int_00811764,0x20),
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
      st::fn_0072E340(pcVar12,pcVar13,0x3f);
    }
  }
  g_currentExceptionFrame = local_f4.previous;
  st::fn_004048B3((AnonShape_00572510_F06DC155 *)&pSVar16->field_0038);
  if (((DAT_00811768 != '\0') && (pSVar16->field_0E26 == '\0')) &&
     (iVar13 = st::fn_00403D1E((AnonShape_005738D0_F693E267 *)&pSVar16->field_0038), iVar13 == 0)
     ) {
    DAT_00811768 = '\0';
  }
  st::fn_006C18B0((uint)DAT_00807363);
  st::fn_004043C7();
  pDVar10 = st::fn_006B54F0(nullptr,1,1);
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
      st::external_00000080(&pSVar16->field_7D1A,"%s%s",&pSVar16->field_0x164,st_global_0079B040);
      pDVar11 = (DArrayTy *)
                st::fn_00404403(&pSVar16->field_7D1A,(AnonShape_00683C70_22193481 *)&local_560,
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
      st::fn_006B60B0(pcVar17,pcVar17);
      pcVar17 = &pSVar16->field_7B06;
      st::fn_006C2980(pcVar17,pcVar17);
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
        temp_103f1147536a = st_global_0079B02C;
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
        st::fn_006B8280(&pSVar16->field_76F6,&pSVar16->field_76F6);
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
        pcVar17 = &st_global_007CA0B8;
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
        st::fn_00404AA2(pSVar16,1);
        if (pSVar16->field_1185 != 0) {
          if (*(char *)(PTR_00857168->field_0004 + 1) != 'd') {
            bVar4 = true;
            goto switchD_0056b4ce_caseD_57;
          }
          uVar14 = 0xffffffff;
          temp_3fcb2a3bcd = st_global_0079B02C;
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
          st::fn_006B8280(&pSVar16->field_78FE,&pSVar16->field_78FE);
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
          pSVar10 = (StartSystemTy *)st::fn_0072E530(0x6b6);
          if (pSVar10 != nullptr) {
            st::fn_00405CD6(pSVar10,pSVar16);
          }
          g_startSystem_0081176C->InitSystem();
          st::fn_006E4650((AppClassTy *)pSVar16,(int *)g_startSystem_0081176C,0);
          local_1c = 0x60ff;
          pSVar16->field_7D0E = 1;
          pSVar16->field_117C = 1;
          pSVar16->field_1163 = 1;
          if ((undefined1 *)PTR_00857168->field_000C != nullptr) {
            switch(*(undefined1 *)PTR_00857168->field_000C) {
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
      local_EAX_4408 = st::fn_006B8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *local_EAX_4408 - 0x30;
      pSVar16->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar16->field_112E = 1;
      }
      local_EAX_4449 = st::fn_006B8240((char *)PTR_00857168->field_0004,3);
      pSVar16->field_8552 = *local_EAX_4449 + -0x30;
      local_EAX_4483 = st::fn_006B8240((char *)PTR_00857168->field_0004,4);
      st::external_00000080(&pSVar16->field_4F0E,"%s",local_EAX_4483);
      st::external_00000080(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,&pSVar16->field_4F0E);
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
      local_EAX_3567 = st::fn_006B8240((char *)PTR_00857168->field_0004,6);
      st::external_00000080(&pSVar16->field_78FE,"%s",local_EAX_3567);
      st::external_00000080(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,&pSVar16->field_78FE);
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
      iVar13 = st::fn_00404B4C(pSVar16,1);
      if (iVar13 == 0) {
        st::fn_006A5E40
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
          local_EAX_3793 = st::fn_0072D7F0(local_204.jumpBuffer,0);
          pSVar16 = local_c;
          if (local_EAX_3793 == 0) {
            pcVar9 = (cMf32 *)st::fn_006F0EC0
                                        (0x345,&local_c->field_76F6,0,0,0);
            local_3c = &pSVar16->field_0x1196;
            st::fn_006F1CE0(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_3c,0);
            st::fn_006F1170(pcVar9);
            g_currentExceptionFrame = local_204.previous;
          }
          else {
            g_currentExceptionFrame = local_204.previous;
            st::fn_006A5E40(local_EAX_3793,0,"E:\\__titans\\tapp.cpp",0x23e);
          }
          st::fn_004025B3(pSVar16);
          st::fn_004039AE(pSVar16);
          st::fn_004025B8(pSVar16);
          pSVar16->field_7D0E = 0;
          break;
        default:
          st::fn_006A5E40
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
          pSVar10 = (StartSystemTy *)st::fn_0072E530(0x6b6);
          if (pSVar10 != nullptr) {
            st::fn_00405CD6(pSVar10,pSVar16);
          }
          g_startSystem_0081176C->InitSystem();
          st::fn_006E4650((AppClassTy *)pSVar16,(int *)g_startSystem_0081176C,0);
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
      local_EAX_4229 = st::fn_006B8240((char *)PTR_00857168->field_0004,2);
      bVar5 = *local_EAX_4229 - 0x30;
      pSVar16->field_112E = bVar5;
      if ((bVar5 == 0) || (3 < bVar5)) {
        pSVar16->field_112E = 1;
      }
      local_EAX_4270 = st::fn_006B8240((char *)PTR_00857168->field_0004,3);
      pSVar16->field_8552 = *local_EAX_4270 + -0x30;
      local_EAX_4298 = st::fn_006B8240((char *)PTR_00857168->field_0004,4);
      st::external_00000080(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,local_EAX_4298);
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
      st::fn_006B60B0(pcVar17,pcVar17);
      pcVar17 = &pSVar16->field_7B06;
      st::fn_006C2980(pcVar17,pcVar17);
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
        temp_103fc2eb3361 = st_global_0079B02C;
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
        st::fn_006B8280(&pSVar16->field_76F6,&pSVar16->field_76F6);
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
        pcVar17 = &st_global_007CA0B8;
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
        hFile = st::external_00000055(&pSVar16->field_7B06,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                            (HANDLE)0x0);
        if ((hFile != (HANDLE)0xffffffff) &&
           (DVar8 = st::external_00000052(hFile,0,(PLONG)0x0,2), DVar8 != 0xffffffff)) {
          st::external_00000059(hFile,&pSVar16->field_1134,4,&local_44,(LPOVERLAPPED)0x0);
          st::external_00000027(hFile);
          pSVar16->field_1181 = 1;
          goto switchD_0056b4ce_caseD_47;
        }
      }
    }
    break;
  case '~':
    if (PTR_00857168->field_0008 != 0) {
      st::external_00000080(&pSVar16->field_76F6,"%s%s",&pSVar16->field_0x60,PTR_00857168->field_0008);
      local_17c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_17c;
      local_EAX_2043 = st::fn_0072D7F0(local_17c.jumpBuffer,0);
      pSVar16 = local_c;
      if (local_EAX_2043 == 0) {
        pcVar9 = (cMf32 *)st::fn_006F0EC0(0x345,&local_c->field_76F6,2,0,0);
        local_8 = &pSVar16->field_0x1196;
        st::fn_006F1CE0(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_8,0);
        pSVar16->field_119A = 0x8f000805;
        st::fn_006F13F0(pcVar9,0,PTR_s_DESCRIPTOR_0079b080,&pSVar16->field_0x1196,0x1999,
                      nullptr,'\0',nullptr);
        st::fn_006F1170(pcVar9);
      }
      g_currentExceptionFrame = local_17c.previous;
      st::fn_006A5E40
                (-0x5001fff4,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x1e5);
    }
  }
  if ((pSVar16->field_0E26 == '\0') && (local_1c != 0x6104)) {
    local_1c = 0x6123;
  }
cf_common_exit_0056C034:
  local_560 = (AnonShape_00683C70_22193481 *)0x56c03f;
  pSVar16->GetMessage((int)local_2c);
  g_currentExceptionFrame = local_b0.previous;
  return 1;
}

// 0056C750 STAppC::DoneApp
#line 4 "decomp/ST.exe/functions/0056C750/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::DoneApp */

void __thiscall st::fn_0056C750(STAppC *this)

{
  int *piVar2;
  STAppC *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 *this_00;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  int *local_c;
  STAppC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1189 != (LPVOID)0x0) {
      st::fn_006AB060(&local_8->field_1189);
    }
    pSVar3->field_118D = 0;
    if (PTR_00806740 != nullptr) {
      st::fn_006AE110(PTR_00806740);
    }
    PTR_00806740 = nullptr;
    st::fn_00401D3E(pSVar3,(int *)&g_parentSystem_0081163C);
    st::fn_00401D3E(pSVar3,(int *)&g_startSystem_0081176C);
    st::fn_00403562(pSVar3);
    st::fn_0040444E();
    if ((DArrayTy *)pSVar3->field_4EE2 != nullptr) {
      st::fn_006AE110((DArrayTy *)pSVar3->field_4EE2);
    }
    pSVar3->field_4EE2 = nullptr;
    if ((DArrayTy *)pSVar3->field_4EE6 != nullptr) {
      st::fn_006AE110((DArrayTy *)pSVar3->field_4EE6);
    }
    pSVar3->field_4EE6 = nullptr;
    if (g_anonShape_006C3FC0_72DDFA27_008075A0 != nullptr) {
      st::fn_006C3AA0((int *)g_anonShape_006C3FC0_72DDFA27_008075A0);
      g_anonShape_006C3FC0_72DDFA27_008075A0 = nullptr;
    }
    if (g_int_008075A4 != nullptr) {
      st::fn_006C2AC0(g_int_008075A4);
      g_int_008075A4 = nullptr;
    }
    if (g_ddxContext_008075A8 != nullptr) {
      st::fn_006B3CC0((int *)g_ddxContext_008075A8);
      g_ddxContext_008075A8 = nullptr;
    }
    if (g_dDXContext_0080759C != nullptr) {
      st::fn_006BA600((undefined4 *)g_dDXContext_0080759C);
      g_dDXContext_0080759C = nullptr;
    }
    st::fn_00404039();
    if (g_cMf32_00806758 != nullptr) {
      st::fn_006F1170(g_cMf32_00806758);
    }
    g_cMf32_00806758 = nullptr;
    if (g_cMf32_00806760 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806760,(uint *)&PTR_0080679c);
      if (PTR_00806764 != nullptr) {
        st::fn_0070A300((int *)&PTR_00806764);
      }
      st::fn_006F1170(g_cMf32_00806760);
      g_cMf32_00806760 = nullptr;
    }
    if (PTR_00806784 != nullptr) {
      st::fn_0070A300((int *)&PTR_00806784);
    }
    if (g_cMf32_00806780 != nullptr) {
      st::fn_006F1170(g_cMf32_00806780);
    }
    g_cMf32_00806780 = nullptr;
    if (g_cMf32_00806798 != nullptr) {
      st::fn_006F1170(g_cMf32_00806798);
    }
    g_cMf32_00806798 = nullptr;
    if (g_cMf32_0080675C != nullptr) {
      st::fn_006F1170(g_cMf32_0080675C);
    }
    g_cMf32_0080675C = nullptr;
    if (pSVar3->field_4EDE != nullptr) {
      st::fn_006AE110(pSVar3->field_4EDE);
    }
    pSVar3->field_4EDE = nullptr;
    if ((DArrayTy *)pSVar3->field_4EA7 != nullptr) {
      st::fn_006B5570((DArrayTy *)pSVar3->field_4EA7);
    }
    pSVar3->field_4EA7 = nullptr;
    if ((DArrayTy *)pSVar3->field_4EAB != nullptr) {
      st::fn_006B5570((DArrayTy *)pSVar3->field_4EAB);
    }
    pSVar3->field_4EAB = nullptr;
    if (pSVar3->field_4EDA != nullptr) {
      st::fn_006B5570(pSVar3->field_4EDA);
    }
    pSVar3->field_4EDA = nullptr;
    if (pSVar3->field_7D12 != nullptr) {
      st::fn_006AB060(&pSVar3->field_7D12);
    }
    if (pSVar3->field_76F2 != nullptr) {
      st::fn_006AB060(&pSVar3->field_76F2);
    }
    st::fn_00403E86((int)pSVar3);
    this_00 = &pSVar3->field_0038;
    st::fn_004042B9(this_00,1);
    st::fn_004032C4((AnonShape_005672E0_9A0A2ED1 *)this_00);
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    local_c = this_00;
    iVar4 = st::fn_0072D7F0(local_94.jumpBuffer,0);
    piVar2 = local_c;
    if ((iVar4 == 0) && (*local_c != 0)) {
      st::fn_006B81D0((undefined4 *)local_c[1]);
      piVar2[1] = 0;
    }
    g_currentExceptionFrame = local_94.previous;
    st::external_0000008E(g_hWnd_00806748);
    g_hWnd_00806748 = (HWND)0x0;
    st::external_0000008D("STWindowClass",g_hInstance_00856D70);
    pSVar3 = local_8;
    if (local_8->field_115A != nullptr) {
      st::fn_006AB060(&local_8->field_115A);
    }
    st::fn_006E36E0((AppClassTy *)pSVar3);
    if (DAT_008030d4 != 0) {
      st::fn_006AB060(&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      st::fn_006AB060(&DAT_00802ad0);
    }
    st::external_00000051(&DAT_0085e000);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x31c,0,iVar4,"%s",
                             "STAppC::DoneApp");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\tapp.cpp",0x31d);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0056CBD0 STAppC::MainWindowProc
#line 4 "decomp/ST.exe/functions/0056CBD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::MainWindowProc

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAppC_MainWindowProc_param_2Enum. Cases:
   CASE_5=5;CASE_F=15;CASE_10=16;CASE_1C=28

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056CBD0 -> EXTERNAL:00000090 @ 0056CF3D | 0056CBD0 -> EXTERNAL:00000094 @ 0056CC82 */

LRESULT __thiscall
st::fn_0056CBD0
          (STAppC *this,HWND hWnd,STAppC_MainWindowProc_param_2Enum param_2,uint param_3,
          uint param_4)

{
  int local_EAX_42;
  int local_EAX_76;
  int local_EAX_112;
  LRESULT LVar2;
  uint uVar3;
  HCURSOR pHVar4;
  int iVar2;
  undefined1 local_cc [16];
  undefined4 local_bc;
  tagPAINTSTRUCT local_ac;
  undefined4 local_6c [4];
  undefined4 local_5c;
  InternalExceptionFrame local_4c;
  LRESULT local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_42 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x3aa,0,local_EAX_42,"%s",
                               "STAppC::MainWindowProc");
    if (iVar2 == 0) {
      return local_8;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_EAX_76 = st::fn_006E4370(g_app_00806728,param_2,param_3,param_4);
  if ((local_EAX_76 != 0) &&
     (local_EAX_112 =
           st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x330,0,-0x5001fff8,"%s",
                              "STAppC::MainWindowProc"), local_EAX_112 != 0)) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      pHVar4 = st::external_00000092(g_hInstance_00856D70,(LPCSTR)0x66);
      st::external_00000091(pHVar4);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    switch(param_2) {
    case CASE_5:
      memset(local_6c, 0, 0x20); /* compiler bulk-zero initialization */
      local_5c = 0x66;
      st::fn_006E3DD0(g_app_00806728,3,1,(int)local_6c);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_F:
      st::external_00000094(hWnd,&local_ac);
      if (g_ddxContext_008075A8 != nullptr) {
        st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      }
      if ((g_parentSystem_0081163C != nullptr) &&
         (g_sT3DSMAPContext_00807598 != nullptr)) {
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      if (g_cLoading_00802A58 != nullptr) {
        st::fn_00402185(g_cLoading_00802A58);
      }
      st::external_00000093(hWnd,&local_ac);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    case CASE_10:
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case CASE_1C:
      if (param_3 == 0) {
        if (g_dDXContext_0080759C != nullptr) {
          st::fn_006BA760((int)g_dDXContext_0080759C);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          st::fn_006DC310();
        }
        uVar3 = st::fn_00401375(0x807658);
        if (uVar3 != 0) {
          st::fn_00403E86(0x807620);
        }
        if (g_cursorClass_00802A30 != nullptr) {
          st::fn_00403058(g_cursorClass_00802A30);
        }
        pHVar4 = st::external_00000092(g_hInstance_00856D70,(LPCSTR)0x7f00);
        st::external_00000091(pHVar4);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if (g_dDXContext_0080759C != nullptr) {
        st::fn_006BA740((int)g_dDXContext_0080759C);
      }
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        st::fn_006DC300((int)g_sT3DSMAPContext_00807598);
      }
      st::fn_00403D00();
      st::fn_00404552(&DAT_00807620,hWnd);
      pHVar4 = st::external_00000092(g_hInstance_00856D70,(LPCSTR)0x66);
      st::external_00000091(pHVar4);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
  }
  else if (param_2 < 0x3ba) {
    if (param_2 == 0x3b9) {
      if (param_3 != 1) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if (param_4 >> 0x10 != 0x4453) {
        st::fn_00404575(&g_sound,hWnd);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      st::fn_00404575(&g_sound,hWnd);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
    if (param_2 == 0x100) {
      if (param_3 == 0x13) {
        if (g_cursorClass_00802A30 == nullptr) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        local_bc = 0xa100;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(local_cc);
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
    }
    else if (param_2 == 0x112) {
      if ((param_3 & 0xfff0) == 0xf140) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
      if ((param_3 & 0xfff0) == 0xf170) {
        g_currentExceptionFrame = local_4c.previous;
        return local_8;
      }
    }
  }
  else if (param_2 == 0x2660) {
    st::fn_006C4110(g_anonShape_006C3FC0_72DDFA27_008075A0);
    if ((g_anonShape_006C3FC0_72DDFA27_008075A0->field_0004 & 0x40000000) != 0) {
      st::fn_006C3F00((int)g_anonShape_006C3FC0_72DDFA27_008075A0);
    }
    if (DAT_00806738 != 8) {
      DAT_00806738 = 8;
      st::fn_006B9B40
                (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,8,g_nWidth_00806730
                 ,DAT_00806734,0,0,0);
      st::fn_006B1470((int *)g_ddxContext_008075A8);
    }
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    st::fn_006BAB60(g_dDXContext_0080759C,0x1000000);
    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    g_app_00806728->field_4EFA = 0;
    st::fn_00402F54(&g_app_00806728->field_0x38,hWnd);
    st::fn_006E3DB0((int)&g_app_00806728->field_0x113a);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  LVar2 = st::external_00000090(hWnd,param_2,param_3,param_4);
  g_currentExceptionFrame = local_4c.previous;
  return LVar2;
}

// 0056D1F0 STAppC::CommonFunction
#line 4 "decomp/ST.exe/functions/0056D1F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CommonFunction
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall CommonFunction(STAppC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0056D20A RET | 0056D257 RET | 0056D2D8 RET | 0056D31F RET */

undefined4 __thiscall st::fn_0056D1F0(STAppC *this)

{
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  STAppC *local_8;

  if (this->field_4EFA != 0) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080674c == 0) {
      st::fn_006BD740((int *)g_ddxContext_008075A8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if ((local_8->field_4EF6 != 0) && (DAT_0080673c = DAT_0080673c + -1, DAT_0080673c < 1)) {
      DAT_0080673c = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10);
      if ((g_cursorClass_00802A30 != nullptr) &&
         (g_cursorClass_00802A30->field_00A9 == 0)) {
        st::fn_006B8D50((int *)g_cursorClass_00802A30->field_00AD,0,0,0,0);
      }
      st::fn_006ED100(g_sT3DSMAPContext_00807598);
      st::fn_006BD740((int *)g_ddxContext_008075A8);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x3e6,0,errorCode,"%s",
                             "STAppC::CommonFunction");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tapp.cpp",999);
  return 0xffffffff;
}

// 0056D370 STAppC::OpenGameDBs
#line 4 "decomp/ST.exe/functions/0056D370/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::OpenGameDBs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0056D370(STAppC *this)

{
  undefined1 *puVar1;
  int errorCode;
  int iVar3;
  byte *puVar4;
  InternalExceptionFrame local_4c;
  STAppC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    puVar1 = &local_8->field_0x470;
    puVar4 = (byte *)&local_8->field_7D1A;
    st::external_00000080((LPSTR)puVar4,"%s%s",puVar1,"NATURE");
    DAT_00806768 = st::fn_006F0EC0(0x345,puVar4,0,0,0);
    PTR_0080676c = st::fn_007097C0((int)DAT_00806768);
    st::external_00000080((LPSTR)puVar4,"%s%s",puVar1,"OTHER");
    PTR_00806770 = (cMf32 *)st::fn_006F0EC0(0x345,puVar4,0,0,0);
    PTR_00806774 = st::fn_007097C0((int)PTR_00806770);
    st::external_00000080((LPSTR)puVar4,"%s%s",puVar1,&DAT_007ca15c);
    DAT_00806778 = st::fn_006F0EC0(0x345,puVar4,0,0,0);
    PTR_0080677c = st::fn_007097C0((int)DAT_00806778);
    st::external_00000080((LPSTR)puVar4,"%s%s",puVar1,"CONTROLG");
    g_cMf32_00806790 = (cMf32 *)st::fn_006F0EC0(0x345,puVar4,0,0,0);
    PTR_00806794 = st::fn_007097C0((int)g_cMf32_00806790);
    st::external_00000080((LPSTR)puVar4,"%s%s",puVar1,"OBJECT");
    DAT_00806788 = st::fn_006F0EC0(0x345,puVar4,0,0,0);
    PTR_0080678c = st::fn_007097C0((int)DAT_00806788);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x400,0,errorCode,"%s",
                             "STAppC::OpenGameDBs");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tapp.cpp",0x400);
  return;
}

// 0056D580 STAppC::CloseGameDBs
#line 4 "decomp/ST.exe/functions/0056D580/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CloseGameDBs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0056D580(STAppC *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (PTR_0080678c != nullptr) {
      st::fn_0070A300((int *)&PTR_0080678c);
    }
    st::fn_006F1170(DAT_00806788);
    DAT_00806788 = nullptr;
    if (PTR_00806794 != nullptr) {
      st::fn_0070A300((int *)&PTR_00806794);
    }
    st::fn_006F1170(g_cMf32_00806790);
    g_cMf32_00806790 = nullptr;
    if (PTR_0080677c != nullptr) {
      st::fn_0070A300((int *)&PTR_0080677c);
    }
    st::fn_006F1170(DAT_00806778);
    DAT_00806778 = nullptr;
    if (PTR_00806774 != nullptr) {
      st::fn_0070A300((int *)&PTR_00806774);
    }
    st::fn_006F1170(PTR_00806770);
    PTR_00806770 = nullptr;
    if (PTR_0080676c != nullptr) {
      st::fn_0070A300((int *)&PTR_0080676c);
    }
    st::fn_006F1170(DAT_00806768);
    DAT_00806768 = nullptr;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x417,0,errorCode,"%s",
                             "STAppC::CloseGameDBs");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tapp.cpp",0x417);
  return;
}

// 0056D740 STAppC::ChangeResolution
#line 4 "decomp/ST.exe/functions/0056D740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::ChangeResolution */

void __thiscall st::fn_0056D740(STAppC *this,int param_1)

{
  AnonPointee_STAppC_115A *pAVar1;
  int local_EAX_107;
  int iVar3;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame *pIVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_4bc [256];
  InternalExceptionFrame local_bc;
  undefined4 local_78 [4];
  undefined4 local_68;
  InternalExceptionFrame local_58;
  STAppC *local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_8 = param_1;
  local_c = 0;
  if ((((param_1 != 0) || (g_nWidth_00806730 != 800)) &&
      ((param_1 != 1 || (g_nWidth_00806730 != 0x400)))) &&
     ((param_1 != 2 || (g_nWidth_00806730 != 0x500)))) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    local_EAX_107 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (local_EAX_107 == 0) {
      st::fn_006B13E0((int *)g_ddxContext_008075A8);
      pIVar6 = g_currentExceptionFrame;
      uVar7 = local_c;
      for (; (uVar7 == 0 && (-1 < local_8)); local_8 = local_8 + -1) {
        if (local_8 == 0) {
          g_nWidth_00806730 = 800;
          DAT_00806734 = 600;
        }
        else if (local_8 == 1) {
          g_nWidth_00806730 = 0x400;
          DAT_00806734 = 0x300;
        }
        else if (local_8 == 2) {
          g_nWidth_00806730 = 0x500;
          DAT_00806734 = 0x400;
        }
        iVar5 = 0;
        local_10 = 0;
        pAVar1 = local_14->field_115A;
        puVar8 = &pAVar1->field_0004;
        if (0 < (int)*puVar8) {
          do {
            if (((pAVar1[1].field_0000 == g_nWidth_00806730) &&
                (pAVar1[1].field_0004 == DAT_00806734)) && (pAVar1[2].field_0000 == DAT_00806738)) {
              local_10 = 1;
              break;
            }
            iVar5 = iVar5 + 1;
            pAVar1 = (AnonPointee_STAppC_115A *)&pAVar1[1].field_0004;
          } while (iVar5 < (int)*puVar8);
        }
        if (local_10 != 0) {
          memset(local_4bc, 0, 0x400); /* compiler bulk-zero initialization */
          iVar5 = 0;
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          g_currentExceptionFrame = &local_bc;
          local_bc.previous = pIVar6;
          iVar3 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
          uVar7 = local_c;
          if (iVar3 == 0) {
            DVar3 = st::fn_006B9B40
                              (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,
                               DAT_00806738,g_nWidth_00806730,DAT_00806734,(int)local_4bc,0,0x100);
            local_c = (uint)(DVar3 == 0);
            st::external_00000095(HWND_00856d78,0,0,g_nWidth_00806730,DAT_00806734,1);
            local_68 = 0x66;
            st::fn_006E3DD0((AppClassTy *)local_14,3,1,(int)local_78);
            uVar7 = (uint)(DVar3 == 0);
          }
          pIVar6 = local_bc.previous;
          g_currentExceptionFrame = local_bc.previous;
          if ((local_10 != 0) && (uVar7 != 0)) break;
        }
      }
      iVar5 = local_8;
      if (local_8 < 0) {
        st::fn_006A5E40(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x442);
      }
      st::fn_006B1470((int *)g_ddxContext_008075A8);
      st::fn_006B1680((int *)g_ddxContext_008075A8,g_dDXContext_0080759C);
      st::fn_006B1980((int *)g_ddxContext_008075A8,2,-1,(&DAT_00807568)[iVar5 * 4],
                   (&DAT_0080756c)[iVar5 * 4],(&DAT_00807570)[iVar5 * 4],(&DAT_00807574)[iVar5 * 4]);
      st::fn_006B1CC0(g_ddxContext_008075A8,2,(&DAT_00807568)[iVar5 * 4],(&DAT_0080756c)[iVar5 * 4],
                   nullptr);
      st::fn_006B1980((int *)g_ddxContext_008075A8,3,-1,(&DAT_00807568)[iVar5 * 4],
                   (&DAT_0080756c)[iVar5 * 4],(&DAT_00807570)[iVar5 * 4],(&DAT_00807574)[iVar5 * 4]);
      st::fn_006B1CC0(g_ddxContext_008075A8,3,0,0,nullptr);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x44f,0,local_EAX_107,"%s",
                               "STAppC::ChangeResolution");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_107,0,"E:\\__titans\\tapp.cpp",0x44f);
  }
  return;
}

// 0056DB80 STAppC::StartGame
#line 4 "decomp/ST.exe/functions/0056DB80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall st::fn_0056DB80(STAppC *this)

{
  ushort **slotStorage;
  STAppC_field_1180State SVar1;
  undefined4 uVar2;
  ST3DSMAPContext *pSVar4;
  InternalExceptionFrame *pIVar5;
  int iVar11;
  uint *puVar6;
  ushort *puVar7;
  int local_EAX_841;
  int local_EAX_938;
  int local_EAX_1075;
  char *pcVar8_mg2;
  DArrayTy *pDVar8;
  char *pcVar8_mg1;
  DWORD DVar9;
  char *pcVar8_mg3;
  int local_EAX_2834;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *this_00;
  STAppC *pSVar11;
  char *pcVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte local_328 [260];
  byte local_224;
  undefined4 local_223;
  InternalExceptionFrame local_120;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_34 [8];
  char *local_14;
  undefined4 *local_10;
  STAppC *local_c;
  STAppC_field_1180State *local_8;

  local_224 = CHAR_00h_008016a0;
  puVar13 = &local_223;
  local_c = this;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  STField<undefined1>(puVar13,2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar11 = st::fn_0072D7F0(local_98.jumpBuffer,0);
  pSVar11 = local_c;
  if (iVar11 == 0) {
    local_c->field_4EEE = 0;
    local_c->field_4EEA = 0;
    local_c->field_4EF2 = 0;
    local_c->field_4EFE = 0;
    if (local_c->field_1195 == '\0') {
      local_c->field_1181 = 0;
    }
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    if (g_int_00811764 != nullptr) {
      st::fn_006B6500(g_int_00811764,DAT_0080733c);
    }
    pSVar11->field_4ED7 = 2;
    pSVar11->field_4EB3 = 2;
    pSVar11->field_4EAF = 0;
    st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar2 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar11->field_1168 = 0;
    pSVar11->field_0034 = uVar2;
    pSVar11->field_1164 = 0;
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    else {
      this_00 = (cLoadingTy *)g_cursorClass_00802A30->field_001C;
      if (this_00 != (cLoadingTy *)0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,(uint)this_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX;
      }
    }
    puVar6 = st::fn_00404B2E(this_00,0x5c,"MisLoad.log",1);
    if (puVar6 == nullptr) {
      g_cLoading_00802A58 = nullptr;
    }
    else {
      g_cLoading_00802A58 = (cLoadingTy *)st::fn_00402FB3((int *)puVar6);
    }
    if ((g_cLoading_00802A58 != nullptr) &&
       (st::fn_00403B52(g_cLoading_00802A58,10,1), g_cLoading_00802A58 != nullptr)) {
      st::fn_004046D8(g_cLoading_00802A58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = st::external_000000DA();
    g_cMf32_00806754 =
         (cMf32 *)st::fn_006F0EC0(0x345,&pSVar11->field_76F6,0,0,0);
    local_8 = (STAppC_field_1180State *)&pSVar11->field_4EAF;
    st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (STAppC_field_1180State *)&pSVar11->field_4EB3;
    st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar11->field_0x4eb7;
    puVar7 = st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar11->field_1180;
    pSVar11->field_4ED9 = puVar7 != nullptr;
    if ((*local_8 != 0xc) && (*local_8 != 0x10)) {
      st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar11->field_0x2b2f;
    st::fn_006F1CE0(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != nullptr) {
      st::fn_006F1170(g_cMf32_00806758);
    }
    local_8 = (STAppC_field_1180State *)&pSVar11->field_7D1A;
    g_cMf32_00806758 = nullptr;
    pcVar12 = (char *)local_8;
    for (iVar10 = 0x20d; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)pcVar12 = 0;
      pcVar12 = pcVar12 + 4;
    }
    puVar7 = st::fn_006F1CE0(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar7 == nullptr) || (local_14 = &pSVar11->field_7D1A, pSVar11->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      local_EAX_938 = st::fn_0072D7F0(local_dc.jumpBuffer,0);
      pSVar11 = local_c;
      pIVar5 = local_dc.previous;
      if (local_EAX_938 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)st::fn_006F0EC0(0x345,&local_c->field_76F6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    else {
      st::fn_0072E340(&pSVar11->field_78FE,local_14,0x103);
      pSVar11->field_7A01 = 0;
      st::external_00000080(local_14,"%s%s",&pSVar11->field_0x60,&pSVar11->field_78FE);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      local_EAX_841 = st::fn_0072D7F0(local_120.jumpBuffer,0);
      pSVar11 = local_c;
      pIVar5 = local_120.previous;
      if (local_EAX_841 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)st::fn_006F0EC0
                                (0x345,(byte *)&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar5;
    slotStorage = &pSVar11->field_7D12;
    if (pSVar11->field_7D12 != nullptr) {
      st::fn_006AB060(slotStorage);
    }
    puVar7 = st::fn_0071AD00(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *slotStorage = puVar7;
    local_EAX_1075 =
         st::fn_006F2600(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,nullptr,1);
    pSVar11->field_7D16 = local_EAX_1075;
    st::external_00000080((LPSTR)&local_224,"%s%s%s",&pSVar11->field_0x60,st_global_0079B030,
              *slotStorage);
    if (g_cMf32_00806760 != nullptr) {
      st::fn_00404039();
      st::fn_006F20E0(g_cMf32_00806760,(uint *)&PTR_0080679c);
      if (PTR_00806764 != nullptr) {
        st::fn_0070A300((int *)&PTR_00806764);
      }
      st::fn_006F1170(g_cMf32_00806760);
      g_cMf32_00806760 = nullptr;
    }
    g_cMf32_00806760 = (cMf32 *)st::fn_006F0EC0(0x345,&local_224,0,0,0);
    PTR_00806764 = st::fn_007097C0((int)g_cMf32_00806760);
    PTR_0080679c = st::fn_0070A9F0(g_cMf32_00806760,"PALETTE",2,1);
    st::fn_00402C43((int)g_cMf32_00806760,0);
    if (pSVar11->field_7D0E == 0) {
      puVar15 = &pSVar11->field_4DA3;
      pcVar8_mg1 = st::fn_006B0140(0x267f,g_hINSTANCE_00807618);
      st::external_00000080(&pSVar11->field_7D1A,"%s %s",pcVar8_mg1,puVar15);
      if (g_cLoading_00802A58 != nullptr) {
        st::fn_00401230(g_cLoading_00802A58,&pSVar11->field_7D1A);
      }
      if ((pSVar11->field_1180 == CASE_3) || (pSVar11->field_1180 == CASE_8)) {
        memset(&pSVar11->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar10 = 0;
        pSVar11->field_6CE2 = 0;
        pSVar11->field_6CE0 = 0;
        pSVar11->field_6CE1 = 0;
        pSVar11->field_521A = 0;
      }
      else {
        memset(&pSVar11->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        iVar10 = 0;
      }
    }
    else {
      local_8 = &pSVar11->field_4DA3;
      memset((void *)local_8, 0, 0x104); /* compiler bulk-zero initialization */
      iVar10 = 0;
      puVar7 = st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar7 == nullptr) || (pbVar14 = &pSVar11->field_4DA3, pSVar11->field_4DA3 == '\0')
         ) {
        st::fn_0072E730
                  (&pSVar11->field_76F6,nullptr,nullptr,local_328,nullptr);
        pbVar14 = local_328;
      }
      pcVar8_mg2 = st::fn_006B0140(0x267f,g_hINSTANCE_00807618);
      st::external_00000080(&pSVar11->field_7D1A,"%s %s",pcVar8_mg2,pbVar14);
      if (g_cLoading_00802A58 != nullptr) {
        st::fn_00401230(g_cLoading_00802A58,&pSVar11->field_7D1A);
      }
      if ((pSVar11->field_1180 == 0xc) || (pSVar11->field_1180 == 0x10)) {
        local_8 = &pSVar11->field_1180;
        st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar11->field_0x1196;
        st::fn_006F1CE0(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        st::fn_004025B3(pSVar11);
        st::fn_004039AE(pSVar11);
      }
      if ((DArrayTy *)pSVar11->field_4EA7 != nullptr) {
        st::fn_006B5570((DArrayTy *)pSVar11->field_4EA7);
      }
      puVar6 = st::fn_0071AA10(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar11->field_4EA7 = puVar6;
      if (puVar6 == nullptr) {
        pDVar8 = st::fn_006B54F0(nullptr,10,10);
        pSVar11->field_4EA7 = &pDVar8->flags;
      }
      if ((DArrayTy *)pSVar11->field_4EAB != nullptr) {
        st::fn_006B5570((DArrayTy *)pSVar11->field_4EAB);
      }
      puVar6 = st::fn_0071AA10(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar11->field_4EAB = puVar6;
      if (puVar6 == nullptr) {
        pDVar8 = st::fn_006B54F0(nullptr,10,10);
        pSVar11->field_4EAB = &pDVar8->flags;
      }
      if ((pSVar11->field_117C == 0) &&
         ((SVar1 = pSVar11->field_1180, SVar1 == CASE_8 || (SVar1 == CASE_3)))) {
        memset(&pSVar11->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar10 = 0;
        memset(&pSVar11->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar10 = 0;
        pSVar11->field_6CE2 = 0;
        pSVar11->field_6CE0 = 0;
        pSVar11->field_6CE1 = 0;
        pSVar11->field_521A = 0;
        pSVar11->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar11->field_4F02;
        puVar7 = st::fn_006F1CE0(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar7 == nullptr) {
          memset(&pSVar11->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
          iVar10 = 0;
        }
        pSVar11->field_7D0E = 0;
      }
    }
    pSVar11->field_4F02 = 0;
    if (((pSVar11->field_1185 == 0) && (pSVar11->field_1181 == 0)) &&
       (pSVar11->field_1163 != '\x03')) {
      DVar9 = st::fn_006E51B0(pSVar11);
      pSVar11->field_1134 = DVar9;
    }
    local_8 = (STAppC_field_1180State *)&pSVar11->field_1134;
    st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    st::fn_00403873();
    st::fn_006E8640
              (g_sT3DSMAPContext_00807598,
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
    st::fn_006DDA90(g_sT3DSMAPContext_00807598,0.7,0.95);
    st::fn_006DDAE0(g_sT3DSMAPContext_00807598,0x10,4,4,PTR_008032c8);
    if (DAT_00807328 == 0) {
      st::fn_006DDBB0(g_sT3DSMAPContext_00807598);
    }
    pSVar4 = g_sT3DSMAPContext_00807598;
    puVar7 = PTR_008032c0;
    g_sT3DSMAPContext_00807598->field_0278 = 0x10;
    pSVar4->field_027C = puVar7;
    st::fn_006E8630(g_sT3DSMAPContext_00807598,DAT_0080732c);
    st::fn_004013B1();
    st::fn_004052F9();
    st::fn_006F1170(g_cMf32_00806754);
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      pcVar8_mg3 = st::fn_006B0140(0x2680,g_hINSTANCE_00807618);
      st::fn_00401230(g_cLoading_00802A58,pcVar8_mg3);
      if ((pSVar11->field_115E != '\0') && (pSVar11->field_1163 == '\x03')) {
        st::external_00000050(2000);
      }
      st::fn_00403350(10,1);
      st::fn_00405B28((uint *)g_cLoading_00802A58);
      g_cLoading_00802A58 = nullptr;
    }
    st::fn_004021C6();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    iVar10 = 0;
    local_34[4] = 0x6107;
    local_34[5] = 1;
    pSVar11->GetMessage((int)local_34);
    st::fn_004021C6();
    memset(&pSVar11->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
    iVar10 = 0;
    memset(&pSVar11->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
    iVar10 = 0;
    puVar13 = (undefined4 *)&pSVar11->field_0x5327;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    memset(&pSVar11->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
    iVar10 = 0;
    pSVar11->field_6CE1 = 0;
    pSVar11->field_6CE0 = 0;
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
    }
    st::fn_00401E74((uint)DAT_00807326);
    st::fn_004021C6();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    local_34[3] = 0xf;
    local_34[4] = 5;
    st::fn_006E3DB0((int)local_34);
    st::fn_004021C6();
    st::fn_00403085(g_parentSystem_0081163C);
    st::fn_00404BD8
              ((SoundClassTy *)&pSVar11->field_0038,SOUND_MODE_1,nullptr,0x4b7,
               nullptr,0);
    DAT_0080674c = 2;
    st::external_00000096(0);
    DAT_00856d7c = 0;
    st::fn_006BBB20(g_dDXContext_0080759C,0);
    st::fn_006BA780(g_dDXContext_0080759C,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar11->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  local_EAX_2834 =
       st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x54d,0,iVar11,"%s",
                          "STAppC::StartGame");
  if (local_EAX_2834 == 0) {
    if (g_cMf32_00806754 != nullptr) {
      st::fn_006F1170(g_cMf32_00806754);
    }
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      st::fn_00405B28((uint *)g_cLoading_00802A58);
    }
    pSVar11 = local_c;
    memset(local_54, 0, 0x20); /* compiler bulk-zero initialization */
    g_cLoading_00802A58 = nullptr;
    local_44 = 0x6102;
    pSVar11->GetMessage((int)local_54);
    pSVar11->field_1195 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0056FA60 STAppC::GetMessage
#line 4 "decomp/ST.exe/functions/0056FA60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004058EE|0056FA60; family_names=STAppC::GetMessage; ret4=17;
   direct_offsets={10:4,14:6,18:7,1c:8}

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8;CASE_9=9;CASE_B=11 */

int __thiscall st::fn_0056FA60(STAppC *this,STMessage *message)

{
  char cVar1;
  STAppC_field_1180State SVar2;
  byte bVar3;
  byte bVar4;
  STMessageId SVar5;
  STMessageArg SVar6;
  AnonPointee_STAppC_115A *pAVar7;
  dword dVar8;
  CursorClassTy *pCVar10;
  STAppC *pSVar11;
  int iVar12;
  StartSystemTy *pSVar12;
  int local_EAX_2897;
  DWORD DVar13;
  char *pcVar14;
  byte *puVar15;
  HANDLE pvVar16;
  STMessageId *pSVar17;
  int iVar20;
  uint uVar18;
  int iVar19;
  int iVar21;
  STAppCVTable *pSVar22;
  byte *pbVar23;
  char *pcVar24;
  byte *puVar25;
  uint uVar26;
  byte *pbVar27;
  byte *puVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  _WIN32_FIND_DATAA local_68c;
  byte local_54c [256];
  byte local_44c [256];
  byte local_34c [256];
  byte local_24c [256];
  InternalExceptionFrame local_14c;
  InternalExceptionFrame local_108;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  InternalExceptionFrame local_a4;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  STMessageId local_44 [5];
  STMessageArg local_30;
  STMessageArg local_2c;
  int local_24;
  int local_20;
  int local_1c;
  STAppC *local_18;
  byte local_14 [4];
  int local_10;
  DArrayTy *local_c;
  byte *local_8;

  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_18 = this;
  iVar12 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
  pSVar11 = local_18;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar20 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x890,0,iVar12,"%s",
                                "STAppC::GetMessage");
    if (iVar20 == 0) {
      st::fn_006A5E40(iVar12,0,"E:\\__titans\\tapp.cpp",0x891);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006E5150(local_18,message);
  pCVar10 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6120) {
    if (SVar5 == MESS_SHARED_611F) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      st::fn_00401578(pSVar11,0);
      if (g_startSystem_0081176C == nullptr) {
        pSVar12 = (StartSystemTy *)st::fn_0072E530(0x6b6);
        if (pSVar12 != nullptr) {
          st::fn_00405CD6(pSVar12,pSVar11);
        }
        g_startSystem_0081176C->InitSystem();
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      if (message->id != MESS_STAPPC_6122) {
        g_startSystem_0081176C->field_02EB = ((message->arg0).u32 == 2) + 1;
      }
      SVar6 = message->arg1;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_30 = message->arg0;
      local_44[3] = 0;
      local_44[4] = message->id;
      local_44[2] = 0x200;
      local_2c = SVar6;
      st::fn_006E3DB0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    switch(SVar5) {
    case 0x60ff:
      if (pSVar11->field_0FC3 != 0) {
        st::fn_006C1E20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
        iVar19 = 0;
      }
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        st::fn_006E4B80(pSVar11,(int)g_startSystem_0081176C);
      }
      uVar26 = 0xffffffff;
      pcVar14 = &CHAR_00h_008016a0;
      do {
        pcVar24 = pcVar14;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar24 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar24;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      pcVar14 = pcVar24 + -uVar26;
      pcVar24 = &pSVar11->field_0x7a02;
      memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
      uVar18 = 0;
      st::fn_00403990(pSVar11);
      st::fn_00404BAB(pSVar11);
      SVar2 = pSVar11->field_1180;
      if ((SVar2 < CASE_9) || ((0xc < SVar2 && (SVar2 != 0x10)))) {
        puVar15 = (byte *)&pSVar11->field_0x1196;
        puVar25 = (byte *)&pSVar11->field_0x2b2f;
        memmove(puVar25, puVar15, 0x1999); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        pSVar11->field_44C8 = pSVar11->field_4F0A;
        puVar15 = (byte *)&pSVar11->field_0x6e1b;
        puVar25 = (byte *)&pSVar11->field_0x44cc;
        memmove(puVar25, puVar15, 0x400); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field_0x2eb;
        puVar25 = (byte *)&pSVar11->field_0x48cc;
        memmove(puVar25, puVar15, 0x14); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field376_0x2ff);
        puVar25 = (byte *)&pSVar11->field_0x48e0;
        memmove(puVar25, puVar15, 0x14); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field410_0x327);
        puVar25 = (byte *)&pSVar11->field_0x48f4;
        memmove(puVar25, puVar15, 0x26c); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field1024_0x593);
        puVar25 = (byte *)&pSVar11->field_0x4b60;
        memmove(puVar25, puVar15, 0x1a8); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field1445_0x73b;
        puVar25 = (byte *)&pSVar11->field_0x4d08;
        memmove(puVar25, puVar15, 0x9b); /* compiler REP MOVS byte copy */
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (pSVar11->field_0FC3 != 0) {
        st::fn_006C1E20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
      }
      st::fn_00403E86((int)pSVar11);
      DVar13 = st::fn_006E51B0(pSVar11);
      pSVar11->field_1134 = DVar13;
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      st::fn_00401D3E(pSVar11,(int *)&g_parentSystem_0081163C);
      st::fn_00403562(pSVar11);
      if (g_startSystem_0081176C != nullptr) {
        st::fn_006E4B80(pSVar11,(int)g_startSystem_0081176C);
      }
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
      st::fn_00401578(pSVar11,0);
      uVar26 = 0xffffffff;
      pcVar14 = &pSVar11->field_0x77fa;
      do {
        pcVar24 = pcVar14;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar24 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar24;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      pcVar14 = pcVar24 + -uVar26;
      pcVar24 = &pSVar11->field_76F6;
      memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
      st::fn_00403990(pSVar11);
      st::fn_00404BAB(pSVar11);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_STARTSYSTEMTY_6102:
    case MESS_STARTSYSTEMTY_6103:
    case MESS_STARTSYSTEMTY_6104:
    case MESS_SHARED_610A:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      st::fn_00401578(pSVar11,0);
      if (pSVar11->field_0FC3 != 0) {
        st::fn_006C1E20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
        iVar19 = 0;
      }
      st::fn_00403E86((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      st::fn_00401D3E(pSVar11,(int *)&g_parentSystem_0081163C);
      st::fn_00403562(pSVar11);
      if (g_startSystem_0081176C == nullptr) {
        pSVar12 = (StartSystemTy *)st::fn_0072E530(0x6b6);
        if (pSVar12 != nullptr) {
          st::fn_00405CD6(pSVar12,pSVar11);
        }
        g_startSystem_0081176C->InitSystem();
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[3] = 0;
      local_44[4] = message->id;
      local_44[2] = 0x200;
      if (local_44[4] != MESS_STARTSYSTEMTY_6103) {
        if (local_44[4] == MESS_STARTSYSTEMTY_6104) {
          local_2c = message->arg1;
        }
        else if (local_44[4] != MESS_SHARED_610A) {
          st::fn_006E3DB0((int)local_44);
          g_currentExceptionFrame = local_a4.previous;
          return 0;
        }
      }
      local_30 = message->arg0;
      st::fn_006E3DB0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_SHARED_6105:
      goto switchD_0056fad2_caseD_6105;
    case MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE:
      bVar4 = pSVar11->field_112D;
      (&pSVar11->field_11A7)[(uint)bVar4 * 0x51] = 1;
      pSVar11->field_112D = *(undefined1 *)((int)&message->arg0 + 2);
      pSVar11->field_112E = *(undefined1 *)&message->arg0;
      (&pSVar11->field_11A7)[(uint)(byte)pSVar11->field_112D * 0x51] = 0;
      if (g_playSystem_00802A38 != nullptr) {
        st::fn_006E57B0(g_playSystem_00802A38,0x121);
        g_playSystem_00802A38->vfunc_08(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_c4);
      }
      if (g_interSystem_00802A28 != nullptr) {
        st::fn_00401D3E(pSVar11,(int *)&g_interSystem_00802A28);
      }
      st::fn_00403FA3();
      if (g_allPlayers_007FA174 != nullptr) {
        st::fn_004052A9(bVar4);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case MESS_STARTSYSTEMTY_6104|MESS_SHARED_0003:
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
      if (g_interSystem_00802A28 != nullptr) {
        st::fn_00401D3E(pSVar11,(int *)&g_interSystem_00802A28);
      }
      st::fn_00401578(pSVar11,_DAT_00807348 & 0xff);
      pCVar10 = g_cursorClass_00802A30;
      uVar26 = _DAT_00807348 & 0xff;
      g_cursorClass_00802A30->field_04B2 = (&DAT_00807568)[uVar26 * 4];
      pCVar10->field_04B6 = (&DAT_0080756c)[uVar26 * 4];
      pCVar10->field_04BA = (&DAT_00807570)[uVar26 * 4];
      pCVar10->field_04BE = (&DAT_00807574)[uVar26 * 4];
      if (g_opticClass_007FB2A0 != nullptr) {
        st::fn_00402081(g_opticClass_007FB2A0,_DAT_00807348 & 0xff);
        st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,&local_60);
        if (g_cPanel_00801688 != nullptr) {
          st::fn_00401B6D(local_60,local_5c,local_58,
                             local_54 -
                             ((-(uint)(g_cPanel_00801688->field_023F != CASE_1) & 0xffffff65) + 0x9b
                             ));
        }
      }
      st::fn_00403FA3();
      if ((g_parentSystem_0081163C != nullptr) && ((message->arg0).u32 == 0)) {
        st::fn_00403085(g_parentSystem_0081163C);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6108:
      bVar29 = true;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      bVar4 = pSVar11->field_6CE1;
      bVar3 = pSVar11->field_6CE0;
      local_44[4] = 0x6102;
      if (((bVar3 <= bVar4) && (pSVar11->field_6CE2 <= bVar4)) && (bVar4 != 0)) {
        bVar29 = false;
        local_44[4] = 0x6103;
        local_30 = (STMessageArg)0x0;
        pSVar11->field_6CE1 = 0;
      }
      if (bVar29) {
        bVar29 = true;
        if (((pSVar11->field_6CE1 < bVar3) && (pSVar11->field_6CE2 <= bVar3)) && (bVar3 != 0)) {
          local_44[4] = 0x6104;
          local_30 = (STMessageArg)0x1;
          pSVar11->field_6CE0 = 0;
          bVar29 = false;
        }
        if (bVar29) {
          bVar4 = pSVar11->field_6CE2;
          bVar29 = true;
          if ((pSVar11->field_6CE1 < bVar4) && (pSVar11->field_6CE0 < bVar4)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar11->field_6CE2 = 0;
            }
            else if (bVar4 != 0) {
              local_44[4] = 0x7101;
              local_30 = (STMessageArg)0x4;
              pSVar11->field_6CE2 = 0;
              bVar29 = false;
            }
          }
          if ((((bVar29) && (pSVar11->field_6CE1 == 0)) && (pSVar11->field_6CE0 == 0)) &&
             ((pSVar11->field_6CE2 == 0 && (pSVar11->field_5012 != '\0')))) {
            st::external_00000080(&pSVar11->field_76F6,"%s%s",&pSVar11->field_0x60,&pSVar11->field_5012);
            st::external_00000080(&pSVar11->field_78FE,"%s",&pSVar11->field_5012);
            uVar26 = 0xffffffff;
            pcVar14 = &pSVar11->field_76F6;
            do {
              pcVar24 = pcVar14;
              if (uVar26 == 0) break;
              uVar26 = uVar26 - 1;
              pcVar24 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar24;
            } while (cVar1 != '\0');
            uVar26 = ~uVar26;
            pcVar14 = pcVar24 + -uVar26;
            pcVar24 = &pSVar11->field_0x77fa;
            memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
            if ((pSVar11->field_1180 == CASE_3) || (pSVar11->field_1180 == CASE_B)) {
              pSVar11->field_1180 = CASE_3;
            }
            else {
              pSVar11->field_1180 = CASE_8;
            }
            iVar19 = st::fn_00404B4C(pSVar11,1);
            if (iVar19 != 0) {
              local_44[4] = 0x6104;
              local_30 = (STMessageArg)0x0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar19 = st::external_00000100((CFsgsConnection *)&DAT_00802a90), iVar19 == 0))
        {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        if (bVar29) {
          local_44[4] = 0x610a;
          local_30 = (STMessageArg)0x6;
        }
      }
      pSVar22 = pSVar11->vtable;
      pSVar17 = local_44;
      goto LAB_00570c77;
    }
  }
  else {
    if (SVar5 < MESS_STAPPC_7101) {
      if (SVar5 != MESS_STAPPC_7100) {
        if (SVar5 != MESS_STAPPC_6122) {
          if (SVar5 == MESS_STAPPC_6123) goto switchD_0056fad2_caseD_6102;
          if (SVar5 != MESS_STARTSYSTEMTY_6124) {
            g_currentExceptionFrame = local_a4.previous;
            return 0;
          }
        }
        goto switchD_0056fad2_caseD_6105;
      }
      local_8 = (byte *)0x1;
      st::fn_006C4110(g_anonShape_006C3FC0_72DDFA27_008075A0);
      if ((g_anonShape_006C3FC0_72DDFA27_008075A0->field_0004 & 0x40000000) != 0) {
        st::fn_006C3F00((int)g_anonShape_006C3FC0_72DDFA27_008075A0);
      }
      local_10 = st::fn_006C2A00(&DAT_00803408);
      if ((local_10 != 0) && (g_int_008075A4 == nullptr)) {
        st::fn_006E3DB0((int)&pSVar11->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (pSVar11->field_0FC3 != 0) {
        st::fn_006C1E20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
      }
      st::fn_00403E86((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      st::fn_00403058(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        st::fn_006E4B80(pSVar11,(int)g_startSystem_0081176C);
      }
      st::fn_00401D3E(pSVar11,(int *)&g_parentSystem_0081163C);
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      st::fn_006BAB60(g_dDXContext_0080759C,0);
      st::fn_006BB370(g_dDXContext_0080759C,0,0);
      local_14c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_14c;
      local_4c = st::fn_0072D7F0(local_14c.jumpBuffer,0);
      if (local_4c != 0) {
        g_currentExceptionFrame = local_14c.previous;
        if (local_10 != 0) {
          st::fn_006C2C80(g_int_008075A4);
        }
        if (DAT_00806738 != 8) {
          DAT_00806738 = 8;
          st::fn_006B9B40
                    (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,8,
                     g_nWidth_00806730,DAT_00806734,0,0,0x100);
          st::fn_006B1470((int *)g_ddxContext_008075A8);
        }
        pSVar11 = local_18;
        puVar15 = (byte *)(&local_18->field_0038);
        local_18->field_4EFA = 0;
        st::fn_00405173((AnonShape_00567220_C9DD1C7D *)puVar15);
        st::fn_00402F54(puVar15,HWND_00856d78);
        st::fn_006E3DB0((int)&pSVar11->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      uVar26 = 0;
      local_48 = 0;
      st::fn_006B13E0((int *)g_ddxContext_008075A8);
      if (((ushort)DAT_0080350c & 0xff) == 1) {
        local_24 = 0x280;
        local_20 = 0x1e0;
      }
      else {
        local_24 = 800;
        local_20 = 600;
      }
      iVar19 = 0x10;
      local_1c = iVar19;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar19 = 0x18;
        local_1c = iVar19;
      }
      do {
        if (iVar19 == 8) goto LAB_00570645;
        iVar21 = 0;
        local_c = nullptr;
        pAVar7 = local_18->field_115A;
        puVar15 = (byte *)(&pAVar7->field_0004);
        if (0 < (int)*puVar15) {
          do {
            if (((pAVar7[1].field_0000 == local_24) && (pAVar7[1].field_0004 == local_20)) &&
               (pAVar7[2].field_0000 == iVar19)) {
              local_c = (DArrayTy *)0x1;
              break;
            }
            iVar21 = iVar21 + 1;
            pAVar7 = (AnonPointee_STAppC_115A *)&pAVar7[1].field_0004;
          } while (iVar21 < (int)*puVar15);
        }
        if (local_c != nullptr) {
          local_108.previous = g_currentExceptionFrame;
          DAT_00806738 = iVar19;
          g_currentExceptionFrame = &local_108;
          local_EAX_2897 = st::fn_0072D7F0(local_108.jumpBuffer,0);
          iVar19 = local_1c;
          if (local_EAX_2897 == 0) {
            DVar13 = st::fn_006B9B40
                               (g_dDXContext_0080759C,0x10000001,local_24,local_20,local_1c,local_24
                                ,local_20,0,0,0);
            local_48 = (uint)(DVar13 == 0);
          }
          uVar26 = local_48;
          g_currentExceptionFrame = local_108.previous;
          if ((local_c != nullptr) && (local_48 != 0)) break;
        }
        if (iVar19 == 0x10) {
          iVar19 = 8;
          local_1c = iVar19;
        }
        else if (iVar19 == 0x18) {
          iVar19 = 0x20;
          local_1c = iVar19;
        }
        else if (iVar19 == 0x20) {
          iVar19 = 0x10;
          local_1c = iVar19;
        }
      } while (uVar26 == 0);
      if (iVar19 == 8) {
LAB_00570645:
        if (uVar26 == 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x792);
        }
      }
      iVar19 = local_10;
      if ((STPiece<2,1>(DAT_0080350c) == '\x01') ||
         ((STPiece<2,1>(DAT_0080350c) == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        st::fn_006C3B00
                  (g_anonShape_006C3FC0_72DDFA27_008075A0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        st::fn_006C2AE0(g_int_008075A4,&DAT_00803408,(uint)local_8);
      }
      if (STPiece<2,1>(DAT_0080350c) == '\x01') {
        iVar21 = 0;
        iVar30 = 0;
        iVar31 = g_dDXContext_0080759C->field_0018;
        iVar32 = g_dDXContext_0080759C->field_001C;
        if (iVar19 != 0) {
          st::fn_006C2D30
                    (g_int_008075A4,0,0,g_dDXContext_0080759C->field_0018,
                     g_dDXContext_0080759C->field_001C);
          goto cf_common_exit_0057073B;
        }
      }
      else {
        if (STPiece<2,1>(DAT_0080350c) != '\x02') goto cf_common_exit_0057073B;
        iVar21 = ram0x0080350f;
        iVar30 = DAT_00803513;
        iVar31 = DAT_00803517;
        iVar32 = DAT_0080351b;
        if (iVar19 != 0) {
          st::fn_006C2D30
                    (g_int_008075A4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto cf_common_exit_0057073B;
        }
      }
      st::fn_006C3FC0(g_anonShape_006C3FC0_72DDFA27_008075A0,iVar21,iVar30,iVar31,iVar32);
cf_common_exit_0057073B:
      pSVar11 = local_18;
      st::fn_00405173((AnonShape_00567220_C9DD1C7D *)&local_18->field_0038);
      pSVar11->field_4EFA = 1;
      if (iVar19 == 0) {
        st::fn_006C4000(g_anonShape_006C3FC0_72DDFA27_008075A0);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      st::fn_006C2D90(g_int_008075A4);
      st::fn_006A5E40
                (local_4c,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x7bc);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    if (SVar5 != MESS_STAPPC_7101) {
      if (SVar5 == MESS_STAPPC_7102) {
        st::fn_00401D43(g_dDXContext_0080759C,10,2);
        pSVar11->field_001C = 1;
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (SVar5 != MESS_STAPPC_7104) {
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      st::fn_00403B2A((int)pSVar11);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    dVar8 = (message->arg0).u32;
    local_10 = 1;
    if (dVar8 == 1) {
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar19 = 0;
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar19 = 0;
      uVar26 = PTR_00806740->iteratorIndex;
      if (uVar26 < PTR_00806740->count) {
        puVar15 = DArrayAt<byte>(PTR_00806740, uVar26);
        PTR_00806740->iteratorIndex = uVar26 + 1;
      }
      else {
        puVar15 = nullptr;
      }
      if (puVar15 == nullptr) {
        pSVar11->field_1146 = 1;
        pSVar11->field_114A = 0x6123;
      }
      else {
        pSVar11->field_1146 = 1;
        pSVar11->field_114E = 1;
        pSVar11->field_114A = 0x7101;
        puVar25 = (byte *)(puVar15);
        puVar28 = (byte *)(&DAT_00803408);
        memmove(puVar28, puVar25, 0x118); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        st::external_00000080((LPSTR)&DAT_00803408,"%s%s",&pSVar11->field_0x164,puVar15);
      }
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (dVar8 == 3) {
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar19 = 0;
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar19 = 0;
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6104;
      pSVar11->field_114E = 0;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        memset(&stack0xfffff65c, 0, 0x318); /* compiler bulk-zero initialization */
        iVar19 = 0;
        st::fn_0072E730(&pSVar11->field_0x7c0a,local_14,local_24c,local_44c,local_54c);
        st::fn_0072F110
                  (&pSVar11->field_7D1A,(char *)local_14,(char *)local_24c,
                   st_global_0079B03C,nullptr);
        local_c = (DArrayTy *)
                  st::fn_00404403(&pSVar11->field_7D1A,
                                     (AnonShape_00683C70_22193481 *)&stack0xfffff65c,&local_50,
                                     nullptr,nullptr);
        if ((local_50 == 0x40) && (local_c != nullptr)) {
          uVar26 = local_c->iteratorIndex;
          if ((message->arg1).u32 == 0) {
            if (uVar26 < local_c->count) {
              pcVar14 = DArrayAt<char>(local_c, uVar26);
              local_c->iteratorIndex = uVar26 + 1;
            }
            else {
              pcVar14 = nullptr;
            }
            if (pcVar14 != nullptr) {
              pcVar24 = pcVar14;
              puVar15 = (byte *)(&DAT_00803408);
              memmove(puVar15, pcVar24, 0x118); /* compiler REP MOVS byte copy */
              st::fn_0072F110
                        ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar14,
                         nullptr);
            }
          }
          else {
            if (uVar26 < local_c->count) {
              local_8 = DArrayAt<byte>(local_c, uVar26);
              local_c->iteratorIndex = uVar26 + 1;
            }
            else {
              local_8 = nullptr;
            }
            if (local_8 != nullptr) {
              do {
                st::fn_0072E730(local_8,nullptr,nullptr,local_34c,nullptr);
                st::fn_006B77E0((char *)local_34c,local_34c);
                st::fn_006B77E0((char *)local_44c,local_44c);
                pbVar23 = local_44c;
                pbVar27 = local_34c;
                do {
                  bVar4 = *pbVar27;
                  bVar29 = bVar4 < *pbVar23;
                  if (bVar4 != *pbVar23) {
LAB_00570ab1:
                    iVar19 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar4 == 0) break;
                  bVar4 = pbVar27[1];
                  bVar29 = bVar4 < pbVar23[1];
                  if (bVar4 != pbVar23[1]) goto LAB_00570ab1;
                  pbVar27 = pbVar27 + 2;
                  pbVar23 = pbVar23 + 2;
                } while (bVar4 != 0);
                iVar19 = 0;
LAB_00570ab6:
                if (iVar19 == 0) {
                  pbVar23 = local_8;
                  puVar15 = (byte *)(&DAT_00803408);
                  memmove(puVar15, pbVar23, 0x118); /* compiler REP MOVS byte copy */
                  st::fn_0072F110
                            ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,nullptr);
                  local_8 = nullptr;
                }
                else {
                  uVar26 = local_c->iteratorIndex;
                  if (uVar26 < local_c->count) {
                    local_8 = DArrayAt<byte>(local_c, uVar26);
                    local_c->iteratorIndex = uVar26 + 1;
                  }
                  else {
                    local_8 = nullptr;
                  }
                }
              } while (local_8 != nullptr);
              st::fn_006AE110(local_c);
              goto LAB_00570c2f;
            }
          }
          st::fn_006AE110(local_c);
        }
      }
    }
    else if (dVar8 == 4) {
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar19 = 0;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6108;
      local_44[4] = 0x7100;
      puVar15 = (byte *)&pSVar11->field_0x6d03;
      puVar25 = (byte *)(&DAT_00803408);
      memmove(puVar25, puVar15, 0x118); /* compiler REP MOVS byte copy */
    }
    else {
      local_10 = 0;
    }
LAB_00570c2f:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pvVar16 = st::external_00000070((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar16 != (HANDLE)0xffffffff) {
      pSVar11->GetMessage((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar22 = pSVar11->vtable;
    pSVar17 = (STMessageId *)&pSVar11->field_0x113a;
LAB_00570c77:
    (*pSVar22->GetMessage)(pSVar11,(int)pSVar17);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

// 00571400 STAppC::ReadCmdPlay
#line 4 "decomp/ST.exe/functions/00571400/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::ReadCmdPlay */

void __thiscall st::fn_00571400(STAppC *this,int param_1)

{
  uint newSize;
  STAppC *pSVar2;
  int iVar3;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  int iVar6;
  void *pvVar7;
  int iVar5;
  InternalExceptionFrame local_70;
  undefined1 local_2c [14];
  uint local_1e;
  STAppC *local_10;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\tapp.cpp",0x914,0,iVar3,"%s",
                               "STAppC::ReadCmdPlay");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\tapp.cpp",0x914);
    return;
  }
  hFile = st::external_00000055(&local_10->field_7B06,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    local_8 = 1;
    goto cf_common_exit_00571620;
  }
  if ((param_1 != 0) &&
     (((DVar3 = st::external_00000052(hFile,0,(PLONG)0x0,0), DVar3 == 0xffffffff ||
       (BVar4 = st::external_0000004F(hFile,&pSVar2->field_1134,4,&local_c,(LPOVERLAPPED)0x0), BVar4 == 0)) ||
      (local_c != 4)))) {
    local_8 = 1;
  }
  if ((local_8 == 0) &&
     (DVar3 = st::external_00000052(hFile,pSVar2->field_1191,(PLONG)0x0,0), DVar3 != 0xffffffff)) {
    BVar4 = st::external_0000004F(hFile,local_2c,0x1b,&local_c,(LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (local_c == 0x1b)) {
      iVar6 = 0;
      switch(local_1e & 0xff) {
      case 5:
      case 0x14:
      case 0x19:
        iVar6 = 0xc;
        break;
      case 8:
      case 9:
      case 0x15:
      case 0x22:
      case 0x28:
      case 0x29:
      case 0x2a:
        iVar6 = 1;
        break;
      case 0x16:
        iVar6 = 0x18;
        break;
      case 0x17:
        iVar6 = 0x21;
        break;
      case 0x18:
        iVar6 = 0x12;
        break;
      case 0x1a:
        iVar6 = 0xd;
        break;
      case 0x1e:
        iVar6 = 0xb;
        break;
      case 0x1f:
        iVar6 = 7;
        break;
      case 0x20:
        iVar6 = 9;
        break;
      case 0x21:
        iVar6 = 5;
        break;
      case 0x23:
        iVar6 = 0x10;
        break;
      case 0x27:
        iVar6 = 2;
      }
      newSize = iVar6 + 0x1b;
      if (pSVar2->field_118D < newSize) {
        pSVar2->field_118D = newSize;
        pvVar7 = st::fn_006ACF50(pSVar2->field_1189,newSize);
        pSVar2->field_1189 = pvVar7;
      }
      DVar3 = st::external_00000052(hFile,pSVar2->field_1191,(PLONG)0x0,0);
      if (((DVar3 == 0xffffffff) ||
          (BVar4 = st::external_0000004F(hFile,pSVar2->field_1189,newSize,&local_c,(LPOVERLAPPED)0x0), BVar4 == 0
          )) || (local_c != newSize)) {
        local_8 = 1;
        st::external_00000027(hFile);
      }
      else {
        pSVar2->field_1191 = pSVar2->field_1191 + newSize;
        st::external_00000027(hFile);
      }
      goto cf_common_exit_00571620;
    }
    pSVar2->field_1185 = 0;
    if (g_popUp_008016D8 != nullptr) {
      st::fn_004014D8(g_popUp_008016D8,"Playing of commands has finished!",8);
      st::external_00000027(hFile);
      goto cf_common_exit_00571620;
    }
  }
  else {
    local_8 = 1;
  }
  st::external_00000027(hFile);
cf_common_exit_00571620:
  if ((local_8 != 0) && (pSVar2->field_1185 = 0, g_popUp_008016D8 != nullptr)) {
    st::fn_004014D8(g_popUp_008016D8,"Error playing command!",9);
    st::fn_004014D8(g_popUp_008016D8,"Playing of command has turned off.",8);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

