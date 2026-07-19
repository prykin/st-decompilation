
void __thiscall CPanelTy::PaintInfoBoat(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 uVar10;
  InternalExceptionFrame IStack_50;
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pCStack_c = this;
  iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintInfoBoat_007c2440);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a);
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x180),0,0,'\x01',*(byte **)(pCStack_c + 0x954));
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),0,0,'\x01',*(byte **)(this_00 + 0x958));
  if (*(int *)(this_00 + 0x2e2) != 0) {
    thunk_FUN_004f1890(this_00,0);
  }
  if (this_00[0xb63] == (CPanelTy)0x0) {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),0,0,'\x06',*(byte **)(this_00 + 0x978));
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x29e),1);
    puVar9 = *(undefined4 **)(this_00 + 0x188);
  }
  else {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),0,0,'\x06',*(byte **)(this_00 + 0x980));
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x29e),0);
    puVar9 = *(undefined4 **)(this_00 + 0x188);
  }
  thunk_FUN_00540760(puVar9,0,0,'\x01',pbVar6);
LAB_004fea77:
  PaintDeep(this_00,1);
  if (this_00[0xb63] == (CPanelTy)0x2) {
    uVar10 = *(undefined4 *)(*(int *)(this_00 + 0xb95) + 0xc);
    uVar4 = FUN_006b0140(0x36b9,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s_0_d_007c245c,uVar4,uVar10);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x184),0,2,0xf,
                     *(int *)(*(int *)(this_00 + 0x958) + 4) + -4,0x2d);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  CVar1 = this_00[0xb63];
  if (((CVar1 == (CPanelTy)0x1) || (CVar1 == (CPanelTy)0x4)) || (CVar1 == (CPanelTy)0x3)) {
    PaintName(this_00,1);
    PaintLife(this_00,1);
    iVar3 = *(int *)(this_00 + 0xb66);
    if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      if (*(int *)(this_00 + 0xb81) != 0) {
        uVar5 = thunk_FUN_00526ba0(*(int *)(this_00 + 0xb81),(char)this_00[0xb85]);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2be),uVar5);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),0xb,0x31,'\x01',pbVar6);
        FUN_006b4170(*(int *)(this_00 + 0x184),0,0x3b,0x31,7,0x21,0);
        CVar1 = this_00[0xb86];
        cVar8 = (char)(((uint)(byte)CVar1 * 0x21) / 100);
        uStack_8 = CONCAT31(uStack_8._1_3_,cVar8);
        if ((CVar1 != (CPanelTy)0x0) && (cVar8 == '\0')) {
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
        }
        if ((byte)CVar1 < 0x46) {
          iVar3 = (-(uint)((byte)CVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar3 = 0;
        }
        uVar5 = uStack_8 & 0xff;
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x184),0,0x3c,0x52 - uVar5,*(int *)(this_00 + 0x28a)
                     ,0,iVar3,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),10,0x30,'\x06',pbVar6);
      }
    }
    else {
      PaintWeap(this_00,1);
    }
    if ((DAT_0080874e == '\x03') && (this_00[0xb6a] == (CPanelTy)0x3)) {
      PaintEnergy(this_00,1);
    }
  }
  if (-1 < (int)*(uint *)(this_00 + 0x148)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x148),0xffffffff,*(uint *)(this_00 + 0x3c),
                 *(uint *)(this_00 + 0x94));
  }
  if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                 *(uint *)(this_00 + 0x98));
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)*(uint *)(this_00 + 0x150))) {
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x150),0xffffffff,*(uint *)(this_00 + 0x44),
                 *(uint *)(this_00 + 0x9c));
  }
  g_currentExceptionFrame = IStack_50.previous;
  return;
}

