
void __thiscall CPanelTy::PaintArsenal(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame IStack_70;
  uint uStack_2c;
  CPanelTy *pCStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  CPanelTy *pCStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  pCStack_28 = this;
  iVar3 = __setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184,0,iVar3,&DAT_007a4ccc
                               ,s_CPanelTy__PaintArsenal_007c2808);
    if (iVar8 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006b4170(*(int *)(pCStack_28 + 0x194),0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170(*(int *)(pCVar2 + 0x194),0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170(*(int *)(pCVar2 + 0x194),0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2[0x9d4] == (CPanelTy)0x1) {
    uStack_20 = CONCAT31(uStack_20._1_3_,4);
    bVar6 = 3;
  }
  else {
    uStack_20 = (uint)uStack_20._1_3_ << 8;
    bVar6 = 4;
  }
  uStack_10 = CONCAT31(uStack_10._1_3_,bVar6);
  if (bVar6 != 0) {
    iStack_14 = 0;
    uStack_2c = uStack_20 & 0xff;
    iStack_1c = 0x54;
    pCStack_18 = pCVar2 + uStack_2c * 6 + 0xc11;
    uStack_24 = (uint)bVar6;
    do {
      if (*pCStack_18 == (CPanelTy)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = ((uint)*(ushort *)(pCStack_18 + 2) * 10) / (uint)*(ushort *)(pCStack_18 + 4);
      }
      pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),5);
      thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),0x74,iStack_1c,'\x01',pbVar5);
      uStack_10 = uStack_10 & 0xffffff00;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),uVar7 * 4 + 0x76,iStack_1c + 2,'\x01',
                             pbVar5);
          bVar6 = (byte)uStack_10 + 1;
          uStack_10 = CONCAT31(uStack_10._1_3_,bVar6);
          uVar7 = (uint)bVar6;
        } while (uVar7 < uVar4);
      }
      if ((byte)uStack_10 < 10) {
        iVar8 = 10 - (uStack_10 & 0xff);
        iVar3 = (uStack_10 & 0xff) * 4 + 0x76;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iVar3,iStack_1c + 2,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1aa4,(uint)*(ushort *)(pCStack_18 + 2));
      iVar3 = iStack_1c;
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,0xa2,iStack_1c,0x15,
                       0xc);
      ccFntTy::WrStr(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)(pCVar2 + 0x1e1),-3,-1,5);
      if ((char)uStack_20 == '\0') {
        if (iVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_DAT_00505cec)[iStack_14])();
          return;
        }
      }
      else if (iVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_DAT_00505cdc)[iStack_14])();
        return;
      }
      if (*pCStack_18 == (CPanelTy)0x0) {
        iVar8 = *(int *)(pCVar2 + 0x292);
      }
      else {
        iVar8 = *(int *)(pCVar2 + 0x28e);
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar8,(-(uint)(*pCStack_18 != (CPanelTy)0x0) & 0x14) + 0xb +
                                          iStack_14 + uStack_2c);
      if (pbVar5 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iStack_c,iStack_8,'\x06',pbVar5);
      }
      iStack_14 = iStack_14 + 1;
      pCStack_18 = pCStack_18 + 6;
      iStack_1c = iVar3 + 0xb;
      uStack_24 = uStack_24 - 1;
    } while (uStack_24 != 0);
  }
  g_currentExceptionFrame = IStack_70.previous;
  return;
}

