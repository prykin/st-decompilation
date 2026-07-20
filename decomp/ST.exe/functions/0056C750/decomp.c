
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::DoneApp */

void __thiscall STAppC::DoneApp(STAppC *this)

{
  code *pcVar1;
  int *piVar2;
  STAppC *pSVar3;
  int iVar4;
  int iVar5;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar6;
  undefined4 unaff_ESI;
  undefined4 *this_01;
  void *unaff_EDI;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  int *local_c;
  STAppC *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1189 != (LPVOID)0x0) {
      FUN_006ab060(&local_8->field_1189);
    }
    pSVar3->field_118D = 0;
    if (PTR_00806740 != (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0) {
      FUN_006ae110((byte *)PTR_00806740);
    }
    PTR_00806740 = (AnonShape_GLOBAL_00806740_0AFD1484 *)0x0;
    thunk_FUN_005711d0(pSVar3,(int *)&PTR_0081163c);
    thunk_FUN_005711d0(pSVar3,(int *)&PTR_0081176c);
    CloseGameDBs(pSVar3);
    DestroyBaseSystem();
    if ((byte *)pSVar3->field_4EE2 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar3->field_4EE2);
    }
    pSVar3->field_4EE2 = 0;
    if ((byte *)pSVar3->field_4EE6 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar3->field_4EE6);
    }
    pSVar3->field_4EE6 = 0;
    if (PTR_008075a0 != (AnonShape_006C3FC0_72DDFA27 *)0x0) {
      FUN_006c3aa0((int *)PTR_008075a0);
      PTR_008075a0 = (AnonShape_006C3FC0_72DDFA27 *)0x0;
    }
    if (g_int_008075A4 != (int *)0x0) {
      FUN_006c2ac0(g_int_008075A4);
      g_int_008075A4 = (int *)0x0;
    }
    if (DAT_008075a8 != (int *)0x0) {
      Library::DKW::DDX::FUN_006b3cc0(DAT_008075a8);
      DAT_008075a8 = (int *)0x0;
    }
    if (DAT_0080759c != (undefined4 *)0x0) {
      FUN_006ba600(DAT_0080759c);
      DAT_0080759c = (undefined4 *)0x0;
    }
    thunk_FUN_0055d910();
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      cMf32::delete(this_00,g_cMf32_00806758);
    }
    g_cMf32_00806758 = (cMf32 *)0x0;
    pcVar6 = (cMf32 *)0x0;
    if (g_cMf32_00806760 != (cMf32 *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806760,&DAT_0080679c);
      pcVar6 = extraout_ECX;
      if (DAT_00806764 != 0) {
        FUN_0070a300(&DAT_00806764);
        pcVar6 = extraout_ECX_00;
      }
      cMf32::delete(pcVar6,g_cMf32_00806760);
      g_cMf32_00806760 = (cMf32 *)0x0;
      pcVar6 = extraout_ECX_01;
    }
    if (DAT_00806784 != 0) {
      FUN_0070a300(&DAT_00806784);
      pcVar6 = extraout_ECX_02;
    }
    if (g_cMf32_00806780 != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_00806780);
      pcVar6 = extraout_ECX_03;
    }
    g_cMf32_00806780 = (cMf32 *)0x0;
    if (g_cMf32_00806798 != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_00806798);
      pcVar6 = extraout_ECX_04;
    }
    g_cMf32_00806798 = (cMf32 *)0x0;
    if (g_cMf32_0080675C != (cMf32 *)0x0) {
      cMf32::delete(pcVar6,g_cMf32_0080675C);
    }
    g_cMf32_0080675C = (cMf32 *)0x0;
    if ((byte *)pSVar3->field_4EDE != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar3->field_4EDE);
    }
    pSVar3->field_4EDE = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EA7 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EA7);
    }
    pSVar3->field_4EA7 = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EAB != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EAB);
    }
    pSVar3->field_4EAB = 0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EDA != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar3->field_4EDA);
    }
    pSVar3->field_4EDA = 0;
    if (pSVar3->field_7D12 != 0) {
      FUN_006ab060((LPVOID *)&pSVar3->field_7D12);
    }
    if (pSVar3->field_76F2 != 0) {
      FUN_006ab060((LPVOID *)&pSVar3->field_76F2);
    }
    thunk_FUN_005713b0((int)pSVar3);
    this_01 = &pSVar3->field_0038;
    thunk_FUN_00572920(this_01,1);
    thunk_FUN_005672e0((AnonShape_005672E0_9A0A2ED1 *)this_01);
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    local_c = this_01;
    iVar4 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar2 = local_c;
    if ((iVar4 == 0) && (*local_c != 0)) {
      FUN_006b81d0((undefined4 *)local_c[1]);
      piVar2[1] = 0;
    }
    g_currentExceptionFrame = local_94.previous;
    DestroyWindow(g_hWnd_00806748);
    g_hWnd_00806748 = (HWND)0x0;
    UnregisterClassA(s_STWindowClass_007c9e3c,g_hInstance_00856D70);
    pSVar3 = local_8;
    if (local_8->field_115A != 0) {
      FUN_006ab060((LPVOID *)&local_8->field_115A);
    }
    AppClassTy::DoneApp((AppClassTy *)pSVar3);
    if (DAT_008030d4 != 0) {
      FUN_006ab060((LPVOID *)&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      FUN_006ab060((LPVOID *)&DAT_00802ad0);
    }
    InterlockedDecrement(&DAT_0085e000);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x31c,0,iVar4,&DAT_007a4ccc,
                             s_STAppC__DoneApp_007ca0e4);
  if (iVar5 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_tapp_cpp_007ca0c8,0x31d);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

