
void __thiscall CPanelTy::SetCmdBoat(CPanelTy *this,uint param_1)

{
  CPanelTy CVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 auStack_9c [9];
  undefined4 auStack_78 [9];
  InternalExceptionFrame IStack_54;
  CPanelTy *pCStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pCStack_10 = this;
  iVar5 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x2ff,0,iVar5,&DAT_007a4ccc
                               ,s_CPanelTy__SetCmdBoat_007c2684);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x2ff);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_005252c0(0xae);
  pCVar4 = pCStack_10;
  *(undefined4 *)(pCStack_10 + 300) = 0;
  if (pCStack_10[0xb64] == (CPanelTy)0x0) {
    thunk_FUN_004f8020(pCStack_10,'\x01',0);
  }
  *(undefined4 *)(pCVar4 + 300) = 1;
  if (DAT_008016e8 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_008016e8,'\0');
  }
  if (DAT_0080167c != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_0080167c,'\0');
  }
  if (DAT_00801680 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_00801680,'\0');
  }
  if (DAT_00801698 != (int *)0x0) {
    (**(code **)(*DAT_00801698 + 0x1c))(0);
  }
  if (DAT_00802a44 != (void *)0x0) {
    thunk_FUN_00552160(DAT_00802a44,'\0','\0');
  }
  if (DAT_00801684 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(DAT_00801684,'\0');
  }
  if (DAT_00801678 != (int *)0x0) {
    (**(code **)(*DAT_00801678 + 0x1c))(0);
  }
  if (DAT_008016ec != (int *)0x0) {
    (**(code **)(*DAT_008016ec + 0x1c))(0);
  }
  if (DAT_00802a48 != (int *)0x0) {
    (**(code **)(*DAT_00802a48 + 0x1c))(0);
  }
  if (DAT_0080168c != (int *)0x0) {
    (**(code **)(*DAT_0080168c + 0x1c))(0);
  }
  thunk_FUN_0054a8d0(DAT_00802a30);
  CVar1 = pCVar4[(param_1 & 0xff) + 0xba2];
  switch((uint)(byte)CVar1) {
  case 1:
    uStack_5 = 0;
    thunk_FUN_0054edf0((undefined4 *)0xa,(undefined4 *)&uStack_5,0,0xffffffff);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x18:
    thunk_FUN_0054b630(DAT_00802a30,(uint)(byte)CVar1,0);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  case 4:
    puVar7 = auStack_78;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    auStack_78[0]._0_1_ = 10;
    thunk_FUN_0054edf0((undefined4 *)0x17,auStack_78,0,0xffffffff);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  case 0xb:
  case 0xc:
    uStack_6 = CVar1 == (CPanelTy)0xb;
    thunk_FUN_0054edf0((undefined4 *)0x28,(undefined4 *)&uStack_6,0,0xffffffff);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  case 0xe:
    if ((DAT_00801684 != (ProdPanelTy *)0x0) && (*(short *)(DAT_00801684 + 0x172) == 2)) {
      ProdPanelTy::SetPanel(DAT_00801684,'\x01');
    }
    break;
  case 0x14:
    uStack_8 = 0;
    uStack_c = 3;
    thunk_FUN_0054edf0((undefined4 *)0x21,&uStack_c,0,0xffffffff);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  default:
    goto switchD_00503d36_caseD_15;
  case 0x2f:
    if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) == 2)) {
      (**(code **)(*DAT_00801678 + 0x1c))(1);
    }
    break;
  case 0x48:
    puVar7 = auStack_9c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    auStack_9c[0]._0_1_ = 0x14;
    thunk_FUN_0054edf0((undefined4 *)0x17,auStack_9c,0,0xffffffff);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  case 0x4c:
    if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) == 2)) {
      (**(code **)(*DAT_008016ec + 0x1c))(1);
    }
  }
  thunk_FUN_004fad20(pCVar4);
switchD_00503d36_caseD_15:
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

