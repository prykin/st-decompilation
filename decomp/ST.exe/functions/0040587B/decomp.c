
void __thiscall BldLabPanelTy::PaintUpdBut(BldLabPanelTy *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  BldLabPanelTy *pBVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_5c;
  int iStack_18;
  int iStack_14;
  BldLabPanelTy *pBStack_10;
  uint uStack_c;
  undefined4 *puStack_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  iStack_18 = *piVar2 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    iStack_14 = piVar2[1] - DAT_00806734;
  }
  else {
    iStack_14 = piVar2[1] - *(int *)(this + 0x44);
  }
  uVar1 = *(int *)(this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(this + 0x27a);
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar1)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
  }
  pBStack_10 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    uStack_c = (int)*(short *)(*(int *)(this + 0x188) + 0x23) - 1;
  }
  else {
    uStack_c = thunk_FUN_00526ba0(*puStack_8,'\x03');
  }
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pBVar4 = pBStack_10;
  if (iVar5 == 0) {
    if ((puStack_8 == (undefined4 *)0x0) || (*(char *)(puStack_8 + 2) == '\0')) {
      iVar5 = *(int *)(pBStack_10 + 0x18c);
    }
    else {
      iVar5 = *(int *)(pBStack_10 + 0x188);
    }
    pbVar6 = (byte *)FUN_0070b3a0(iVar5,uStack_c);
    iVar7 = iStack_14;
    iVar5 = iStack_18;
    thunk_FUN_00540760(*(undefined4 **)(pBVar4 + 0x68),iStack_18,iStack_14,'\x01',pbVar6);
    if ((*(short *)(param_1 + 0x14) == 3) && (puStack_8 != (undefined4 *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pBVar4 + 400),
                                    9 - (uint)(*(char *)(puStack_8 + 2) != '\0'));
      thunk_FUN_00540760(*(undefined4 **)(pBVar4 + 0x68),iVar5,iVar7,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(pBVar4 + 0x60),0xffffffff,*(uint *)(pBVar4 + 0x3c),
               *(uint *)(pBVar4 + 0x44));
    g_currentExceptionFrame = IStack_5c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x66,0,iVar5,&DAT_007a4ccc,
                             s_BldLabPanelTy__PaintUpdBut_007c1944);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x66);
  return;
}

