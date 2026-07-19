
void __thiscall CPanelTy::Update2PanelWB(CPanelTy *this)

{
  CPanelTy *pCVar1;
  uint uVar2;
  code *pcVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  CPanelTy *pCVar6;
  void *unaff_EDI;
  int *piVar7;
  InternalExceptionFrame IStack_a8;
  int iStack_64;
  CPanelTy CStack_60;
  CPanelTy CStack_5f;
  CPanelTy CStack_48;
  CPanelTy CStack_47;
  CPanelTy CStack_46;
  CPanelTy CStack_30;
  CPanelTy *pCStack_8;
  
  IStack_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_a8;
  pCStack_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_a8.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x13e,0,iVar4,&DAT_007a4ccc
                               ,s_CPanelTy__Update2PanelWB_007c25c0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x13e);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pCVar1 = pCStack_8 + 0xb99;
  pCVar6 = pCVar1;
  piVar7 = &iStack_64;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *(int *)pCVar6;
    pCVar6 = pCVar6 + 4;
    piVar7 = piVar7 + 1;
  }
  pCVar6 = pCVar1;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pCVar6 = 0;
    pCVar6 = pCVar6 + 4;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,2,(int *)pCVar1);
  if (CStack_5f != this_00[0xb9e]) {
LAB_00502155:
    PaintCtrlBoat(this_00);
    SetControlBoat(this_00);
    thunk_FUN_00501a10((int)this_00);
    g_currentExceptionFrame = IStack_a8.previous;
    return;
  }
  switch(this_00[0xb9e]) {
  case (CPanelTy)0x1:
    if ((iStack_64 != *(int *)(this_00 + 0xb99)) || (CStack_60 != this_00[0xb9d]))
    goto LAB_00502155;
    thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&iStack_64);
    switch(*(int *)(this_00 + 0xb99)) {
    case 8:
    case 0x14:
      if (((this_00[0xbb6] == CStack_47) && (this_00[0xbb5] == CStack_48)) &&
         (this_00[2999] == CStack_46)) {
        g_currentExceptionFrame = IStack_a8.previous;
        return;
      }
      PaintBCapacity(this_00);
      uVar2 = *(uint *)(this_00 + 0x154);
      break;
    default:
      goto switchD_0050207d_default;
    case 0x16:
    case 0x17:
    case 0x25:
      if (this_00[0xbcd] == CStack_30) {
        g_currentExceptionFrame = IStack_a8.previous;
        return;
      }
      PaintBEnergy(this_00);
      uVar2 = *(uint *)(this_00 + 0x154);
    }
    break;
  case (CPanelTy)0x2:
  case (CPanelTy)0x3:
    if (iStack_64 == *(int *)(this_00 + 0xb99)) {
      thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&iStack_64);
      g_currentExceptionFrame = IStack_a8.previous;
      return;
    }
    goto LAB_00502155;
  case (CPanelTy)0x4:
    if (iStack_64 != *(int *)(this_00 + 0xb99)) goto LAB_00502155;
    if (*(int *)(this_00 + 0xb99) != 0xaf) {
      g_currentExceptionFrame = IStack_a8.previous;
      return;
    }
    PaintBEnergy(this_00);
    uVar2 = *(uint *)(this_00 + 0x154);
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)uVar2) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,uVar2,0xffffffff,*(uint *)(this_00 + 0x48),*(uint *)(this_00 + 0xa0));
  }
switchD_0050207d_default:
  g_currentExceptionFrame = IStack_a8.previous;
  return;
}

