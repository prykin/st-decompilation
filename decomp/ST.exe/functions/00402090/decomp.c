
int __thiscall AiPlrClassTy::CloseAllTact(AiPlrClassTy *this)

{
  uint uVar1;
  code *pcVar2;
  AiPlrClassTy *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  AiTactClassTy *this_00;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 uStack_80;
  undefined4 auStack_7c [16];
  uint auStack_3c [13];
  AiPlrClassTy *pAStack_8;
  
  uStack_80 = DAT_00858df8;
  DAT_00858df8 = &uStack_80;
  pAStack_8 = this;
  iVar4 = __setjmp3(auStack_7c,0,unaff_EDI,unaff_ESI);
  pAVar3 = pAStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_80;
    iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10e,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    FUN_006a5e40(iVar4,0,0x7d2e4c,0x10f);
    return iVar4;
  }
  if (*(int *)(pAStack_8 + 0x695) == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2e4c,0xfd);
  }
  puVar7 = auStack_3c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  auStack_3c[0] = 0x71;
  uVar1 = *(uint *)(*(int *)(pAVar3 + 0x695) + 0xc);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      DAT_00858df8 = (undefined4 *)uStack_80;
      return 0;
    }
    iVar4 = *(int *)(pAVar3 + 0x695);
    if (((iVar4 == 0) || ((int)uVar1 < 0)) || ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar1)) {
LAB_00679519:
      this_00 = (AiTactClassTy *)0x0;
    }
    else {
      if (uVar1 < *(uint *)(iVar4 + 0xc)) {
        puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar1 + *(int *)(iVar4 + 0x1c));
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5[1] == 0) goto LAB_00679519;
      this_00 = (AiTactClassTy *)*puVar5;
    }
    if (this_00 != (AiTactClassTy *)0x0) {
      if (&stack0x00000000 != (undefined1 *)0x3c) {
        AiTactClassTy::GetAiMess(this_00,auStack_3c);
      }
      thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(this_00 + 8));
      FUN_006b0c70(*(int *)(pAVar3 + 0x695),uVar1);
    }
  } while( true );
}

