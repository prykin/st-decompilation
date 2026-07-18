
void __thiscall CPanelTy::PaintIDSObj(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  void *unaff_ESI;
  UINT UVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 auStack_48 [16];
  CPanelTy *pCStack_8;
  
  uVar10 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pCStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar10);
  pCVar2 = pCStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar10;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c2700,0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    thunk_FUN_00540760(*(undefined4 **)(pCStack_8 + 0x194),0xf,0x8d,'\x01',
                       *(byte **)(pCStack_8 + 0x9f1));
    if (*(int *)(pCVar2 + 0xc4d) == 0) goto LAB_00504f81;
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,0x10,0x8e,
                     *(int *)(*(int *)(pCVar2 + 0x9f1) + 4),0xb);
    UVar6 = *(UINT *)(pCVar2 + 0xc4d);
  }
  else {
    thunk_FUN_00540760(*(undefined4 **)(pCStack_8 + 0x194),4,0x89,'\x01',
                       *(byte **)(pCStack_8 + 0x9f1));
    if (*(int *)(pCVar2 + 0xc4d) == 0) goto LAB_00504f81;
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,6,0x8b,200,0xb);
    UVar6 = *(UINT *)(pCVar2 + 0xc4d);
  }
  iVar9 = -1;
  iVar8 = -1;
  uVar7 = 0;
  iVar5 = -1;
  iVar3 = -2;
  puVar4 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
  ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar7,iVar8,iVar9);
LAB_00504f81:
  if (-1 < (int)*(uint *)(pCVar2 + 0x15c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(pCVar2 + 0x15c),0xffffffff,*(uint *)(pCVar2 + 0x50),
                 *(uint *)(pCVar2 + 0xa8));
  }
  DAT_00858df8 = (undefined1 *)uVar10;
  return;
}

