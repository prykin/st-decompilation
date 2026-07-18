
void __thiscall PausePanelTy::DonePausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  PausePanelTy *pPStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pPStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  pPVar2 = pPStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pPStack_8 + 0x184) != 0) {
      FUN_006e56b0(*(void **)(pPStack_8 + 0xc),*(uint *)(pPStack_8 + 0x184));
    }
    *(undefined4 *)(pPVar2 + 0x184) = 0;
    DAT_008016e0 = 0;
    if (*(uint **)(pPVar2 + 0x17c) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pPVar2 + 0x17c));
      *(undefined4 *)(pPVar2 + 0x17c) = 0;
    }
    if (*(int *)(pPVar2 + 0x180) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pPVar2 + 0x180));
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_pause_cpp_007c7490,0x3b,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7490,0x3b);
  return;
}

