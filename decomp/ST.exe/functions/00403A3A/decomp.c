
void __thiscall OptPanelTy::PreInitOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  OptPanelTy *pOStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pOStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  pOVar2 = pOStack_8;
  if (iVar3 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(pOStack_8 + 0x4c));
    *(int *)(pOVar2 + 0x44) = *(int *)(pOVar2 + 0x50) - *(int *)(pOVar2 + 0x48);
    *(int *)(pOVar2 + 0x174) = *(int *)(pOVar2 + 0x48) + *(int *)(pOVar2 + 0x50);
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x37,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c70a0,0x37);
  return;
}

