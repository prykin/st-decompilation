
void __thiscall HelpPanelTy::ShiftControls(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpPanelTy *pHVar5;
  HelpPanelTy *pHVar6;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  HelpPanelTy *pHStack_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pHVar6 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pHVar6 = 0;
      pHVar6 = pHVar6 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    pHStack_8 = this;
    iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    pHVar6 = pHStack_8;
    if (iVar4 == 0) {
      if (*(int *)(pHStack_8 + 0x17c) != 0) {
        FUN_006e6080(pHStack_8,2,*(int *)(pHStack_8 + 0x17c),(undefined4 *)(pHStack_8 + 0x18));
      }
      pHVar5 = pHVar6 + 0x180;
      iVar4 = 7;
      do {
        if (*(int *)pHVar5 != 0) {
          FUN_006e6080(pHVar6,2,*(int *)pHVar5,(undefined4 *)(pHVar6 + 0x18));
        }
        pHVar5 = pHVar5 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(int *)(pHVar6 + 0x19c) != 0) {
        FUN_006e6080(pHVar6,2,*(int *)(pHVar6 + 0x19c),(undefined4 *)(pHVar6 + 0x18));
        pHVar6 = pHVar6 + 0x18;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pHVar6 = 0;
          pHVar6 = pHVar6 + 4;
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xf2,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0xf2);
  }
  return;
}

