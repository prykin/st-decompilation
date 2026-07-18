
void __thiscall CPanelTy::PaintNameRes(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT UVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  CPanelTy *pCStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pCStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_005276e0(pCStack_8[0xc31],(byte)pCStack_8[0xc32]);
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x29a),uVar4);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),param_1 + 5,0x65,'\x01',pbVar5);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,param_1 + 2,0x52,0xb2,
                     10);
    iVar12 = -1;
    iVar11 = -1;
    uVar10 = 0;
    iVar9 = -1;
    iVar3 = -2;
    pHVar8 = DAT_00807618;
    UVar6 = thunk_FUN_00528060(pCVar2[0xc31],(char)pCVar2[0xc32]);
    puVar7 = (uint *)FUN_006b0140(UVar6,pHVar8);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar7,iVar3,iVar9,uVar10,iVar11,iVar12);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x76,0,iVar3,&DAT_007a4ccc);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c2700,0x76);
  return;
}

