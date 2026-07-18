
void __thiscall SAMPanelTy::DoneSAMPanel(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  SAMPanelTy *pSVar5;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SAMPanelTy *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    iVar3 = 7;
    *(undefined4 *)(pSStack_8 + 0x1b1) = 0;
    pSVar5 = pSStack_8 + 0x1b5;
    do {
      if (*(uint *)pSVar5 != 0) {
        FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)pSVar5);
        *(uint *)pSVar5 = 0;
      }
      pSVar5 = pSVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_008016ec = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_setamine_cpp_007c7798,0x38,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7798,0x38);
  return;
}

