
void __thiscall BldBoatPanelTy::PaintBldBut(BldBoatPanelTy *this,int param_1)

{
  code *pcVar1;
  BldBoatPanelTy *pBVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_60;
  int iStack_1c;
  BldBoatPanelTy *pBStack_18;
  int *piStack_14;
  byte *pbStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  piStack_14 = *(int **)(param_1 + 0x18);
  iStack_1c = *piStack_14 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    iStack_c = piStack_14[1] - DAT_00806734;
  }
  else {
    iStack_c = piStack_14[1] - *(int *)(this + 0x44);
  }
  uVar4 = *(int *)(this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(this + (uint)(byte)this[0x278] * 4 + 0x27a);
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar4)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar7 + 8) * uVar4 + *(int *)(iVar7 + 0x1c));
  }
  pBStack_18 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    pbStack_10 = *(byte **)(this + 0x28e);
  }
  else {
    if (*(char *)(puStack_8 + 2) == '\0') {
      iVar7 = *(int *)(this + 0x18c);
    }
    else {
      iVar7 = *(int *)(this + 0x188);
    }
    uVar4 = thunk_FUN_00526ba0(*puStack_8,*(char *)((int)puStack_8 + 9));
    pbStack_10 = (byte *)FUN_0070b3a0(iVar7,uVar4);
  }
  IStack_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_60;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar3 = iStack_c;
  pBVar2 = pBStack_18;
  iVar7 = iStack_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_60.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x9e,0,iVar5,&DAT_007a4ccc,
                               s_BldBoatPanelTy__PaintBldBut_007c186c);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_bldboat_cpp_007c17b4,0x9e);
    return;
  }
  FUN_006b4170(*(int *)(pBStack_18 + 0x68),0,iStack_1c,iStack_c,piStack_14[2],piStack_14[3],0);
  thunk_FUN_00540760(*(undefined4 **)(pBVar2 + 0x68),iVar7 + 1,iVar3 + 1,'\x01',pbStack_10);
  if (*(short *)(param_1 + 0x14) == 3) {
    if (puStack_8 == (undefined4 *)0x0) goto LAB_004ef4e9;
    iVar5 = (-(uint)(*(char *)(puStack_8 + 2) != '\0') & 2) + 3;
  }
  else {
    iVar5 = 4;
  }
  pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pBVar2 + 400),iVar5);
  thunk_FUN_00540760(*(undefined4 **)(pBVar2 + 0x68),iVar7,iVar3,'\x06',pbVar6);
  if ((((puStack_8 != (undefined4 *)0x0) && (puStack_8[1] != 0)) &&
      (*(char *)(puStack_8 + 2) != '\0')) && (*(short *)(param_1 + 0x14) != 0)) {
    wsprintfA((LPSTR)(pBVar2 + 0x6c),&DAT_007c1890,puStack_8[1]);
    ccFntTy::SetSurf(*(ccFntTy **)(pBVar2 + 0x28a),*(int *)(pBVar2 + 0x68),0,iVar7,iVar3,
                     piStack_14[2],piStack_14[3]);
    ccFntTy::WrStr(*(ccFntTy **)(pBVar2 + 0x28a),(uint *)(pBVar2 + 0x6c),-2,-1,0);
  }
LAB_004ef4e9:
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)(pBVar2 + 0x60),0xffffffff,*(uint *)(pBVar2 + 0x3c),
             *(uint *)(pBVar2 + 0x44));
  g_currentExceptionFrame = IStack_60.previous;
  return;
}

