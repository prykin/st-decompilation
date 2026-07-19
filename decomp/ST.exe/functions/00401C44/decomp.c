
void __thiscall CPanelTy::SwitchTV(CPanelTy *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *this_00;
  CPanelTy *pCVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  InternalExceptionFrame IStack_58;
  byte bStack_14;
  undefined3 uStack_13;
  CPanelTy *pCStack_10;
  uint uStack_c;
  CPanelTy *pCStack_8;
  
  if (param_1 == 0) {
    pCStack_8 = this + 0xc51;
  }
  else {
    pCStack_8 = this + 0xb63;
  }
  uStack_c = CONCAT31(uStack_c._1_3_,param_1 == 0);
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pCStack_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar3 = pCStack_8;
  uVar2 = uStack_c;
  this_00 = pCStack_10;
  if (iVar5 == 0) {
    uVar9 = uStack_c & 0xff;
    if (pCStack_10[uVar9 + 0x2ec] == (CPanelTy)0x1) {
      puVar12 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar5 = 1;
      bVar4 = 0;
      uVar10 = 6;
      if (DAT_0080731a != 0) {
        pbVar7 = (byte *)thunk_FUN_00526100(pCStack_8,1);
        puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar10,bVar4,iVar5,iVar11,puVar12);
        *(ushort **)(this_00 + uVar9 * 4 + 0x2e2) = puVar8;
        this_00[uVar9 + 0x2ec] = (CPanelTy)0x5;
        this_00[uVar9 + 0x2ea] = (CPanelTy)0x0;
        pcVar6 = thunk_FUN_00526100(pCVar3,0);
        *(char **)(this_00 + uVar9 * 4 + 0x2f6) = pcVar6;
        thunk_FUN_005252c0(0xb3);
        g_currentExceptionFrame = IStack_58.previous;
        return;
      }
      pbVar7 = (byte *)thunk_FUN_00526100(pCStack_8,0);
      puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar10,bVar4,iVar5,iVar11,puVar12);
      *(ushort **)(this_00 + uVar9 * 4 + 0x2e2) = puVar8;
      this_00[uVar9 + 0x2ea] = (CPanelTy)0x0;
      thunk_FUN_004f1890(this_00,(byte)uVar2);
      bVar4 = (-(param_1 != 0) & 0xf8U) + 8;
      _bStack_14 = CONCAT31(uStack_13,bVar4);
      if (bVar4 < 0xb) {
        uVar2 = (uint)bVar4;
        if (-1 < (int)*(uint *)(this_00 + uVar2 * 4 + 0x148)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + uVar2 * 4 + 0x148),0xffffffff,
                     *(uint *)(this_00 + uVar2 * 4 + 0x3c),*(uint *)(this_00 + uVar2 * 4 + 0x94));
        }
      }
    }
    else if (pCStack_10[uVar9 + 0x2ec] == (CPanelTy)0x5) {
      pcVar6 = thunk_FUN_00526100(pCStack_8,0);
      *(char **)(this_00 + uVar9 * 4 + 0x2f6) = pcVar6;
      g_currentExceptionFrame = IStack_58.previous;
      return;
    }
    g_currentExceptionFrame = IStack_58.previous;
    return;
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xd3,0,iVar5,&DAT_007a4ccc,
                              s_CPanelTy__SwitchTV_007c2484);
  if (iVar11 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xd3);
  return;
}

