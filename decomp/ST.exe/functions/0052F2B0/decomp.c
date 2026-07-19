
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanel */

void __thiscall OptPanelTy::SwitchOptPanel(OptPanelTy *this,char param_1)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  OptPanelTy *local_c;
  int local_8;
  
  if (*(int *)(this + 0x19c) != 0) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x125,0,iVar2,
                               &DAT_007a4ccc,s_OptPanelTy__SwitchOptPanel_007c71e0);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x125);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(short *)(local_c + 0x172)) {
  case 1:
  case 3:
    switch(param_1) {
    case '\x02':
    case '\f':
    case '\x0e':
      local_c[0x1a9] = (OptPanelTy)0x1;
    case '\x01':
      if (param_1 == '\x01') {
        local_c[0x1a9] = (OptPanelTy)0x0;
      }
      if ((OptPanelTy)param_1 == local_c[0x1a4]) {
        g_currentExceptionFrame = local_5c.previous;
        return;
      }
      local_c[0x1a4] = (OptPanelTy)param_1;
      SetOptControls(local_c);
      g_currentExceptionFrame = local_5c.previous;
      return;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\r':
    default:
      if (*(short *)(local_c + 0x172) == 1) {
        ShiftControls(local_c,0);
      }
      *(undefined2 *)(this_00 + 0x172) = 4;
      DAT_00808788 = 0;
      if ((DAT_00801688 != (CPanelTy *)0x0) && (*(short *)(DAT_00801688 + 0x23f) == 1)) {
        CPanelTy::ShiftControls(DAT_00801688,1);
      }
      iVar2 = 0xb0;
    }
    goto LAB_0052f60b;
  case 2:
    if (DAT_008016e8 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(DAT_008016e8,'\0');
    }
    bVar4 = local_8 != 0;
    if (DAT_0080167c != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(DAT_0080167c,'\0');
    }
    bVar5 = local_8 != 0;
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    bVar6 = local_8 != 0;
    if (DAT_00801698 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    bVar7 = local_8 != 0;
    if (DAT_00802a44 != (void *)0x0) {
      local_8 = thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    bVar8 = local_8 != 0;
    if (DAT_00801678 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    bVar9 = local_8 != 0;
    if (DAT_008016ec != (int *)0x0) {
      local_8 = (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    bVar10 = local_8 != 0;
    if (DAT_00802a48 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    bVar11 = local_8 != 0;
    if (DAT_0080168c != (int *)0x0) {
      local_8 = (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    bVar12 = local_8 != 0;
    if (DAT_00801680 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(DAT_00801680,'\0');
    }
    bVar13 = local_8 != 0;
    if (DAT_00801690 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801690 + 0x18))(0);
    }
    bVar14 = local_8 != 0;
    if (DAT_008016e4 != (PlayPanelTy *)0x0) {
      local_8 = PlayPanelTy::SetPanel(DAT_008016e4,'\0');
    }
    if ((local_8 != 0 ||
         (bVar14 ||
         (bVar13 ||
         (bVar12 ||
         (bVar11 || (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || bVar4))))))))))) &&
       (param_1 == '\x0f')) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    local_10 = 0;
    local_14 = (uint)(DAT_00808783 != '\x03');
    local_18 = 1;
    thunk_FUN_0054edf0((undefined4 *)0x5,&local_18,1,0xffffffff);
    DAT_0080878c = 1;
    if (DAT_00801688 != (CPanelTy *)0x0) {
      CPanelTy::ShiftControls(DAT_00801688,0);
    }
    switch(param_1) {
    case '\x01':
      break;
    case '\x02':
    case '\f':
    case '\x0e':
      this_00[0x1a9] = (OptPanelTy)0x1;
      break;
    default:
      goto switchD_0052f589_caseD_3;
    }
    if (param_1 == '\x01') {
      this_00[0x1a9] = (OptPanelTy)0x0;
    }
    if ((OptPanelTy)param_1 != this_00[0x1a4]) {
      this_00[0x1a4] = (OptPanelTy)param_1;
      SetOptControls(this_00);
      goto switchD_0052f30f_caseD_4;
    }
    break;
  case 4:
switchD_0052f30f_caseD_4:
    break;
  default:
    goto switchD_0052f30f_default;
  }
switchD_0052f589_caseD_3:
  switch(param_1) {
  case '\x02':
  case '\f':
  case '\x0e':
    this_00[0x1a9] = (OptPanelTy)0x1;
  case '\x01':
    if (param_1 == '\x01') {
      this_00[0x1a9] = (OptPanelTy)0x0;
    }
    if ((OptPanelTy)param_1 != this_00[0x1a4]) {
      this_00[0x1a4] = (OptPanelTy)param_1;
      SetOptControls(this_00);
    }
  default:
    *(undefined2 *)(this_00 + 0x172) = 3;
    iVar2 = 0xaf;
  }
LAB_0052f60b:
  thunk_FUN_005252c0(iVar2);
switchD_0052f30f_default:
  g_currentExceptionFrame = local_5c.previous;
  return;
}

