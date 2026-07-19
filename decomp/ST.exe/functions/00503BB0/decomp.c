
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetCmdBoat */

void __thiscall CPanelTy::SetCmdBoat(CPanelTy *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_9c [9];
  undefined4 local_78 [9];
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_6;
  undefined1 local_5;
  
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
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
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
  pCVar4 = local_10;
  *(undefined4 *)&local_10->field_0x12c = 0;
  if (local_10->field_0xb64 == '\0') {
    thunk_FUN_004f8020(local_10,'\x01',0);
  }
  *(undefined4 *)&pCVar4->field_0x12c = 1;
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
  bVar1 = (&pCVar4->field_0xba2)[param_1 & 0xff];
  switch((uint)bVar1) {
  case 1:
    local_5 = 0;
    thunk_FUN_0054edf0((undefined4 *)0xa,(undefined4 *)&local_5,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
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
    thunk_FUN_0054b630(DAT_00802a30,(uint)bVar1,0);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 4:
    puVar7 = local_78;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    local_78[0]._0_1_ = 10;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_78,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xb:
  case 0xc:
    local_6 = bVar1 == 0xb;
    thunk_FUN_0054edf0((undefined4 *)0x28,(undefined4 *)&local_6,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xe:
    if ((DAT_00801684 != (ProdPanelTy *)0x0) && (*(short *)&DAT_00801684->field_0x172 == 2)) {
      ProdPanelTy::SetPanel(DAT_00801684,'\x01');
    }
    break;
  case 0x14:
    local_8 = 0;
    local_c = 3;
    thunk_FUN_0054edf0((undefined4 *)0x21,&local_c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  default:
    goto switchD_00503d36_caseD_15;
  case 0x2f:
    if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) == 2)) {
      (**(code **)(*DAT_00801678 + 0x1c))(1);
    }
    break;
  case 0x48:
    puVar7 = local_9c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    local_9c[0]._0_1_ = 0x14;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_9c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0x4c:
    if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) == 2)) {
      (**(code **)(*DAT_008016ec + 0x1c))(1);
    }
  }
  thunk_FUN_004fad20(pCVar4);
switchD_00503d36_caseD_15:
  g_currentExceptionFrame = local_54.previous;
  return;
}

