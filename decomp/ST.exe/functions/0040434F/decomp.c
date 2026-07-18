
void __thiscall PausePanelTy::InitPausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PanelTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  uint *puVar6;
  void *unaff_ESI;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 auStack_48 [16];
  PanelTy *pPStack_8;
  
  uVar12 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pPStack_8 = (PanelTy *)this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar12);
  this_00 = pPStack_8;
  if (iVar2 == 0) {
    DAT_008016e0 = pPStack_8;
    iVar2 = DAT_00806730 + -0x1c;
    *(int *)(pPStack_8 + 0x3c) = iVar2;
    *(int *)(pPStack_8 + 0x174) = (*(int *)(pPStack_8 + 0x40) - iVar2) + DAT_00806730;
    puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)(this_00 + 0x17c) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    iVar2 = 1;
    piVar9 = (int *)0x0;
    pCVar4 = thunk_FUN_00571240(s_BKG_PAUSE_007c74d8,0);
    puVar5 = FUN_006f1ce0(1,pCVar4,piVar9,iVar2);
    *(ushort **)(this_00 + 0x180) = puVar5;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0,0,'\x01',(byte *)puVar5);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x17c),*(int *)(this_00 + 0x68),0,0x52,2,0xd1,0xc);
    iVar11 = -1;
    iVar10 = -1;
    uVar8 = 0;
    iVar7 = -1;
    iVar2 = -2;
    puVar6 = (uint *)FUN_006b0140(0x2716,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x17c),puVar6,iVar2,iVar7,uVar8,iVar10,iVar11);
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar8 = PanelTy::CreateBut(this_00,0,1,0x115,0x8b,1,0,1,pCVar4,0xbfff,0xc000,0,0,0,(char *)0x0,1
                              );
    *(undefined4 *)(this_00 + 0x184) = uVar8;
    DAT_00858df8 = (undefined1 *)uVar12;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar12;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_pause_cpp_007c7490,0x28,0,iVar2,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7490,0x28);
  return;
}

