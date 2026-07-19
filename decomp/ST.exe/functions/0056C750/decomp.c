
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
  undefined1 *this_01;
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
    if (*(int *)&local_8->field_0x1189 != 0) {
      FUN_006ab060((undefined4 *)&local_8->field_0x1189);
    }
    *(undefined4 *)&pSVar3->field_0x118d = 0;
    if (DAT_00806740 != (byte *)0x0) {
      FUN_006ae110(DAT_00806740);
    }
    DAT_00806740 = (byte *)0x0;
    thunk_FUN_005711d0(pSVar3,&DAT_0081163c);
    thunk_FUN_005711d0(pSVar3,&DAT_0081176c);
    CloseGameDBs(pSVar3);
    thunk_FUN_00576ce0();
    if (*(byte **)&pSVar3->field_0x4ee2 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pSVar3->field_0x4ee2);
    }
    *(undefined4 *)&pSVar3->field_0x4ee2 = 0;
    if (*(byte **)&pSVar3->field_0x4ee6 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pSVar3->field_0x4ee6);
    }
    *(undefined4 *)&pSVar3->field_0x4ee6 = 0;
    if (DAT_008075a0 != (int *)0x0) {
      FUN_006c3aa0(DAT_008075a0);
      DAT_008075a0 = (int *)0x0;
    }
    if (DAT_008075a4 != 0) {
      FUN_006c2ac0(DAT_008075a4);
      DAT_008075a4 = 0;
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
    if (DAT_00806758 != (undefined4 *)0x0) {
      cMf32::delete(this_00,DAT_00806758);
    }
    DAT_00806758 = (undefined4 *)0x0;
    pcVar6 = (cMf32 *)0x0;
    if (DAT_00806760 != (cMf32 *)0x0) {
      cMf32::RecMemFree(DAT_00806760,&DAT_0080679c);
      pcVar6 = extraout_ECX;
      if (DAT_00806764 != 0) {
        FUN_0070a300(&DAT_00806764);
        pcVar6 = extraout_ECX_00;
      }
      cMf32::delete(pcVar6,(undefined4 *)DAT_00806760);
      DAT_00806760 = (cMf32 *)0x0;
      pcVar6 = extraout_ECX_01;
    }
    if (DAT_00806784 != 0) {
      FUN_0070a300(&DAT_00806784);
      pcVar6 = extraout_ECX_02;
    }
    if (DAT_00806780 != (undefined4 *)0x0) {
      cMf32::delete(pcVar6,DAT_00806780);
      pcVar6 = extraout_ECX_03;
    }
    DAT_00806780 = (undefined4 *)0x0;
    if (DAT_00806798 != (undefined4 *)0x0) {
      cMf32::delete(pcVar6,DAT_00806798);
      pcVar6 = extraout_ECX_04;
    }
    DAT_00806798 = (undefined4 *)0x0;
    if (DAT_0080675c != (undefined4 *)0x0) {
      cMf32::delete(pcVar6,DAT_0080675c);
    }
    DAT_0080675c = (undefined4 *)0x0;
    if (*(byte **)&pSVar3->field_0x4ede != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pSVar3->field_0x4ede);
    }
    *(undefined4 *)&pSVar3->field_0x4ede = 0;
    if (*(byte **)&pSVar3->field_0x4ea7 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pSVar3->field_0x4ea7);
    }
    *(undefined4 *)&pSVar3->field_0x4ea7 = 0;
    if (*(byte **)&pSVar3->field_0x4eab != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pSVar3->field_0x4eab);
    }
    *(undefined4 *)&pSVar3->field_0x4eab = 0;
    if (*(byte **)&pSVar3->field_0x4eda != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pSVar3->field_0x4eda);
    }
    iVar4 = *(int *)&pSVar3[1].field_0x2e14;
    *(undefined4 *)&pSVar3->field_0x4eda = 0;
    if (iVar4 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[1].field_0x2e14);
    }
    if (*(int *)&pSVar3[1].field_0x27f4 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[1].field_0x27f4);
    }
    thunk_FUN_005713b0((int)pSVar3);
    this_01 = &pSVar3->field_0x38;
    thunk_FUN_00572920(this_01,1);
    thunk_FUN_005672e0((int)this_01);
    local_94.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_94;
    local_c = (int *)this_01;
    iVar4 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar2 = local_c;
    if ((iVar4 == 0) && (*local_c != 0)) {
      FUN_006b81d0((undefined4 *)local_c[1]);
      piVar2[1] = 0;
    }
    g_currentExceptionFrame = local_94.previous;
    DestroyWindow(DAT_00806748);
    DAT_00806748 = (HWND)0x0;
    UnregisterClassA(s_STWindowClass_007c9e3c,DAT_00856d70);
    pSVar3 = local_8;
    if (*(int *)&local_8->field_0x115a != 0) {
      FUN_006ab060((undefined4 *)&local_8->field_0x115a);
    }
    AppClassTy::DoneApp((AppClassTy *)pSVar3);
    if (DAT_008030d4 != 0) {
      FUN_006ab060(&DAT_008030d4);
    }
    if (DAT_00802ad0 != 0) {
      FUN_006ab060(&DAT_00802ad0);
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

