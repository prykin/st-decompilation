
void __thiscall TradePanelTy::PaintPanel(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *this_00;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  InternalExceptionFrame IStack_54;
  TradePanelTy *pTStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pTStack_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pTStack_10;
  if (iVar2 == 0) {
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(pTStack_10 + 0x68),0,0x1f,0x31,*(int *)(pTStack_10 + 0x185),0,0x1f,
               0x31,0x44,0x39);
    bVar8 = 0x3a;
    iVar6 = 0;
    iVar2 = FUN_0070b3a0(*(int *)(this_00 + 0x1d1),(uint)(byte)this_00[0x1d0]);
    FUN_006b5440(*(int *)(this_00 + 0x68),0,0x22,0x38,iVar2,iVar6,bVar8);
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x68),0,0xa6,0x31,*(int *)(this_00 + 0x185),0,0xa6,0x31,
               0x77,0x26);
    if (this_00[0x1bb] == (TradePanelTy)0x0) {
      bVar8 = 0x3a;
      iVar6 = 0;
      iVar2 = FUN_0070b3a0(*(int *)(this_00 + 0x1d5),
                           (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 4);
      FUN_006b5440(*(int *)(this_00 + 0x68),0,0xd9,0x34,iVar2,iVar6,bVar8);
      if (DAT_0080874e != '\x03') {
        iVar6 = 0;
        iVar2 = 0xb5;
        iStack_8 = 0xa9;
        iStack_c = 2;
        do {
          if (*(ushort *)(this_00 + (iVar6 + (uint)(byte)this_00[0x1d0] * 2) * 4 + 0x1ab) != 0) {
            pbVar4 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1d9),
                                          *(ushort *)
                                           (this_00 +
                                           (iVar6 + (uint)(byte)this_00[0x1d0] * 2) * 4 + 0x1ab) - 1
                                         );
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iStack_8,0x39,'\x01',pbVar4);
          }
          wsprintfA((LPSTR)(this_00 + 0x18d),&DAT_007c8720,
                    (uint)*(ushort *)
                           (this_00 + (iVar6 + (uint)(byte)this_00[0x1d0] * 2) * 4 + 0x1ad));
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x189),*(int *)(this_00 + 0x68),0,iVar2,0x36,0x22
                           ,0xc);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x189),(uint *)(this_00 + 0x18d),-1,-1,1);
          iVar6 = iVar6 + 1;
          iStack_8 = iStack_8 + 0x68;
          iVar2 = iVar2 + 0x39;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
    }
    else {
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x189),*(int *)(this_00 + 0x68),0,0xa6,0x31,0x77,0x26
                      );
      iVar9 = -1;
      iVar7 = -1;
      iVar2 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
      iVar5 = -1;
      iVar6 = -2;
      puVar3 = (uint *)FUN_006b0140(0x4e5b,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x189),puVar3,iVar6,iVar5,iVar2,iVar7,iVar9);
    }
    PaintIndicators(this_00);
    g_currentExceptionFrame = IStack_54.previous;
    return;
  }
  g_currentExceptionFrame = IStack_54.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0xf5,0,iVar2,&DAT_007a4ccc,
                             s_TradePanelTy__PaintPanel_007c8700);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0xf5);
  return;
}

