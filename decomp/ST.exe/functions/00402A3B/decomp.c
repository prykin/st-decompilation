
void __thiscall
CPanelTy::PaintCostsXYSI
          (CPanelTy *this,int param_1,ushort param_2,ushort param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  CPanelTy *pCStack_8;
  
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  pCStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 == 0) {
    if ((param_2 != 0xffff) || (param_3 != 0xffff)) {
      ccFntTy::SetSurf(*(ccFntTy **)(pCStack_8 + 0x1b8),param_1,0,0x5c,0x50,0x3c,10);
      iVar8 = -1;
      iVar7 = -1;
      uVar6 = 5;
      iVar5 = -1;
      iVar3 = -1;
      puVar4 = (uint *)FUN_006b0140(0x36b3,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    }
    if (param_2 != 0xffff) {
      wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1ae4,param_2);
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1c4),param_1,0,0x7d,0x5a,0x18,0xf);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1c4),(uint *)(pCVar2 + 0x1e1),-3,-1,param_4 & 0xffff,
                     -1,-1);
    }
    if (param_3 != 0xffff) {
      wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1ae4,param_3);
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1c4),param_1,0,0x5f,0x5a,0x18,0xf);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1c4),(uint *)(pCVar2 + 0x1e1),-3,-1,param_5 & 0xffff,
                     -1,-1);
    }
    DAT_00858df8 = puStack_4c;
    return;
  }
  DAT_00858df8 = puStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xd9,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c1a4c,0xd9);
  return;
}

