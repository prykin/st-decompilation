
void __thiscall CampaignTy::PaintCampaign(CampaignTy *this)

{
  code *pcVar1;
  CampaignTy *pCVar2;
  int iVar3;
  uint *puVar4;
  LPSTR pCVar5;
  BITMAPINFO *pBVar6;
  StartServTy *this_00;
  undefined4 unaff_ESI;
  CampaignTy *pCVar7;
  void *unaff_EDI;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  void *pvVar12;
  InternalExceptionFrame IStack_4c;
  CampaignTy *pCStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pCStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_4c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0xb5,0,iVar3,&DAT_007a4ccc,
                               s_CampaignTy__PaintCampaign_007cbdf0);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0xb5);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  pCVar7 = pCStack_8;
  pvVar12 = *(void **)(DAT_0081176c + 0x30);
  uVar10 = 0xffffffff;
  uVar9 = 0xfffffffe;
  puVar4 = (uint *)FUN_006b0140((-(uint)(*(int *)(pCStack_8 + 0x1ffc) != 0) & 0xfffffca8) + 0x26b1,
                                DAT_00807618);
  StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar9,uVar10,pvVar12,iVar3);
  if (*(int *)(DAT_0081176c + 0x28) == 0) {
    iVar3 = 0;
    bVar11 = 0;
    pCVar5 = FUN_006f2c00(s_CMPG_BKG_007cbe10,1,(uint)DAT_0080874e);
    pBVar6 = (BITMAPINFO *)FUN_0070a9f0(DAT_00806780,pCVar5,bVar11,iVar3);
    thunk_FUN_005403c0(0xa5,0x37,'\x01',pBVar6);
  }
  else {
    pCVar7 = pCVar7 + 0x1b13;
    iVar3 = 3;
    do {
      iVar8 = 0xf;
      do {
        if (*(int *)pCVar7 != 0) {
          FUN_006c4aa0(*(int *)pCVar7);
        }
        pCVar2 = pCStack_8;
        pCVar7 = pCVar7 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    pCVar7 = pCStack_8 + 0x1bd7;
    do {
      if (*(int *)pCVar7 != 0) {
        FUN_006c4aa0(*(int *)pCVar7);
      }
      pCVar7 = pCVar7 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 0;
    if (pCVar2[0x9a] != (CampaignTy)0x0) {
      pCVar7 = pCVar2 + 0xff;
      do {
        if (*(uint *)(pCVar7 + -0x18) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)(pCVar7 + 0x2c),*(uint *)(pCVar7 + -0x18),*(uint *)(pCVar7 + -0x14),
                     *(uint *)pCVar7,*(uint *)(pCVar7 + 4));
        }
        if ((pCVar2[0x65] == (CampaignTy)0x1) && (*(uint *)(pCVar7 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)(pCVar7 + 0xbd),*(uint *)(pCVar7 + 0x79),*(uint *)(pCVar7 + 0x7d),
                     *(uint *)(pCVar7 + 0x91),*(uint *)(pCVar7 + 0x95));
        }
        iVar3 = iVar3 + 1;
        pCVar7 = pCVar7 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pCVar2[0x9a]);
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = IStack_4c.previous;
  return;
}

