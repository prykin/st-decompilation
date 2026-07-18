
void __thiscall ProdPanelTy::ShiftControls(ProdPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar6;
  ProdPanelTy *pPVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  ProdPanelTy *pPStack_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pPVar6 = this + 0x18;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pPVar6 = 0;
      pPVar6 = pPVar6 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    pPStack_8 = this;
    iVar5 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    pPVar6 = pPStack_8;
    if (iVar5 == 0) {
      if (*(int *)(pPStack_8 + 0x180) != 0) {
        FUN_006e6080(pPStack_8,2,*(int *)(pPStack_8 + 0x180),(undefined4 *)(pPStack_8 + 0x18));
      }
      if (*(int *)(pPVar6 + 0x19d) != 0) {
        FUN_006e6080(pPVar6,2,*(int *)(pPVar6 + 0x19d),(undefined4 *)(pPVar6 + 0x18));
      }
      pPVar7 = pPVar6 + 0x1a1;
      iVar5 = 5;
      do {
        if (*(int *)pPVar7 != 0) {
          FUN_006e6080(pPVar6,2,*(int *)pPVar7,(undefined4 *)(pPVar6 + 0x18));
        }
        pPVar7 = pPVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
        uVar3 = 0x56;
      }
      *(undefined4 *)(pPVar6 + 0x28) = uVar3;
      if (*(int *)(pPVar6 + 0x19d) != 0) {
        FUN_006e6080(pPVar6,2,*(int *)(pPVar6 + 0x19d),(undefined4 *)(pPVar6 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff,0,iVar5,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c7870,0x1ff);
  }
  return;
}

