
void __thiscall AiTactClassTy::ClaimSave(AiTactClassTy *this)

{
  AiTactClassTy *pAVar1;
  code *pcVar2;
  AiTactClassTy *pAVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  AiTactClassTy *pAStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pAStack_8 = this;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pAVar3 = pAStack_8;
  if (iVar4 == 0) {
    pAVar1 = pAStack_8 + 0x130;
    if (*(int *)(pAStack_8 + 0x130) != 0) {
      FUN_006ab060((undefined4 *)pAVar1);
    }
    if (*(uint **)(pAVar3 + 0xbd) != (uint *)0x0) {
      uVar5 = FUN_006b0020(*(uint **)(pAVar3 + 0xbd),&iStack_c);
      *(undefined4 *)pAVar1 = uVar5;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x16d,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7d56e0,0x16e);
  return;
}

