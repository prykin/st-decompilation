
void __thiscall PanelTy::DonePanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PanelTy *pPVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  PanelTy *pPStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pPStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_8;
  if (iVar3 == 0) {
    pPVar5 = pPStack_8 + 0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pPVar5 = 0;
      pPVar5 = pPVar5 + 4;
    }
    *(undefined4 *)(pPStack_8 + 0x28) = 0x14;
    *(undefined4 *)(pPStack_8 + 0x2c) = *(undefined4 *)(pPStack_8 + 8);
    FUN_006e6000(pPStack_8,3,1,(undefined4 *)(pPStack_8 + 0x18));
    if (-1 < (int)*(uint *)(pPVar2 + 0x60)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pPVar2 + 0x60));
    }
    *(undefined4 *)(pPVar2 + 0x60) = 0xffffffff;
    if (*(int *)(pPVar2 + 0x68) != 0) {
      FUN_006ab060((undefined4 *)(pPVar2 + 0x68));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x3c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7390,0x3c);
  return;
}

