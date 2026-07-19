
void __thiscall BldObjPanelTy::PaintBldBut(BldObjPanelTy *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  BldObjPanelTy *pBVar3;
  int iVar4;
  uint uVar5;
  int errorCode;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_5c;
  int iStack_18;
  BldObjPanelTy *pBStack_14;
  int iStack_10;
  byte *pbStack_c;
  undefined4 *puStack_8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  iStack_18 = *piVar1 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    iStack_10 = piVar1[1] - DAT_00806734;
  }
  else {
    iStack_10 = piVar1[1] - *(int *)(this + 0x44);
  }
  uVar5 = *(int *)(this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(this + (uint)(byte)this[0x278] * 4 + 0x27e);
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar5)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar7 + 8) * uVar5 + *(int *)(iVar7 + 0x1c));
  }
  pBStack_14 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    pbStack_c = *(byte **)(this + 0x27a);
  }
  else {
    if (*(char *)(puStack_8 + 2) == '\0') {
      iVar7 = *(int *)(this + 0x18c);
    }
    else {
      iVar7 = *(int *)(this + 0x188);
    }
    uVar5 = thunk_FUN_00526ba0(*puStack_8,*(char *)((int)puStack_8 + 9));
    pbStack_c = (byte *)FUN_0070b3a0(iVar7,uVar5);
  }
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  errorCode = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_10;
  pBVar3 = pBStack_14;
  iVar7 = iStack_18;
  if (errorCode == 0) {
    thunk_FUN_00540760(*(undefined4 **)(pBStack_14 + 0x68),iStack_18,iStack_10,'\x01',pbStack_c);
    if ((*(short *)(param_1 + 0x14) == 3) && (puStack_8 != (undefined4 *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pBVar3 + 400),
                                    9 - (uint)(*(char *)(puStack_8 + 2) != '\0'));
      thunk_FUN_00540760(*(undefined4 **)(pBVar3 + 0x68),iVar7,iVar4,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(pBVar3 + 0x60),0xffffffff,*(uint *)(pBVar3 + 0x3c),
               *(uint *)(pBVar3 + 0x44));
    g_currentExceptionFrame = IStack_5c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldobj_cpp_007c1984,0x92,0,errorCode,&DAT_007a4ccc
                             ,s_BldObjPanelTy__PaintBldBut_007c1a0c);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldobj_cpp_007c1984,0x92);
  return;
}

