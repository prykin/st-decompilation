
void __thiscall BehPanelTy::DoneBehPanel(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *pBVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  BehPanelTy *pBStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pBStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pBVar2 = pBStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pBStack_8 + 0x1be) != 0) {
      FUN_006e56b0(*(void **)(pBStack_8 + 0xc),*(uint *)(pBStack_8 + 0x1be));
    }
    *(undefined4 *)(pBVar2 + 0x1be) = 0;
    if (*(uint *)(pBVar2 + 0x1c2) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1c2));
    }
    *(undefined4 *)(pBVar2 + 0x1c2) = 0;
    if (*(uint *)(pBVar2 + 0x1c6) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1c6));
    }
    *(undefined4 *)(pBVar2 + 0x1c6) = 0;
    if (*(uint *)(pBVar2 + 0x1ca) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1ca));
    }
    *(undefined4 *)(pBVar2 + 0x1ca) = 0;
    *(undefined4 *)(pBVar2 + 0x2b8) = 0;
    DAT_00801678 = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0x77,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c1694,0x77);
  return;
}

