
void __thiscall HelpPanelTy::PutToSHlp(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  HelpPanelTy HStack_14;
  undefined4 uStack_13;
  undefined4 uStack_f;
  HelpPanelTy *pHStack_8;
  
  HStack_14 = this[0x1a1];
  uStack_13 = *(undefined4 *)(this + 0x1a3);
  uStack_f = *(undefined4 *)(this + 0x1a7);
  if (*(int *)(this + 0x1cb) != 0) {
    uStack_58 = DAT_00858df8;
    DAT_00858df8 = &uStack_58;
    pHStack_8 = this;
    iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
    pHVar2 = pHStack_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)(pHStack_8 + 0x1cf);
      while (-1 < iVar3) {
        iVar4 = *(int *)(*(int *)(pHVar2 + 0x1cb) + 0xc);
        if (iVar4 + -1 <= iVar3) break;
        FUN_006b0c70(*(int *)(pHVar2 + 0x1cb),iVar4 - 1);
        iVar3 = *(int *)(pHVar2 + 0x1cf);
      }
      iVar3 = *(int *)(pHVar2 + 0x1cf);
      *(uint *)(pHVar2 + 0x1cf) = iVar3 + 1U;
      FUN_006ae140(*(uint **)(pHVar2 + 0x1cb),iVar3 + 1U,(undefined4 *)&HStack_14);
      DAT_00858df8 = (undefined4 *)uStack_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x27c,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x27c);
  }
  return;
}

