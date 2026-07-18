
void __thiscall PausePanelTy::SwitchPausePanel(PausePanelTy *this,int param_1)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  PausePanelTy *pPStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pPStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_pause_cpp_007c7490,0x54,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c7490,0x54);
    return;
  }
  switch(*(undefined2 *)(pPStack_8 + 0x172)) {
  case 1:
    if (param_1 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    ShiftControls(pPStack_8,0);
switchD_005395f3_caseD_3:
    if (param_1 == 0) {
      *(undefined2 *)(pPVar2 + 0x172) = 4;
      iVar3 = 0xb0;
LAB_0053962f:
      thunk_FUN_005252c0(iVar3);
    }
switchD_005395f3_default:
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  case 2:
  case 4:
    if (param_1 == 0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    *(undefined2 *)(pPStack_8 + 0x172) = 3;
    iVar3 = 0xaf;
    goto LAB_0053962f;
  case 3:
    goto switchD_005395f3_caseD_3;
  default:
    goto switchD_005395f3_default;
  }
}

