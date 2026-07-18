
undefined4 __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  CPanelTy *pCStack_8;
  
  if (param_1 == *(int *)(this + 0x130)) {
    return 0;
  }
  *(int *)(this + 0x130) = param_1;
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pCStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_8;
  if (iVar2 == 0) {
    ShiftControls(pCStack_8,1,param_1);
    ShiftControls(this_00,0,param_1);
    pCVar5 = this_00 + 0x9a4;
    iVar2 = 7;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006e6080(this_00,2,*(int *)pCVar5,(undefined4 *)(this_00 + 0x18));
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0x9c0;
    iVar2 = 2;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006e6080(this_00,2,*(int *)pCVar5,(undefined4 *)(this_00 + 0x18));
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x42b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c1bd8,0x42b);
  return 1;
}

